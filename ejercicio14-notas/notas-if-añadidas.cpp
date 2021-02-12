#include <iostream>

using namespace std;

int main(){

    int nota=0;

    cout<<"--- Notas ---"<< endl;
    cout<<"Ingrese la nota que obtuvo: ";
    cin>>nota;


if(nota>100 || nota<0){
        cout<<"Ingrese una nota entre 0 a 100";
        return 0;
    }

    if(nota>=95 && nota<=100){
        cout<<"Obtuvistes una A !!";
        }else{
            if(nota>=85 && nota<=94){
            cout<<"Obtuvistes una B !!";
            }else{
                if(nota>=75 && nota<=84){
                cout<<"Obtuvistes una C !!";
                }else{
                    if(nota>=65 && nota<=74){
                    cout<<"Obtuvistes una D !!";
                    }else{
                        if(nota>=60 && nota<=64){
                        cout<<"Obtuvistes una E !!";
                         }else{
                             if(nota<60){
                                cout<<"Obtuvistes una F !!";
                            }
                         }
                    }
                }
            }
        }

    return 0;
}