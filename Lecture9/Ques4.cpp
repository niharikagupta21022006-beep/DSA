// #include<iostream>
// using namespace std;

// int gcd(int a, int b){
//     if(a == 0){
//         return b;
//     }

//     if(b == 0){
//         return a;
//     }

//     while(a!=b){
//         if(a>b){
//             a = a-b;
//         }

//         else{
//             b = b -a;
//         }
//     }

//     return a;
// }
// int main(){
//     int a,b;
//     cout << "Enter the values of a and b :" << endl;
//     cin >> a >> b;

//     int ans = gcd(a,b);
//     cout<<ans;

// }


#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(b != 0){
        int rem = a%b;
        a = b;
        b = rem;

    }
    return a;
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
    cin >> a>> b;
    cout << "LCM =" << lcm(a,b)<< endl;
    
    
}
