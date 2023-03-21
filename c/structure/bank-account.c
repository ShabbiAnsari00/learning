#include <stdio.h>
#include <string.h>

typedef struct bank_account
{
    int acno;
    char depositor_name[50];
    char actype[3];
    float balance;
} BANK_ACCOUNT;

BANK_ACCOUNT ac;

void init();
void deposit();
void withdraw();
void display();
void balance();

int main(int argc, char const *argv[])
{
    int ch;
    init();
    do
    {
        printf("MAIN MENU\n\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Display Account Info\n");
        printf("4. Display Balance\n");
        printf("Enter your choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\nBye!\n\n");
            return 0;
        case 1:
            deposit();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            display();
            break;
        case 4:
            balance();
            break;
        default:
            printf("\nInvalid option!\n\n");
        }
    } while (1);
}

void init()
{
    ac.acno = 12345;
    strcpy(ac.depositor_name, "Shabbi Ansari");
    strcpy(ac.actype, "SA");
    ac.balance = 5000.00f;
    printf("\nAccount Initialized!\n\n");
}

void deposit()
{
    float amount;
    printf("\nDeposit Module!\n\n");
    printf("Enter amount: ");
    scanf("%f", &amount);
    ac.balance = ac.balance + amount;
    printf("\nAmount deposited!\n\n");
}

void withdraw()
{
    float amount;
    printf("\nWithdrawal Module!\n\n");
    printf("Enter amount: ");
    scanf("%f", &amount);
    if (amount <= ac.balance)
    {
        ac.balance = ac.balance - amount;
        printf("\nAmount withdrawn!\n\n");
    }
    else
    {
        printf("\nTransaction declined - Insufficient balance!\n\n");
    }
}

void display()
{
    printf("\nAccount Details:\n\n");
    printf("Account Number: %d\n", ac.acno);
    printf("Depositor Name: %s\n", ac.depositor_name);
    printf("Account Type: %s\n", ac.actype);
    printf("Balance: %1.2f\n\n", ac.balance);
}

void balance()
{
    printf("\nAccount Balance: %1.2f\n\n", ac.balance);
}