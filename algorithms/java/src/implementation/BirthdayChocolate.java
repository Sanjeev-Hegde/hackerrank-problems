package implementation;

import java.util.*;

public class BirthdayChocolate {

    private static int solve(List<Integer> chocolates,int m,int d){
        int numberOfDifferentWays=0;
        for(int i=0;i<chocolates.size();i++){
            if((i+m)<=chocolates.size()){
               if(chocolates.subList(i,i+m).stream().reduce((a,b)->a+b).get() == d)numberOfDifferentWays++;
            }
            else break;
        }
        return numberOfDifferentWays;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        List<Integer> chocolates = new ArrayList<>(n);
        for(int ar_i = 0; ar_i < n; ar_i++){
            chocolates.add(in.nextInt());
        }
        int d = in.nextInt();
        int m = in.nextInt();

        System.out.println(solve(chocolates,m,d));
    }
}
