class Bank
{
private:
    // Class Global variables
    double balance;


    // (Private) utility methods
public:
    Bank();
    ~Bank();

    // Public interface
    void deposit(double x, struct Transaction *t, int *date, int *transactionsTotal);
    void withdraw(double x, struct Transaction *t, int *date, int *transactionsTotal);
    double balanceTotal();
};
