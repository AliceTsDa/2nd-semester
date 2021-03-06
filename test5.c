//trying to understand structs
#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct person{
    char name[80];
    char surname[80];
    struct date gennisi;
};

int main(void){
    struct person p;

    printf("Give me the name");
    scanf("%s", p.name);

    printf("Give me the surname");
    scanf("%s", p.surname);

    printf("Give me the day of birth");
    scanf("%d", &p.gennisi.day);

    printf("Give me the month of birth");
    scanf("%d", &p.gennisi.month);

    printf("Give me the year of birth");
    scanf("%d", &p.gennisi.year);

    printf("\n%s %s (%d/%d/%d)", p.name, p.surname, p.gennisi.day, p.gennisi.month, p.gennisi.year);

    return 0;
}

