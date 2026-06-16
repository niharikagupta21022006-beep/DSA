#include<iostream>
using namespace std;
void printArray(int arr[],int s,int e){
    for(int i = s;i<=e;i++){
        cout << arr[i]<< " ";
    }cout << endl;
}


bool binarySearch(int arr[],int s,int e,int key){

    printArray(arr,s,e);
    cout << endl;
    if(s>e){
        return false;
    }

    int mid = s+ (e-s)/2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        bool ans = binarySearch(arr,mid+1,e,key);
        return ans;
    }

    else{
        bool gpt = binarySearch(arr,s,mid - 1,key);
        return gpt;
    }
}
int main(){
    int arr[] = {2,3,4,5,6};
    int n = 5;
    int key;
    cin >> key;
    

    if(binarySearch(arr,0,4,key)){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

}