class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int index = 1;
        for(auto &a:s){
            sum+=(('z'-a+1)*index);
            index++;
        }
        return sum ;
    }
};