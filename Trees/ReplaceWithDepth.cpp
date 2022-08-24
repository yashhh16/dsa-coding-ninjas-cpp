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

void replaceWithDepthValue(TreeNode<int>* root, int level = 0) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return;
    }
    
    root -> data = level;
    
    for(int i = 0; i < root -> children.size(); i++) {
       replaceWithDepthValue(root -> children[i], level + 1);
    }
    return;
}