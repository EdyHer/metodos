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
		cout<<"codigo["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"nombre completo["<<i<<"]:";
		getline(cin,estudiante.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"ingrese nota["<<ii<<"] :";
			cin>>*(*(estudiante.notas+i)+ii);
		}
		cout<<"________________________"<<endl;
	}
	cout<<"_____________mostar datos___________"<<endl;
	
		for (int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:"<<estudiante.codigo[i]<<endl;
		cout<<"nombre completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"ingrese nota["<<ii<<"] :"<<*(*(estudiante.notas+i)+ii)<<endl;
		}
		cout<<"________________________"<<endl;
	}
	
	for (int i=0;i<fila;i++){
		delete[] estudiante.notas[i];
	}
		delete[] estudiante.codigo;
	delete[] estudiante.nombre;
	delete[] estudiante.notas;

	system("pause");
	
}

