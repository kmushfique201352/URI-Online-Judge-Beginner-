 #include<stdio.h>
int main()
{
    double A,B,C,pi=3.14159,Tri,Cir,Tra,Squ,Rec;
    scanf("%lf%lf%lf",&A,&B,&C);
    Tri=((0.5*A*C));
    Cir=pi*(C*C);
    Tra=((A+B)*C)/2;
    Squ=B*B;
    Rec=A*B;
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",Tri,Cir,Tra,Squ,Rec);




    return 0;
}