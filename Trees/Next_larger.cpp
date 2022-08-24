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

#include<queue>
#include<climits>
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    //corner case
	// If only root node is present
    if(root -> children.size() == 0) { 
        if(root -> data > x) {
            return root;
        } else {
            return NULL;
        }
    }
    queue<TreeNode<int>*> q;
    q.push(root);
    
    TreeNode<int> *ans = root;
    int diff = INT_MAX;
    
    while(!q.empty()){
        
        TreeNode<int> *front = q.front();
        q.pop();
        
        if(front -> data - x < diff and front -> data > x){
            ans = front;
            diff = front -> data - x;
        }
        
        for(int i = 0; i < front -> children.size(); i++){
            q.push(front -> children[i]);
        }
    }
    
    if(ans == root) {
        return NULL;
    } else {
    	return ans; 
    }
}