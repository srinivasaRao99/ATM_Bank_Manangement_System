#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define clrscr() system("cls")

struct ATM{
    int acno;
    char name[50];
    int amount;
};

struct ATM A1;

void mainMenu();
void createAccount();
void depoist();
void withdrawal();
void balance();
void displayAccount();


int main(){
    clrscr();
    int count = 0;
    char ch1, ch2, ch3, ch4;

    pin: printf("Enter your pin: ");
    
    ch1 = getch();  printf("*");
    ch2 = getch();  printf("*");
    ch3 = getch();  printf("*");
    ch4 = getch();  printf("*");

    if (ch1 == 'd' && ch2 == 'a' && ch3 == 't' && ch4 == 'a'){ //dummy pin for development : data
        
        int choice;

        do{
            mainMenu();
            printf("\n Enter your choice: ");
            scanf("%d", &choice);

            switch(choice){
                case 1  : createAccount();  break;
                case 2  : depoist();    break;
                case 3  : withdrawal();      break;
                case 4  : balance();    break;
                case 5  : displayAccount();break;        //exit(0);
                default : printf("Invalid Choice \n");
            }
        }while(choice != 5);

    }else{
        printf("\nInvaild Pin\n"); 
        count++;
        if(count >= 3){exit(0);}else{goto pin;}
    }

    return 0;
}

void design (){
    printf("\n------ ATM Bank Management System -----");
    printf("\n\t 1 Create Account");
    printf("\n\t 2 Deposit Account");
    printf("\n\t 3 Withdrawal Account");
    printf("\n\t 4 Check Balance");
    printf("\n\t 5 Exit");
    printf("\n-------------------------------------");
}

void createAccount(){
    printf("Enter Account Number: ");   scanf("%d", &A1.acno);
    printf("Enter Your Name: ");        scanf("%s", &A1.name);
    printf("Enter Amount: ");           scanf("%d", &A1.amount);
}

void depoist(){
    int amt;
    printf("Enter an amount for deposit: ");  scanf("%d", &amt);

    if (amt < 0)
        printf("\nInvaild Amount\n");
    else{
        A1.amount = A1.amount + amt;
        printf("Your Total Amount: %d", A1.amount);
    }
}

void withdrawal(){
    int amt;
    printf("Enter an amount for withdrawl: ");  scanf("%d", &amt);

    if (amt < 0){
        printf("\nInvaild Amount\n");
    } else if (amt > A1.amount) {
        printf("\nInsufficent Balance\n");
    } else{
        A1.amount = A1.amount - amt;
        printf("\nYour Total Amount: %d", A1.amount);
    }
}

void balance(){
    printf("\nBalance : %d\n", A1.amount);
}