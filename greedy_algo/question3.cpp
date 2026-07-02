//gfg : maximum meeting in one room
class Solution {
  public:
  struct meet{
      int st;
      int end;
      int pos;
      
  };
  static bool cmp(meet a,meet b){
      if(a.end==b.end){
          return a.pos<b.pos;
      }
      return a.end<b.end;
  }
  vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        // code here
        int n=s.size();
        vector<meet>meeting;
        for(int i=0;i<n;i++){
            meeting.push_back({s[i],f[i],i+1});
        }
        sort(meeting.begin(),meeting.end(),cmp);
        vector<int>ans;
        ans.push_back(meeting[0].pos);
        int lstend=meeting[0].end;
        for(int i=1;i<n;i++){
            if(meeting[i].st>lstend){
                ans.push_back(meeting[i].pos);
                lstend=meeting[i].end;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    
};

//gfg / leetcode : jump game
class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        // code here
        int maxidx=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i>maxidx){
                return false;
            }
            maxidx=max(maxidx,i+arr[i]);
        }
        return true;
    }
};
