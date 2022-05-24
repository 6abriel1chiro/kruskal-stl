#ifndef GUARD_Node_h #define GUARD_Node_h 
#include < string > 
#include <vector> 
#include "Arista.h " 
using std:: string ;
 using std::vector; 
//Node and all outgoing edges of this node 
 class Node
 {
 public :     
 Node( const string & ID, const vector<Edge>& edgeList):       _ID(ID),_edgeList(edgeList) {}    
 Node( const string & ID):_ID(ID) {} string GetID()     { return _ID ;     }

vector<Edge> GetEdgeList() 
{ return _edgeList;     } 
void AddEdge( const Edge& edge)     {         _edgeList.push_back(edge);     }
 private : 
string _ID;   
vector<Edge> _edgeList; 
 };
#endif