#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {7, 5, 9, 1, 8, 4};
    int temp[6];
    int k = 2;
    k = k % 6;

    for (int i = 0; i < 6; i++)
    {
        temp[(i + k) % 6] = arr[i];
    }

    for(int i = 0;i<6;i++){
        arr[i] = temp[i];
        cout << arr[i] <<" ";
    }














    
}