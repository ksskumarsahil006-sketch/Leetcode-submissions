class Solution {
public:
    string reverseWords(string s) {
        string answer;
        string si ;
        for(int i = 0; i < s.size();i++){
            if(s[i]==' ' and si.size()!=0){
                reverse(si.begin(),si.end());
                answer+=si+" ";
                si="";
            }
            else si+=s[i];
        }
        if(si.size()!=0) {
            reverse(si.begin(),si.end());
            answer+=si;
        }
        return answer;
    }
};