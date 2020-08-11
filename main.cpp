#include <iostream>
#include "Bank.h"
#include "structures.h"
#include <vector>

int main()
{

    struct Transaction transaction;
    std::vector<struct Transaction> transactionList;
    int choice = 0;
    int date = 0;
    int transactionsTotal;
    Bank b;


    while (choice != 9) {
        std::cout << "what would you like to 1=make deposit , 2=make a withdraw, 3=chek your balance, 4=show transaction history 9= quit"
                  << std::endl;
        std::cin >> choice;

        if (choice == 1) {
            double deposit = 0;
            std::cout << "Enter Deposit amount" << std::endl;
            std::cin >> deposit;
            b.deposit(deposit, &transaction, &date, &transactionsTotal);
            transactionList.push_back(transaction);
            //std::cout << "struct contains: "  << transaction.date << "  " << transaction.transactionType << "  " << transaction.balance << std::endl;

        }
        if (choice == 2) {
            double withdraw = 0;
            std::cout << "Enter Withdraw amount" << std::endl;
            std::cin >> withdraw;
            b.withdraw(withdraw, &transaction, &date, &transactionsTotal);
            transactionList.push_back(transaction);
        }
        if (choice == 3) {
            std::cout << b.balanceTotal() << std::endl;
        }
        if (choice == 4) {
            std::cout << b.balanceTotal() << std::endl;
            for(int i = 0; i< transactionList.size(); i++){
                std::cout << "date:     " << transactionList[i].date << std::endl;
                std::cout << "type:     " << transactionList[i].transactionType << std::endl;
                std::cout << "amount:   " << transactionList[i].amount << std::endl;
                std::cout << "Balance:  " << transactionList[i].balance << std::endl;
                std::cout << "-------------------------------------" << std::endl;
            }
        }

        if(choice == 9){
            break;
        }
    }
    return 1;
}