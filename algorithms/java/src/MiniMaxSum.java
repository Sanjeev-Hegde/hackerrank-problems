import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class MiniMaxSum {

    static void printMinMaxSum(List<Integer> integerList){
        Collections.sort(integerList);
        long minSum = 0;
        long maxSum = 0;
        for(int i=0; i<4; i ++)
        {
            minSum += integerList.get(i);
            maxSum += integerList.get(4-i);
        }
        System.out.println(minSum + " "+ maxSum);
    }

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        List<Integer> list= new ArrayList<Integer>(5);
        for(int i =0 ; i<5 ; i ++)
        {
         list.add(in.nextInt());
        }
        in.close();
        printMinMaxSum(list);
    }
}
