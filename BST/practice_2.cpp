//Q.1) leetcode (109)

class Solution {
public:
    TreeNode* sortedtobinary(vector<int>&ans,int st,int end){
        while(st>end){
            return NULL;
        }
        int mid=st+(end-st+1)/2;
        TreeNode* root=new TreeNode(ans[mid]);
        root->left=sortedtobinary(ans,st,mid-1);
        root->right=sortedtobinary(ans,mid+1,end);
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>ans;
        while(head){
            ans.push_back(head->val);
            head=head->next;
        }
        int st=0;
        int end=ans.size()-1;
        return sortedtobinary(ans,st,end);
    }
};


//Q.2) leetcode (938)

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

//Q.3) leetcode(235)
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

//Q.4) leetcode (1008)
class Solution {
public:

    TreeNode* BST(vector<int>&ans,int &idx,int lower,int upper){
        if(idx==ans.size() || ans[idx]>upper || ans[idx]<lower){
            return NULL;
        }
        TreeNode* root= new TreeNode(ans[idx++]);
        root->left=BST(ans,idx,lower,root->val);
        root->right=BST(ans,idx,root->val,upper);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx=0;
        return BST(preorder,idx,INT_MIN,INT_MAX);
    }
};


//Q.5) on leetcode solved go there 
// leetcode : 1305 : ALL elements in binary serch tree
// basically we are sorting elements in ascending order from both BST together 

