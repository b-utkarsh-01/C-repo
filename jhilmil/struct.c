#include <stdio.h>
#include <conio.h>

struct book{
    char name[10000];
    float price;
    int page;
};

 
int main() {
    printf("Enther name of the book\n");
    struct book kTheLastWorrior;
    scanf("%[^\n]",kTheLastWorrior.name);
    printf("enter the price of the book\n");
    scanf("%f",&kTheLastWorrior.price);
    printf("Enter number of pages in the book:\n ");
    scanf("%d", &kTheLastWorrior.page);

    getch();
    return(0);
}