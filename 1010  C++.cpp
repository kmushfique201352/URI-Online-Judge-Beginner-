#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    int code1,quantity1,code2,quantity2;
    float price1,price2;
    
    cin>>code1>>quantity1>>price1;
    cin>>code2>>quantity2>>price2;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<(quantity1*price1)+(quantity2*price2)<<endl;
    
 
    return 0;
}