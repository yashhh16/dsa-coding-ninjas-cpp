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
#include<climits>

TreeNode<int> * findMax(TreeNode<int> *a, TreeNode<int> *b) {
    if(a -> data > b -> data) {
        return a;
    } else {
        return b;
    }
}

pair<TreeNode<int>*,TreeNode<int>*> helper(TreeNode<int> *root) {
    TreeNode<int> *max_1 = root;
    TreeNode<int> *max_2 = new TreeNode<int>(INT_MIN);
    
    for(int i = 0; i < root -> children.size(); i++) {
        pair<TreeNode<int>*,TreeNode<int>*> temp = helper(root -> children[i]);
        TreeNode<int>* discard;
        
        if(max_1 -> data < temp.first -> data) {
            discard = max_1;
            max_1 = temp.first;
            if(max_2) {
            	max_2 = findMax(findMax(discard,temp.second), max_2);
            } else {
                max_2 = findMax(discard,temp.second);
            }    
        } else if(max_2 -> data < temp.first -> data ) {
            max_2 = temp.first;
        } 
    }
    
    if(max_1 -> data != max_2 -> data) {
    	return {max_1,max_2};
    } else {
        return {max_1,NULL};
    }
    
}

TreeNode<int> * getSecondLargestNode(TreeNode<int> *root) {
    if(root == NULL or root -> children.size() == 0) {
        return NULL;
    }
    
    return helper(root).second;
}
