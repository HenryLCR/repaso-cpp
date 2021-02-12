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

    if(nota>=96 && nota<=100){
        cout<<"Obtuvistes una A++ !!";
        }else{
            if(nota>=94 && nota<=95){
            cout<<"Obtuvistes una A+ !!";
            }else{
                if(nota>=86 && nota<=93){
                cout<<"Obtuvistes una A !!";
                }else{
                    if(nota>=84 && nota<=85){
                    cout<<"Obtuvistes una A- !!";
                    }else{
                        if(nota>=76 && nota<=83){
                        cout<<"Obtuvistes una B+ !!";
                         }else{
                             if(nota<60){
                                cout<<"Obtuvistes una F !!";
                            }else{
                                if(nota<60){
                                cout<<"Obtuvistes una F !!";
                                }else{
                                    if(nota<60){
                                    cout<<"Obtuvistes una F !!";
                                    }else{
                                        if(nota<60){
                                        cout<<"Obtuvistes una F !!";
                                        }else{
                                            if(nota<60){
                                            cout<<"Obtuvistes una F !!";
                                            }
                                        }
                                    }
                                }
                            }
                         }
                    }
                }
            }
        }

    return 0;
}