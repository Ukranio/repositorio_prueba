/*
 * Name: Graph.hpp
 * Description: Fichero de cabecera de la clase Graph
 */

#ifndef __GRAPH_HPP__

#define __GRAPH_HPP__

#include <list>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include "Node.hpp"

using namespace std;

class Graph {

      int id; // Identificador del grafo
      int numberOfNodes;   //numero de nodos que contiene el grafo
      float materialOcupado; // Material usado para el puente
      float grade; //Calificacion del puente
      int longitud;
      list <Node> Nodos[100]; 

   public:
      Graph(int,int);
      void addNode(Node,int);
      int getId(void);
      float getMaterialOcupado(void);
      float getGrade(void);
      int getLongitud(void);
      void setMaterialOcupado(float);
      void setGrade(float);
      void generarGrafo(void);
      void getInfo(int);
};

#endif
