#include <stdio.h>

int main()
{
    int pin = 1234;
    int entered_pin;
    int choice;
    float balance = 10000.00;
    float amount;

    printf("===== WELCOME TO ATM =====\n");

    printf("Enter your PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin != pin)
    {
        printf("Incorrect PIN! Access Denied.\n");
        return 0;
    }

    printf("\nLogin Successful!\n");

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nAvailable Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance += amount;
                    printf("Amount Deposited Successfully!\n");
                    printf("Updated Balance: Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid Amount!\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient Balance!\n");
                }
                else
                {
                    balance -= amount;
                    printf("Please Collect Your Cash.\n");
                    printf("Remaining Balance: Rs. %.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank You for Using Our ATM!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while (choice != 4);

    return 0;
}
