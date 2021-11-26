#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\t Swaping two variables with third variables\n");
    int a,b,c;
    printf("Enter A number = ");
    scanf("%d",&a);
    printf("Enter B number = ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The value of A = %d\n",a);
    printf("The value of B = %d\n",b);
    return 0;

}