/*
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ENDL '\n'
 
int main(){
    
    ios::sync_with_stdio(false);
 
    int casos; cin >> casos;
 
    while (casos--){
 
        ll dias, puntos, asistencia, tarea; cin >> dias >> puntos >> asistencia >> tarea;
 
        ll disponibles = ((dias-1)/7)+1;
        ll maximi = 0;
        ll dispo = dias;
        int key = 1;

  ll neca = puntos+asistencia+(tarea*2)-1/(asistencia+(tarea*2));


        if(disponibles%2 == 0){

            if(disponibles/2 >= neca){
                dias -= neca;
                cout << dias << ENDL;
                key = 0;
            }

        }

        else{

            if(disponibles/2 + 1 >= neca){
                dias -= neca;
                cout << dias << ENDL;
                key = 0;
            }
            
        }

            if(disponibles%2 == 0){ 
                dias -= disponibles/2; 
                maximi = (disponibles/2)*tarea + (disponibles/2)* asistencia; 
            } 
            else{ 
                disponibles--; 
                dias -= (disponibles/2)+1; 
                maximi = (disponibles/2)*tarea + (disponibles/2)* asistencia; maximi += tarea + asistencia; 
            }

            if(maximi >= puntos){
                
                ll neca = puntos+asistencia+(tarea*2)-1/(asistencia+(tarea*2));
                dispo -= neca;
                cout << dispo << ENDL;

            }
            else{

                ll data = ((puntos-maximi) + asistencia - 1)/asistencia;
                dias -= data;
                cout << dias << ENDL;
            }
        }
 
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ENDL '\n'
 
int main(){
    
    ios::sync_with_stdio(false);
 
    int casos; cin >> casos;
 
    while (casos--){
 
        ll dias, puntos, asistencia, tarea; cin >> dias >> puntos >> asistencia >> tarea;
 
        ll disponibles = ((dias-1)/7)+1;
        ll maximi = 0;
        ll descanso = dias;
        int tempo = disponibles;

 
        if(disponibles%2 == 0){ 
            descanso -= disponibles/2; 
            maximi = (disponibles)*tarea + (disponibles/2)* asistencia; 
        } 
        else{ 
            descanso -= (disponibles/2)+1; 
            maximi = (disponibles)*tarea + (disponibles/2)* asistencia; 
            maximi += asistencia; 
        }

        if(maximi <= puntos){
            
            ll data = ((puntos-maximi) + asistencia - 1)/asistencia;
            descanso -= data;
            cout << descanso << ENDL;
            
        } 

        else{
           
            ll neca = puntos+asistencia+(tarea*2)-1;
            neca/=(asistencia+(tarea*2));
            dias -= neca;
            cout << dias << ENDL;
        }
 
    }
 
    return 0;
}