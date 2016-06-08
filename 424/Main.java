import java.util.Scanner;
import java.math.BigInteger;

class Main {
	static void getSum() {
		BigInteger input, sum;
		Scanner sc = new Scanner(System.in);

		sum = new BigInteger("0");

		while(true) {
			input = sc.nextBigInteger();

			if(input.compareTo(BigInteger.ZERO) == 0)
				break;

			sum = sum.add(input);
		}

		System.out.println(sum);
	}

	public static void main(String args[]) {
		Main obj = new Main();
		obj.getSum();
	}
}