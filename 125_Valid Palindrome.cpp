class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end   = s.size() - 1;
        while(start <= end){
            char lower_start = tolower(s[start]);
            char lower_end   = tolower(s[end]);

            if(isalnum(lower_start) == false){
                start++;
                continue;
            }
            
            if(isalnum(lower_end) == false){
                end--;
                continue;
            }

            if(lower_start == lower_end){
                start++;
                end--;
            }else{
                return false;
            }
        }

        return true;
    }
};
