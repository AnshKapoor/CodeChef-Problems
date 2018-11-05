import java.util.Scanner;

public class tester {
	static boolean isPrime(long n) 
    { 
        // Corner case 
        if (n <= 1) 
            return false; 
       
        // Check from 2 to n-1 
        for (int i = 2; i < n; i++) 
            if (n % i == 0) 
                return false; 
       
        return true; 
    } 

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int t;
		long  n;
		Scanner s = new Scanner(System.in);
		t= s.nextInt();
		while(t!=-1) {
			n =s.nextLong();
			if(isPrime(n)) {
				System.out.println("yes");
			}
			else System.out.println("no");
			t--;
		}
		
		
	}

}
