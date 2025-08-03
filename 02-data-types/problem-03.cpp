#include <iostream>
#include <string>

using namespace std;

int main(){

   
    string teaType;
    int cups;
    cout<<"what can i get for you??"<<endl;
    getline(cin, teaType);
    cout<<"and how much tea you want??"<<endl;
    cin>>cups;

    cout<<"thank you for your order of "<<cups<<" cups of "<<teaType<<endl;



    

    

    return 0;
}