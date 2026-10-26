#include <stdio.h>

int main()
{
    double n;
    printf("请输入杯数：");
    scanf("%lf", &n);
    double pinto = n / 2.0;
    double ons = 8.0 * n;
    double big_shao = ons * 2.0;
    double cha_shao = 3.0 * big_shao;
    printf("品脱：%lf\n盎司:%lf\n大汤勺:%lf\n茶勺:%lf", pinto, ons, big_shao, cha_shao);

    return 0;
}