// question 1 (leetcode 230 )
class Solution {
public:
    void solve(TreeNode* root,vector<int>&ans){
        if(!root){
            return;
        }
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        int b;
        solve(root,ans);
        for(int i=0;i<ans.size();i++){
            if(i==k-1){
                b=ans[i];
                break;
            }
        }
        return b;
    }


//question 2 (leetcode 783)
class Solution {
public:
    void mindist(TreeNode* root, int &prev,int &ans){
        if(!root){
            return;
        }
        mindist(root->left,prev,ans);
        if(prev!=INT_MIN){
            ans=min(ans,root->val-prev);
        }
        prev=root->val;
        mindist(root->right,prev,ans);
    }

    int minDiffInBST(TreeNode* root) {
        int prev=INT_MIN;
        int ans=INT_MAX;
        mindist(root,prev,ans);
        return ans;
    }
};


//question 3 (gfg : sum of k smallest element )
class Solution {
  public:
    void ksum(Node* root,int &sm,int &k){
        if(!root){
            return;
        }
        ksum(root->left,sm,k);
        k--;
        if(k>=0){
            sm+=root->data;
        }
        if(k<=0){//its for when k becomes zero we left imediately dont need to check one more loop
            return;
        }
        ksum(root->right,sm,k);
    }
   
    int sum(Node* root, int k) {
        // code here
        int sm=0;
        ksum(root,sm,k);
        return sm;
    }
};


// question 4 (gfg and leetcode(108)
class Solution {
public:
    TreeNode* arrtobst(vector<int>nums,int st,int end){
        if(st>end){
            return NULL;
        }
        int mid=st+(end-st)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left=arrtobst(nums,st,mid-1);
        root->right=arrtobst(nums,mid+1,end);
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        return arrtobst(nums,st,end);
        
    }
};

