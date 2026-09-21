//Q.1) gfg (BST keys in a range)
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

