package implementation;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ApplesAndOranges {
    private static int numOfFruitsInside(List<Integer> fruits,int s,int t,int a){
      return  (int) fruits.stream().filter((Integer distance) -> {
            int tempDistA = a+distance;
            return (s<=tempDistA)&& (tempDistA<=t);
        }).count();
    }
    private static void countApplesAndOranges(int s,int t,int a, int b, List<Integer> apples, List<Integer> oranges){
        System.out.println(numOfFruitsInside(apples,s,t,a));
        System.out.println(numOfFruitsInside(oranges,s,t,b));
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int t = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();

        List<Integer> apples = new ArrayList<>(n);
        for(int ar_i = 0; ar_i < m; ar_i++){
            apples.add(in.nextInt());
        }
        List<Integer> oranges = new ArrayList<>(n);
        for(int ar_i = 0; ar_i < n; ar_i++){
            oranges.add(in.nextInt());
        }
        countApplesAndOranges(s, t, a, b, apples, oranges);
    }
}
