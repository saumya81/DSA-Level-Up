https://www.youtube.com/watch?v=RzNYwhSQjHQ
https://leetcode.com/explore/featured/card/august-leetcoding-challenge-2021/616/week-4-august-22nd-august-28th/3920/
-------------------------------------------------------

class Solution {
public:
    bool isValidSerialization(string preorder) {
           // Capacity is number of leaf node needed in valid tree.
        
        // Initialy tree can have 1 node (root) either null or value.
        int capacity = 1;
        stringstream ss(preorder); 
        string node;
        while(getline(ss, node, ',')) {
            // We enter in while loop means there is a value either node or leaf.
            // So we need 1 less leaf for above tree
            capacity--;
            
            // Number of leaf needed is negetive is not posible.
            if(capacity < 0)
                return false;
            
            // If we encounter another node than it has 2 more leafs so adding 2 in capacity.
            if(node != "#")
                capacity += 2;
        }
        
        // Final capacity should be zero for valid tree.
        return capacity == 0; 

        
    }
};


