#include<iostream>
using namespace std;

int firstOccurence(int arr[],int s,int e,int key){
    if(s > e){
        return -1;
    }

    int mid = s + (e-s)/2;


    if(arr[mid] == key){
        int ans = firstOccurence(arr,s,mid-1,key);

        if(ans == -1){
            return mid;
        }

        else{
            return ans;
        }
    }

    else if(arr[mid] < key){
        return firstOccurence(arr,mid+1,e,key);
    }

    else{
        return firstOccurence(arr,s,mid-1,key);
    }
}

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

int countOccurence(int arr[],int s,int e,int key){
    int count = (lastOccurence(arr,s,e,key) - firstOccurence(arr,s,e,key)) + 1;
    return count;
}



int main(){
    int arr[] = {1,1,1,2,3,4,5};
    int n = 7;

    int key = 1;

    int answer = countOccurence(arr,0,6,key);

    cout << answer << endl;
}