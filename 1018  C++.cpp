#include <iostream>

using namespace std;

int main() {

    int a,pri,rem;
    cin>>a;
    cout<<a<<endl;


        pri=a/100;
        rem=a%100;
        cout<<pri<<" nota(s) de R$ 100,00"<<endl;

        a=rem;
        pri=a/50;
        rem=a%50;
        cout<<pri<<" nota(s) de R$ 50,00"<<endl;

        a=rem;
        pri=a/20;
        rem=a%20;
        cout<<pri<<" nota(s) de R$ 20,00"<<endl;

        a=rem;
        pri=a/10;
        rem=a%10;
        cout<<pri<<" nota(s) de R$ 10,00"<<endl;

        a=rem;
        pri=a/5;
        rem=a%5;
        cout<<pri<<" nota(s) de R$ 5,00"<<endl;

        a=rem;
        pri=a/2;
        rem=a%2;
        cout<<pri<<" nota(s) de R$ 2,00"<<endl;

        a=rem;
        pri=a/1;
        rem=a%1;
        cout<<pri<<" nota(s) de R$ 1,00"<<endl;



    return 0;
}
