/*
 * Name: Node.hpp
 * Description: Fichero de cabecera de la clase Node
 */

#ifndef __NODE_HPP__

#define __NODE_HPP__

class Node {

      int id; // Identificador del nodo
      unsigned int x; // Coordenada horizontal del nodo
      unsigned int y; // Coordenada vertical del nodo
      float esf; //esfuerzo
      bool type; //tipo de esfuerzo

   public:
      Node (int, unsigned int, unsigned int);
      int getId(void);
      unsigned int getX(void);
      unsigned int getY(void);
      float getEsf(void);
      bool getType(void);
      void setId(int);
      void setX(unsigned int);
      void setY(unsigned int);
      void setEsf(float);
      void setType(bool);
};

#endif
