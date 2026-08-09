class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0;
        int j = 0;

        while(i<word.size() && j<abbr.size()){
            if(word[i] == abbr[j]){ 
                i++;
                j++;
            }
            else{
                // Agar character match nahi hua and woh digit bhi nahi hai toh
                // return false 
                if(!isdigit(abbr[j])){  
                    return false;
                }
                // If first number in abbr is 0 then return false
                if(abbr[j] == '0'){  
                    return false;
                }
                // This stores the number reset after every number is found 
                int num = 0;             
                // Agar j abbr ki size se kam hai and agar curr char in
                // abbr is a digit start this loop
                while(j<abbr.size() && isdigit(abbr[j])){  
                    // Eg: no:- '12' then (num = 0*10 + ('1'-'0') = 1) --> 
                    // (1*10 + ('2'-'0') = 12, .'. num = 12)
                    num = num*10 + (abbr[j] - '0');  
                    j++;
                }
                // Jitna number num mein aaya i ko bhi utna position aage leke chalo
                i += num; 
            }
        }
        // Checks if both the numbers have been processed returns True if both True
        return i == word.size() && j == abbr.size(); 
    }
};