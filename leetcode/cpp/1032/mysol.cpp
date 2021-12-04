/*
    Runtime: 228 ms, faster than 78.96% of C++ online submissions for Stream of Characters.
    Memory Usage: 107.9 MB, less than 38.24% of C++ online submissions for Stream of Characters.

    memory requirements of Trie is O(ALPHABET_SIZE * key_length * N) where N is number of keys in Trie

    Time Complexity: Insert and search costs O(key_length)
    Space Complexity: O(ALPHABET_SIZE * key_length * N) where N is number of keys in Trie 
*/

class TrieNode {
public:
    int isEnd = false;
    TrieNode* children[26]; 
    
    TrieNode() {
        for (int i = 0; i < 26; ++i)
            children[i] = 0;
    }
    
    ~TrieNode() {
        for (int i = 0; i < 26; ++i)
            free(children[i]);
    }
};

class StreamChecker {
public:
    
    StreamChecker(vector<string>& words) {
        root = new TrieNode();
        for (string w : words) 
            insert(w, root);
    }
    
    void insert(string word, TrieNode* root) {
        TrieNode *curr = root;
        int idx;
        for (int i = word.size()-1; i > -1; --i) {
            idx = word[i] - 'a';
            if (!curr->children[idx])
                curr->children[idx] = new TrieNode();
            curr = curr->children[idx];
        }
        curr->isEnd = true;
    }
    
    bool query(char letter) {
        stream.push_front(letter);
        
        TrieNode* curr = root;
        
        for(int i = 0; i < stream.size(); ++i) {
            
            if (curr->isEnd) return true;
            
            int index = stream[i] - 'a';
            curr = curr->children[index];
            if (!curr) return false;
        }
        
        return curr->isEnd;
    }
    
private:
    deque<char> stream;
    TrieNode* root;
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */