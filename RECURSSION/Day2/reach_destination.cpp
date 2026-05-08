#include<iostream>
using namespace std;
void reach(int src, int dest){
    cout<<"src="<< src<<" " <<"dest="<<dest<<endl;
    if(src==dest){
        cout<<"Reached"<<endl;
        return ;
    }
    src++;
    reach(src, dest);
}
int main(){
    
    reach(1, 11);
    return -1;
}