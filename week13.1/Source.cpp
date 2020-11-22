#include<stdio.h>
void chek(int h, int t, int p, int c)
{
    printf("Input hours : ");
    scanf_s("%d", &h);
    t = h * 300;
    printf("Total : %d Bath\n", t);

    printf("Input pay : ");
    scanf_s("%d", &p);

    c = p - t;
    printf("\nChange = %d Bath\n", c);

    const int money = 8;
    int banknote[money] = { 1000, 500, 100, 50, 20, 10, 5, 1 };
    int count[money] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    int *coumon, i;
    coumon = &i;

    for (i = 0; i < money; i++)
    {
        count[i] = c / banknote[i];
        c %= banknote[i];
    }
    for (i = 0; i < money; i++)
    {
        if (count[i] == 0 || count[i] < 0)
        {
            continue;
        }
        printf("%d Baht = %d \n", banknote[i], count[i]);
    }
}
int main()
{
    printf("----- Tutoring institute -----\n");

    int a[4];
    chek(a[0], a[1], a[2], a[3]);
}