#include <iostream>

using namespace std;
int main()
{
    int N, i;
    cin >> N;
    int arr[N];
    int k;
    cin >> k;
    for (i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    int index;
    cin >> index;
    for (i = index; i < k; i++)
    {
        arr[i] = arr[i + 1];
    }
    k = k - 1;
    for (i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}