#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map <string,int> m;
    m["abc"]=1;
    m["abc2"]=2; 
    m["abc3"]=3; 
    m["abc4"]=4; 
    m["abc5"]=5; 
    m["abc6"]=6; 
    unordered_map<string,int> ::iterator it=m.begin();
    while (it!=m.end())
    {
      cout<<"key :"<<it->first<<" "<<"Value"<<it->second<<endl;
      it++;
    }
    //find
    unordered_map<string,int> ::iterator it2=m.find("abc");
    cout<<it2->second<<endl;
    // m.erase(it2,it+4);
    

}