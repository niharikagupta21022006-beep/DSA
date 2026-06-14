#include<iostream>
using namespace std;
// int main(){
//     int arr[] = {2,10,8,3,7};
//     int n = 5;

//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i]> arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }

//     for(int i = 0;i<n;i++){
//         cout << arr[i] << endl;
//     }
// }

bool isSorted(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {4,8,6,7,9};
    int n = 5;

    if(isSorted(arr,n)){
        cout << "Particular Array is Sorted"<< endl;
    }

    else{
        cout << "Not Sorted" << endl;
    }
}



