#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first;
#define ss second;

class Node{
    int key;
    Node* left;
    Node* right;    
};
Node(int key){
    this->key=key;
    this->left=NULL;
    this->right=NULL;
}
 void getVerticalOrder(Node* root,int hdis,map<int, vi> &m){
    if(root==NULL){
        return;
    }
    m[hdis].push_back(root->key);
    getVerticalOrder(root-left,hdis-1,m);
    getVerticalOrder(root->right,hdis+1,m);
}
int main(){
    Node<int>* root=new Node<int>*(10);
    root->left=Node*<int>(7);
    root->right=Node*<int>(4);
root->left->left=Node*<int>(3);
root->left->right=Node*<int>(11);
root->right->left=Node*<int>(14);
root->right->right=Node*<int>(6);
map<int,vector<int>> m;
int hdis=0;
getVerticalOrder(root,hdis,m);
}
