#include<iostream>
using namespace std;
int espacio(int a, int b,int m, int **ary){//primera funcion recursiva para separar espacios de memoria para el array bidimensional
  if (a==b){
    return 0;
  }
  else{
    ary[a]=new int[m];
    return espacio(++a,b,m,ary);
  }
}
int yeso(int **arra,int m, int n,int g){//funcion recursiva para pedir al usuario que entre los datos de la matriz
    if(g==m*n){
        return 0;
    }
    else {
        cin>>*(*arra+g);
        return yeso(arra,m,n,++g);
    }
}

int imprimir(int **arra, int m, int n,int h){//funcion recursiva que imprime los datos ingresados de la matriz
    if (h==m*n){
        return 0;
    }
    else{
        cout<<**arra+h;
        if ((h+1)%n==0){
            cout<<"\n";
        }
        return imprimir(arra,m,n,++h);
    }

}
int multi(int **arra, int m, int n, int c){//funcion incompleta para multiplicar matrices
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<arra[i][j];
        }
        cout<<"\n";
    }

}
int main(){
  int N = 3;//estos son los valores de las dimensiones de las matrices
  int M = 3;
  int A=3;
  int B=3;


  int **ary = new int *[N];//crea espacios de memoria unidimensional
    int **sada=new int *[A];

  espacio(0,N,M,ary);//llamar a la funcion para separar espacios de memoria de forma bidimensional
  espacio(0,A,B,sada);
  yeso(ary,N,M,0);//funcion para que el usuario pueda ingresar los datos de la matriz
  yeso(sada,A,B,0);
  imprimir(ary,N,M,0);//funcion para visualizar los datos ingresados de la matriz
  imprimir(sada,A,B,0);
//multi(ary,A,B,0);

delete []ary;//para liberar memoria
}

    }

}
int main(){

  int N = 3;
  int M = 3;
  int A=3;
  int B=3;

  // dynamic allocation

  int **ary = new int *[N];
    int **sada=new int *[A];

  rec(0,N,M,ary);
  rec(0,A,B,sada);
  yeso(ary,N,M,0);
  yeso(sada,A,B,0);
  imprimir(ary,N,M,0);
  imprimir(sada,A,B,0);
//multi(ary,A,B,0);
//cout<<ary[1][1];
delete []ary;
}

