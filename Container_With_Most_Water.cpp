//=========== Brute Force ================
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        for(int i = 0; i < height.size(); i++)
        {
            for(int j = i + 1; j < height.size(); j++)
                maxarea = max(maxarea, min(height[i], height[j]) * (j - i));
        }
        return maxarea;
    }
};


//===========Two Pointers=============
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0, l = 0, r = height.size() - 1;
        while(l < r)
        {
            if(height[l] > height[r]) 
            {
                maxarea = max(maxarea, height[r] * (r - l));
                r--;                 
            }
            else
            {
                maxarea = max(maxarea, height[l] * (r - l));
                l++;
            }
        }
        return maxarea;
    }
};

//Time complexity = O(N)
//Space complexity = O(1)