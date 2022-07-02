/*
https://hack.codingblocks.com/app/contests/2675/1057/problem
When we calculate the mid point 'm', we ask the question 
	can 'k' painters paint 'n' boards of given 'len' in 'm' amt. of time ?
	
	now, we can rephrase this question in two ways 
	1. how many painters are required to paint 'n' boards of given 'len' in 'm' amt. of time ?
	
	   say, 'x' painters can paint 'n' boards of given 'len' in 'm' amt. of time then
	   
	   case (a)
	   now, if x <= k then that means 'k' painters can also paint 'n' boards of given 'len' 
	   in 'm' amt. of time so we get 'true' and move towards the left to minimize time
	
	   case (b)
	   if x > k then that means 'k' painters cannot paint 'n' boards of given 'len' in 'm'
	   amt. of time i.e we get false and move towards the right.
    2. how many boards of given 'len' can 'k' painters paint in 'm' amt. of time ? 
*/

#include<iostream>
#include<climits>
using namespace std;

int canBeDone(int arr[],int k,int n,int mid){
	int time = 0;
	int noOfPainters = 1;
	int i=0;
	while(i<n){
		time += arr[i];
		if(time>mid){
			noOfPainters++;
			time = 0;
			continue;
		}
		i++;
	}
	return noOfPainters;
}


int binary_search(int arr[],int k,int n,int lower,int upper,int prev){
	// base case
	if(lower>upper){
		return prev;
	}

	// recursive case
	int mid = lower + (upper-lower)/2;
	if(canBeDone(arr, k, n, mid) <= k){
		prev = mid; 
		return binary_search(arr,k,n,lower,mid-1,prev);
	}else{
		return binary_search(arr,k,n,mid+1,upper,prev);
	}

}

int main(){
	int k; // Number of Painters 
	int n; // Number of Boards
	cin>>k>>n;
	int arr[n];
	for(int i=0;i<n;cin>>arr[i],i++);
	int upper = 0;
	int lower = INT_MIN;
	for(int i=0;i<n;i++){
		lower = max(lower,arr[i]);
		upper += arr[i];
	}
	
	int prev = upper;
	cout<<binary_search(arr,k,n,lower,upper,prev);

    return 0;
}