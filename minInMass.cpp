using namespace std;
#include <iostream>

int main()
{
    int K;
    int minimum = 0;
    cout << "Enter K :" << endl;
    cin >> K;

    int arr[10] = {};

    cout << "Enter arr (i != 0) :" << endl;
    for (int i = 0; i < sizeof(arr)/sizeof(int); ++i)
    {
        cout << "Enter " << i + 1 << " element : " << endl;
        cin >> arr[i];
        cin.sync();
    } 

    for (int i = 0; i < sizeof(arr) / sizeof(int); ++i)
    {
        if (arr[i] < K)
        {
            minimum = arr[i];
        }
    }

    cout << minimum << endl;
}



