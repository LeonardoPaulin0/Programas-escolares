#include<iostream>

using namespace std;

int main(){
	
	double salario, Nsalario;
	char condicao = N;
	
	 
	while(condicao == 'S'){
		
	cout<<"Digite o seu salario atual "<<endl;
	cin>>salario;
	
	if (salario < 500){
	 Nsalario = (salario*30)/100;
		cout<<"Seu salario atual eh "<<Nsalario + salario<<endl;
     }
	  else{ 
	  cout<<"Nao recebe aumento "<<endl;
	 }
	
	cout<<"deseja  realizaar outra operaçao ? sim ou nao"<<endl;
    cin >> condicao;
	
}
	
	return 0;
}






