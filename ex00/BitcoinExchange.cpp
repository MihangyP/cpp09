/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <pmihangy@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:26:40 by pmihangy          #+#    #+#             */
/*   Updated: 2025/06/16 10:14:49 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	BitcoinExchange::printBitcoinValues(string filename)
{
	std::cout << filename << std::endl;
}

BitcoinExchange::BitcoinExchange(void)
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	(void)other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	(void)other;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{

}
