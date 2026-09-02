class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>answer;
        for(int i  = 0; i < score.size() ; i++ ){
            int count=0;
            for(int j = 0; j < score.size();j++){
                if(i==j)continue;
                if(score[j]>score[i]){
                    count++;
                }
            }
            if(count==0)answer.push_back("Gold Medal");
            else if(count==1)answer.push_back("Silver Medal");
            else if(count==2)answer.push_back("Bronze Medal");
            else answer.push_back(to_string(count+1));
        }
        return answer;
    }
};