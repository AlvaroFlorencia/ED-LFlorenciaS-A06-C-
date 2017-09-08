/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NODE.cpp
 * Author: Dell
 * 
 * Created on 7 de septiembre de 2017, 14:38
 */

#include "NODE.h"
#include <iostream>

using namespace std;
 NODE::NODE(int dato, NODE siguiente) {
        dato = dato;
       siguiente = siguiente;
    }
NODE::NODE(int dato) {
        dato = dato;   //Differents constructors with differents parameters
        siguiente = NULL;
    }

NODE::NODE(NODE siguiente) {
        dato = 0;
        siguiente = siguiente;
    }
NODE::NODE() {
        dato = 0;
        siguiente = NULL;
    }
 int NODE::getDato() {  //Getters
        return dato;
    }

   NODE*NODE:: getSiguiente() {
        return siguiente;
    }

 void NODE::setDato(int dato) {  //Setters
        dato = dato;
    }

 void NODE:: setSiguiente(NODE* siguente) {
        siguente = siguente;
    }

    
}



