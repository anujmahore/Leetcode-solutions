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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();            

            TreeNode* px = NULL;
            TreeNode* py = NULL;

            for(int i=0;i<size;i++){

                TreeNode* node = q.front();
                q.pop();

                if(node->left){
                    if(node->left->val == x){
                        px = node;
                    }

                    if(node->left->val == y){
                        py = node;
                    }
                     
                    q.push(node->left);
                }

                if(node->right){
                    if(node->right->val == x){
                        px = node;
                    }

                    if(node->right->val == y){
                        py = node;
                    }
                     
                    q.push(node->right);
                }
            }

            if(px && py){
                return px != py;
            }

            if(px || py){
                return false;
            }

        }
        return false;
    }
};