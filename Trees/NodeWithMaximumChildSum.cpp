/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

#include<vector>
#include<utility>

pair<TreeNode<int>*,int> helper(TreeNode<int>* root) {
    
    int sum = root -> data;
    TreeNode<int> *ans = root;
    
    for(int i = 0 ; i < root -> children.size(); i++) {
        sum += root -> children[i] -> data;
    }
    
	for(int i = 0 ; i < root -> children.size(); i++) {
     	  pair<TreeNode<int>*,int> temp  = helper(root -> children[i]);
          if(temp.second > sum) {
              ans = temp.first;
              sum = temp.second;
          }	
    }
    
    return {ans,sum};
    
}
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return root;
    }
  	 return helper(root).first;
}