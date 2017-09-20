//
// Created by José Carlos Pereyra León on 9/20/17.
//
#include <iostream>
#include "Grasp.h"

using namespace std;

Grasp::Grasp(const std::vector<Edge> &vertex) : vertex(vertex) {

}

void Grasp::perform() {

    int maxIter = 1000;

    for (int i = 0; i < maxIter; ++i) {
        cout << i << endl;
    }
}

