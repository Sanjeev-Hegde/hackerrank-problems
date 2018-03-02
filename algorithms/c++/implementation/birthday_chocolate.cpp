#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int solve(vector < int > s, int d, int m){
    // Complete this function
    int numOfDifferentWays = 0;
    for(int i=0;i<s.size();i++){
        if((i+m)<=s.size()){
            int sum = accumulate(s.begin()+i,s.begin()+i+m,0);
            if(sum==d)numOfDifferentWays++;
        }
        else{
            break;
        }
    }
    return numOfDifferentWays;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(s, d, m);
    cout << result << endl;
    return 0;
}
