class TrieNode {
public:
    
    bool isEnd;
    TrieNode* child[26];
    
    TrieNode() {
        
        isEnd = false;
        for(int i = 0; i < 26; i++)
            child[i] = NULL;
    }
};


class Trie {
public:
    
    TrieNode* root;
    
    Trie() {
        
        root = new TrieNode();
    }
    
    void insert(string word) {
        
        TrieNode* cur = root;
        
        for(char ch: word) {
            
            int index = ch - 'a';
            
            if(cur -> child[index] == NULL)
                cur -> child[index] = new TrieNode;
            
            cur = cur -> child[index];
        }
        
        cur -> isEnd = true;
    }
    
    bool search(string word) {
        
        TrieNode* cur = root;
        
        for(char ch: word) {
            
            int index = ch - 'a';
            
            if(cur -> child[index] == NULL)
                return false;
            
            cur = cur -> child[index];
        }
        
        return cur -> isEnd;
    }
    
    bool startsWith(string prefix) {
        
        TrieNode* cur = root;
        
        for(char ch: prefix) {
            
            int index = ch - 'a';
            
            if(cur -> child[index] == NULL)
                return false;
            
            cur = cur -> child[index];
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