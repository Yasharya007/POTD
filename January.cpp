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



//_______________________________________________________________________________________________________________//
//___________________________________________04/01/2023__________________________________________________________//

// DATE : 04/01/2023

// TASK 1 :  Longest Common Prefix

// url : https://leetcode.com/problems/longest-common-prefix/description/

// Time complexity : O(n*m) ; Space complexity : O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string nstr="";
        bool match=true;
        int a=0;
        while(match==true){
             for(int t=0;t<strs.size();t++){
                 if(a==strs[t].size()){
                     match =false;
                     break;
                 }
                if(strs[t][a]!=strs[0][a]){
                    match=false;
                    break;
                }
        }
         if(match){
            nstr+=strs[0][a];
            a++;
        }else break;
        }
        return nstr;
       
    }
};

//---------------------------------------------------------------------------------------------------------------//

// TASK 2 :  Rotate String

// url : https://leetcode.com/problems/rotate-string/description/

// Time complexity : O(n*m) ; Space complexity : O(1)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        s=s+s;
        if(s.find(goal)<s.size())return true;
        return false;
    }
};



//_______________________________________________________________________________________________________________//
//___________________________________________05/01/2023__________________________________________________________//

// DATE : 05/01/2023

// TASK 1 :  Love Story

// url : https://codeforces.com/contest/1829/problem/A

// Time complexity : O(1) ; Space complexity : O(1)

#include<iostream>
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        string s="codeforces";
        int count=0;
        for(int x=0;x<10;x++){
            if(s[x]!=n[x])count++;
        }
        cout<<count<<endl;
    }
 
return 0;
}

//---------------------------------------------------------------------------------------------------------------//

// TASK 2 :  Valid Anagram

// url : https://leetcode.com/problems/valid-anagram/description/

// Time complexity : O(n) ; Space complexity : O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        int snum[130]={0};
        for(int x=0;x<s.size();x++){
            snum[s[x]]++;
        }

        for(int x=0;x<t.size();x++){
            snum[t[x]]--;
        }

        for(int x=97;x<123;x++){
            if(snum[x]!=0){
                return false;
            }
        }
        return true;
    }
};



//_______________________________________________________________________________________________________________//
//___________________________________________06/01/2023__________________________________________________________//

// DATE : 06/01/2023

// TASK 1 :  New Palindrome

// url : https://codeforces.com/problemset/problem/1832/A

// Time complexity : O(n) ; Space complexity : O(1)

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        vector<int> hash(26,0);
        for(auto x:n){
            hash[x-97]++;
        }
        int count=0;
        for(auto x:hash){
            if(x>1)count++;
        }
        if(count>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
return 0;
}

//---------------------------------------------------------------------------------------------------------------//

// TASK 2 :  Jump Game II

// url : https://leetcode.com/problems/jump-game-ii/description/

// Time complexity : O(n^2) ; Space complexity : O(1)

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n,INT_MAX);
        hash[n-1]=0;
        for(int x=n-2;x>=0;x--){
            int y=1;
            while(y<=nums[x] && x+y<n){
                hash[x]=min(hash[x],1+hash[x+y]);
                y++;
            }
            if(hash[x]==INT_MAX)hash[x]--;
        }
        return hash[0];
    }
};


