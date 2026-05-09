#include<iostream>
using namespace std;
int sumArr(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }else{
        int ans=arr[0]+sumArr(arr+1, size-1);
        return ans;
    }
}
int main(){
    int arr[]={3, 2, 5, 1, 6};
    int ans=sumArr(arr, 5);
    cout<<ans<<endl;
}