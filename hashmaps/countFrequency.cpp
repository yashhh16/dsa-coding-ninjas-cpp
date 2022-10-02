#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
     }
    //  for(auto x: mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    //  }
    map<int,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
     
}