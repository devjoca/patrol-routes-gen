//
// Created by José Carlos Pereyra León on 9/19/17.
//

#include <cmath>
#include "Edge.h"
#define earthRadiusKm 6371.0
#include <iostream>

// This function converts decimal degrees to radians
double deg2rad(double deg) {
    return (deg * M_PI / 180);
}

double pow(double x) {
    return x*x;
}

std::ostream &operator<<(std::ostream &os, const Edge &edge) {
    os << edge.ini << " - " << edge.end;
    return os;
}

Edge::Edge(const Node &ini, const Node &end) : ini(ini), end(end) {
    nIncidents = 0;
}

double Edge::distance() {
//    double lat1r, lon1r, lat2r, lon2r, u, v;
//    lat1r = deg2rad(ini.lat);
//    lon1r = deg2rad(ini.lng);
//    lat2r = deg2rad(end.lat);
//    lon2r = deg2rad(end.lng);
//    u = sin((lat2r - lat1r)/2);
//    v = sin((lon2r - lon1r)/2);
//    return 2.0 * earthRadiusKm * asin(sqrt(u * u + cos(lat1r) * cos(lat2r) * v * v));

    return sqrt( pow(ini.lat - end.lat) + pow(ini.lng - end.lng) );
}

void getLine(double x1, double y1, double x2, double y2, double &a, double &b, double &c)
{
    a = y1 - y2;
    b = x2 - x1;
    c = x1 * y2 - x2 * y1;
}

double Edge::distanceToPoint(Node node) {

    double a, b, c;

    getLine(ini.lat, ini.lng, end.lat, end.lng, a, b, c);

    return abs(a * node.lat + b * node.lng + c) / sqrt(a * a + b * b);
}

