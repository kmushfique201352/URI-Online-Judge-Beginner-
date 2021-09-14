 #include<stdio.h>
int main()
{
    int num,amo,NUMBER;
    float hr,SALARY;
    scanf("%d%d%f",&num,&amo,&hr);
    NUMBER=num;
    SALARY=amo*hr;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %0.2f\n",SALARY);


    return 0;
}
