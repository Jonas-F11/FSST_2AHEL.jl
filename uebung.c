#include <stdio.h>

int main()
{
    float s1;
    float s2;
    float s3;
    float ausgang;

    //printf("Die Breite ist :\n");
    //scanf("%f, &breite");

    printf("s1,s2, s3 sind :\n");
    scanf("%f, %f, %f", &s1, &s2, &s3);

    if ((s1 || s2) && s3 == 1)
    {
        printf("Es fließt Strom!");
    }

    else
    {

        printf("Es fließt kein Strom!");
    }

    return 0;

}