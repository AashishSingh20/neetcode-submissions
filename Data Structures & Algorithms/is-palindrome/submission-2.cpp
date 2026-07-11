class Solution {
public:
    bool isPalindrome(string s) {
        
        int i = 0;
        int j = s.size()-1;

        while(i < j){
            if(!isalnum(s[i])){   // This is used to avoid non-alphanumeric characters
                i++;
                continue;
            }

            if(!isalnum(s[j])){
                j--;
                continue;
            }

            else if(tolower(s[i]) != tolower(s[j])){
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
};
