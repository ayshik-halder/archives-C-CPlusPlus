
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    // TreeNode structure for the Binary Search Tree (BST)
    // A BST has the left subtree being less than the root,
    // while the right subtree is greater than the root
    int data; // A Node contains data
    struct TreeNode* left, *right; // As well as pointers to the left and right children
    int is_leaf; // Check whether a node is a leaf node or not
}TreeNode;

TreeNode* make_treenode(int data) {
    // Construct a treenode pointer using data
    TreeNode* node = (TreeNode*) calloc (1, sizeof(TreeNode));
    node->data = data;
    node->left = node->right = NULL;
    node->is_leaf = 1;
    return node;
}

TreeNode* insert_bst(TreeNode* root, int data) {
    // Inserts data into it's appropriate position
    // in the BST
    if (!root) {
        // Make the root node
        root = make_treenode(data);
        return root;
    }
    else {
        // We need to insert to the existing root
        TreeNode* node = make_treenode(data);
        TreeNode* temp = root;
        while (temp) {
            if (temp->is_leaf) {
                // Inserting at a leaf node
                if (temp->data > data) {
                    // Insert to the left
                    temp->left = node;
                    temp->is_leaf = 0;
                    break;
                }
                else {
                    // Insert to the right
                    temp->right = node;
                    temp->is_leaf = 0;
                    break;
                }
            }
            else {
                // Non leaf node
                if (temp->data > data) {
                    // Go to the left subtree
                    if (temp->left == NULL) {
                        // If the left subtree is empty, add it here
                        // and break, since we've finished insertion
                        temp->left = node;
                        break;
                    }
                    temp = temp->left;
                }
                else {
                    // Go to the right subtree
                    if (temp->right == NULL) {
                        // If the left subtree is empty, add it here
                        // and break, since we've finished insertion
                        temp->right = node;
                        break;
                    }
                    temp = temp->right;
                }
            }
        }
    }
    return root;
}

int search_bst(TreeNode* root, int target) {
    // Searches for target in the BST
    if (!root)
        return 0;
    if (root->data == target)
        return 1;
    else if (root->data > target)
        return search_bst(root->left, target);
    else
        return search_bst(root->right, target);
    return 0;
}

void free_bst(TreeNode* root) {
    // Frees the complete BST from memory
    if (!root)
        return;
    free_bst(root->left);
    free_bst(root->right);
    free(root);
}

void print_search(TreeNode* root, int target) {
    if (search_bst(root, target) == 1) {
        printf("Value: %d found in the BST!\n", target);
    }
    else {
        printf("Value: %d is not found in the BST.\n", target);
    }
}

void print_bst(TreeNode* root) {
    // Prints the BST in an inorder traversal
    if (!root)
        return;
    print_bst(root->left);
    printf("Node: %d -> ", root->data);
    print_bst(root->right);
}


int main() {
    // Driver function for performing Binary Search Tree
    // operations
    TreeNode* root = make_treenode(45);
    root = insert_bst(root, 20);
    root = insert_bst(root, 15);
    root = insert_bst(root, 60);
    root = insert_bst(root, 40);
    root = insert_bst(root, 50);
    root = insert_bst(root, 70);
    print_bst(root);
    printf("\n");
    print_search(root, 15);
    print_search(root, 70);
    print_search(root, 35);
    free_bst(root);
    return 0;
}