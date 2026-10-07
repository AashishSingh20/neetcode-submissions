class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i=n-1;i>=0;i--){
            // If digit is less than 9 increase current digit by 1 and return;
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }

            // If digit is 9
            // Just lastdiigit ko 0 bana do one +1 next element mein add ho jayega
            digits[i] = 0;
        }

        // If all digits are 9
        // Add 1 to the 1st position in the array
        digits.insert(digits.begin(),1);

        return digits;
    }
};
