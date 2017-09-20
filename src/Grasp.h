//
// Created by José Carlos Pereyra León on 9/20/17.
//

#ifndef PATROL_ROUTES_GEN_GRASP_H
#define PATROL_ROUTES_GEN_GRASP_H


#include "Edge.h"

class Grasp {
    std::vector<Edge>  vertex;
public:
    Grasp(const std::vector<Edge> &vertex);

    void perform();
};


#endif //PATROL_ROUTES_GEN_GRASP_H
