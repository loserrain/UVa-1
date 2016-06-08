import java.util.Scanner;
import java.math.BigInteger;

class Main {
	void solve() {
		BigInteger a, b;
		String temp;
		Scanner sc = new Scanner(System.in);

		while(sc.hasNext()) {
			a = sc.nextBigInteger();
			b = sc.nextBigInteger();

			System.out.println(a.multiply(b));
		}
	}

	public static void main(String args[]) {
		Main obj = new Main();
		obj.solve();
	}
}