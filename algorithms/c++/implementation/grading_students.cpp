#include <iostream>
#include <vector>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    vector <int>result;
    for(int i=0;i<grades.size();i++){
        if(grades[i]<38)result.push_back(grades[i]);
        else {
            int raoundoffHelper = grades[i]%5;
            if(raoundoffHelper>=3){
                result.push_back(grades[i] + (5-raoundoffHelper));
            }
            else{
                result.push_back(grades[i]);
            }
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    return 0;
}
