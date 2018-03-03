package implementation;

import java.util.*;

public class MigratoryBirds {

    private static int migratoryBirds(TreeMap<Integer,Integer> birdsObservations) {
        int biggest = 0;
        int smallestKey = 0;
        for(Map.Entry<Integer,Integer> entry: birdsObservations.entrySet()){
            if(entry.getValue()>biggest){
                biggest = entry.getValue();
                smallestKey = entry.getKey();
            }
        }
        return smallestKey;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        TreeMap<Integer,Integer> birdsObservations = new TreeMap<>();
        for(int ar_i = 0; ar_i < n; ar_i++) {
            int birdID = in.nextInt();
            if (birdsObservations.containsKey(birdID))
                birdsObservations.put(birdID, birdsObservations.get(birdID) + 1);
            else
                birdsObservations.put(birdID, 0);
        }
        int result = migratoryBirds(birdsObservations);
        System.out.println(result);
    }
}
