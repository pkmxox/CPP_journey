#include <iostream>

using namespace std;

int main(){
    int totalBags;
     cout<<"please add the total bags"<<endl;
    cin>>totalBags;

    if(totalBags>10){
        totalBags+=5;
        cout<<totalBags<<endl;
    }else{
         cout<<totalBags<<endl;
    }

    return 0;
}