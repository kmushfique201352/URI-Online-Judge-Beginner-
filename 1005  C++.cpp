#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double n1,n2;
    
    cin>>n1>>n2;
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<(n1*3.5+n2*7.5)/(3.5+7.5)<<endl;
    
    return 0;
}