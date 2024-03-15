#include "PhoneBook.hpp"

int main(void){
    PhoneBook pbook;
    std::string input= "";
    pbook.welcome();
    while (input.compare("EXIT")){
        if (input.compare("ADD") == 0)
             pbook.add();
        else if(input.compare("SEARCH") == 0){
            pbook.print_phonebook();
            pbook.search();
        }
        std::cout << "What would you like to do?> ";
        std::cin >> input;
    }
    return 0;
}