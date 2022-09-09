#include <stdio.h>
#include <windows.h>

int main(void)
{
    int h,m,s,d=1000;

    printf("Type The time: ");
    scanf("%d%d%d", &h,&m,&s);
    if ( s > 60 || m > 60 || h > 23 )
    {
        printf("ERROR\n");
        exit(0);
    }
    while (TRUE)
    {
        if ( s > 59 )
        {
            s = 0;
            m++;
        }
        if ( m > 59 )
        {
            m = 0;
            h++;
        }
        if ( h > 23 )
        {
            h = 0;
        }
        printf("\nClock : %02i:%02i:%02i\n", h, m, s);
        Sleep(d);
        s++;
        system("cls");
    }
    
    
}