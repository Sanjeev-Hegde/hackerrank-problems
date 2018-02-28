#include <bits/stdc++.h>

using namespace std;

int numFruitsInside(vector<int> fruits,int s,int t,int a){
    int numFruits = 0;
    int tempDistA=0;
    for(int& distance:fruits){
        tempDistA =a+distance;
        if( (s<=tempDistA)&& (tempDistA<=t)) numFruits++;
    }
    return numFruits;
}
void countApplesAndOranges(int s, int t, int a, int b, vector <int> apples, vector <int> oranges) {
    // Complete this function
    cout<< numFruitsInside(apples,s,t,a)<<endl;
    cout<<numFruitsInside(oranges,s,t,b)<<endl;
}

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange[orange_i];
    }
    countApplesAndOranges(s, t, a, b, apple, orange);
    return 0;
}