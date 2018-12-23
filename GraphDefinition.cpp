#include <iostream>
struct SLL{
    int connected_to = 0;
    SLL* node = nullptr;
};


class Vertex{
public:
    int vertex_no;
    SLL* connected_to_this_node;
    Vertex* next_vertex;

    Vertex(){
        connected_to_this_node = nullptr;
        next_vertex = nullptr;
        vertex_no = 1;
    }


};

//
// Created by atrivedi on 11/17/18.
//

