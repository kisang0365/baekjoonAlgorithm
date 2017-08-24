#include<iostream>
#include<cstdio>

using namespace std;

struct Node{
    
    int key;

    Node* left;
    Node* right;

    Node(int key){
        this->key = key;
        left = NULL;
        right = NULL;
    }
};

class Tree{

public:
    
    Node *head;

    Tree(){
        head = NULL;
    }

    void insert(int n){
        
        Node *newNode = new Node(n);

        Node* temp = head;

        if(head == NULL){
            head = newNode;
        }
        else{
           
            while(1){
                if(n < temp->key){
                    
                    if(temp->left == NULL){
                        temp->left = newNode;
                        return;
                    }
                    else temp = temp->left;
                } 
                else {
                    if(temp->right == NULL){
                        temp->right = newNode;
                        return;
                    }
                    else temp = temp->right;
                 
                }
            }
        }
        

    }

    void totalPrint(){
        printing(head);
    }

    void printing(Node* h){

        if(h->left != NULL)
            printing(h->left);
        if(h->right != NULL)
            printing(h->right);
        
        printf("%d\n", h->key);
    }

};

int main(){

    int num;
    Tree tree;
    while(scanf("%d", &num) != EOF){
        tree.insert(num);
    }

    tree.totalPrint();
    
    return 0;
}