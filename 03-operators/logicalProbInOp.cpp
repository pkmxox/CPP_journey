#include <iostream>

using namespace std;

int main(){
    int UserCups;
    bool isStudent;

    cout<<"please enter your total cups"<<endl;
    cin>>UserCups;
    cout<<"are your a student say in 0 or 1"<<endl;
    cin>>isStudent;

    if(UserCups>15 || isStudent==true){
        cout<<"welcome to discount subscription"<<endl;
    }else{
         cout<<"you have no subscription"<<endl;
    }


    return 0;
}