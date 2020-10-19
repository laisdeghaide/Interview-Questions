class Solution {
public:
    
    int tilt_f(TreeNode* root, int& tilt) {
        if (root == 0) {
            return 0;
        }
        
        int left = tilt_f(root->left, tilt);
        int right = tilt_f(root->right, tilt);
        tilt += abs(left - right);
        return left + root->val + right;
    }
    
    int findTilt(TreeNode* root) {
        int tilt = 0;
        
        tilt_f(root, tilt);
        return tilt;
    }
};