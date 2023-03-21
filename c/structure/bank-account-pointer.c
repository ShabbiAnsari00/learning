#include <stdio.h>
#include <string.h>

typedef struct bank_account
{
    int acno;
    char depositor_name[50];
    char actype[3];
    float balance;
} BANK_ACCOUNT;

void init(BANK_ACCOUNT *ac);
void deposit(BANK_ACCOUNT *ac);
void withdraw(BANK_ACCOUNT *ac);
void display(BANK_ACCOUNT *ac);
void balance(BANK_ACCOUNT *ac);

int main(int argc, char const *argv[])
{
    BANK_ACCOUNT ac;
    int ch;
    init(&ac);
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
            deposit(&ac);
            break;
        case 2:
            withdraw(&ac);
            break;
        case 3:
            display(&ac);
            break;
        case 4:
            balance(&ac);
            break;
        default:
            printf("\nInvalid option!\n\n");
        }
    } while (1);
}

void init(BANK_ACCOUNT *ac)
{
    printf("\nThe size of ac is %ld bytes.\n\n", sizeof(ac));
    ac->acno = 12345;
    strcpy(ac->depositor_name, "Shabbi Ansari");
    strcpy(ac->actype, "SA");
    ac->balance = 5000.00f;
    printf("\nAccount Initialized!\n\n");
}

void deposit(BANK_ACCOUNT *ac)
{
    float amount;
    printf("\nDeposit Module!\n\n");
    printf("Enter amount: ");
    scanf("%f", &amount);
    ac->balance = ac->balance + amount;
    printf("\nAmount deposited!\n\n");
}

void withdraw(BANK_ACCOUNT *ac)
{
    float amount;
    printf("\nWithdrawal Module!\n\n");
    printf("Enter amount: ");
    scanf("%f", &amount);
    if (amount <= ac->balance)
    {
        ac->balance = ac->balance - amount;
        printf("\nAmount withdrawn!\n\n");
    }
    else
    {
        printf("\nTransaction declined - Insufficient balance!\n\n");
    }
}

void display(BANK_ACCOUNT *ac)
{
    printf("\nAccount Details:\n\n");
    printf("Account Number: %d\n", ac->acno);
    printf("Depositor Name: %s\n", ac->depositor_name);
    printf("Account Type: %s\n", ac->actype);
    printf("Balance: %1.2f\n\n", ac->balance);
}

void balance(BANK_ACCOUNT *ac)
{
    printf("\nAccount Balance: %1.2f\n\n", ac->balance);
}