class Solution {
public:
    char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' +'a';
        return temp;
    }
}

    bool valid(char ch){
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9'){
            return true;
        }
        return false;
    }


    bool isPalindrome(string s) {
        int st=0;
        int end=s.size()-1;

        while(st <= end){
            if(!valid(s[st])){
                st++;
            }
            else if(!valid(s[end])){
                end--;
            }
            else if(tolowercase(s[st]) != tolowercase(s[end])){
                return false;
            }
            else{
                st++;
                end--;

            }
        }
        return true;
    }
};