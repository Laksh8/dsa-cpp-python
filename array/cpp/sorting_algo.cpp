#include<iostream>

using namespace std;


int create_array(int arr[],int s);
int display_array(int arr[],int s);
int insertion_sort(int arr[],int s);
int selection_sort(int arr[],int s);
int bubble_sort(int arr[],int s);
int cycle_rotation(int arr[],int s,int number_of_times);

int main(){

    int n=10;
    cout<<"Enter Length of Array :";
    cin>>n;
    int arr[10];
    cout<<"Enter 10 Elements in array :";
    create_array(arr,n);
    cycle_rotation(arr,n,3);
    display_array(arr,n);

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

int cycle_rotation(int arr[],int s,int number_of_times){
    for(int i=0;i<number_of_times;i++){
        int temp = arr[s-1];
        for(int j=s-1;j>0;j--){
            arr[j] = arr[j-1];
        }
        arr[0]=temp;
    }
    return 0;
}

int insertion_sort(int arr[],int s){
    int brr[20];
    for(int i=0;i<s;i++){
        brr[i] = arr[i];
    }
    for(int i=0; i<s;i++){
        for(int j=1;j<i;j++){
            if(brr[i]>brr[j]){

            }
        }
    }
    return 0;
}
int selection_sort(int arr[],int s){
    int brr[20];
    for(int i=0;i<s;i++){
        brr[i] = arr[i];
    }
    return 0;
}
int bubble_sort(int arr[],int s){
    int brr[20];
    for(int i=0;i<s;i++){
        brr[i] = arr[i];
    }
    return 0;
}