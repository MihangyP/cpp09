/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <pmihangy@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:28:30 by pmihangy          #+#    #+#             */
/*   Updated: 2025/06/17 10:23:06 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <map>

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

	std::map<string, double>::iterator it;
	for (it = data.begin(); it != data.end(); ++it)
		std::cout << it->first << " -> " << it->second << std::endl;

	(void)av;
	//BitcoinExchange::printBitcoinValues(av[1]);	
	return (0);
}
