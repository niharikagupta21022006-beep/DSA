#include<iostream>
using namespace std;

long long power(long long a,long long b){
    long long ans = 1;
    while(b > 0){
        if(b & 1){
            ans = ans*a;
        }

        a = a*a;
        b = b>>1;
    }
    return ans;
}

int main(){
    long long a,b;
    cin >> a >> b;

    cout << power(a,b);
    return 0;
}