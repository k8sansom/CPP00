/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:16:09 by ksansom           #+#    #+#             */
/*   Updated: 2024/03/19 15:58:54 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void){
    PhoneBook pbook;
    std::string input= "";
    while (input.compare("EXIT")) {
		std::cout << "What would you like to do?> " << std::flush;
		std::cin >> input;
		if (input.compare("ADD") == 0) {
 			if (pbook.add() != 0)
				return 1;
		}
    	else if(input.compare("SEARCH") == 0) {
			if (pbook.search() != 0)
				return 1;
		}
		else if (std::cin.eof())
			return 1;
    }
    return 0;
}