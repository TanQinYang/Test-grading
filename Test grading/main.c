#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
printf("Pls enter the grade:");
scanf("%d",&a);
/*if (a>=0&&a<60)
    printf("fail");
else if (a>=60&&a<70)
    printf("pass");
else if (a>=70&&a<80)
    printf("satisfied");
else if (a>=80&&a<90)
    printf("good");
else if (a>=90&&a<=100)
    printf("excellent");
else
    printf("invalid input");
*/
switch (a)
{
    case 1:printf("fail");break;
    case 2:printf("pass");break;
    case 3:printf("satisfied");break;
    case 4:printf("good");break;
    case 5:printf("perfect");break;
    default:printf("invailid");
}
    return 0;
}
