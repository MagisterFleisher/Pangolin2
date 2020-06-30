#ifndef NET5_EDGE_HPP
#define NET5_EDGE_HPP

typedef struct {
    ID id;
    ID from;
    ID to;
} Edge;

/*
typedef struct {
    ID id;
    std::unique_ptr<Node> from;
    std::unique_ptr<Node> to;
} EdgePtr; */

#endif //NET1_EDGE_HPP