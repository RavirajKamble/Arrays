#include<iostream>

using namespace std;
int main(){
    int N,i;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int count = 0;
    for(i=0;i<N;i++){
        if(arr[i]==x)
            count++;
    }
    cout<<count;
    return 0;
}