#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> breakingRecords(vector <int> scores) {
    // Complete this function
    int maxScore = scores[0];
    int minScore = scores[0];
    vector<int> recordCounts(2,0);
    int maxScoreRecordCount = 0;
    int minScoreRecordCount = 0;
    for(int i=1;i<scores.size();i++){
        if(scores[i]>maxScore){
            maxScore = scores[i];
            recordCounts[0]++;
        }
        if(scores[i]<minScore){
            minScore = scores[i];
            recordCounts[1]++;
        }
    }
    return recordCounts;
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
