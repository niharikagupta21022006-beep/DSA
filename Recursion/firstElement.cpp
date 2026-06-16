#include<iostream>
using namespace std;

int firstElement(int arr[],int s,int e){
    if(s>e){
        return 0;

    }

    if(s == e){
        return s;
    }

    int mid = s + (e-s)/2;

    
    int element = firstElement(arr,s,mid-1);
    return s;

}
int main(){
    int arr[]  = {1,5,6,7,8,9};
    int n = 6;

    int ans = firstElement(arr,0,5);
    cout << "Answer is:" << ans << endl;



}