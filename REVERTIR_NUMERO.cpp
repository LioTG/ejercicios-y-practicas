#include <iostream>

using namespace std;

int main(){
    int e,p=0;
    cin>>e;
    while(e!=0){
        p= p*10 +e%10;
        e/=10;
    }
    cout << p;
}
