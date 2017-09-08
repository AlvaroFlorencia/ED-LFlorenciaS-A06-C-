/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NODE.h
 * Author: Dell
 *
 * Created on 7 de septiembre de 2017, 14:38
 */

#ifndef NODE_H
#define NODE_H
#pragma once

class NODE {
public:
       int dato;
NODE* siguiente;
    NODE();
     NODE(int dato, NODE* siguiente);
     NODE(int dato);
     NODE(NODE* siguiente);
     int getDato();
     NODE* getSiguiente();
    void  setDato(int dato);
    void setSiguiente(NODE* siguiente);
     
private:

};

#endif /* NODE_H */

