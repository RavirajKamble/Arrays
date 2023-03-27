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
    for (i = 0; i < k + 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}