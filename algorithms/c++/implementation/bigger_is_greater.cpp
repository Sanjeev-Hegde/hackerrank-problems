#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string biggerIsGreater(string w) {
    // Complete this function

    if(w.length()==1)return "no answer";
    int i,j;
    for(i = w.length()-2;i>=0;i--){
      //cout<<w[i]<<endl;
      if(w[i]<w[i+1])break;
    }
    if(i==-1) return "no answer";
    else{
      int lastBiggestPos;
      string result ="";
      for(int k=0;k<i;k++)result +=w[k]; //include all elements untill w[i]
      //find next highest integer after w[i]
      for(j=i+1;j<w.length();j++){
          if(w[i]<w[j]){
              lastBiggestPos = j;
          }
          else break;
          //cout<<nextBiggest;
      }
      if(j==w.length()){ // if all later elements are greater than w[i], just sort
          sort(w.begin()+i+1, w.end());
          result +=w[i+1];
          result +=w[i];
          for(int k=i+2;k<w.length();k++)result +=w[k];
      }
      else{
          int temp = w[lastBiggestPos];
          w[lastBiggestPos]=w[i];
          w[i] = temp;
          sort(w.begin()+i+1, w.end());
          for(int k=i;k<w.length();k++)result +=w[k];
      }
      return result;
    }
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        string w;
        cin >> w;
        string result = biggerIsGreater(w);
        cout << result << endl;
    }
    return 0;
}
