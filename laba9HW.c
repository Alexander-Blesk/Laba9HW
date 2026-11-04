#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int check(float x, float y);
int main(void) {
    setlocale(LC_ALL, "RUS");
    printf("=== ÂÈÇÓÀËÜÍÀß ÎÒÐÈÑÎÂÊÀ ÔÈÃÓÐÛ ===\n\n");

    for (int y = 5; y >= -25; y--) {
        for (int x = -25; x <= 5; x++) {
            double fx = x * 0.1;
            double fy = y * 0.2;
            if (x == 0 && y == 0) {
                printf("+");
            }
            else if (x == 0) {
                printf("|");
            }
            else if (y == 0) {
                printf("-");
            }
            else if (check((float)fx, (float)fy)) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n=== ÈÍÒÅÐÀÊÒÈÂÍÀß ÏÐÎÂÅÐÊÀ ÒÎ×ÅÊ ===\n\n");
    float x, y;
    int res;
    int s = 1;
    while (s) {
        printf("Ââåäèòå âàø x,y ÷åðåç ïðîáåë: ");
        scanf("%f%f", &x, &y);
        int res = check(x, y);
        if (res) {
            printf("Òî÷êà ïðèíàäëåæèò ãðàôèêó \n");
        }
        else {
            printf("Òî÷êà íå ïðèíàäëåæèò ãðàôèêó \n");
        }
        printf("Õîòèòå ïðîäîëæèòü? Ââåäèòå-1 ÍÅÒ-0 ");
        scanf("%d", &s);
        if (s == 0) {
            break;
        }
    }
}
int check(float x, float y) {
    return (x <= 0 && y <= 0 && y >= -x - 4.5f && (x * x + y * y) >= 3.0f);
}