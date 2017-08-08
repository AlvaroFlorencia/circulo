/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triangulo.cpp
 * Author: Dell
 * 
 * Created on 7 de agosto de 2017, 21:17
 */

#include "circulo1.h"
#include<iostream>
using namespace std;
int main()
{
    class figura{
    private:
	
	std::string color = "";
public:
    figura( string colord){
        
    }
    virtual void setAltura()=0;
    virtual void setBase()=0;
    virtual void setColor()=0;
    virtual double getAltura()=0;  //Métodos abstractos se utiliza el virtual y se iguala a cero solo en la clase padre
       virtual double getBase()=0;
          
          virtual double CalcularArea()=0;
          virtual double CalcularPerimetro()=0;
          
	};
        
    class circulo1: public figura{  //Herencia de figura
    private:
        double radio;
        double perimetro;  //Atributos
        double area;
        
        
        
        ciurculo1(string color,double perimetrof,double areaf,double radiof):figura(color)
        {
            radio=radiof;
       perimetro=perimetrof;  //Constructor completo
       area=areaf;
       
       
        }
         circulo1(string color,double radiof):figura(color)
        {
             radio=radiof;   //Constructor sin Área ni perimetro
       
        }
         virtual void setAltura(double alturad){ //Setters
             perimetro=alturad; 
             
         }
        
    virtual void setColor(figura(color)){
        color=color;
    }
     virtual double getAltura(){  //Getters
         return perimetro;
     }
      
         
          virtual double CalcularArea(){  //Métodos abstractos
              return (radio*radio)*3.1416;
                
          }
         virtual double CalcularPerimetro(){
             return(2*3.1416*radio);
            
         }  
         
    };    
    return 0;
}
