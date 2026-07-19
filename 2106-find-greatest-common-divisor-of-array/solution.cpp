class Solution {
public:
    int gcd(int a,int b){
        while(b != 0){
         int rem = b;
         b = a % b;
         a = rem;
        }
    return a;
}
    int findGCD(vector<int>& nums) {
        int maximum = *max_element(nums.begin(),nums.end());
        int minimum = *min_element(nums.begin(),nums.end());

        return gcd(maximum,minimum);
    }
};
