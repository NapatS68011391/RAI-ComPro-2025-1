#include<stdio.h>
int main()
{
    int option;
    float d, w, b;
    b = 0;
    while (1){

    printf("====== ATM MENU ======");
    printf("Check Balance\n");
    printf("Deposit Money\n");
    printf("Withdraw Money\n");
    printf("Exit\n");
    printf("Choose an option: ");
    scanf("%d", &option);
    switch (option){
        case 1:
            printf("Current Balance: %.2ff \n", b);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &d);
            b = b + d;
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &w);
            b = b - w;
            printf("Withdrawal Sucessful.\n");
            break;
        case 4:
            printf("Thank you for using the ATM.\n");
            return 0;
            break;
    }
}
    
}
