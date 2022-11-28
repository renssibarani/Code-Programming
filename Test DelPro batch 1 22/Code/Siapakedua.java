import java.io.*;
import java.util.*;
public class Siapakedua {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        List<Integer> arr = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            arr.add(scan.nextInt());
        }
        if(n == 3){
         arr.sort(Comparator.reverseOrder());
        Set<Integer> set = new HashSet<>(arr);
        System.out.println(set.toArray()[set.size()- 1]);   
        }else{
            arr.sort(Comparator.reverseOrder());
        Set<Integer> set = new HashSet<>(arr);
        System.out.println(set.toArray()[set.size()- 2]);
        }
    }
}