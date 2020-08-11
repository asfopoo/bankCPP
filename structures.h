typedef enum {dep, with} TransactionType;

struct Transaction {
    TransactionType transactionType;
    double amount;
    double balance;
    int date;
};