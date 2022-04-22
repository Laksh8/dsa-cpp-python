#include<bits/stdc++.h>

using namespace std;


int main(){
    vector <int> nums1 = {1,4,9,5,56,64,68}; 
    vector <int> nums2 = {2,5,64,97,9,5};
    int p1=0,p2=0;
    
    int sum = nums1.size() + nums2.size();
    int flag=0;
    if(sum%2==0){
        flag=1;        
    }

    sum = (sum/2)+1;
    vector<int> temp;
    for(int i=0;i<sum;i++){
        if((nums1[p1]>nums2[p2]) or (nums1.size()-1 < p1)){
            temp.push_back(nums2[p2]);
            p2+=1;

        }else{
            temp.push_back(nums1[p1]);
            p1+=1;
        }
        
    }
    if(flag){
        // return 
        cout<< (temp.back()+temp[temp.size() -2])/2.0 ;
    }
    else{
        // return  
        cout<< temp.back();
    }
    return 0;

}