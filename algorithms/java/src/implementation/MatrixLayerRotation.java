package implementation;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class MatrixLayerRotation {

        private static void matrixRotation(int[][] matrix,int r) {
            // Complete this function
            int m = matrix.length;
            int n = matrix[0].length;
            int numOfRectangles = Math.min(m,n)/2;
            for(int i=0;i<numOfRectangles;i++){
                List<Integer> tempList = new ArrayList<>(m*n);

                for (int j=i; j<n-i; j++) {
                    tempList.add(matrix[i][j]);
                }

                // right column, top to bottom
                for (int j=i+1; j<m-i; j++) {
                    tempList.add(matrix[j][n-1-i]);
                }

                // bottom row, right to left
                for (int j=n-2-i; j>=i; j--) {
                    tempList.add(matrix[m-1-i][j]);
                }

                // left column, bottom to top
                for (int j=m-2-i; j>i; j--) {
                    tempList.add(matrix[j][i]);
                }

                //rotate and store in matrix
                int listSize = tempList.size();
                int newPos = r%listSize;
                if(newPos>0){
                    for (int j=i; j<n-i; j++) {
                        matrix[i][j] = tempList.get(newPos);
                        newPos = (newPos+1) % listSize;
                    }

                    // right column, top to bottom
                    for (int j=i+1; j<m-i; j++) {
                        matrix[j][n-1-i] = tempList.get(newPos);
                        newPos = (newPos+1) % listSize;
                    }

                    // bottom row, right to left
                    for (int j=n-2-i; j>=i; j--) {
                        matrix[m-1-i][j] = tempList.get(newPos);
                        newPos = (newPos+1) % listSize;
                    }

                    // left column, bottom to top
                    for (int j=m-2-i; j>i; j--) {
                        matrix[j][i] = tempList.get(newPos);
                        newPos = (newPos+1) % listSize;
                    }
                }
            }
            for(int matrix_i = 0; matrix_i < m; matrix_i++){
                for(int matrix_j = 0; matrix_j < n; matrix_j++){
                    System.out.print(matrix[matrix_i][matrix_j]+" ");
                }
                System.out.println();
            }
        }

        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            int m = in.nextInt();
            int n = in.nextInt();
            int r = in.nextInt();
            int[][] matrix = new int[m][n];
            for(int matrix_i = 0; matrix_i < m; matrix_i++){
                for(int matrix_j = 0; matrix_j < n; matrix_j++){
                    matrix[matrix_i][matrix_j] = in.nextInt();
                }
            }
            matrixRotation(matrix,r);
            in.close();
        }

}
