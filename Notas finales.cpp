#include<iostream>
#include <math.h>
#include<string>
#include <stdlib.h>
using namespace std;


double p1,p2,p3,p4,p5,p6,e1,e2,prom1,prom2,salir,notaRequerida;
	string verificacion;

void proceso(){

	cout<<"Cuanto quieres sacar al final del ano ?"<<endl;
	cin>>notaRequerida;
	
	if (notaRequerida<=10){
		cout<<"\nya tienes la nota del primer quimistre ?\n";
	cin>>verificacion;
	if(verificacion=="si"||verificacion=="Si"||verificacion=="SI"||verificacion=="s")
	{
		
		cout<<"Cual es el promedio del Primer quimestre ?"<<endl;
		cin>> prom1;

		if(prom1>=0&&prom1<=10)
		{
			if (prom1>4)
			{
				cout << "\nTeclea el Primer Pracial del segundo quimestre\n";
				cin >> p4;
				if(p4>=0&&p4<=10)
				{
					prom2=p4;
					cout<<"Promedio : "<<prom2<<endl;
					cout<< "Teclea el segundo Pracial del segundo quimestre\n";
					cin>>p5;
					if(p5>=0&&p5<=10)
					{
						prom2=(p4+p5)/2;
						cout<<"Promedio : "<<prom2<<endl;

						double promReq;
						promReq=(notaRequerida*2)-prom1;
						cout<<"si no existen valores es que ya te quedaste "<<endl;
						cout<<"Para pasar Necesitas estas Notas \n\n";
						cout<< "Parcial 3"<<"     "<<"examen"<<endl;
						for (e2 = 0; e2 <=10; e2=e2+0.5)
						{
							p6=((3*promReq-e2*0.6)/0.8)-p4-p5;


							if (p6<=10&&p6>=0){
								cout<<p6<<"		"<<e2<<endl<<endl;
								
							}
							
							
						}


					}
					else
					{
						cout<<"\nvalor erroneo\n";
					}
					
				}
				else
				{
					cout<<"\nvalor erroneo\n";
				}

			}
			else
			{
				cout<<"ya no pasas";
			}

		}
		else
		{
			cout<<"\nvalor erroneo\n";
		}

	}
	else
	{
		cout << "Teclea el Primer Pracial\n";
		cin >> p1;
		if(p1>=0&&p1<=10)
		{
			prom1=p1;
			cout<<"Promedio : "<<prom1<<endl;
			cout<< "Teclea el segundo Pracial\n";
			cin>>p2;
			if(p2>=0&&p2<=10)
			{
				prom1=(p1+p2)/2;
				cout<<"Promedio : "<<prom1<<endl;
				cout<<"teclea el tercer parcial\n";
				cin>>p3;
				if(p3>=0&&p3<=10)
				{
					prom1=(p1+p2+p3)/3;
					cout<<"Promedio de los parciales: "<<prom1<<endl;
					//examen 1
					cout<<"Teclea el examen 1\n";
					cin>>e1;
					if(e1>=0&&e1<=10)
					{
						prom1=prom1*0.8+e1*0.2;
					cout<<"el promedio total del primer quimestre es :  "<<prom1<<endl<<"\n\n segundo quimestre";


					//segundo quimestre

					cout << "\nTeclea el Primer Pracial del segundo quimestre\n";
					cin >> p4;
					prom2=p4;
					cout<<"Promedio : "<<prom2<<endl;
					cout<< "Teclea el segundo Pracial del segundo quimestre\n";
					cin>>p5;
					prom2=(p4+p5)/2;
					cout<<"Promedio : "<<prom2<<endl<<endl<<endl;

						if (prom1>4)
						{
							double promReq;
							promReq=(notaRequerida*2)-prom1;
							cout<<"\n\nsi no existen valores es que no lo puedes conseguir \n\n"<<endl;
							cout<<"Para tenr "<<notaRequerida<<" Necesitas estas Notas \n\n";
							cout<< "Parcial 3"<<"     "<<"Examen"<<endl;
							for (e2 = 0; e2 <=10; e2=e2+0.5)
							{
								p6=((3*promReq-e2*0.6)/0.8)-p4-p5;
								if (p6<=10){
									cout<<p6<<"		"<<e2<<endl<<endl;
							}

							}
						}
						else
						{
							cout<<"ya no pasas";
						}


					}
					else
					{
						cout<<"\nvalor erroneo\n";
					}
					
				}
				else
				{
					cout<<"\nvalor erroneo\n";
				}
				

			}
			else
			{
				cout<<"\nvalor erroneo\n";
			}


		}
		else
		{
			cout<<"\nvalor erroneo\n";
		}

	}


	}else{cout<<"Valor Erroneo"<<endl;}
	
}

void menu(){

	//cout<<"Valor Erroneo\n\n\n";

	cout<<"0.- Salir"<<endl;
	cout<<"1.- Repetir"<<endl;
}


int main()
{
	do {
	proceso();
	//Limpiar pantalla

	//cout << string(50, '\n');
	//system("cls");
	menu(); 
	
	cin>>salir;
	}

	while(salir!=0&&(p1<=10,p2<=10,p3<=10,p4<=10,p5<=10,p6<=10,e1<=10,e2<=10,prom1<=10,prom2<=10,notaRequerida<=10));
	//final
	return 0;
}
