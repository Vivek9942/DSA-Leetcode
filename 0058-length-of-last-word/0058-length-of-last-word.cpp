class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt =0;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] == ' '){
                if(cnt>0){
                    break;
                }
                }
                
                else{
                    cnt++;
            }
        }
        return cnt;
    }
};