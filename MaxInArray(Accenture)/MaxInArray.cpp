#include<bits/stdc++.h>
using namespace std;

void MaxInArray(vector<int> k, int length) {
    int max = *max_element(k.begin(), k.end());
    vector<int>::iterator it;
    it = find(k.begin(), k.end(), max);
    cout << max << endl << it-k.begin();
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        arr.push_back(j);
    }
    MaxInArray(arr, n);
    return 0;
}
