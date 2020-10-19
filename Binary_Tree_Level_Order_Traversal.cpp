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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        queue<TreeNode*>q;
        
        if(root == 0) //se estiver vazia
            return result;
        
        q.push(root); //se não tiver vazia, empilho o nodo que estou avaliando
        while(!q.empty()) //enquanto a minha pilha não estiver vazia
        {
            int size = q.size(); //pego o tamanho da pilha: na primeira interacao será 1, na segunda 2 e na 3º 3
            vector<int>level; //vetor de sublistas
            
            for(int i = 0; i < size; i++)
            {
                TreeNode* current = q.front(); //desempilho e adiciono o valor do nodo na minha sublista level
                q.pop();
                level.push_back(current->val);
                
                //Checo se o nodo tem filho, e se tiver empilho na pilha
                if(current->left != 0)
                    q.push(current->left);
                
                if(current->right != 0)
                    q.push(current->right);
            }
            result.push_back(level); //insiro na minha lista de resultado a minha sublista
        }
        return result;
    }
};