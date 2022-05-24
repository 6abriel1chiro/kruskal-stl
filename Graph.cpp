#include "Graph.h"
#include <iostream> 
#include <algorithm> 
using  namespace std; 
MSTree Graph::GetMST() 
{    
G s;
vector<Node>::size_type i;     
vector<Node>::size_type j;

 vector<Edge> edgeList;// for storing all edges ; 
//Initialize the s set so that each vertex belongs to a different set 
for (i= 0 ;i<_nodeList.size();i++){ string NodeID=_nodeList[i].GetID();     
s[NodeID][NodeID]= 1 ;
for (j= 0 ;j<_nodeList[i].GetEdgeList().size();j++)    
edgeList.push_back((_nodeList[i].GetEdgeList())[j]); 
} 
//Sort the edges from     smallest to largest according to their weight 
	sort(edgeList.begin(),edgeList.end(),Compare); 
/* for (vector<Edge>::size_type ii = 0 ;ii<edgeList.size();ii++) 
{         cout<<edgeList[ii].StartNodeID<< " -> " <<edgeList[ii].EndNodeID             << " " <<edgeList[ii].Weight<<endl;     }*/    vector<Node>::size_type k = 1 ;   count     vector<Edge>::size_type d = 0 ; string m1,m2;  Record which set the two vertices of an edge are in


    j = 0 ;
string curNodeID=_nodeList[i].GetID(); 
if (s[curNodeID][edgeList[d].StartNodeID]== 1 )                 
	m1=curNodeID; 
if (s[curNodeID][edgeList[ d].EndNodeID]== 1 )                 
	m2=curNodeID;         
} 
//If the two vertices of an edge belong to different sets add this edge to the tree 
	//if 
vector<Edge> Tree; 
	//Store the edge of the minimum spanning tree
double weight = 0 ;  //  and the total weight 
while(k<_nodeList.size())     
		{ 
			for (i = 0 ;i<_nodeList.size(); i++){ 
				(m1!=m2){           
					//cout<<m1<< " " <<m2<<endl;             
					Tree.push_back(edgeList[d]);            
					weight+=edgeList[d].Weight;             
					k++; 
					for ( j=0 ;j<_nodeList.size();j++) 
{                
	s[m1][_nodeList[j].GetID()]=s[m1][_nodeList[j].GetID()]||s[m2][_nodeList[j].GetID()];
   s[m2][_nodeList[j].GetID()]= 0 ;
}         
}     
	d++;    
}    
			MSTree msTree(Tree,weight ); 
			return msTree; 
}