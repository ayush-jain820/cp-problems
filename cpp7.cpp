#include<bits/stdc++.h>
using  namespace std;


int main(){


    int t ;
    cin>>t;




    while(t--){
int n,k,sum;

cout<< "enter the value of n k and sum"<<endl;
cin>>n>>k>>sum;



int min_sum = k*(k+1)/2;

int max_sum = n*(n+1)/2 - (n-k)*(n-k+1)/2;


if(sum>=min_sum &&  sum <= max_sum){
    cout<< "YES"<<endl;
}
else{
    cout<< "NO"<<endl;
}



    }
}