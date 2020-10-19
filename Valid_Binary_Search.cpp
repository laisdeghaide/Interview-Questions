class Solution {
public:
    
    bool check(TreeNode* root, long min, long max) {
        if(root == 0)
            return true;
        
        if(root->val <= min || root->val >= max)          
            return false;
        
        return check(root->left, min, root->val) && check(root->right, root->val, max); 
        //check if all subtrees in the left have smaller values than the root node
        //check if all subtrees in the right have bigger values
    }
    
    bool isValidBST(TreeNode* root) {
        return check(root, LONG_MIN, LONG_MAX);
    }
};

//Time complexity = O(n)
//Space complexity = O(n)
