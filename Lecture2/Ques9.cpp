#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int min = arr[0], max = arr[0];

    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }

        else if(arr[i]<min){
            min = arr[i];
        }
    }

    cout << "MINIMUM is" << min << endl;
    cout << "MAXIMUM is" <<max << endl;

    return 0;
}
