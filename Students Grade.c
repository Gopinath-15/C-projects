#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3,m4,m5,tot;
    float avg;
    printf("Enter marks of 5 subjects: \n");
    scanf("%d",&m1);
    scanf("%d",&m2);
    scanf("%d",&m3);
    scanf("%d",&m4);
    scanf("%d",&m5);
    avg=(m1+m2+m3+m4+m5)/5;
    tot=(m1+m2+m3+m4+m5);

    printf("\nTotal marks: %d",tot);
    printf("\nAverage    : %0.2f",avg);
    if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35)
    {

        printf("\n Pass\n");

        if(avg>=90 && avg<=100)
        {
            printf("A grade");
        }
        else if(avg>=80 && avg<=90)
        {
            printf("B grade");
        }
        else if(avg>=70 && avg<=80)
        {
            printf("C grade");
        }
        else if(avg>=60 && avg<=70)
        {
            printf("D grade");
        }
        else
        {
            printf("Fail");
        }
    }
    else
    {
        printf("\n Fail");
    }
    return 0;
}
