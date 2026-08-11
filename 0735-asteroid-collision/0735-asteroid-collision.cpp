class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for(int x : asteroids){
            if(x > 0 || ans.empty()) ans.push_back(x);
            else{
                bool destroy=false;
                while(!ans.empty() && ans.back() > 0 && x < 0){
                   if(abs(ans.back()) > abs(x)){ destroy = true; break;}
                   else if(abs(ans.back()) == abs(x)){ ans.pop_back();destroy = true; break;}
                   else{ ans.pop_back();}
                }
                if(!destroy)
                {
                    ans.push_back(x);
                }
            }
        }
        
        return ans;
    }
};