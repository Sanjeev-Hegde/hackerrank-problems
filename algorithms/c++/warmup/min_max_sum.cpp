#include <iostream>
#include <algorithm>
#include<array>
using namespace std;

void printMinMax(array<int,5> &intArray){
        sort(intArray.begin(),intArray.end());
        long int minSum=0;
        long int maxSum=0;
        for(int i=0;i<4;i++)
        {
          minSum +=intArray[i];
          maxSum +=intArray[intArray.size()-i-1];
        }
        cout << minSum<<" "<<maxSum<<endl;
}
int main(){
        array<int, 5> intArray;
        for(int i=0; i<5; i++)
                cin>>intArray[i];

        printMinMax(intArray);

        return 0;
}
