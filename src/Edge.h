//
// Created by José Carlos Pereyra León on 9/19/17.
//

#ifndef PATROL_ROUTES_GEN_EDGE_H
#define PATROL_ROUTES_GEN_EDGE_H


#include <ostream>
#include "Node.h"

class Edge {
    Node ini;
    Node end;
public:
    Edge(const Node &ini, const Node &end);

public:
    friend std::ostream &operator<<(std::ostream &os, const Edge &edge);

    double distance();
};


#endif //PATROL_ROUTES_GEN_EDGE_H
