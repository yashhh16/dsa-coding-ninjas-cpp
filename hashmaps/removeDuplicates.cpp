#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> RemoveDuplicate(int *a,int n){
    vector<int> output;
    unordered_map<int,bool> seen;
        for(int i=0;i<n ;i++){
             if(seen.count(a[i])>0){
                continue;
             }
             seen[a[i]]=true;
             output.push_back(a[i]);
        }
        return output;
}
int main(){
int a[]={1,2,3,3,2,1,4,5,6,7,5,5};
vector<int>output=RemoveDuplicate(a,12);
for(int i=0;i<output.size();i++){
    cout<<output[i]<<" ";
}
 }