#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   
    int n,m,res,sobra,tipo;
     
    //linea de prueba
    cout<<"Selecciona el tipo de operacion: \n";
    cout<<"1.-Suma\n";
    cout<<"2.-Resta\n";
    cout<<"3.-Multiplicacion\n";
    cout<<"4.-Division\n\n";
    cin>>tipo;
    //otra linea
    //un cambio mas 
   
           
         if(tipo==1)
            {
               cout<<"Seleccionaste suma(+) \n";
               cout<<"Introduce el primer numero: \n";
               cin>>n;
            
              cout<<"Introduce el segundo numero: \n";
               cin>>m;
            
               res<<n+m;
              cout<<"el resultado es :  \n\n"<<res; 
            
            }
            
            
          if(tipo==2)
            {  
               cout<<"Seleccionaste resta \n";
               cout<<"Introduce el primer numero: \n";
               cin>>n;
        
               cout<<"Introduce el segundo numero: \n";
               cin>>m;
        
               res<<n-m;
               cout<<"el resultado es :  \n\n"<<res;       	       
            }
           
           
           if(tipo==3)
            {
               cout<<"Seleccionaste multiplicacion \n";
               cout<<"Introduce el primer numero: \n";
               cin>>n;
        
               cout<<"Introduce el segundo numero: \n";
               cin>>m;
            
               res<<n*m;
               cout<<"el resultado es :  \n\n"<<res; 	             
            }
           
           
            if(tipo==4)
            {
              cout<<"Seleccionaste division \n";
              cout<<"Introduce el primer numero: \n";
              cin>>n;
        
              cout<<"Introduce el segundo numero: \n";
              cin>>m;
            
              res<<n/m;
              sobra<<n%m;
                        if (res<=0)
                         {
                          cout<<"Error! division entre 0\n";          
                           }
              cout<<"El resultado es : \n\n"<<res; 	
              cout<<"El residuo es: \n"<<sobra;             
            }
            
            else
            {
            cout<<"ERROR No es una opcion valida \n";    
            }
           


    system("PAUSE");
    return EXIT_SUCCESS;
}
