#include<iostream>
using namespace std;
int main(){
    int arr[] = {8,6,7,5,9,4,8};
    int n = 7;

    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] =arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}