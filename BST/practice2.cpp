// leetcode (109)

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


