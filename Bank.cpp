#include "Bank.h"
#include "structures.h"

Bank::Bank() {
    balance = 0;

}
Bank::~Bank() {
}


void Bank::deposit(double x, struct Transaction *t, int *d, int *tt) {
    balance += x;
    *d += 1;
    *tt += 1;
    t->date = *d;
    t->amount = x;
    t->transactionType = dep;
    t->balance = balanceTotal();
}
void Bank::withdraw(double x, struct Transaction *t, int *d, int *tt) {
    balance -= x;
    *d += 1;
    *tt += 1;
    t->date = *d;
    t->amount = x;
    t->transactionType = with;
    t->balance = balanceTotal();
}
double Bank::balanceTotal() {
    return balance;
}
