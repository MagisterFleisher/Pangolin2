#ifndef NET5_GRAPH_HPP
#define NET5_GRAPH_HPP

#include "edgelist.hpp"
#include "nodelist.hpp"

typedef struct {
    Edgelist edges;
    Nodelist nodes;
} Graph;

/*
typedef struct {
    std::smart_ptr<Edgelist> edges;
    std::smart_ptr<Nodelist> nodes;
    std::smart_ptr<GraphMetrics> metrics;
} Graph; 
*/

#endif//NET5_GRAPH_HPP