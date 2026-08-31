/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node*
_bottomRight) { val = _val; isLeaf = _isLeaf; topLeft = _topLeft; topRight = _topRight; bottomLeft =
_bottomLeft; bottomRight = _bottomRight;
    }
};
*/

class Solution {
   public:
    Node* hi(vector<vector<int>>& grid, int start, int end, int s) {
        int first = grid[start][end];
        bool same = true;

        for (int i = start; i < s + start; ++i) {
            for (int j = end; j < s + end; ++j) {
                if (grid[i][j] != first) {
                    same = false;
                    break;
                }
                if (!same) break;
            }
        }
        std::cout << same << " ";
        Node* root = new Node;
        if (same) {
            root->isLeaf = 1;
            root->val = first;
        } else {
            root->isLeaf = 0;
            root->val = 1;
            int sz = s / 2;
            // topLeft:
            root->topLeft = hi(grid, start, end, sz);

            // topRight:
            root->topRight = hi(grid, start, end + sz, sz);

            // bottomLeft: 
            root->bottomLeft = hi(grid, start + sz, end, sz);

            // bottomRight:
            root->bottomRight = hi(grid, start + sz, end + sz, sz);
        }
        return root;
    }
    Node* construct(vector<vector<int>>& grid) { return hi(grid, 0, 0, grid.size()); }
};