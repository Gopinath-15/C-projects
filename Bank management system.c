#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

struct Account accounts[MAX_ACCOUNTS];
int accountCount = 0;

void createAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        printf("Cannot create more accounts. Bank is full!\n");
        return;
    }

    struct Account newAccount;
    newAccount.accountNumber = 1000 + accountCount + 1;

    printf("Enter customer name: ");
    scanf(" %[^\n]", newAccount.name);
    printf("Enter initial deposit amount: ");
    scanf("%f", &newAccount.balance);

    if (newAccount.balance < 0) {
        printf("Initial deposit cannot be negative!\n");
        return;
    }

    accounts[accountCount] = newAccount;
    accountCount++;
    printf("Account created successfully! Account Number: %d\n", newAccount.accountNumber);
}

void deposit() {
    int accNum;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNum);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Deposit amount must be positive!\n");
                return;
            }
            accounts[i].balance += amount;
            printf("Deposit successful! New balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}

void withdraw() {
    int accNum;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNum);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Withdrawal amount must be positive!\n");
                return;
            }
            if (amount > accounts[i].balance) {
                printf("Insufficient balance!\n");
                return;
            }
            accounts[i].balance -= amount;
            printf("Withdrawal successful! New balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}

void checkBalance() {
    int accNum;
    printf("Enter account number: ");
    scanf("%d", &accNum);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("Account Holder: %s\n", accounts[i].name);
            printf("Current Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}

void displayAllAccounts() {
    if (accountCount == 0) {
        printf("No accounts found!\n");
        return;
    }
    printf("\nAll Accounts:\n");
    printf("Acc. No.\tName\t\tBalance\n");
    printf("--------------------------------\n");
    for (int i = 0; i < accountCount; i++) {
        printf("%d\t\t%s\t\t%.2f\n", accounts[i].accountNumber, accounts[i].name, accounts[i].balance);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n=== Bank Management System ===\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                displayAllAccounts();
                break;
            case 6:
                printf("Thank you for using the Bank Management System!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
