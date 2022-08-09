#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int sumPrime(int rangeLeft, int rangeRight){
    int answer=0;
    int largest=0, smallest=0;

    if(largest==0 && smallest==0){
            largest = rangeLeft;
            smallest = rangeRight;
    }
    for (int i = rangeRight; i >= rangeLeft; i--) {
        // Check for prime
        bool isPrime = checkPrime(i);
        if (isPrime) {
            if(largest < i){
                largest = i;
            }
            else if(smallest > i){
                smallest = i;
            }
        }

        cout << largest << " " << smallest << endl;
    }

    answer = largest + smallest;
    
    return answer;
}

int main() {
    int rangeLeft;
    cin >> rangeLeft;
    int rangeRight;
    cin >> rangeRight;

    int result = sumPrime(rangeLeft, rangeRight);
    cout << result;
    return 0;
}
