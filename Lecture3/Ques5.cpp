#include<iostream>
using namespace std;

int integerSqrt(int x){
    if(x == 0 || x == 1){
        return x;
    }

    int s = 1;
    int e = x;
    int mid = s + (e-s)/2;
    int ans = 0;

    while(s<=e){
        if(mid <= x/mid){
            ans = mid;
            s = mid + 1;

        }

        else{
            e = mid - 1; 
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int x = 26;
    cout << integerSqrt(x);
}