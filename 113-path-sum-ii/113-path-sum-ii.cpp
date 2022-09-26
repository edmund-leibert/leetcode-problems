#include <iostream>
#include <vector>
#include <memory>
#include "TreeNode.hpp"

// template <class T>
// class twoDimensionalVector {
//   public:
//     std::vector<std::vector<T>> twoDimensionalVectorData;

//     // twoDimensionalVector() {
//     //   T x;
//     //   std::vector<T> a;
//     //   a.push_back(x);
//     //   twoDimensionalVectorData.push_back(a);
//     // }
// };

void treeTraversalDFSPreOrder(struct TreeNode* node) {
    if(node == nullptr) {
      return;
    }
    std::cout << node->val << " ";// // visit (node)
    treeTraversalDFSPreOrder(node->left);
    treeTraversalDFSPreOrder(node->right);
}
void treeTraversalDFSInOrder(struct TreeNode* node) {
    if(node == nullptr) {
      return;
    }
    treeTraversalDFSInOrder(node->left);
    std::cout << node->val << " ";// // visit (node)
    treeTraversalDFSInOrder(node->right);
}
void treeTraversalDFSPostOrder(struct TreeNode* node) {
    if(node == nullptr) {
      return;
    }
    treeTraversalDFSPostOrder(node->left);
    treeTraversalDFSPostOrder(node->right);
    std::cout << node->val << " ";// // visit (node)
}

void treeTraversalRootToLeavesPaths(struct TreeNode* node, std::vector<std::vector<int>>* rootToLeavesPaths = nullptr) {
    if(node == nullptr) {
      return;
    }
    std::cout << node->val << " ";// // visit (node)
    treeTraversalRootToLeavesPaths(node->left);
    treeTraversalRootToLeavesPaths(node->right);
}


int main() {
  // Create example Tree Nodes 
  struct TreeNode* root =  new TreeNode (5); 

  // Generate more TreeNodes to be example tree
  root->left = new TreeNode (4);
  root->left->left = new TreeNode (11);
  root->left->left->left = new TreeNode (7);
  root->left->left->right = new TreeNode (2);
  root->right = new TreeNode (8);
  root->right->left = new TreeNode (13);
  root->right->right = new TreeNode (4);
  root->right->right->left = new TreeNode (5);
  root->right->right->right = new TreeNode (1);

  // Visualize treeTraversalDFS
  {
    treeTraversalDFSPreOrder(root);
    std::cout << std::endl;
    treeTraversalDFSInOrder(root);
    std::cout << std::endl;
    treeTraversalDFSPostOrder(root);
    std::cout << std::endl;
  }

  // Visualize rootToLeavesPath 
  twoDimensionalVector<TreeNode*>* rootToLeavesPaths;
  // rootToLeavesPaths->twoDimensionalVectorData.push_back();

  // treeTraversalRootToLeavesPaths(root);

  std::cout << "Starting program..." << std::endl;
  return 0;
}