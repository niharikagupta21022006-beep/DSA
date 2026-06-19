#include<iostream>
using namespace std;

void solve(int nums[],int n,int index,int output[],int size){
    if(index >= n){
        cout <<"[";
        for(int i = 0;i<size;i++){
       cout << output[i] << " ";
    }
        cout <<"]";
        return;
    }

    solve(nums,n,index + 1,output,size);

    output[size] = nums[index];
    size++;

    solve(nums,n,index+1,output,size);
}
int main(){
    int nums[] = {1,2,3};
    int output[10];
    int size = 0;
    int index = 0;

    solve(nums,3,0,output,size);

    
}