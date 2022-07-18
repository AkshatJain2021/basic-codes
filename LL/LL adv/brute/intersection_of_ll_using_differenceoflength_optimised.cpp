#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    unordered_map<Node*,int>m;
    while(firstHead!=NULL)
    {
        m[firstHead]++;
        firstHead=firstHead->next;
    }
    while(secondHead!=NULL)
    {
        m[secondHead]--;
        if(m[secondHead]==0)
        {
            return secondHead->data;
        }
        secondHead=secondHead->next;
    }
    return -1;
}