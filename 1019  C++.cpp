#include <iostream>

using namespace std;

int main() {
    int a,pri,rem;
    int hr=0,min=0,sec;

    cin>>sec;

    if(sec>=60){
      pri=sec/60;
      rem=sec%60;
      if(pri>=60){
        sec=rem;
        hr=pri/60;
        rem=pri%60;
        min=rem;
      }else{
        min=pri;
        sec=rem;
      }
    }
    else{
      sec;
    }
cout<<hr<<":"<<min<<":"<<sec<<endl;




    return 0;
}
