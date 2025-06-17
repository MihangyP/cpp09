/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <pmihangy@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:28:30 by pmihangy          #+#    #+#             */
/*   Updated: 2025/06/17 11:00:00 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./btc <database>" << std::endl;
		return (1);
	}
	std::map<string, double> data;
	std::ifstream	dataFile;
	dataFile.open("data.csv");
	if (!dataFile.is_open())
	{
		std::cerr << "Cannot open data.csv file" << std::endl;
		return (1);
	}
	string	line;
	int i = 0;
	while (std::getline(dataFile, line))
	{
		if (i != 0)
		{
			size_t	pos = line.find(','); 
			string date = line.substr(0, pos);
			double exchangeRateTmp = std::atof(line.substr(pos + 1).c_str());
			data.insert(std::make_pair(date, exchangeRateTmp));
		}
		++i;
	}
	dataFile.close();

	BitcoinExchange::printBitcoinValues(av[1], data);	
	return (0);
}
