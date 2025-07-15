#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch,net=0,qty,re;
menu:
    printf("\tMENU CARD");
    printf("\n\t\t1. COFFEE");//15
    printf("\n\t\t2. TEA");//10
    printf("\n\t\t3. MILK SHAKE");//50
    printf("\n\t\t4. JUICE");//25

    printf("\nEnter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {

    case 1:
        printf("\nYou have selected COFFEE");
        printf("\nEnter the quantity: ");
        scanf("%d",&qty);
        net=net+(qty*15);
        break;

    case 2:
        printf("\nYou have selected TEA");
        printf("\nEnter the quantity: ");
        scanf("%d",&qty);
        net=net+(qty*10);
        break;

    case 3:
        printf("\nYou have selected MILK SHAKE");
        printf("\nEnter the quantity: ");
        scanf("%d",&qty);
        net=net+(qty*50);
        break;

    case 4:
        printf("\nYou have selected JUICE");
        printf("\nEnter the quantity: ");
        scanf("%d",&qty);
        net=net+(qty*25);
        break;

    default:
        printf("\nInvalid choice");
        break;

    }

    printf("\nDo you want to continue then press 1: ");
    scanf("%d",&re);
    if(re==1)
    {
        goto menu;
    }
    printf("\nTotal cost: %d",net);
    return 0;
}
