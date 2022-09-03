#include<bits/stdc++.h>
using namespace std;  

int* NextSmallerNumber(int a[], int m){
    
    //check if a is null
    if(a == NULL){
        return NULL;
    }
    for(int i = 0; i < m; i++){
        if(a[i] > a[i+1]){
            a[i] = a[i+1];
        }else{
            for(int j = i; j < m; j++){
                if(a[i] > a[j]){
                    a[i] = a[j];
                    break;
                }else if(j == m-1){
                    a[i] = -1;
                    break;
                }
            }
            
        }
    }

    for(int i = 0; i < m; i++) {
        cout << a[i] << " ";
    }

    return a;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    NextSmallerNumber(a,n);

    return 0;
}
