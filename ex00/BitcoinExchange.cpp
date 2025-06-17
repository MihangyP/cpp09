/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <pmihangy@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:26:40 by pmihangy          #+#    #+#             */
/*   Updated: 2025/06/17 16:46:21 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Chaque ligne doit utiliser le format : "date | valeur"
// Une date valide sera toujours au format "Annee-Mois-Jour" (YYYY-MM-DD)
// Une valeur valide doit etre un nombre a virgule flottante (float), ou un entier positif, compris entre 0 et 1000

void	BitcoinExchange::printBitcoinValues(string filename, std::map<string, double> data)
{
	(void)data;
	std::ifstream	inputFile;
	inputFile.open(filename.c_str());
	if (!inputFile.is_open()) {
		throw std::runtime_error("Cannot open the file");
	}
	string	line;
	int i = 0;
	while (std::getline(inputFile, line)) {
		size_t pos = line.find("|");
		if (pos == std::string::npos) {
			std::cout << "Error: bad input => " << line << std::endl;
			i = 69;
			continue;
		}
		if (i == 0) {
			// TODO: check if line == "date | value"	
			//std::cout << "Error: bad input" << std::endl;
			i = 69;
		} else  if (i != 0) {
			// Check if the data doesn't exist
			double result = std::atof(line.substr(pos + 2).c_str());
			string date = line.substr(0, pos - 1);
			double a = result * data[date];
			std::cout << date << " => " << result << " = " << a << std::endl;
		}
	}
	inputFile.close();
}

BitcoinExchange::BitcoinExchange(void) { }

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	(void)other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	(void)other;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void) { }
