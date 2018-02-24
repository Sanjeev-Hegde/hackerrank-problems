#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>


using namespace std;

std::vector<std::string> splitByDelimeter(string& timeString, char delim) {
        vector<string> timeVector;
        string item;
        istringstream timeStream(timeString);
        while(getline(timeStream,item,delim))
        {
                timeVector.push_back(item);
        }
        return timeVector;
}

string timeConversion(string s) {
        vector<string> timeVector = splitByDelimeter(s,':');
        int hhInt = stoi(timeVector[0]);
        string mm = timeVector[1];
        string ss = timeVector[2].substr(0,2);
        string timeFormat = timeVector[2].substr(2);
        if(timeFormat == "AM") {
                hhInt = hhInt%12;
        }
        else{
                hhInt = (hhInt%12)+12;
        }
        string hh = (hhInt<10 ? "0" : "")+to_string(hhInt);

        return hh+":"+mm+":"+ss;

}

int main() {
        //int start_s=clock();
        string s;
        cin >> s;
        //  s = "12:23:45AM"; // takes 120 ms avg
        string result = timeConversion(s);
        cout << result << endl;
        //int stop_s=clock();
        //cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;

        return 0;
}
