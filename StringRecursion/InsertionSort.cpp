#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    if(n == 0 || n == 1){
        return;
    }

    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i - 1;
        while(j>= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    InsertionSort(arr,n-1);
}
int main(){
    int arr[] = {5,2,4,1,3};
    int n = 5;

    InsertionSort(arr,5);
    for(int  i = 0;i<n;i++){
        cout << arr[i] << endl;
    }
}