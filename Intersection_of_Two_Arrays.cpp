class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;
        
        for(auto n1 : nums1)
            s1.insert(n1);
            
        for(auto n2 : nums2)
        {
            if(s1.count(n2))
                s2.insert(n2);
        }
        vector<int>result(s2.begin(), s2.end());
        
        return result;
    }
};

//Time Complexity = O(n+m)
//Space Complexity = O(n+m)
