import java.util.Stack;

class BrowserHistory {

	private final Stack<String> historyBack = new Stack<>();
	private final Stack<String> historyForward = new Stack<>();

	public BrowserHistory(String homepage) {
		historyBack.push(homepage);
		historyForward.clear();
	}

	public void visit(String url) {
		historyBack.push(url);
		historyForward.clear();
	}

	public String back(int steps) {
		while (steps > 0 && historyBack.size() > 1) {
			historyForward.push(historyBack.pop());
			steps--;
		}
		return historyBack.peek();
	}

	public String forward(int steps) {
		while (steps > 0 && !historyForward.isEmpty()) {
			historyBack.push(historyForward.pop());
			steps--;
		}
		return historyBack.peek();
	}

}

/*
  Your BrowserHistory object will be instantiated and called as such:
  BrowserHistory obj = new BrowserHistory(homepage);
  obj.visit(url);
  String param_2 = obj.back(steps);
  String param_3 = obj.forward(steps);
 */
