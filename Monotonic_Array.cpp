class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool increasing = true, decreasing = true;
        for(int i = 0; i < A.size() - 1; i++)
        {
            if(A[i] > A[i+1]) //if the next value is less than the value we're in, than the array is not increasing
                increasing = false;

            if(A[i] < A[i+1])//if the next value is more than the value we're in, than the array is not decreasing
                decreasing = false;

        }
        return increasing || decreasing;
    }
};

//increasing    decreasing          result
//    T             F               =   T
//    F             T               =   T
//    T             T               =   T
//    F             F               =   F