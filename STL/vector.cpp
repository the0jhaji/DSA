#include<iostream>
#include<vector>
using namespace std;
int main(){
    //creation of Vector
   vector<int> marks;
   vector<int> miles(10);
   vector<int> dist(10, 5);
   marks.push_back(10);
   marks.push_back(20);
   marks.push_back(30);
   marks.push_back(40);

//    cout<<*marks.begin()<<endl; 
//    cout<<*marks.end()<<endl;
//    cout<<"Size:"<<marks.size()<<endl;    cout<<"Capacity:"<<marks.capacity()<<endl;
//    cout<<"Max Size:"<<marks.max_size()<<endl;
//    if(marks.empty()){
//     cout<<"Vector is empty"<<endl;
//    }
//    else{
//     cout<<"Vector is not empty"<<endl;
//    }
//     marks.pop_back();
//     cout<<marks.size()<<endl;
    // marks.clear();
    // cout<<marks.size()<<endl;
    marks.insert(marks.begin(), 10);
    // cout<<marks.size()<<endl;
    //marks.erase(marks.begin());
    
    cout<<marks.size()<<endl;
    return 0;
}
     