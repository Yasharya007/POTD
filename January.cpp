#include<bits/stdc++.h>;
using namespace std;


//_______________________________________________________________________________________________________________//
//___________________________________________01/01/2023__________________________________________________________//

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
//___________________________________________02/01/2023__________________________________________________________//

// DATE : 02/01/2023

// TASK 1 :  Number of Good Pairs

// url :https://leetcode.com/problems/number-of-good-pairs/

// Time complexity : O(n) ; Space complexity : O(1)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> result(101);
        int count=0;
        for(int x=0;x<nums.size();x++){
            result[nums[x]]++;
        }
        for(int x=0;x<result.size();x++){
            count+=(result[x]*(result[x]-1))/2;
        }
        return count;
    }
};

//---------------------------------------------------------------------------------------------------------------//

// TASK 2 :  Union of two arrays

// url :https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1

// Time complexity : O(n) ; Space complexity : O(1)

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> hash;
        for(int x=0;x<n;x++)hash.insert(a[x]);
        for(auto x=0;x<m;x++)hash.insert(b[x]);
        return hash.size();
    }
};



//_______________________________________________________________________________________________________________//
//___________________________________________03/01/2023__________________________________________________________//

// DATE : 03/01/2023

// TASK 1 :  Decreasing Sequence

// url : https://www.geeksforgeeks.org/problems/decreasing-sequence2722/1

// Time complexity : O(n) ; Space complexity : O(1)

int minMoves(int a[], int n, int k)
{
    int count=0;
    int t;
    for(int x=1;x<n;x++){
        if(a[x]>a[x-1]){
            t=a[x]-a[x-1];
            if(t%k==0){
                count+=t/k;
                a[x]=a[x-1];
            }else{
                count+=t/k+1;
                a[x]-=(t/k+1)*k;
            }
            count%=1000000007;
        }
    }
    return count;
}

//---------------------------------------------------------------------------------------------------------------//

// TASK 2 :  Majority Element

// url : https://leetcode.com/problems/majority-element/

// Time complexity : O(nlogn) ; Space complexity : O(logn)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //sort function hash logn space complexity
        int n=nums.size();
        return nums[n/2];
    }
};


