#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("1.Addition\n 2.Subtract\n 3.Multiply\n 4.Divide\n 5.Modulus\n");
    printf("Enter your choice:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        c=a+b;
        break;
    case 2:
        c=a-b;
        break;
    case 3:
        c=a*b;
        break;
    case 4:
        c=a/b;
        break;
    case 5:
        c=a%b;
        break;
    default:
        printf("Invalid Input");
    }
    printf("%d",c);
    getch();
    return 0;
}
