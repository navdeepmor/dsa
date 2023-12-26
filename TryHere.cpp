#include<iostream>
#include<queue>

using namespace std;
class Node {
    int position;
    int value;

    public:
    Node(int position, int value) : position(position), value(value) {};

    // comparable
    bool operator>(const Node& otherNode) const {
        return this->position > otherNode.position;
    }

    bool operator<(const Node& otherNode) const {
        return this->position < otherNode.position;
    }
};

int main() {
    vector<Node> arr{Node(0, 3), Node(1, 8), Node(2, 5), Node(3, 17), Node(4, 2), Node(5, 11)};
    priority_queue<Node, vector<Node>>* pq = new priority_queue<Node, vector<Node>>(arr.begin(), arr.end());
    return 0;
}