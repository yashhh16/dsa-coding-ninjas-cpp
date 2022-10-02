#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;
int main(){
    unordered_map<string,int> mp;

    //insert
    pair<string,int> p("abc",1);
    mp.insert(p);
    mp["def"]=2;

    //find or access
    cout<<mp["abc"]<<endl;
    cout<<mp.at("abc")<<endl;
    cout<<mp["def"]<<endl;
     cout<<"Size: " <<mp.size()<<endl;
     cout<<mp["ghi"]<<endl;
     cout<<"Size: "<< mp.size()<<endl;

     //check presense
     if(mp.count("ghi")>0){
        cout<< "ghi is present"<<endl;
        }
    mp.erase("ghi");

if(mp.count("ghi")>0){
        cout<< "ghi is present"<<endl;
        }else{
            cout<<" ghi is not present"<<endl;
            
        }


   

}