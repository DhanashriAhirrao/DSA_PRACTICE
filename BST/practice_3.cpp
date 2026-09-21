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


//Q.2) gfg (BST with dead end)
class Solution {
  public:
  
    bool DeadEnd(Node* root,int lower,int upper){
        if(!root){
            return 0;
        }
        if(!root->left && !root->right){
            if(root->data-lower==1 && upper-root->data==1){
                return 1;
            }
            else{
                return 0;
            }
        }
        return DeadEnd(root->left,lower,root->data) || DeadEnd(root->right,root->data,upper);
    }
    bool isDeadEnd(Node *root) {
        // Code here
        int lower=0;
        int upper=INT_MAX;
        return DeadEnd(root,lower,upper);
    }
};


//
