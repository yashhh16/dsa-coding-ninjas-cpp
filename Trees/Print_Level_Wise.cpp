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

void printLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* temp=pendingNodes.front();
        pendingNodes.pop();
        cout<<temp->data<<":";
        for(int i=0;i<temp->children.size();i++){
            cout<<temp->children[i]->data;
            pendingNodes.push(temp->children[i]);
            if(i==temp->children.size()-1) // to avoid , after the last element
                continue;
            cout<<",";
        }
      cout<<endl;
      
        
    }
}