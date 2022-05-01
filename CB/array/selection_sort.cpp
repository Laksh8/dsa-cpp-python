#include<iostream>

using namespace std;

int main(){

    int arr[100];
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" Elements in an Array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"====================Insertion Sort================== "<<endl;
    
    for(int i=0;i<n;i++){
        int min_index = i;
        for(int j=i+1;j<n-1;j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
    }

    cout<<"====================Sorting Done==================="<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}