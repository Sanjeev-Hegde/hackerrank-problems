import java.io.*;
        import java.util.*;
        import java.text.*;
        import java.math.*;
        import java.util.regex.*;

public class BirthdayCandles {

    private static int birthdayCakeCandles(List<Integer> ar) {
        // Complete this function
       int tallestCandleLength  = Collections.max(ar);
       return (int) ar.stream().filter(candleLength->candleLength == tallestCandleLength).count();
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        List<Integer> ar = new ArrayList<>(n);
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar.add(in.nextInt());
        }
        int result = birthdayCakeCandles(ar);
        System.out.println(result);
    }
}
