//leetcode Q.2073

int timeRequiredToBuy(vector<int>& tickets, int k) {

  //method 1
  
        queue<int>q;
        int n=tickets.size();
        for(int i=0;i<n;i++){
            q.push(i);
        }
        int time=0;
        while(tickets[k]!=0){
            tickets[q.front()]--;
            if(tickets[q.front()]){
                q.push(q.front());
            }
            q.pop();
            time++;
        }
        return time;

//method 2
  
        int time=0;
        for(int i=0;i<=k;i++){
            time+=min(tickets[k],tickets[i]);
        }
        if(tickets.size()>k){
            for(int i=k+1;i<tickets.size();i++){
                time+=min(tickets[k]-1,tickets[i]);
            }
    }
    return time;
    }
