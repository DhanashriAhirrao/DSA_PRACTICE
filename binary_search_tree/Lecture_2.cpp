// Q.1 ) leetcode(938)
class Solution {
public:
    void sm(TreeNode* root,int low,int high,int &sum){
        if(!root){
            return;
        }
        sm(root->left,low,high,sum);
        if(root->val<=high && root->val>=low){
            sum+=root->val;
        }
        sm(root->right,low,high,sum);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        sm(root,low,high,sum);
        return sum;
    }
};

//similar to this concept : gfg (print BST element in given range)
class Solution {
  public:
    void ele(Node* root,int low,int high,vector<int>&ans){
        if(!root){
            return;
        }
        ele(root->left,low,high,ans);
        if(root->data<=high && root->data>=low){
            ans.push_back(root->data);
        }
        ele(root->right,low,high,ans);
    }
  
    vector<int> nodesInRange(Node *root, int low, int high) {
        // code here
        vector<int>ans;
        ele(root,low,high,ans);
        return ans;
    }
};


// Q.2) leetcode (235)
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root){
            return NULL;
        }
        if(root->val>p->val && root->val>q->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        else if(root->val<p->val && root->val<q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        else{
            return root;
        }
        
    }
};


