#include <iostream>

using namespace std;

int main() {
    int a,pri,rem;
    int yr=0,mnth=0,days;

    cin>>days;

    if(days>=365){
      yr=days/365;
      rem=days%365;
      if(rem>=30){
        mnth=rem/30;
        days=rem%30;
      }else{
        mnth=rem;
      }
    }else if(days<=365&&days>=30){
      mnth=days/30;
      rem=days%30;
      days=rem;
    }else{
      days=0;
      mnth++;
    }

    cout<<yr<<" ano(s)"<<endl;
    cout<<mnth<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;




    return 0;
}
