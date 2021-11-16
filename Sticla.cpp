#include "Sticla.hpp"


Sticla::Sticla():Dop(),marca(NULL),pret(0)
{
	std::cout << "Floare: Constructor fara parametri\n";
}

Sticla::Sticla(int diametru, const char* tip, const char* marca,int pret):Dop(diametru,tip)
{
	this->marca = new char[strlen(marca) + 1];
	strcpy(this->marca,marca);
	this->pret=0;
}

Sticla::Sticla(const Sticla& obj):Dop(obj)
{
	this->marca = new char[strlen(obj.marca) + 1];
	strcpy(this->marca,obj.marca);
}

Sticla::~Sticla()
{
	std::cout << "Floare: Destructor\n";
	delete []marca;
}

//std::ostream operator<<(std::ostream& out, const Sticla& obj)
//{
//	out << (Dop&)obj;
//	if(obj.marca != NULL)
//	out << "Marca: "   << obj.marca << std::endl;
//	else
//	out << "Marca: "   << ' ' << std::endl;
	
//	out << "Pret: "    << obj.pret  << std::endl;
ostream& operator<<(ostream& out, const Sticla& obj)
{
	out << (Dop&)obj;
	if(obj.marca != NULL)
	out <<"Marca: "<<obj.marca  << endl;
	else 
		out<<"Marca:-"<<endl;
	out << "Pret: "    << obj.pret  << std::endl;
	
	return out;
}
	

 istream& operator>>(istream& inm, Sticla& obj)
{
	inm >> (Dop&)obj;
	char buffe[100];
	cout<<"marca:  ";
	inm >> buffe;
	obj.marca = new char[strlen(buffe) + 1];
	strcpy(obj.marca, buffe);
	cout<<"pret:  ";
	inm >> obj.pret;
	
	return inm;
} 
Sticla& Sticla::operator=(const Sticla& obj)
{	
	(Dop&)(*this) = obj;
	
	this->pret = obj.pret;
	if(marca != NULL)
		delete []marca;
		
	this->marca = new char[strlen(obj.marca) + 1];
	strcpy(this->marca,obj.marca);
	
	return *this;
}
int Sticla::getPret() const
{

	return this->pret;
}
int Sticla::getDiametru() const
{

	return this->diametru;
}



