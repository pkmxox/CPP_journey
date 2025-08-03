#include <iostream>

using namespace std;

int main(){
    int UserSub=22;


    if(UserSub<=20 ){
        cout<<"congratulation you are now a sliver member"<<endl;
    }else if(UserSub>=10){
          cout<<"congratulation you are now and gold member"<<endl;
    }else{
        cout<<"congratulation you are not in a membership"<<endl;
    }

    return 0;
}