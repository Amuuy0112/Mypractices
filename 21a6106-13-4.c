#include <stdio.h>

int days(int fnyear,int fnmonth,int leap)
{
    if(fnyear%400==0||fnyear%4==0&&fnyear%100!=0)
    {

        switch(fnmonth){
        case 1:case 3: case 5: case 7:
        case 8:case 10:case 12: leap=1;
        break;

        case 4:case 6:case 9:case 11:leap=2;
        break;

        case 2:leap=3; break;
        }
    }
    else
    {
        switch(fnmonth){
        case 1:case 3: case 5: case 7:
        case 8:case 10:case 12: leap=1;
        break;

        case 4:case 6:case 9:case 11:leap=2;
        break;

        case 2:leap=4; break;
        }
    }

    return leap;
}
int main(void)
{
    int year=0,month=0,leap=0,day=1,TL=0;

    printf("input year:");
    scanf("%d",&year);
    printf("input month:");
    scanf("%d",&month);

    leap = days(year,month,leap);

    if(month<=2)
    {
        month+=12;
        year=year-1;

        TL=(year+year/4-year/100+year/400+(13*month+8)/5+day)%7;

        year +=1;
    }
    else{
        TL=(year+year/4-year/100+year/400+(13*month+8)/5+day)%7;
    }

    for(int i=0;i<3;i++)
    {
        


        if(i==0){
            printf("”N:%d\n",year);
            printf("ŒŽ:%d\n",month);
            printf(" “ú ŒŽ ‰Î … –Ø ‹à “y\n");
        }
        else if(i==1){
            switch (TL)
            {
            case 0: NULL; break;
            case 1:printf("   ");break;
            case 2:printf("      ");break;
            case 3:printf("         ");break;
            case 4:printf("            ");break;
            case 5:printf("               ");break;
            case 6:printf("                  ");break;
            }
        }
        else if(i==2)
        {
            if(leap==1)
            {
                for(int h=1;h<=31;h++){
                    if((TL+h-1)%7==0&&i<10)
                    {
                        printf("\n %d ",h);
                    }
                    else if((TL+h-1)%7==0&&i>=10)
                    {
                        printf("\n%d",h);
                    }
                    else if(h<=10)
                    {
                        printf(" %d ",h);
                    }
                    else
                    {
                        printf("%d ",h);
                    }
                }
            }
            else if(leap==2)
            {
                for(int h=1;h<=30;h++){
                    if((TL+h-1)%7==0&&i<10)
                    {
                        printf("\n %d ",h);
                    }
                    else if((TL+h-1)%7==0&&i>=10)
                    {
                        printf("\n%d",h);
                    }
                    else if(h<=10)
                    {
                        printf(" %d ",h);
                    }
                    else
                    {
                        printf("%d ",h);
                    }
                }
            }
            else if(leap==3)
            {
                for(int h=1;h<=29;h++){
                    if((TL+h-1)%7==0&&i<10)
                    {
                        printf("\n %d ",h);
                    }
                    else if((TL+h-1)%7==0&&i>=10)
                    {
                        printf("\n%d",h);
                    }
                    else if(h<=10)
                    {
                        printf(" %d ",h);
                    }
                    else
                    {
                        printf("%d ",h);
                    }
                }
            }
            else if(leap==4)
            {
                for(int h=1;h<=28;h++){
                    if((TL+h-1)%7==0&&i<10)
                    {
                        printf("\n %d ",h);
                    }
                    else if((TL+h-1)%7==0&&i>=10)
                    {
                        printf("\n%d",h);
                    }
                    else if(h<=10)
                    {
                        printf(" %d ",h);
                    }
                    else
                    {
                        printf("%d ",h);
                    }
                }
            }
        }
    }
}