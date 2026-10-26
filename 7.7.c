#include <stdio.h>

#define slash 10.0
#define jiaban 1.5
#define basetime 40.0
int main()
{
    double money;
    double hour;
    double shui;
    printf("请输入一周工作的小时数：");
    scanf("%lf", &hour);

    //计算税前总收入
    if(hour > basetime)
    {
        money = (basetime * slash) + ((hour - basetime) * slash * jiaban);
    }else
    {
        money = (hour * slash);
    }

    //计算税金
    if( money <= 300.0 && money > 0)
    {
        shui = money * 0.15;
    }else if(money > 300 && money <= 450)
    {
        shui = (300 * 0.15) + ((money - 300) * 0.2);
    }else
    {
        shui = (300 * 0.15) + (150 * 0.2) + ((money - 450) * 0.25);
    }

    //输出内容
    printf("%.2lf %.2lf %.2lf", money, shui, money - shui);

    return 0;
}