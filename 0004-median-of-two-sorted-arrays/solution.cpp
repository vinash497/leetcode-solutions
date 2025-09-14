class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       list<int>l1,l2;
        vector<int>vec;
        for(auto i : nums1)
        l1.push_back(i);
        for(auto i : nums2)
        l2.push_back(i);
        l1.merge(l2);
        for(auto i : l1)
        vec.push_back(i);
        int c = vec.size();
        for(int i = 0;i < vec.size();i++) cout << vec[i] << " ";
        if(vec.size() % 2 == 0) {
            return (vec[c / 2] + vec[(c / 2 ) - 1]) / 2.0;
        }
        else return vec[c / 2];  
    }
};
