//clase main de pruebas.

#include<stdio.h>
#include "Node.hpp"
#include "Graph.hpp"
#include<iostream>

using namespace std;

int main(){
   Graph *g=new Graph(0,928);
   g->generarGrafo();
}

  /* Node *n=new Node(1,3,5);
   Node *n2=new Node(2,4,6);
   Graph *g=new Graph(0);
   g->addNode(*n,1);
   g->addNode(*n2,2);
   cout<<"Graph"<<endl;
   cout<<"ID: "<<g->getId()<<endl;
   cout<<"Material: "<<g->getMaterialOcupado()<<endl;
   cout<<"Grade: "<<g->getGrade()<<endl;
   cout<<"Nodo"<<endl;
   g->getInfo(1);
   g->getInfo(2);*/

/*
   Node *n=new Node(1,3,5);
   cout<<"Nodo"<<endl;
   printf("ID: %d\n",n->getId());
   printf("Posicion: (%d,%d)\n",n->getX(),n->getY());
   printf("Esfuerzo: %.2f\n",n->getEsf());
   cout<<"Tipo: "<<n->getType()<<endl;
   n->setId(2);
   n->setX(4);
   n->setY(6);
   n->setEsf(2.4);
   n->setType(true);   
   printf("ID: %d\n",n->getId());
   printf("Posicion: (%d,%d)\n",n->getX(),n->getY());
   printf("Esfuerzo: %.2f\n",n->getEsf());
   cout<<"Tipo: "<<n->getType()<<endl;
   
   Graph *g=new Graph(4);
   
   cout<<"Graph"<<endl;
   cout<<"ID: "<<g->getId()<<endl;
   cout<<"Material: "<<g->getMaterialOcupado()<<endl;
   cout<<"Grade: "<<g->getGrade()<<endl;
   g->setMaterialOcupado(5.7);
   g->setGrade(9.8);
   cout<<"ID: "<<g->getId()<<endl;
   cout<<"Material: "<<g->getMaterialOcupado()<<endl;
   cout<<"Grade: "<<g->getGrade()<<endl;   
   return 0;*/   

