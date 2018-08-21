
// problem link : https://www.codechef.com/problems/FCTRL2

import java.math.*;
import java.util.Scanner;
 class smallFactorial {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s= new Scanner(System.in);
		int t= s.nextInt();
		for(int i=0;i<t;i++){
			
			int n= s.nextInt();
			BigInteger b= new BigInteger("1");
			
			for(int j=1;j<=n;j++){
				b=b.multiply(BigInteger.valueOf(j));
			}
			System.out.println(b);
		
	}
       }
}
