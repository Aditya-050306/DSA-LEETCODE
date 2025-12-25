class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;   //new vector for output
        postorder(root,result);  //recursive function
        return result; //prints output
    }
    void postorder(TreeNode* node, vector<int>& result){  //vector is passed as reference
        if(node==NULL){
            return;
        }else{
            postorder(node->left,result);
            postorder(node->right,result);
            result.push_back(node->val);
        }
    }
};