question- https://leetcode.com/problems/implement-trie-prefix-tree/
video - https://www.udemy.com/course/cpp-data-structures-algorithms-levelup-prateek-narang/learn/lecture/23469982#announcements


class Node{
    public:
     char key;
    map<char,Node*> m;
    bool isTerminal;
    Node(char keyy) {
       key=keyy;
        isTerminal=false;
    }
};

class Trie {
public:
    /** Initialize your data structure here. */
   Node* root;
    Trie()
    {
       root= new Node('\0');
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
      
		Node* temp = root;

		for(char ch : word){

			if(temp->m.count(ch)==0){
				Node *n = new Node(ch);
				temp->m[ch] = n;
			}
			temp = temp->m[ch];
		}

		temp->isTerminal = true;
    }
    
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
    Node*temp = root;

		for(char ch : word){

			if(temp->m.count(ch)==0){
				return false;
			}
			temp = temp->m[ch];


		}
		return temp->isTerminal;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
         Node*temp=root;
        for(char ch : prefix)
        {
            if(temp->m.count(ch)==0){
                return false;
            }
           temp=temp->m[ch];
        }
      
        return true;
       
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
