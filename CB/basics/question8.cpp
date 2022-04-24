#include<iostream>
using namespace std;

int main(){
    int source_x =0;
    int source_y = 0;
    int dest_x = 0,dest_y = 0;
    char path;
    while(true){
        path = cin.get();
        if(path=='\n')
            break;
        
        if(path=='N'){
            dest_y+=1;
        }
        else if(path=='S'){
            dest_y-=1;
        }
        else if(path=='E'){
            dest_x+=1;
        }
        else{
            dest_x-=1;
        }
    }
    if(dest_x>0 && dest_y>0 ){
        // I  print E X times and Y N times
        for(int i=0;i<dest_x;i++){
            cout<<"E";
        }
        for(int i=0;i<dest_y;i++){
            cout<<"N";
        }
    }else if( dest_x <0 && dest_y>0 ){
        //II
        // print 'N' y time and w -x times
        for(int i=0;i<dest_y;i++){
            cout<<"N";
        }
        for(int i=0;i<-dest_x;i++){
            cout<<"W";
        }

    }else if( dest_x <0 && dest_y<0 ){
        //III
        // print 'S' -y times and 'W' -x times
        for(int i=0;i<-dest_y;i++){
            cout<<"S";
        }
        for(int i=0;i<-dest_x;i++){
            cout<<"W";
        }
    }else{
        //IV
        // print 'E' x times and 'S' -y times
        for(int i=0;i<dest_x;i++){
            cout<<"E";
        }
        for(int i=0;i<-dest_y;i++){
            cout<<"S";
        }

    }


    return 0;
}