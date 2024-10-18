#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x>=1 && y>=1){
        cout<<"1st quadrant.";
    }
    else if(x<=-1 && y>=1){
        cout<<"2nd quadrant.";
    }
    else if(x<=-1 && y<=-1){
        cout<<"3rd quadrant.";
    }
    else if(x>=1 && y<=-1){
        cout<<"4th quadrant.";
    }
return 0;
}
