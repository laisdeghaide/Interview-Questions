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
    TreeNode* invertTree(TreeNode* root) {
        if(root == 0)
            return root;
        
        TreeNode* right = invertTree(root->right); //recebe a parte a direita
        TreeNode* left = invertTree(root->left);  // recebe a parte a esquerda
        root->left = right; //atribui a esqueda à direita
        root->right = left; //e a direta à esquerda
        
        return root;
    }
};


//Time complexity = O(n) pq devo percorrer a arvore toda
//Space complexity = O(n) pq estou armazenando uma pilha com a quantidade de elementos da arvore
