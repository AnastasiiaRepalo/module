#include <iostream>
#include <random>

using namespace std;


struct TreeNode {
    TreeNode(int value): value(value) {}
    TreeNode * left = nullptr;
    TreeNode * right = nullptr;

    int value;
};

TreeNode* head;
void Add(TreeNode*& node, int value) {
    if(node == nullptr)
        node = new TreeNode(value);
    else {
        if(node->value >= value)
            Add(node->left, value);
        else
            Add(node->right, value);
    }
}
int FindMin(TreeNode* node) {
    if(node->left == nullptr)
        return node->value;
    else
        return FindMin(node->left);
}
int main()
{
    for(int i = 0;i < 10;++i) {
        int value = rand() % 10 + 1;
        Add(head, value);
    }

    cout << FindMin(head) << '\n';
    return 0;
}