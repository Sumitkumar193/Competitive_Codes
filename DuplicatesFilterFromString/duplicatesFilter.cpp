#include <iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    // int len = s.length();

    for(int k=0; k<n ; k++){
        string temp;
        for(size_t i=0; i<=s.length(); i++){
            if(s[i] == s[i+1]){
                i = i+1;
                continue;
            }else{
                temp += s[i];
            }
        }
        s = temp;
    }
    
    cout << s;

    return 0;
}
