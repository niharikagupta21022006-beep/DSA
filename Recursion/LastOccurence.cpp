#include<iostream>
using namespace std;

int lastOccurence(int arr[],int s,int e,int key){
    if(s > e){
        return -1;
    }

    int mid = s + (e-s)/2;
    
    if(arr[mid] == key){
        int ans = lastOccurence(arr,mid+1,e,key);

        if(ans == -1){
            return mid;
        }

        else{
            return ans;
        }

    }

    else if(arr[mid] < key){
        return lastOccurence(arr,mid + 1,e,key);
    }

    else{
        return lastOccurence(arr,s,mid - 1,key);
    }


}
int main(){
    int arr[] = {1,2,2,2,3,4,5};
    int n = 7;

    int key = 2;

    int answer = lastOccurence(arr,0,6,key);

    cout << "Last occurence is : " << answer << endl;
}