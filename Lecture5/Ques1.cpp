#include<iostream>
using namespace std;

int main(){
    int arr[] = {29,72,98,13,87,66,52,51,36};
    int n = 9;
    
    for(int i = 0;i<n-1;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]< arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;


    }
    
        for(int i =0;i<n;i++){
            cout << arr[i] <<" ";
        }

    
}