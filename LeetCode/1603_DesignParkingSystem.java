import java.util.HashMap;
import java.util.Map;

enum CarType {

	BIG(1),
	MEDIUM(2),
	SMALL(3);

	private final int type;

	CarType(int type) {
		this.type = type;
	}

	public int getType() {
		return type;
	}
}

class ParkingSystem {

	private Map<CarType, Integer> cars;

	public ParkingSystem(int big, int medium, int small) {
		cars = new HashMap<>();
		cars.put(CarType.BIG, big);
		cars.put(CarType.MEDIUM, medium);
		cars.put(CarType.SMALL, small);
	}

	public boolean addCar(int carType) {
		CarType[] allCarTypes = CarType.values();
		int left = 0;

		for (final CarType currentCarType : allCarTypes) {
			if (currentCarType.getType() == carType) {
				left = cars.get(currentCarType);
				cars.put(currentCarType, left - 1);
			}
		}

		return (left > 0);
	}
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem obj = new ParkingSystem(big, medium, small);
 * boolean param_1 = obj.addCar(carType);
 */