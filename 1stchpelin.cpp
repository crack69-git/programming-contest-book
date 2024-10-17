/*n times palindrome number*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i<10){
            cout<<i<<endl;
        }
        else{
            int k=i,rem=0;
            while(k>0){
                int last=k%10;
                rem=rem*10+last;
                k/=10;
            }
            if(rem==i){
                cout<<i<<endl;
            }
        }
    }
return 0;
}
