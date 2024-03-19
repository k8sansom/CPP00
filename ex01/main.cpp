/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:16:09 by ksansom           #+#    #+#             */
/*   Updated: 2024/03/19 10:16:10 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void){
    PhoneBook pbook;
    std::string input= "";
    while (input.compare("EXIT")){
		std::cout << "What would you like to do?> ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
			pbook.add();
        else if(input.compare("SEARCH") == 0)
			pbook.search();
    }
    return 0;
}