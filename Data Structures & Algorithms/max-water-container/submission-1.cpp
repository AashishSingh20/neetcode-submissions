class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int left = 0;
        int right = n-1;

        int mostWater = 0;

        while(left < right){
            // Store the minimum height as utna hi paani store hoga
            int height = min(heights[left],heights[right]);

            // difference between left and right index multiplied by smaller 
            // line will get us total water stored between left and right index
            mostWater = max(mostWater, height*(right-left));

            // Jis line ka height chhota hai us index ko aage bada denge
            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }

        return mostWater;
    }
};
