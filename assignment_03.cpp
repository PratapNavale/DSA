#include <iostream>
using namespace std;

class  Node{
public: 
int  vertices;
Node *next;

Node (int vertices) {
this->vertices=vertices;
next=nullptr;

}

};

class Test {
public:
int v, i;
Node *arr[100];
Test (int x)
{
v=x;



for (int i = 0; i < 100; i++) {
arr[i] = nullptr;

}
}
void edge(int point, Node *newNode) {
newNode->next = arr[point];
arr[point] = newNode;

}

void display() {
int i;
for (i=0; i<v; i++) {
cout << "The vertex of adjaency of  "<< i<< " ";
Node *temp=arr[i];
while (temp!=nullptr) {
cout << temp->vertices<<" ";
temp= temp->next;

}
cout << endl;
}

}

};

int main() {
int v1, e1;
cout << "Enter the number of vertices: ";
cin >> v1;
Test t(v1);
cout << "Enter the number of edges: ";
cin >> e1;

int i, u, v;
for (i=0; i<e1; i++) {
cout << "Enter the Edges: "<< endl;
cin >> u >> v;
Node *temp= new Node(v);
t.edge(u, temp);
Node *teemp= new Node(u);
t.edge(v, teemp);

}

t.display();

return 0;
}
