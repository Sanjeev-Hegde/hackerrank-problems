package implementation;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class DIvisibleSum {

    private static int divisibleSumPairs(List<Integer> list,int k){
        int count = 0;
        for(int i=0;i<list.size();i++){
            for(int j=i+1;j<list.size();j++){
                if((list.get(i)+list.get(j))%k == 0) count++;
            }
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        List<Integer> list = new ArrayList<>(n);
        for(int ar_i = 0; ar_i < n; ar_i++){
            list.add(in.nextInt());
        }
        System.out.println(divisibleSumPairs(list,k));
    }
}
