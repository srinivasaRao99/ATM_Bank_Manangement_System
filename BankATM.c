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

void design();
void createacc();
void depoist();
void withd();
void balance();

int main(){
    clrscr();
    int count = 0;
    char ch1, ch2, ch3, ch4;

    pin: printf("Enter your pin: ");
    
    ch1 = getch();  printf("*");
    ch2 = getch();  printf("*");
    ch3 = getch();  printf("*");
    ch4 = getch();  printf("*");

    if (ch1 = 'd' && ch2 == 'a' && ch3 == 't' && ch4 == 'a'){ //dummy pin for development
        
        int choice;

        do{
            design();
            printf("\n Enter your choice: ");
            scanf("%d", &choice);

            switch(choice){
                case 1  : createacc();  break;
                case 2  : depoist();    break;
                case 3  : withd();      break;
                case 4  : balance();    break;
                case 5  : break;        //exit(0);
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

void createacc(){
    printf("Enter Account Number: ");   scanf("%d", &A1.acno);
    printf("Enter Your Name: ");        scanf("%s", &A1.name);
    printf("Enter Amount: ");           scanf("%d", &A1.amount);
}

void depoist(){
    printf("This is depoist fuction");
}

void withd(){
    printf("This is withdrawl fuction");
}

void balance(){
    printf("This is balance fuction");
}