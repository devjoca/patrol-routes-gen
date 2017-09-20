//
// Created by José Carlos Pereyra León on 9/19/17.
//

#ifndef PATROL_ROUTES_GEN_NODE_H
#define PATROL_ROUTES_GEN_NODE_H


#include <ostream>

class Node {
public:
    double lat;
    double lng;

    friend std::ostream &operator<<(std::ostream &os, const Node &node);

    Node(double lat, double lng);
};


#endif //PATROL_ROUTES_GEN_NODE_H
