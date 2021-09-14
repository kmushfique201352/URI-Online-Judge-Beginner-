 #include<stdio.h>
int main()
{

    int code_1,unit_1;
    int code_2,unit_2;
    float price_1;
    float price_2,FINAL;
    scanf("%d%d%f",&code_1,&unit_1,&price_1);
    scanf("%d%d%f",&code_2,&unit_2,&price_2);
    FINAL=((unit_1*price_1)+(unit_2*price_2));
    printf("VALOR A PAGAR: R$ %0.2f\n",FINAL);

    return 0;
}
