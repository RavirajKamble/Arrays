#include<iostream>

using namespace std;
int main(){
    int a[10];
    int b[10];
    int i;
    for(i = 0; i < 3; i++ ){
        cin>>a[i];
    }
    for(i = 0; i < 3; i++){
        b[i]=a[i];
    }
    for(i = 0; i < 3; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}