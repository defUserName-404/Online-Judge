import AlgorithmStudyPlan.TreeNode;

class Solution {

	public TreeNode invertTree(TreeNode root) {
		if (root == null) {
			return null;
		}
		TreeNode leftNode = invertTree(root.left);
		root.left = invertTree(root.right);
		root.right = leftNode;
		return root;
	}

}
