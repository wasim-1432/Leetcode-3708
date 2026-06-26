#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int len=2,res=2;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i-1]+nums[i-2]==nums[i])
            {
                len++;
            }
            else
            {
                len=2;
            }
            res=max(res,len);
        }
        return res;
    }
};