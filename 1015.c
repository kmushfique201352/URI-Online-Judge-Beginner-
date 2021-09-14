#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1,y1,x2,y2,D1,D2;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    D1=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    D2=sqrt(D1);
    printf("%0.4lf\n",D2);

    return 0;
}
