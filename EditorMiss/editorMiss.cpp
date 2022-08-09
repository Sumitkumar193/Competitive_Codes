#include <bits/stdc++.h>
using namespace std;

int editorMiss(string textInput){
    int result=0;

    for(int i=0; i < textInput.length(); i++){
        int asc = textInput[i];
        if(asc >= 65 && asc <= 90 ){
            continue;
        }else if(asc >= 97 && asc <= 122){
            continue;
        }else if(asc >= 48 && asc <= 57){
            continue;
        }else if(asc == 32){
            continue;
        }else{
            result += 1;
        }
    }

    return result;
}

int main(){
    string textInput;
    getline(cin, textInput);
    int result = editorMiss(textInput);
    cout << result;
}
