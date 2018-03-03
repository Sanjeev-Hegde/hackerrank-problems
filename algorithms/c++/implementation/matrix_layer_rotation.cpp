#include <iostream>
#include <vector>
using namespace std;

void getFinalPositionAfterRotation(int minI,int maxI,int minJ,int maxJ,int r, int& i,int& j){
    int maxRotation= (maxJ - minJ)*2 + (maxI-minI)*2;
    r=r%maxRotation; // reduce multiple un necessary full rotations if present
    for(int k=0;k<r;k++){ //rotate r times to get final position
        if((i == minI)&&(j>minJ)) j--;      //top side of matrix
        else if((j == minJ)&&(i<maxI))i++;  //left most side
        else if((i == maxI)&&(j<maxJ))j++;  //bottom side
        else i--;
    }
}

void matrixRotation(vector < vector<int> > matrix, int r) {

    int finalI = 0;
    int finalJ = 0;
    int m=matrix.size();
    int n=matrix[0].size();
   // cout<<m<<":"<<n<<endl;
    vector< vector<int> > rotatedMatrix(m,vector<int>(n));
    int numOfRectangles = m<n?m/2:n/2;
    for(int min =0; min<numOfRectangles; min++){
                for(int i=min;i<m-min; i++){
                   for(int j=min; j<n-min;j++){
                        if((i==min)||(j==min)||(i==(m-min-1))||(j==(n-min-1))){
                             finalI = i;
                             finalJ = j;
                             getFinalPositionAfterRotation(min,m-min-1,min,n-min-1,r,finalI,finalJ);
                            // cout<<"i:"<<finalI<<",j:"<<finalJ<<",value:"<<matrix[i][j]<<endl;
                             rotatedMatrix[finalI][finalJ] = matrix[i][j];
                        }
                   }
                }
    }
    for(int matrix_i = 0;matrix_i < m;matrix_i++){
       for(int matrix_j = 0;matrix_j < n;matrix_j++){
          cout << rotatedMatrix[matrix_i][matrix_j]<<" ";
       }
       cout<<endl;
    }

}

int main() {
    int m;
    int n;
    int r;
    cin >> m >> n >> r;
    vector< vector<int> > matrix(m,vector<int>(n));
    for(int matrix_i = 0;matrix_i < m;matrix_i++){
       for(int matrix_j = 0;matrix_j < n;matrix_j++){
          cin >> matrix[matrix_i][matrix_j];
       }
    }
    matrixRotation(matrix,r);

// int i=0;
// int j=2;
// getFinalPositionAfterRotation(0,4,0,3,20,i,j);
// cout<<i<<":"<<j;
    return 0;
}
