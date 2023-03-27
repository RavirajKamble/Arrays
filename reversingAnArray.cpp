#include<iostream>

using namespace std;
int main(){
    int N,i;
    cin>>N;
    int a[N], b[N];
    for(i = 0; i < N; i++){
        cin>>a[i];
    }
    for(i = 0; i < N; i++){
        b[i] = a[i];
    }
    for(i = N-1; i >= 0 ; i--){
        a[(N-1) - (i)] = b[i];
    }
    for(i = 0; i < N; i++){
        cout<<a[i]<<" ";
    }

    
    return 0;
}

//  for(i = N-1; i >= 0 ; i--){
//         a[(N-1) - (i)] = b[i];
//     }
//
// i = N-1
// a[(N-1)- i] = a[ N-1 - (N-1)] = a[0]
// i = N-2 ==> a[N-1 - (N-2)] ==> a[N-1 - N + 2] ==> a[1]
// a[] = 1 2 3
// b[] = 1 2 3
// for (i = N-1; i>=0 ; i--){
//    a[N-1 - (i)] =b[i]
//}