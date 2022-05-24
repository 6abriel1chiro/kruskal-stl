#ifndef GRUAD_Graph_h #define GRUAD_Graph_h 
#include < string > 
#include <map> 
#include <vector> 
#include "Node.h"
#include "MSTree.h " 
using std:: string ; 
using std::map; 
using std: :vector; 
class Graph 
{     typedef map< string , double > Path;     typedef map< string ,Path> G; public :     Graph( const vector<Node>& nodeList):




_nodeList(nodeList) {}; 
MSTree GetMST(); 
private : 
G graph; 
vector<Node> _nodeList; 
}; 
#endif