#include <iostream>
using namespace std;
bool isPal(string str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
       return isPal(str, i+1, j-1);
    }
}
int main(){
    string str="ojha";
    bool ans=isPal(str, 0, str.length()-1);
    if(ans){
        cout<<"Yes it's a palindrome"<<endl;
    }
    else{
        cout << "No it's not a palindrome" << endl;
    }
}