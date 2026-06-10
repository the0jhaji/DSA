#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string , int> m;
    pair<string, int> p= make_pair("Adarsh", 3);
    m.insert(p);

    pair<string, int> pair2("ojha", 2);
    m.insert(pair2);

    m["mera"]=1;
    m["mera"]=2;

    cout<<m["mera"]<<endl;
    cout<<m.at("Adarsh")<<endl;
    //accessing pair which is not present in the map
    //cout<<m.at("ab")<<endl;// eception dega hamne kuchh banaya hi nhi hai esa 
    //cout<<m["unknown"]<<endl;// ye ek pair bana deta hai or value //0 se initialise kr deta hai

    //to check presence of a keyc//out<<m.count("unknown")<<endl;

    cout<<m.count("Adarsh")<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    
    
    }
    //iterator
    unordered_map<string, int> :: iterator it= m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;

}