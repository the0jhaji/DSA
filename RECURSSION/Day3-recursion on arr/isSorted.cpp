#include<iostream>

using namespace std;
bool isSorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
}
int main(){
    int arr[]={2, 4, 2, 5};
    int n=4;
    bool ans= isSorted(arr, n);
    if(ans){
        cout<<"sorted"<<endl;
    }else{
        cout<< "unsorted"<<endl;
    }
}
