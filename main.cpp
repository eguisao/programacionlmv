/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int numj=0;
    int tope=0;
    
    int acum2 = 0;
    int acum3 = 0;
    int acum1 = 0;
    
    string jugador = "jugador";
    cout<<"bienvenido al juego del avaricioso \n";
    cout<<"ingresa el tope de puntos del  juego \n";
    cin>>tope;
    cout<<"ingrese el numero de jugadores \n \n ";
    cin>>numj;
    int acumt[numj]={};
     for (int i = 0; i < numj; i++) {
       acumt[i] = 0;
       cout<<"bienvenido "<<jugador<<i<<" acumulado inicial "<< acumt[i]<<endl<<endl;
    }
    cout<<"gana el jugador que primero llegue a "<<tope<< " puntos \n\n";
    cout<<"inicia el juego\n";
    while(tope !=0){
        for (int e = 0; e < numj; e++) {
           int j = 1;
            cout<<"empieza el judador "<<e+1<<endl;
            cout<<"puntaje  acumulado "<<acumt[e]<<endl;

            cout<<"presiona 1 para jugar  0 para salir \n\n' ";
            cin>>j;
            int acum = 0;
            
            while(j != 0){
                int v1 = 1 + rand()% 6;
                cout<<"numero que sacaste es el "<< v1<<endl;
                
                    if(v1 != 6){
                            acum = acum + v1;
                            cout<<"total acumulado en esta ronda es  "<< acum<<endl;

                        if(acum1>= tope){
                            cout<<"ganaste el juego puntos total "<< acumt[e];
                            break;
                        }else{
                             acumt[e] = acumt[e]  + v1;
                            cout<<"total acumulado total  es  "<< acumt[e]<<endl;
                            cout<<"presiona 1 para continuar  0 para salir \n\n";
                            cin>>j;
                           
                        }
                       
                    }else{
                        acumt[e] = acumt[e] -acum;
                        cout<<"se te borran todos los puntos de esta ronda \n";
                        j=0;
                    }
               
            }
        }
}

    return 0;
}

