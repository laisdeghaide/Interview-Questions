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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == 0) //se não tiver arvore
            return 0;
        
        //se o lado esquedo da arvore não for nulo e os filhos desse nodo que estou olhando for nulo, significa que o nodo é folha e portanto eu somo
        if(root->left != 0 && root->left->left == 0 && root->left->right == 0)
            return root->left->val + sumOfLeftLeaves(root->right);
        
        //se o lado esquerdo for uma subarvore, então preciso percorré-la e somar com o resultado da subarvore a direita
        else
            return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};