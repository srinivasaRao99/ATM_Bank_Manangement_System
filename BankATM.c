#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define clrscr() system("cls")

void design();
void createacc();
void depoist();
void withd();
void balance();

int main(){
    clrscr();
    design();
    int choice;

    do{
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: createacc();break;
            case 2: depoist();break;
            case 3: withd();break;
            case 4: balance();break;
            case 5: exit(0);

    }while(choice != 5);

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
    printf("This is create function");
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