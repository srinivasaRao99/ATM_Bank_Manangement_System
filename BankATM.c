#include <stdio.h>
#include <conio.h>
#define clrscr() system("cls")

void design();

int main(){
    clrscr();
    design();
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