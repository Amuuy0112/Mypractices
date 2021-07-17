#include <stdio.h>
int main(void)
{
    double math,jp;
    printf("plz input math score:");
    scanf("%d",&math);

    double gpa;
    double s,a,b,c;

    /*数学の成績判定*/
    if(math>=90)
    {
        s+=4;
    }
    else if (math>=80)
    {
        a+=3;
    }
    else if (math>=70)
    {
        b+=2;
    }
    else
    {
        c+=1;
    }
    


    double i=s+a+b+c;

    gpa=i;

    printf("%.2f",gpa);

    return 0;

}