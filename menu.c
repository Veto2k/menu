#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("MENU");
    printf("1:Pizza ,Rs239 \n");
    printf("2:Burger ,Rs129 \n");
    printf("3:Pasta ,Rs179 \n");
    printf("4:French Fries ,Rs99 \n");
    printf("5:Sandwich ,Rs149 \n");
    printf("ENTER YOUR CHOICE \n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("Your item is pizza and your bill is Rs 239");
            break;
        case 2:
            printf("Your item is burger and your bill is RS 129");
            break;
        case 3:
            printf("Your item is pasta and your bill is Rs 179");
            break;
        case 4:
            printf("Your item is French Fries and your bill is Rs 99");
            break;
        case 5:
            printf("Your item is Sandwich and your bill is Rs 149");
            break;
    }

}
