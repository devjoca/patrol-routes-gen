#include <iostream>
#include <vector>
#include "Node.h"
#include "Edge.h"

using namespace std;


int main() {
    vector<Edge> edges;
    vector<Node> incidents;

    incidents.emplace_back(Node(1,1.3));
    incidents.emplace_back(Node(1,1.4));
    incidents.emplace_back(Node(1,1.5));
    incidents.emplace_back(Node(1,1.6));

    incidents.emplace_back(Node(1.3,2));
    incidents.emplace_back(Node(1.4,2));
    incidents.emplace_back(Node(1.5,2));
    incidents.emplace_back(Node(2, 1.6));

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            edges.emplace_back(Edge(Node(i,j), Node(i, j+1)));
            edges.emplace_back(Edge(Node(i,j), Node(i+1, j)));
        }
    }

    for(auto e: edges)
    {
        cout << e.distance() << endl;
    }
    return 0;
}