#include <iostream>
#include "queue"

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Pre-order traversal: Root, Left, Right
void preorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    std::cout << root->value << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// In-order traversal: Left, Root, Right
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    std::cout << root->value << " ";
    inorderTraversal(root->right);
}

// Post-order traversal: Left, Right, Root
void postorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    std::cout << root->value << " ";
}

void bfs(TreeNode* root){
    if(root == nullptr){
        return; 
    }

    std::queue<TreeNode*> q; 
    q.push(root);

    while(!q.empty()){
        root = q.front(); 

        q.pop();

        std::cout << root->value << " " ;

        if(root->left != nullptr) q.push(root->left);
        if(root->right != nullptr) q.push(root->right);
    }

}

void preorder(TreeNode* root){
    if(root == nullptr){
        return;
    }

    std::cout << root->value << " "; 

    preorder(root->left);
    preorder(root->right);
}

void inorder(TreeNode* root){
    if(root == nullptr) return; 

    inorder(root->left);
    std::cout << root->value << " "; 
    inorder(root->right);
}

void postorder(TreeNode* root){
    if(root == nullptr) return; 

    postorder(root->left);
    postorder(root->right);
    std::cout << root->value << " ";

}

void invert(TreeNode* root){
    if(root == nullptr) return; 

    invert(root->left);
    invert(root->right); 

    TreeNode* tmp = root->left;
    root->left = root->right;
    root->right = tmp; 
}

bool check(TreeNode* n1, TreeNode* n2){
    if(n1 == nullptr && n2 == nullptr) return true;

    if(n1 == nullptr || n2 == nullptr) return false;

    if(n1->value != n2->value) return false; 

    bool res1 = check(n1->left, n2->right);
    bool res2 = check(n1->right, n2->left);

    if(res1 == res2) return true; 
    else return false; 
}

bool isSymmetric(TreeNode* root){
    if(root == nullptr) return true; 

    return check(root->left, root->right);
}

void printLeaf(TreeNode* root){
    if(root == nullptr) return;

    if(root->left == nullptr && root->right == nullptr){
        std::cout << root->value << ' '; 
        return;
    }

    printLeaf(root->left); 
    printLeaf(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    TreeNode* left = new TreeNode(2);
    TreeNode* right = new TreeNode(3);
    root->left = left;
    root->right = right;

    TreeNode* left_left = new TreeNode(4);
    TreeNode* left_right = new TreeNode(5);
    left->left = left_left;
    left->right = left_right;

    TreeNode* right_left = new TreeNode(6);
    TreeNode* right_right = new TreeNode(7);
    right->left = right_left;
    right->right = right_right;

    /* 
    // Traversal example: Pre-order (Root, Left, Right)
    std::cout << "Pre-order traversal 1: ";
    preorderTraversal(root);
    std::cout << std::endl;

    std::cout << "Pre-order traversal 2: ";
    preorder(root);
    std::cout << std::endl << std::endl;

    // Traversal example: In-order (Left, Root, Right)
    std::cout << "In-order traversal 1: ";
    inorderTraversal(root);
    std::cout << std::endl;

    std::cout << "In-order traversal 2: ";
    inorder(root);
    std::cout << std::endl << std::endl;
    
    // Traversal example: Post-order (Left, Right, Root)
    std::cout << "Post-order traversal 1: ";
    postorderTraversal(root);
    std::cout << std::endl;

    std::cout << "Post-order traversal 2: ";
    postorder(root);
    std::cout << std::endl << std::endl;
    */

    std::cout << "LEAFS Pre: ";
    printLeaf(root);
    std::cout << std::endl << std::endl;

    //BFS
    std::cout << "BFS traversal Pre: ";
    bfs(root);
    std::cout << std::endl << std::endl;

    invert(root);

    std::cout << "LEAFS post: ";
    printLeaf(root);
    std::cout << std::endl << std::endl;

    std::cout << "BFS traversal Post: ";
    bfs(root);
    std::cout << std::endl << std::endl;

    bool sym = isSymmetric(root); 
    std::cout << "Symmetry: " << sym << std::endl;

    return 0;
}
