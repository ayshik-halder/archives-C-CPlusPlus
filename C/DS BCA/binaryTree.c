
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
	
    int data; 
    struct TreeNode* left, *right; 
    int is_leaf; 
}TreeNode;

TreeNode* make_treenode(int data) {
    TreeNode* node = (TreeNode*) calloc (1, sizeof(TreeNode));
    node->data = data;
    node->left = node->right = NULL;
    node->is_leaf = 1;
    return node;
}

TreeNode* insert_bst(TreeNode* root, int data) {

    if (!root) {
    
        root = make_treenode(data);
        return root;
    }
    else {
        
        TreeNode* node = make_treenode(data);
        TreeNode* temp = root;
        while (temp) {
            if (temp->is_leaf) {             
                if (temp->data > data) {
                    temp->left = node;
                    temp->is_leaf = 0;
                    break;
                }
                else {
                    temp->right = node;
                    temp->is_leaf = 0;
                    break;
                }
            }
            else {
                if (temp->data > data) {
                    if (temp->left == NULL) {
                        temp->left = node;
                        break;
                    }
                    temp = temp->left;
                }
                else {
                    if (temp->right == NULL) {
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

void print_bst(TreeNode* root) {
    // Prints the BST in an inorder traversal
    if (!root)
        return;
    print_bst(root->left);
    printf("Node: %d -> ", root->data);
    print_bst(root->right);
}


int main() {

    int n=0,i, x=0, search,base;
	printf("\n Enter no. of nodes ");
	scanf("%d",&n);
	printf("Enter root value");
	scanf("%d",&base);
    TreeNode* root = make_treenode(base);
    for(i=0;i<n;i++)
    {
    	printf("\n Enter node %d : ",i+1);
    	scanf("%d",&x);
    	root = insert_bst(root, x);
    	
	}
    print_bst(root);
    free_bst(root);
    return 0;
}
