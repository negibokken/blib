#include "./include/bokken.h"

namespace bokken {

TreeNode *buildTree(vector<int> &nums) {
  if (nums.size() == 0) return nullptr;
  int idx = 0;
  TreeNode *root = new TreeNode(nums[idx]);
  queue<TreeNode *> q;
  q.push(root);
  while (!q.empty()) {
    TreeNode *cur = q.front();
    q.pop();
    TreeNode *left = nullptr, *right = nullptr;
    if (idx + 1 < nums.size() && nums[idx + 1] != -1) {
      left = new TreeNode(nums[idx + 1]);
    }
    if (idx + 2 < nums.size() && nums[idx + 2] != -1) {
      right = new TreeNode(nums[idx + 2]);
    }
    idx += 2;
    cur->left = left, cur->right = right;
    if (cur->left != nullptr) q.push(cur->left);
    if (cur->right != nullptr) q.push(cur->right);
  }
  return root;
}

}  // namespace bokken
