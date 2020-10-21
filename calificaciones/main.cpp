#include <iostream>

using namespace std;

int main()
{

    //Normal
    ///Datos para las calificaciones
    int c1, c2, c3; //puede ser int o short
    ///Leer datos
    cin>>c1;
    cin>>c2;
    cin>>c3;
    //1 en caso de que apruebe 0 si reprueba

    ((c1+c2+c3)/3)>=6 ? cout<<"1"<<endl : cout<<"0"<<endl;

    ///int suma = c1+c2+c3;
    ///double promedio = suma/3;

    ///if(promedio>=6){
        //Aprueba el semestre
        ///cout<<"1"<<endl;
    ///}else
    //Repreba el semestre
    ///cout<<"0"<<endl;


    return 0;
}
