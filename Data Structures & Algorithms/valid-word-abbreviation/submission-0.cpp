class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0;
        int j = 0;

        while(i<word.size() && j<abbr.size()){
            if(word[i] == abbr[j]){  // If word in both string is same then move pointer in both strings
                i++;
                j++;
            }
            else{
                if(!isdigit(abbr[j])){  // Agar character match nahi hua and woh digit bhi nahi hai toh return false 
                    return false;
                }
                if(abbr[j] == '0'){  // If first number in abbr is 0 then return false
                    return false;
                }
                int num = 0;   // This stores the number reset after every number is found 
                while(j<abbr.size() && isdigit(abbr[j])){  // Agar j abbr ki size se kam hai and agar curr char in abbr is a digit start this loop
                    // Eg: no:- '12' then (num = 0*10 + ('1'-'0') = 1 --> 
                    // 1*10 + ('2'-'0') = 12, .'. num = 12)
                    num = num*10 + (abbr[j] - '0');  
                    j++;
                }
                i += num; // Jitna number num mein aaya i ko bhi utna position aage leke chalo
            }
        }
        return i == word.size() && j == abbr.size();
    }
};