#include <bits/stdc++.h>
using namespace std;

int maxEnergy(vector<int> ener){
    int answer=0;
    int secMax=0;
    int max = *max_element(ener.begin(), ener.end());
    for (size_t i = 0; i < ener.size(); i++)
    {
        int c = max * ener[i];
        if(answer > c){
            continue;
        }else if(answer < c && ener[i] != max){
            answer =c;
            secMax = ener[i];
        }
    }
    answer = max+secMax;
    return answer;
}

int main(){
    vector<int> ener;
    int nums;
    cin >> nums;
    for(int id=0; id < nums; id++){
        int temp;
        cin >> temp;
        ener.push_back(temp);
    }
    int result = maxEnergy(ener);
    cout << result;
    return 0;
}
