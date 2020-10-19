class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>result;
        
        if(root == 0)
            return result;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            int maxi = INT_MIN;
            for(int i = 0; i < size; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                maxi = max(maxi, curr->val);  
                
                if(curr->left)  q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            result.push_back(maxi);
        }
        return result;
    }
};
===================================================

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>result;
        
        findLargest(root, 0, result);
        
        return result;
    }
    
    void findLargest(TreeNode* root, int level, vector<int>& result)
    {
        if(!root)
            return;
        
       if(result.size() <= level) 
            result.push_back(root->val);
        
        else  
           result[level] = max(result[level], root->val);
        
        findLargest(root->left, level+1, result);
        findLargest(root->right, level+1, result);
    }
};


//Time complexity = O(n)
// Space Complexity = O(n)