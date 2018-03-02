#include <iostream>
#include <vector>

using namespace std;
bool isMultipleOfAllElementsOfVector(vector<int> a, int multiple){
        bool isMultipleOfAll = true;
        if(a.size()==0) isMultipleOfAll = false;
        for(int& item:a) {
                if((multiple%item)!=0) {
                        isMultipleOfAll = false;
                        break;
                }
        }
        return isMultipleOfAll;
}
bool isFactorOfAllElementsOfVector(vector<int> a, int factor){
        bool isFactorOfAll = true;
        if(a.size()==0) isFactorOfAll = false;
        for(int& item:a) {
                if((item%factor)!=0) {
                        isFactorOfAll = false;
                        break;
                }
        }
        return isFactorOfAll;
}

int getTotalX(vector <int> a, vector <int> b) {
        int maxMultipleOfA = b[0];
        int i=2;
        int maxIndexA = a.size()-1;
        int multiple =  a[maxIndexA];
        vector<int> multiplesOfA;
        while(multiple <= maxMultipleOfA) {
                if(isMultipleOfAllElementsOfVector(a,multiple))
                        multiplesOfA.push_back(multiple);
                multiple = a[maxIndexA]*i;
                ++i;
        }
        int totalCount = 0;
        for(int& factor:multiplesOfA) {
                if(isFactorOfAllElementsOfVector(b,factor)) totalCount++;
        }
        return totalCount;
}

int main() {
        int start_s=clock();
        // int n;
        // int m;
        // cin >> n >> m;
        // vector<int> a(n);
        // for(int a_i = 0; a_i < n; a_i++) {
        //         cin >> a[a_i];
        // }
        // vector<int> b(m);
        // for(int b_i = 0; b_i < m; b_i++) {
        //         cin >> b[b_i];
        // }
        vector<int> a{2,4};
        vector<int> b{16,32,96};
        int total = getTotalX(a, b);
        cout << total << endl;
        int stop_s=clock();
        cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
        return 0;
}
