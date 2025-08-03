#include <iostream>
#include <string>

using namespace std;

int main(){

    string teaName = "Masala Tea";
    //float price =99.99;
    char rating ='A';
    float basePrice;

    
    cout<<"please enter your price for this tea "<<endl;
    cin>>basePrice;
    int totalprice =(basePrice*10)/100;

    cout<<"we have "<< teaName<<" at rs. "<<(int)totalprice<<".99 per kg and has "<<rating<<" grade quality"<<endl;

    cout<<totalprice<<endl;

    

    

    return 0;
}