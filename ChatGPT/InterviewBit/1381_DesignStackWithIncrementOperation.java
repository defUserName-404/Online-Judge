class CustomStack {
    private final int[] stack;
    private final int maxSize;
    private int currentIndex;

    public CustomStack(int maxSize) {
        this.maxSize = maxSize;
        stack = new int[maxSize];
        currentIndex = 0;
    }

    public void push(int x) {
        if (currentIndex < maxSize) {
            stack[currentIndex++] = x;
        }
    }

    public int pop() {
        if (currentIndex == 0) {
            return -1;
        }
        return stack[--currentIndex];
    }

    public void increment(int k, int val) {
        if (stack.length == 0) {
            return;
        }
        for (int i = 0; i < k && i < stack.length; i++) {
            stack[i] += val;
        }
    }
}

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack obj = new CustomStack(maxSize);
 * obj.push(x);
 * int param_2 = obj.pop();
 * obj.increment(k,val);
 */