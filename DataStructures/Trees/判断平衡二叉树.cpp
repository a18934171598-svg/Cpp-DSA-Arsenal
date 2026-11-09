//#include<iostream>
//using namespace std;
//
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
// 
//// 需要一个获得深度的方法
// struct MyException : public exception
// {
//     const char* what() const noexcept override
//     {
//         return"不是一棵平衡树";
//     }
// };
//
//// 采用中序遍历
//
//class Solution {
//public: 
//    int getTreeDepth(TreeNode* root) {
//        if (root == NULL) return 0;
//        return max(getTreeDepth(root->left), getTreeDepth(root->right)) + 1;
//    }
//    // 中序遍历 
//    bool isBalanced(TreeNode* root) {
//        return InOrder(root);
//        
//    }
//
//    //bool InOrder(TreeNode* t) {
//    //    if (t != NULL) {  // 中序遍历的骨架
//
//    //        // 左
//    //        if (!InOrder(t->left)) return false;
//
//    //        int lef = getTreeDepth(t->left);
//    //        int rig = getTreeDepth(t->right);
//    //        if (lef - rig == -2 || rig - lef == -2) {
//    //            return false;
//    //        }
//    //        // 大小排序
//    //        int lef_val, rig_val;
//    //        if (t->left) { // 左边有
//    //            if(t->left->val >= t->val)return false;
//    //        }
//    //        if (t->right) {
//    //            if (t->right->val <= t->val)return false;
//    //        }
//    //        // 右
//    //        if (!InOrder(t->right)) return false;
//    //    }
//    //    return true;
//    //}   有序的
//
//    bool InOrder(TreeNode* t) {
//        if (t != NULL) {  // 中序遍历的骨架
//
//            // 左
//            if (!InOrder(t->left)) return false;
//
//            int lef = getTreeDepth(t->left);
//            int rig = getTreeDepth(t->right);
//            if (lef - rig <= -2 || rig - lef <= -2) {  // 不是刚好不平衡
//                return false;
//            }
//            // 大小排序
//            //int lef_val, rig_val;
//            //if (t->left) { // 左边有
//            //    if (t->left->val >= t->val)return false;
//            //}
//            //if (t->right) {
//            //    if (t->right->val <= t->val)return false;
//            //}
//             
//            if (!InOrder(t->right)) return false;
//        }
//        return true;
//    }
//};
//int main() {
//    Solution s;
//    TreeNode t5(5,NULL,NULL);    // 静态没有new 动态有new
//    TreeNode t4(4,NULL,&t5);   
//    TreeNode t2(2,NULL,NULL);    
//    TreeNode t3(3,&t2,&t4);   
//    TreeNode root(1,NULL,&t3);    
//    
//    cout<<s.isBalanced(&root);
//}