#include <iostream>
using namespace std;

bool uniqueOccurences(int arr[], int n)
{
    int freq[1000] = {0};
    int count[1000];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for(int i = 0;i<1000;i++){
        if(freq[i] > 0) {
            count[k] = freq[i];
            k++;
        }
    }

    for(int i = 0;i<k;i++){
        for(int j= i+1;j<k;j++){
            if(count[i] == count[j]){
                return false;
            }
        }
    }

    return true;
}
int main()
{
    int arr[] = {-1, 5, 7, -1, 5, 5};
    int n= 6;

    if (uniqueOccurences(arr, n)){
        cout << "True";
    }

    else{
        cout<<"False";
    }

    return 0;
}