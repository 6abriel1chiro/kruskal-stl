#ifndef GUARD_Edge_h #define GUARD_Edge_h 
#include < string > 
using std:: string ; 
class Edge 
{
public :     Edge() {}
Edge( const string & StartNode, const string & EndNode, double weight):StartNodeID(StartNode),EndNodeID( EndNode),Weight(weight) {}
string StartNodeID;
string EndNodeID;
double Weight;


};
bool Compare( const Edge& e1, const Edge& e2);

  




#endif