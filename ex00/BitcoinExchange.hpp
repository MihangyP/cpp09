/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <pmihangy@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:24:01 by pmihangy          #+#    #+#             */
/*   Updated: 2025/06/16 10:14:01 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOIN_EXCHANGE_HPP
# define __BITCOIN_EXCHANGE_HPP

#include <iostream>

typedef std::string string;

class	BitcoinExchange {
	private:
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange(void);

		static void	printBitcoinValues(string filename);	
};

#endif // __BITCOIN_EXCHANGE_HPP
