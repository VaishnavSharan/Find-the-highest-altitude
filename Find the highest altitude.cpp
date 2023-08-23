
#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int s=0,ans=0;
        for(auto i : gain){
            s+=i;
            ans=max(s,ans);

        }
        return ans;
    }
};