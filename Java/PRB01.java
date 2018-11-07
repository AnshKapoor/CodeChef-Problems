import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while (t-- > 0) {
            int n = s.nextInt();
            if ( isPrime(n)){
                System.out.println("yes");
            }else { 
                System.out.println("no");
            }
        }

    }

    public static boolean isPrime(int n) {
        if (n == 1 || (n % 2 == 0 && n != 2)) {
            return false;
        }

        int sqrt = (int) Math.sqrt(n);
        for (int i = 3; i <= sqrt; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;

    }
}
