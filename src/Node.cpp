//
// Created by José Carlos Pereyra León on 9/19/17.
//

#include "Node.h"

Node::Node(double x, double y) : lat(x), lng(y) {}

std::ostream &operator<<(std::ostream &os, const Node &node) {
    os << "(" << node.lat << "," << node.lng << ")";
    return os;
}
