#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    string name;
    double salary,solded;
    
    cin>>name>>salary>>solded;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<(solded*0.15)+salary<<endl;
 
    return 0;
}