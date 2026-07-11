int binarySearch(int n){
    long long int low = 0;
    long long int high = n;
    int sqrt = -1;

    while(low<=high){
        long long int mid = low+(high-low)/2;
        long long int square = mid*mid;

        if(square == n){
            return mid;
        }

        else if(square < n){
            sqrt = mid;
            low = mid+1;
        }

        else{
            high = mid-1;
        }
    }
    return sqrt;
}

class Solution {
public:
    int mySqrt(int x) {
       int result =  binarySearch(x);
    
    return result;
    }
};