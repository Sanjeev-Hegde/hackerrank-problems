#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int birthdayCakeCandles(vector <int> ar) {
    // Complete this function
    int tallestCandleHeight = *max_element(ar.begin(),ar.end());
    int numOfTallestCndles = 0;
    for(vector<int>::iterator it=ar.begin();it!=ar.end();it++){
      if(*it == tallestCandleHeight )
      numOfTallestCndles++;
    }
    return numOfTallestCndles;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(ar);
    cout << result << endl;
    return 0;
}
