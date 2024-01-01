#include<bits/stdc++.h>;
using namespace std;

// DATE : 01/01/2023

// TASK 1 : FIND SECOND LARGEST

// url : https://practice.geeksforgeeks.org/problems/second-largest3735/1

// Time complexity : O(n) ; Space complexity : O(1)

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int mx=arr[0];
	    for(int x=0;x<n;x++){
	        mx=max(mx,arr[x]);
	    }
	    int smax=0;
	    for(int x=0;x<n;x++){
	        if(smax<arr[x] && arr[x]<mx)smax=arr[x];
	    }
	    if(smax==0)return -1;
	    return smax;
	}
};

//---------------------------------------------------------------------------------------------------------------//

// TASK 2 : MISSING NUMBER

// url : https://leetcode.com/problems/missing-number/description/

// Time complexity : O(n) ; Space complexity : O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int t=0;
        int s=nums.size();
        int sum=(s*(s+1))/2;
        for(int x=0;x<s;x++){
            t+=nums[x];
        }
        return sum-t;
    }
};

//_______________________________________________________________________________________________________________//
//_______________________________________________________________________________________________________________//