class Solution {
public:

    int maxDiameter=0;
    int diameterRecur(TreeNode* root){
        if(!root)
            return 0;
        
        
        int lHeight = diameterRecur(root->left);
        int rHeight = diameterRecur(root->right);
        
        if(lHeight+ rHeight>maxDiameter)
            maxDiameter=lHeight + rHeight;
        
        return 1+ max(lHeight,rHeight);
            
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDiameter =0;
        diameterRecur(root);
        return maxDiameter;
    }
};