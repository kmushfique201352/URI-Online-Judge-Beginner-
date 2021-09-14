#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,A,hr,min,sec;
    scanf("%d",&N);

    sec=N%60;
    A=N/60;
    min=A%60;
    hr=A/60;

    printf("%d:%d:%d\n",hr,min,sec);





    return 0;
}
