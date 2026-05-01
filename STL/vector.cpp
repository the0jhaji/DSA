#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> mile(10);//creates an arr of size 10
    vector<int> distance(15, 0);//create an arr of size 15 and all elements are 0.
    for(int i=0; i<15; i++){
        cout<< distance[i]<< " ";
    }
}