#include<iostream>

using namespace std;
int main(){
    int N, sum = 0;
    scanf("%d",&N);
    int marks[N];
    int i;
    for(i = 0; i < N; i++){
        scanf("%d", &marks[i]);
    }
    for(i = 0; i < N; i++){
        sum += marks[i];
    }
    printf("%d",sum);

    return 0;
}