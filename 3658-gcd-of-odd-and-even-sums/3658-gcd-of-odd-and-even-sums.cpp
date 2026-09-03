class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumeven=(n)*(4+(n-1)*2)/2;
        int sumodd=(2*n)*((2*n)+1)/2;
        int mi = min(sumeven,sumodd);
        for(int i = mi;i>=1;i--){
            if(sumodd%i==0 and sumeven%i==0)return i;
        }
        return 1;
    }
};