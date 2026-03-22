//Method 1
#include<iostream>
using namespace std;

void findDuplicates(int arr[],int n) {
    int freq[1000] = {0};

    for(int i = 0;i<n;i++){
        freq[arr[i]]++;
    }

    cout <<" Duplicates are:";

    for(int i= 0;i<1000;i++) {
        if(freq[i]>1) {
            cout<<i<<" ";
        }
    }
}
int main(){
    int arr[] = {1,2,3,2,4,1,5};
    int n = 7;

    findDuplicates(arr,n);

    return 0;
}
