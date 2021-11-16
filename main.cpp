#include "Sticla.hpp"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
//	Dop dop;
//	cin>>dop;
//	cout<<endl<<dop<<endl;
	// 
	
	Sticla *s;
	Sticla aux;
	int n;
	n=3;
	s = new Sticla[n];
	for(int i=0 ; i<n ; i++)
	cin >> s[i];
	
//	cout<<endl<<endl;
//	for(int i=0;i<5;i++)
//	cout<<s[i];
	
	cout<<endl<<aux;
	int sortat;
	do{        
        sortat = 1;
        for (int i = 0; i < n-1; i++){
                if (s[i].getPret() > s[i+1].getPret()){
                         aux = s[i]; 
                        s[i] = s[i+1]; 
                        s[i+1] = aux;
                        sortat = 0;
                }
        }
}while(sortat == 0);
	
	
	cout<<endl<<endl;
	for(int i=0;i<n;i++)
	cout<<s[i]<<endl;


	for(int i=0;i<n;i++)
	{
		if(s[i].getDiametru() >5)
		cout<<s[i]<<endl;
	}

	return 0;
	
	
}


