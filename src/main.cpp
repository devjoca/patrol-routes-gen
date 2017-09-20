#include <iostream>
#include <vector>
#include <cfloat>
#include "Edge.h"
#include "Grasp.h"

using namespace std;

void findNearEdge(Node, vector<Edge> &);
void fillXIncidents(vector<Node> &, int, int);
void fillYIncidents(vector<Node> &, int, int);

int main() {
    vector<Edge> edges;
    vector<Edge> iEdges;
    vector<Node> incidents;

    fillYIncidents(incidents, 1, 1);
    fillYIncidents(incidents, 2, 2);
    fillYIncidents(incidents, 3, 3);
    fillYIncidents(incidents, 4, 3);
    fillYIncidents(incidents, 5, 6);

    fillXIncidents(incidents, 1, 2);
    fillXIncidents(incidents, 3, 3);
    fillXIncidents(incidents, 3, 4);
    fillXIncidents(incidents, 4, 3);
    fillXIncidents(incidents, 5, 6);

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if(j+1 < 10) {
                edges.emplace_back(Edge(Node(i, j), Node(i, j + 1)));
            }
            if (i+1 < 4 ) {
                edges.emplace_back(Edge(Node(i, j), Node(i + 1, j)));
            }
        }
    }

    for (auto i: incidents) {
        findNearEdge(i, edges);
    }

    for(auto e: edges)
    {
        if (e.nIncidents != 0)
        {
            iEdges.emplace_back(e);
        }
    }

    Grasp g = Grasp(iEdges);

    return 0;
}

void fillYIncidents(vector<Node> &incidents, int x, int y) {
    for (int i = 0; i < 4; ++i) {
        incidents.emplace_back(Node(x, y + 0.3 + 0.1*i));
    }
}

void fillXIncidents(vector<Node> &incidents, int x, int y) {
    for (int i = 0; i < 4; ++i) {
        incidents.emplace_back(Node(x+ 0.3 + 0.1*i, y));
    }
}

void findNearEdge(Node point, vector<Edge> &edges) {
    auto min = DBL_MAX;
    int min_index = 0;
    double d;

    for (int i = 0; i < edges.size(); ++i) {
        d = edges[i].distanceToPoint(point);
        if (d < min) {
            min = d;
            min_index = i;
        }
    }

    if (min < 0.01) {
        edges[min_index].nIncidents++;
    }
}