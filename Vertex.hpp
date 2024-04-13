#ifndef VERTEX_HPP
#define VERTEX_HPP

class Vertex{
private:
    int index;
    int degree;
public:
    Vertex();
    int getIndex();
    int getDegree();
    void setIndex(int);
    void setDegree(int);
};


#endif
