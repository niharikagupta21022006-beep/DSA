#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>arr,int index ,vector<int>& output){
    if(index >= arr.size()){
        cout << "[";
        for(int x:output){
            cout << x << " ";
        }
        cout << "]" << endl;
        return;
    }

    solve(arr,index+1,output);
    output.push_back(arr[index]);
    solve(arr,index+1,output);
    output.pop_back();

}
int main(){
    vector<int>arr = {1,2,3};
    vector<int>output;
    int index = 0;

    solve(arr,index,output);
}