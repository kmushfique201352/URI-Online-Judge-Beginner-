#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
    int a;
    float b;
    
    cin>>a>>b;
    cout<<fixed<<setprecision(3)<<a/b<<" km/l"<<endl;
 
    return 0;
}