#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    int number,workHour;
    float taka;
    
    cin>>number>>workHour>>taka;
    cout<<"NUMBER = "<<number<<endl<<fixed<<setprecision(2)<<"SALARY = U$ "<<workHour*taka<<endl;
 
    return 0;
}