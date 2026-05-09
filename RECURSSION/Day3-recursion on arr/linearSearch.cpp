#include<iostream>
using namespace std;
bool search(int arr[], int size, int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    bool ans= search(arr+1, size-1, k);
    return ans;
}
int main(){
    int arr[]={2, 5, 3, 1};
    int k=4;
    
    bool ans=search(arr, 4, k);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<< "Not Found"<<endl;
    }
    return 0;
}