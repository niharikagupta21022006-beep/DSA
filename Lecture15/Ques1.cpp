#include<iostream>
using namespace std;

void reachHome(int src,int dest){
    if(src == dest){
        cout << "Pahuch gayi" << endl;
        return;
    }

    src++;
    reachHome(src,dest);
}
int main(){
    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src,dest);
    return 0;
}