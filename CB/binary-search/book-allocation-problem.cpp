#include<iostream>
#include<climits>

using namespace std;

pair<int ,int> can_read(int arr[],int n,int m,int mid){
    int pages = 0;
    int no_of_readers = 0;
    int max_pages = 0;
    int i = 0;
    // cout<<"N";
    while(i<n){
        pages += arr[i];
        // cout<<"HI"<<endl;
        if(pages>mid){        
            max_pages = max(max_pages,pages - arr[i]);
            pages = 0;
            no_of_readers++;
            continue;
        }
        i++;
    }
    pair<int ,int> pr;

    pr.first = no_of_readers;
    pr.second = max_pages;
    cout<<no_of_readers<<endl<<max_pages<<endl;
    return pr ;
}

int binary_search(int arr[],int n,int m){

    int upper = 0,lower = INT_MIN;
    for(int i=0;i<n;i++){
        upper += arr[i];
        lower = max(lower,arr[i]);
    }
    // cout<<"LOWER "<<lower<<"\nUpper "<<upper<<endl;
    int prev = upper;
    pair <int,int> pr;
    while(true){
        // cout<<"function called";
        int mid = lower + (upper - lower)/2;
        pr = can_read(arr,n,m,mid);
        if( pr.first <= m){
            prev = mid;
            upper = mid-1;
        }
        else{
            lower = mid+1;
        }
        if(lower>upper){
            return pr.second;
        }
    }
    // return pr.second;
}



int main(){
    int t; // Number of Test cases
    cin>>t;
    while(t--){
        int n,m; // 'n' Number of Bookes. 'm' Number of Students
        cin>> n>>m;
        int arr[n]; // arr[i] = lenth if book at ith position
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<binary_search(arr,n,m);
    }


    return 0;
}