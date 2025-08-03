#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    int age;

    cout<<"whats your name "<<endl;

    getline(cin, name);
    cout<<"hi "<< name <<""<<" whats your age "<<endl;
    cin>> age;
    cout<<"wow "<< name <<""<<" whats your age is "<<age<<" !"<<endl;
    
    return 0;
}

