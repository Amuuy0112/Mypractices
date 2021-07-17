#include <stdio.h>

int main (void)
{
    
    double pot=0;//ポットのサイズ
    double RTP=0;//プレイヤーへの返金
    double HE=0;//控除率の割合
    int round=0;//連続でプレイする回数

    //ラウンド数の入力
    printf("input Rounds:");
    scanf("%d",&round);
    
    //控除率の計算
    for(int i=0;i<round;i++)
    {
        printf("input Pot size:");
        scanf("%lf",&pot);//ポットサイズの入力

        HE=pot*0.05;

        RTP=pot-HE;

        puts("\n");

        printf("Return to player:%lf\n",RTP);//返金額の表示
        printf("House Edge:%lf\n",HE);//控除額の表示
    }

    return 0;
}