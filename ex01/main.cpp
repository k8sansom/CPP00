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