// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {5,8,7,6,4,2};
//     int n = 6;
//     int s = 0;
//     int e = n - 1;

//     for(int i= 0;i<n;i++){
//         while (s<=e){
//             swap(arr[s],arr[e]);
//             s++;
//             e--;
//         }
//     }

//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s =0;
    int e = v.size() - 1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int>v){
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }

    cout << endl;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(45);
    v.push_back(8);
    v.push_back(9);

    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    vector<int> ans = reverse(v);
    print(ans);


}