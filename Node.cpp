/*
 * \file Node.cpp
 */

#include "Node.hpp"

/*
 * \brief
 * Parametros:
 *    id Identificador del nodo
 *    x Coordenada horizontal del nodo
 *    y Coordenada vertical del nodo
 */
Node::Node (int id, unsigned int x, unsigned int y) 
{
   this->id = id;
   this->x = x;
   this->y = y;
   this->esf=0.0;
   this->type=false;
}

/*
   \brief Devuelve el identificador del nodo
   \param void
   \return void
*/
int Node::getId(void) {
   return id;
}

/*
   \brief Devuelve la coordenada horizontal del nodo
   \param void
   \return
*/
unsigned int Node::getX(void) {
   return x;
}

/*
   \brief Devuelve la coordenada vertical del nodo
   \param void
   \return
*/ 
unsigned int Node::getY(void) {
   return y;
}

/*
   \brief Devuelve la cantidad de esfuerzo entre el nodo y el que principia la lista
   \param void
   \return
*/ 

float Node::getEsf(void) {
   return esf;
}

/*
   \brief Devuelve el tipo de esfuerzo que se genera (compresión-true,tensión-false)
   \param void
   \return
*/ 
bool Node::getType(void) {
   return type;
}


/*
   \brief Asigna un identificador al nodo
   \param
      id Identificador del nodo
   \return void
   */
void Node::setId(int id) {
   this->id = id;
}

/*
   \brief Asigna una coordenada horizontal al nodo
   \param
      x Coordenada horizontal
   \return void
   */
void Node::setX(unsigned int x) 
{
   this->x = x;
}

/*
   \brief Asigna una coordenada vertical al nodo
   \param
      x Coordenada vertical
   \return void
   */
void Node::setY(unsigned int y) 
{
   this->y = y;
}

/*
   \brief Establece el esfuerzo que se genera entre el nodo y el que principia la lista
   \param
      esf esfuerzo calculado
   \return void
   */
void Node::setEsf(float esf) {
   this->esf = esf;
}

/*
   \brief Asigna el tipo de esfuerzo (compresión-true,tensión-false)
   \param
      type tipo de esfuerzo 
   \return void
   */
void Node::setType(bool type) {
   this->type = type;
}

