#include<iostream>
using namespace std;
int main(){
    long long a,b;
    long long MOD = 1000000007;

    cin >> a >>b;

    cout << "Addition = " << (a+b) % MOD << endl;
    cout << "Multipication = "<< (a*b) % MOD << endl;

    return 0;

}