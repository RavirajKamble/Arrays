#include<iostream>

using namespace std;
int main(){
    int marks[10];
    int i, sum = 0;
    float avg;
    for(i = 0; i<3; i++){
        scanf("%d",&marks[i]);
    }
    for(i = 0; i<3; i++){
        printf("%d ", marks[i]);
        sum += marks[i];
    }
    printf("\n");
    avg = sum/3.0;
    printf("%f \n",avg);
    return 0;
}