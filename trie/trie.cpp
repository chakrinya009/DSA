#include <bits/stdc++.h>
using namespace std;

struct Trienode {
    struct Trienode* children[26];
    int wordcount = 0;
    
    Trienode() {
        for(int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
    }
};

void insertkey(Trienode* root, string str) {
    Trienode* currnode = root;
    for(char c : str) {
        if(currnode->children[c - 'a'] == NULL) {
            Trienode* newnode = new Trienode;
            currnode->children[c - 'a'] = newnode;
        }
        currnode = currnode->children[c - 'a'];
    }
    currnode->wordcount++;
}



bool isprefix(Trienode* root, string str) {
    Trienode* currnode = root;
    for(char c : str) {
        if(currnode->children[c - 'a'] == NULL) {
            return false;
        }
        currnode = currnode->children[c - 'a'];
    }
    return true;
}

bool searchkey(Trienode* root, string str) {
    Trienode* currnode = root;
    for(char c : str) {
        if(currnode->children[c - 'a'] == NULL) {
            return false;
        }
        currnode = currnode->children[c - 'a'];
    }
    return currnode->wordcount > 0;
}

bool delete_key(Trienode* root, string word)
{
    Trienode* currentNode = root;
    Trienode* lastBranchNode = NULL;
    char lastBrachChar = 'a';

    for(auto c : word) {
        if (currentNode->children[c - 'a'] == NULL) {
            return false;
        }
        else {
            int count = 0;
            for (int i = 0; i < 26; i++) {
                if (currentNode->children[i] != NULL)
                    count++;
            }

            if (count > 1) {
                lastBranchNode = currentNode;
                lastBrachChar = c;
            }
            currentNode = currentNode->children[c - 'a'];
        }
    }

    int count = 0;
    for(int i = 0; i < 26; i++) {
        if (currentNode->children[i] != NULL)
            count++;
    }

    
    if(count > 0) {
        currentNode->wordcount--;
        return true;
    }


    if (lastBranchNode != NULL) {
        lastBranchNode->children[lastBrachChar] = NULL;
        return true;
    }

    else {
        root->children[word[0]] = NULL;
        return true;
    }
}


int main() {
    Trienode* root = new Trienode;
    
    insertkey(root, "chakri");
    cout << isprefix(root, "chakr") << endl; // Output should be 1 (true)
    cout << searchkey(root, "chakri") << endl; // Output should be 1 (true)
    cout<<delete_key(root, "chakre");
    
    return 0;
}
