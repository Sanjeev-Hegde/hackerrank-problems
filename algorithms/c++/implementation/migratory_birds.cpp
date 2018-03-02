#include <iostream>
#include <map>
#include<algorithm>

using namespace std;

int migratoryBirds(map<int,int> m) {
  int biggest = 0;
  int smallestKey = 0;
  for(auto const& item: m){
    if(item.second>biggest){
        biggest=item.second;
        smallestKey = item.first;
    }
  }
  return smallestKey;
}

int main() {
    int n;
    cin >> n;
    map<int,int> m;
    int v;
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> v;
       if (m.count(v)>0)
            m[v] = m[v] + 1;
          else
            m[v] = 0;

    }
    int result = migratoryBirds(m);
    cout << result << endl;
    return 0;
}
