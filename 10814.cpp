#include<iostream>
#include<string>
#include<queue>
#include<cstdio>

using namespace std;

struct Node{
    int age;
    string name;
    int cnt;

    Node(int age, string name, int cnt){
        this->age = age;
        this->name = name;
        this->cnt = cnt;
    }
};

bool operator<(Node a, Node b){
    if(a.age == b.age){
        return a.cnt > b.cnt;
    }
    return a.age > b.age;
}

int main(){

    int N;
    cin >> N;
    priority_queue<Node> q;
    for(int i=0; i<N; i++){
        int age;
        char name[101];

        scanf("%d %s", &age, name);
        string str(name);
        q.push(Node(age, str, i));
    }

    while(!q.empty()){

        printf("%d %s\n", q.top().age, q.top().name.c_str());
        q.pop();
    }

    return 0;
}