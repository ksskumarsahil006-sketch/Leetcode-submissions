class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int n  =  events.size();
        if(n==1)return events[0][0];
        int longest = events[0][1];
        int timer = events[0][0];
        for(int i  = 1 ; i < n ;i++){
            int current=events[i][1]-events[i-1][1];
            if(current>longest){
                longest=current;
                timer=events[i][0];
                continue;
            }
            if(current==longest){
                timer=min(timer,events[i][0]);
            }
        }
        return timer;

    }
};