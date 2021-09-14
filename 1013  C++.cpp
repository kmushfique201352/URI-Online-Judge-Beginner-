#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c;
    int max,min;
    cin>>a>>b>>c;
    max=a;
        if(max<b||max<c){
            max=b;
            if(max<c){
                max=c;
            }
        }
        cout<<max<<" eh o maior"<<endl;
 
    return 0;
}