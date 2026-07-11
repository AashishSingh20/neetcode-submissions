class Solution {
public:
    bool isPalindrome(string s) {
        
        int i = 0;
        int j = s.size()-1;

        while(i < s.size()){
            if(!isalnum(s[i])){   // This is used to avoid non-alphanumeric characters
                i++;
                continue;
            }

            else if(!isalnum(s[j])){
                j--;
                continue;
            }

            else if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};
