/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == 0 && q == 0) //se ambos são nulos (chegou no caso base)
            return true;
        
        if(!p || !q)    //(caso base) se algum deles não é nulo retorna falso (não têm o mesmo nivel)
            return false;
        
        if(p->val != q->val) //se os valores não coincidem 
            return false;
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right); //se não vai para o proximo nivel recursivamente
    }
};