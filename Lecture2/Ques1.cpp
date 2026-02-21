#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}

void swapAlternate(int arr[],int size){
    for(int i = 0;i<size;i+=2){
        
            // swap(arr[i],arr[i+1]);

           int temp = arr[i+1];
           arr[i+1] = arr[i];
           arr[i] = temp;
        
    }
}

int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }

    swapAlternate(arr,size);
    printArray(arr,size);

}
