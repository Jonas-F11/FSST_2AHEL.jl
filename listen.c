#include <stdio.h>

int main()
{

    int b[] = {10, 20, 30, 40, 50};

    for (int i = 0; sizeof(b) / sizeof(int); i++)
    {
        printf("%d\n", b[i]);
    }








    //Zahlenwert von b ausgeben
   // printf("%p\n", &b);

    //printf("%d\n", b[0]);
   // printf("%d\n", b[1]);
   // printf("%d\n", b[2]);


    /*  Adresse von a ausgeben
    int a = 42;
    int* p = &a;
    printf("%p\n", &a);
    printf("%d\n", *p);
    */

    return 0;
}