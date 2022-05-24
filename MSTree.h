#ifndef GUARD_MSTree_h #define GUARD_MSTree_h 
#include <vector> 
#include "Edge.h" 
using std::vector; 
Minimum spanning tree, containing n-1 edges and the total weight of all edges class MSTree { public :

MSTree( const vector<Edge>& edgeList, double weight): 
_msTree(edgeList),_weight(weight){} 
vector<Edge> GetEdgeList() { return _msTree;} double GetWeight() { return _weight;} private :     vector< Edge> _msTree; double _weight;



}; 
#endif