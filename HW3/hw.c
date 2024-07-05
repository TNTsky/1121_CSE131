#include <stdio.h>
#include <stdlib.h>

// Homework 3.1
void hw3_1(){
    int m, d;

    printf("Please enter the month:\n");
    scanf("%d", &m);
    if (m < 1 || m > 12)
    {
        printf("Please enter correct month.\n");
        return;
    }

    printf("Please enter the date:\n");
    scanf("%d", &d);
    if ((m == 1 && d >= 20 && d <= 31) || (m == 2 && d >= 1 && d <= 18))
        printf("%2d/%2d belongs to Aquarius.\n", m, d);
    else if ((m == 2 && d >= 19 && d <= 29) || (m == 3 && d >= 1 && d <= 20))
        printf("%2d/%2d belongs to Pisces.\n", m, d);
    else if ((m == 3 && d >= 21 && d <= 31) || (m == 4 && d >= 1 && d <= 19))
        printf("%2d/%2d belongs to Aries.\n", m, d);
    else if ((m == 4 && d >= 20 && d <= 30) || (m == 5 && d >= 1 && d <= 20))
        printf("%2d/%2d belongs to Taurus.\n", m, d);
    else if ((m == 5 && d >= 21 && d <= 31) || (m == 6 && d >= 1 && d <= 20))
        printf("%2d/%2d belongs to Gemini.\n", m, d);
    else if ((m == 6 && d >= 21 && d <= 30) || (m == 7 && d >= 1 && d <= 22))
        printf("%2d/%2d belongs to Cancer.\n", m, d);
    else if ((m == 7 && d >= 23 && d <= 31) || (m == 8 && d >= 1 && d <= 22))
        printf("%2d/%2d belongs to Leo.\n", m, d);
    else if ((m == 8 && d >= 23 && d <= 31) || (m == 9 && d >= 1 && d <= 22))
        printf("%2d/%2d belongs to Virgo.\n", m, d);
    else if ((m == 9 && d >= 23 && d <= 30) || (m == 10 && d >= 1 && d <= 22))
        printf("%2d/%2d belongs to Libra.\n", m, d);
    else if ((m == 10 && d >= 23 && d <= 31) || (m == 11 && d >= 1 && d <= 21))
        printf("%2d/%2d belongs to Scorpio.\n", m, d);
    else if ((m == 11 && d >= 22 && d <= 30) || (m == 12 && d >= 1 && d <= 21))
        printf("%2d/%2d belongs to Sagittarius.\n", m, d);
    else if ((m == 12 && d >= 22 && d <= 31) || (m == 1 && d >= 1 && d <= 19))
        printf("%2d/%2d belongs to Capricorn.\n", m, d);
    else
        printf("Please enter correct date.\n");
    
}

// Homework 3.2
void hw3_2(){
    char c;
    int fine = 0;

    printf("Did David run a red light? (Y/N): \n");
    scanf(" %c", &c);
    if (c == 89 || c == 121)
        fine += 3600;

    printf("Was David speeding? (Y/N): \n");
    scanf(" %c", &c);
    if (c == 89 || c == 121)
        fine += 1200;

    printf("Does David have a driver's license? (Y/N): \n");
    scanf(" %c", &c);
    if (c == 78 || c == 110)
        fine += 24000;

    printf("Was David wearing his helmet? (Y/N): \n");
    scanf(" %c", &c);
    if (c == 78 || c == 110)
        fine += 500;

    printf("Was David using the cell phone while riding? (Y/N): \n");
    scanf(" %c", &c);
    if (c == 89 || c == 121)
        fine += 3000;

    printf("Was David riding in the opposite direction? (Y/N): \n");
    scanf(" %c", &c);
    if (c == 89 || c == 121)
        fine += 1800;

    printf("David has to pay $%d.\n", fine);

}

int main(){
    hw3_1();
    hw3_2();
    return 0;
}
