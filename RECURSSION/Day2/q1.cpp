#include<iostream>
using namespace std;
int home(int n){
    if(n==1){
        return 1;
    }
    return 1+home(n-1);
}
int main(){
    cout<<home(10);
}