#include<iostream>
#include<math.h>
using namespace std;


int somaDosNumero(int n){
        int s=0;
        for (int i=1;i<=n;i++)
           s += i;
         return s;
        }

int main(){
	
	int valor1, valor2,N; 
	float soma, divisao, subtrai, multi,soma2;
	char opcao, opcao2;
	
	do{
		
		cout<<"Digite o primeiro valor "<<endl;
		cin>>valor1;
		
		cout<<"Digite o segundo valor "<<endl;
		cin>>valor2;
		
		cout<<"----- Caculadora------"<<endl;
		cout<<"Selecione a opcao desejada\n [A]soma\n [B]divisao\n [C]Multiplicação\n [D]Subtração "<<endl;
		cin>>opcao;
	
	switch(opcao){
		
	case 'B':	
	  if(valor2 = 0 ){
	    cout<<"não e possivel divisao por 0 "<<endl;
	    break;
	  }
	divisao = valor1 / valor2;
	cout<<"O resultado de "<<valor1<<" / "<<valor2<< " = "<<divisao<<endl;
    break;
    
	case 'A':
	  soma = valor1 + valor2;
	  cout<<"O resultado de "<<valor1<<" + "<<valor2<< " = "<<soma<<endl;
      break;
      
	case 'C':
	  multi = valor1 * valor2;
	  cout<<"O resultado de "<<valor1<<" X "<<valor2<< " = "<<multi<<endl;
      break;
      
	case 'D':
	  subtrai = valor1 - valor2;
	  cout<<"O resultado de "<<valor1<<" - "<<valor2<< " = "<<subtrai<<endl;
	  break;
	  
   }
   
   
		    cout<<"\nDigite um valor para ser contado "<<endl;
		    cin>>N;
            
            soma2 = somaDosNumero(N);
            cout<<" A soma dos numeros de 1 ate "<<N<<" eh de "<<soma2<<endl;
            
    
    
    
    cout<< "\n deseja realizar outra operacao [S]im ou [N]ao" <<endl;
    cin>>opcao2;
    

	}while(opcao2 == 'S');
	
	return 0;
}
