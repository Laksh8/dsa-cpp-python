#include<bits/stdc++.h>
using namespace std;


int rob(vector<int> nums, int n,int house ,vector<int> &dp ){
    
    
    // base case
    
    if(house>=n){
        return dp[house] = 0;
    }
    // look up
    if(dp[house] != -1){
        return dp[house];
    }


    // recursive case
    
    int ans = max( rob(nums,n,house+1,dp), rob(nums,n,house+2,dp) + nums[house] );

    return dp[house] = ans;
}



int rob_bottom_up(vector<int> nums ){
    vector<int> dp(nums.size(),0);
    int n = nums.size();
    dp[n-1] = 0;
    for(int i=n;i>=0;i--){
        dp[i] =  max( 
            ( i+1 >= n ? 0 : dp[i+1]),
            ( i+2 >= n ? nums[i] : dp[i+2] + nums[i])
        );
    }

    return dp[0];

}



// A.objects.filter(
//     id__in=B.objects.filter(x=1).values_list(
//         'a_id'))


// class A:
//     pass

// class B:
//     a = A
//     x = INT


// A.objects.filter(A_b__x=1)



// [1,2,3,1]
// [2,7,9,3,1]

int main(){

    vector<int> nums = {1,2,3,1};
    int n = nums.size();
    vector<int> dp(n,-1);
    cout<<rob(nums,n,0,dp)<<endl;
    cout<<rob_bottom_up(nums)<<endl;
    return 0;
}