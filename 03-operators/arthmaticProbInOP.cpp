#include <iostream>

using namespace std;

int main(){
    int cups;
    float price;
    float discount;
    cout<<"please enter the cups"<<endl;
    cin>>cups;
    cout<<"please enter the price"<<endl;
    cin>>price;

    int result = cups * price;
    if(result>50){
         discount= result-(result*5.0/100);
         cout<<"your total price of tea is "<<discount<<" with 5% " "discount added"<<endl;
    
    }else{
        cout<<"your total price of tea is "<<result<<endl;
    }


    

    

    return 0;


}