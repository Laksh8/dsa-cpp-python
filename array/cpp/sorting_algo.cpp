#include<iostream>

using namespace std;


int create_array(int arr[],int s);
int display_array(int arr[],int s);
int insertion_sort(int arr[],int s);
int selection_sort(int arr[],int s);
int bubble_sort(int arr[],int s);
int cycle_rotation(int arr[],int start,int end,int number_of_times);

int main(){

    int n=10;
    // cout<<"Enter Length of Array :";
    // cin>>n;
    int arr[n] = {4,5,3,12,16,11,7,99,1,10};
    // cout<<"Enter 10 Elements in array :";
    // create_array(arr,n);
    cout<<"PREV:"<<endl;
    display_array(arr,n);
    insertion_sort(arr,n);

    return 0;
}

int create_array(int arr[],int s){
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
}

int display_array(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int cycle_rotation(int arr[],int start,int end,int number_of_times=1){
    // cout<<endl<<"before Cyclic Rotation :"<<endl;
    // for(int i=start;i<=end;i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int i=0;i<number_of_times;i++){
        int temp = arr[end];
        for(int j=end;j>start;j--){
            arr[j] = arr[j-1];
        }
        arr[start]=temp;
    }
    // cout<<endl<<"AFTER Cyclic Rotation :"<<endl;
    // for(int i=start;i<=end;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}

// Insertion Sort
int insertion_sort(int arr[],int s){
    int brr[100];
    for(int i=0;i<s;i++){
        brr[i] = arr[i];
    }
    for(int i=0; i<s;i++){
        for(int j=0;j<i;j++){
            if(brr[i]<brr[j]){
                cycle_rotation(brr,j,i);
            }
        }
    }
    cout<<endl<<"Insertion Sort ARRAY :"<<endl;
    for(int i=0;i<s;i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}

// Selection Sort
int selection_sort(int arr[],int s){
    int brr[100];
    for(int i=0;i<s;i++){
        brr[i] = arr[i];
    }

    cout<<endl<<"Selection Sort ARRAY :"<<endl;
    for(int i=0;i<s;i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}

// Bubble Sort
int bubble_sort(int arr[],int s){
    int brr[100];
    for(int i=0;i<s;i++){
        brr[i] = arr[i];
    }

    cout<<endl<<"Bubble Sort ARRAY :"<<endl;
    for(int i=0;i<s;i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}