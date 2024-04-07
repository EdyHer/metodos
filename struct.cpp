#include <iostream>
using namespace std;
struct estudiante{
	int *codigo;
	string *nombre;
	int **notas;
	
};

main(){
	estudiante estudiante;
	
	int fila = 0,columna = 0;
	cout<<"cuantos estudiantes desea agregar: ";
	cin>>fila;
	
	cout<<"cuantas notas por estudiante desea agregar: ";
	cin>>columna;
	
	estudiante.codigo = new int[fila];
	estudiante.nombre = new string[fila];
	estudiante.notas = new int *[fila];
	for (int i=0;i<fila;i++){
		estudiante.notas[i]	= new int[columna];
	}
	cout<<"_________________ingreso de notas ___________________"<<endl;
	for (int i=0;i<fila;i++){
		cout<<
		for (int ii=0;ii<columna;ii++){
	system("pause");
	
}

