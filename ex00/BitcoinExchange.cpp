/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <pmihangy@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:26:40 by pmihangy          #+#    #+#             */
/*   Updated: 2025/06/17 11:51:55 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Chaque ligne doit utiliser le format : "date | valeur"
// Une date valide sera toujours au format "Annee-Mois-Jour" (YYYY-MM-DD)
// Une valeur valide doit etre un nombre a virgule flottante (float), ou un entier positif, compris entre 0 et 1000

void	BitcoinExchange::printBitcoinValues(string filename, std::map<string, double> data)
{
	std::ifstream	inputFile;
	inputFile.open(filename);
	if (!dataFile.is_open())
	{
		std::cerr << "Cannot open "  << filename << " file" << std::endl;
		return (1);
	}
	string	line;
	int i = 0;
	while (std::getline(inputFile, line))
	{
		size_t pos = line.find("|");
		if (pos == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			i = 69;
			continue;
		}
		if (i == 0 && line != "date | value")
		{
			std::cout << "Error: bad input" << std::endl;
			i = 69;
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
