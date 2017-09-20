//
// Created by José Carlos Pereyra León on 9/19/17.
//

#ifndef PATROL_ROUTES_GEN_EDGE_H
#define PATROL_ROUTES_GEN_EDGE_H


#include <ostream>
#include "Node.h"

class Edge {
public:
    Node ini;
    Node end;
    int nIncidents;

    Edge(const Node &ini, const Node &end);
    friend std::ostream &operator<<(std::ostream &os, const Edge &edge);
    double distance();

    double distanceToPoint(Node node);
};


#endif //PATROL_ROUTES_GEN_EDGE_H
