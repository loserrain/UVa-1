import java.util.Scanner;
import java.math.BigInteger;

class Main {
	public static void main(String args[]) {
		int i, n;

		BigInteger fibo[] = new BigInteger[5001];

		fibo[0] = BigInteger.valueOf(0);
		fibo[1] = BigInteger.valueOf(1);

		for(i=2; i<=5000; i++)
			fibo[i] = fibo[i-1].add(fibo[i-2]);

		Scanner sc = new Scanner(System.in);

		while(sc.hasNext()) {
			n = sc.nextInt();
			System.out.println("The Fibonacci number for " + n + " is " + fibo[n]);
		}
	}
}