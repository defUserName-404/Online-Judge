import java.util.ArrayList;
import java.util.List;

public class SpecialPythagorianTriplet_9 {

	private List<Triplet> triplets = new ArrayList<>();

	private void generatePythagorianTriplet(int sumOfTheTriplet) {
		for (int i = 1; i < sumOfTheTriplet; i++) {
			for (int j = i; j < sumOfTheTriplet; j++) {
				for (int k = j; k < sumOfTheTriplet; k++) {
					if (Math.pow(i, 2) + Math.pow(j, 2) == Math.pow(k, 2))
						triplets.add(new Triplet(i, j, k));
				}
			}
		}
	}

	public int getPythagorianTriplet(int sumOfTheTriplet) {
		generatePythagorianTriplet(sumOfTheTriplet);

		for (final Triplet triplet : triplets) {
			int a = triplet.getA();
			int b = triplet.getB();
			int c = triplet.getC();
			System.out.println(triplet);
			if (a + b + c == sumOfTheTriplet)
				return a * b * c;
		}

		return 0;
	}

}

class Triplet {

	private final int a, b, c;

	public Triplet(int a, int b, int c) {
		this.a = a;
		this.b = b;
		this.c = c;
	}

	public int getA() {
		return a;
	}

	public int getB() {
		return b;
	}

	public int getC() {
		return c;
	}

	@Override
	public String toString() {
		return "[a = " + a + ", b = " + b + ", c = " + c + "]";
	}

}
