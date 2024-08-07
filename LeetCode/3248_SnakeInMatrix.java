import java.util.List;

class Solution {

	public int finalPositionOfSnake(int n, List<String> commands) {
		Position position = new Position(0, 0, n);
		for (String command : commands) {
			switch (command) {
				case "UP":
					position.moveUp();
					break;
				case "DOWN":
					position.moveDown();
					break;
				case "LEFT":
					position.moveLeft();
					break;
				case "RIGHT":
					position.moveRight();
					break;
				default:
					throw new IllegalArgumentException("Invalid command: " + command);
			}
		}
		return position.cellNo();
	}

}

class Position {

	private int x;
	private int y;
	private final int n;

	public Position(int x, int y, int n) {
		this.x = x;
		this.y = y;
		this.n = n;
	}

	public int cellNo() {
		return (x * n) + y;
	}

	public void moveUp() {
		x--;
	}

	public void moveDown() {
		x++;
	}

	public void moveLeft() {
		y--;
	}

	public void moveRight() {
		y++;
	}

}
