#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    printf("%d ano(s)\n",N/365);
    N=N%365;
    
    printf("%d mes(es)\n",N/30);
    printf("%d dia(s)\n",N%30);






    return 0;
}
