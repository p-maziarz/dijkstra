#ifndef EDGE_HPP
#define EDGE_HPP

class Edge{
private:
    int startVert;
    int endVert;
    int weight;
public:
    Edge();
    Edge(int, int);
    int getWeight();
    void setWeight(int);
};


#endif
