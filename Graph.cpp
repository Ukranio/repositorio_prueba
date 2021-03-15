/*
 * Name: Graph.cpp
 * Description: Implementacion de la clase Graph
 */

#include "Graph.hpp"

Graph::Graph (int id,int longitud) {
   this->id = id;
   this->longitud=longitud;
   materialOcupado=0.0;
   grade=0.0;
}

void Graph::addNode(Node nuevo,int idNodo) 
{
   Nodos[idNodo].push_back(nuevo);
}

void Graph::getInfo(int idNodo){
   list<Node>::iterator inicio(Nodos[idNodo].begin()),final(Nodos[idNodo].end());
   for(;inicio!=final;inicio++){
      cout<<"ID Nodo: "<<(*inicio).getId()<<endl;
      cout<<"Posicion: ("<<(*inicio).getX()<<","<<(*inicio).getY()<<")"<<endl;
      cout<<"Esfuerzo: "<<(*inicio).getEsf()<<endl;
      cout<<"Tipo: "<<(*inicio).getType()<<endl;
   }
}

int Graph::getId(void) {
   return id;
}

float Graph::getMaterialOcupado(void) {
   return materialOcupado;
}

float Graph::getGrade(void){
   return grade;
}

int Graph::getLongitud(void){
   return longitud;
}

void Graph::setMaterialOcupado(float materialOcupado) {
   this->materialOcupado = materialOcupado;
}

void Graph::setGrade(float grade){
   this->grade = grade;
}

void Graph::generarGrafo() { //metodo que genera un grafo aleatorio, aun en construcción
   int base=0;
   int estructura=0;
   srandom((unsigned)time(0));
   //numero de nodos general
   do{
   numberOfNodes = (random()) % 100;
   }while(numberOfNodes<2);
   //numero de nodos de la base para que sean equidistantes
   do{
      do{
         if(numberOfNodes<=20)
            base = (random()) % (numberOfNodes+1);
         else
            base = (random()) % (21);
      }while( base<2 );
   }while( longitud%base );
   //numero de nodos que no estan en la base
   estructura=numberOfNodes-base;
   //Impresión de parametos para verificar la fiabilidad 
   cout<<"numero de nodos totales: "<<numberOfNodes<<endl;
   cout<<"numero de nodos en base: "<<base<<endl;   
   cout<<"numero de nodos en estructura: "<<estructura<<endl;   
}
