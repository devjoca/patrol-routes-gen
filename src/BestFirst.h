//
// Created by José Carlos Pereyra León on 9/20/17.
//

#ifndef PATROL_ROUTES_GEN_BESTFIRST_H
#define PATROL_ROUTES_GEN_BESTFIRST_H


#include <vector>
#include "Edge.h"

class BestFirst {
    Edge station;
    std::vector <Edge> streetList;
public:
    BestFirst(std::vector <Edge>, Edge);
    void perform();
};


#endif //PATROL_ROUTES_GEN_BESTFIRST_H
