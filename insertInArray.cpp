#include <iostream>

using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    int k, i;
    cin >> k;
    for (i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    int x, index;
    cin >> x >> index;
    for (i = k - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = x;
    k = k+1; // changing the size of array 
    for (i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}