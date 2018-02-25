#include <iostream>

using namespace std;

void staircase(int n) {
    // Complete this function
    for(int i=0;i<n;i++)
    cout<< string(n-i-1, ' ')<<string(i+1,'#')<<endl;
}

int main() {
    int n;
    cin >> n;
    staircase(n);
    return 0;
}

