#include<bits/stdc++.h>
using namespace std;

void sort(int arr[] ,int n );



void targetSum(int arr[], int n, int target)
{
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(arr[i]+arr[j] == target and i != j){
				cout<<arr[i]<<" and "<<arr[j]<<endl;
			}
		}
	}
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	sort(arr,n);
	// for(int i=0;i<n; cout<<arr[i] ,i++);
	// cout<<endl;
	targetSum(arr,n,n);
	return 0;
}



void sort(int arr[],int n){
	//bubble sort

	for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=1;j<n-i;j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
                flag=false;
            }
        }
        if(flag){
            break;
        }
    }

}