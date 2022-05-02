// if i have only the root, return null
// if i have only small numbers from the root, then i'll have to search on my left subtree
// otherwise i'll go to my right subtree

class Solution {
public:
    int findSecondLargest(TreeNode* root, int &qtd_visited_nodes) {
        if(root == NULL || qtd_visited_nodes >= 2)
            return -1;

        findSecondLargest(root->right, qtd_visited_nodes);
        qtd_visited_nodes++;

        if(qtd_visited_nodes == 2)
            return root->val;

        findSecondLargest(root->left, qtd_visited_nodes);
    }

    int secondLargest(TreeNode* root) {
       return findSecondLargest(root, 0);
    }
};