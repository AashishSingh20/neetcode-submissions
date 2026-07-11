class Solution {
private:
    void reverse(vector<char>& s, int start, int end){
        while(start<end){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
public:
    void reverseWords(vector<char>& s) {
        int n = s.size();
        int start = 0;
        for(int i=0;i<=s.size();i++){
            if(i == s.size() || s[i] == ' '){
                int end = i-1;
                reverse(s,start,end);
                start = i+1;
            }
        }
        reverse(s,0,n-1); 
    }
};
