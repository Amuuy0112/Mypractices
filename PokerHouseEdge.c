#include <stdio.h>
int main (void)
{
    double pot=0,RTP=0,HE=0;
    int round=0;

    printf("input Rounds:");
    scanf("%d",&round);
    
    for(int i=0;i<round;i++)
    {
        printf("input Pot size:");
        scanf("%lf",&pot);

        HE=pot*0.05;

        RTP=pot-HE;

        puts("\n");

        printf("Return to player:%lf\n",RTP);
        printf("House Edge:%lf\n",HE);
    }

    return 0;
}