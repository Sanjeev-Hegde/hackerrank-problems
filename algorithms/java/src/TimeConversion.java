import java.util.Scanner;
public class TimeConversion {
    private static String timeConversion(String s) {
        // Complete this function


        String[] timeArray = s.split(":");
       // System.out.println(Arrays.toString(timeArray));
        Integer hh = Integer.parseInt(timeArray[0]);
        String mm = timeArray[1];
        String ss = timeArray[2].substring(0,2);
        Boolean isPM = timeArray[2].substring(2).toUpperCase().equals("PM");

        if(isPM)
        {
            hh = (hh%12)+12;
        }
        else{
            hh = hh%12;
        }
        String hhStr = (hh<10?"0":"") + hh.toString();
        return hhStr+":"+mm+":"+ss;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = timeConversion(s);
        System.out.println(result);
    }
}
