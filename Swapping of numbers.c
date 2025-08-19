#include<stdio.h>

int main()
{
    int g,h;
    printf("Value of g: ");
    scanf("%d",&g);

    printf("\nValue of h: ");
    scanf("%d",&h);

    g=g+h;
    h=g-h;
    g=g-h;

    printf("After swapping value of g: %d\n",g);
    printf("After swapping value of h: %d\n",h);

}
