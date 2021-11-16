#include "Dop.hpp"


Dop::Dop():diametru(0),tip(NULL)
{
	std::cout << "Dop: Constructor fara parametri\n";
}

Dop::Dop(int diametru, const char* tip):diametru(diametru)
{
	std::cout << "Dop: Constructor cu parametri\n";
	this->tip = new char[strlen(tip) + 1];
	strcpy(this->tip,tip);
}

Dop::Dop(const Dop& obj)//:lungime(obj.lungime)
{
	std::cout << "Dop: Constructor de copiere.\n";
	this->tip = new char[strlen(obj.tip) + 1];
	strcpy(this->tip,obj.tip);
	//tip = NULL;
//	*this = obj;
}

Dop::~Dop()
{
	std::cout << "Dop: Destructor\n";
	delete []tip;
}

Dop& Dop::operator=(const Dop& obj)
{
	//cout << &obj << endl;
	if(this != &obj)
	{
		if(tip != NULL)
			delete []tip;
	
		if(obj.tip == NULL)
			tip = NULL;
		else {
			this->tip = new char[strlen(obj.tip) + 1];
			strcpy(this->tip,obj.tip);
		}
		diametru = obj.diametru;
	}
	
	return *this;
}
std::ostream& operator<<(std::ostream& out, const Dop& obj)
{
	out << "Diametru " << obj.diametru << std::endl;
	if(obj.tip!=NULL)
	out << "Tip: " << obj.tip << std::endl;
	else 
	out <<"Tip: -"<<std::endl;
	
	return out;
}
istream& operator>>(istream& in, Dop& obj)
{
	cout<<"diametru:  ";
	in >> obj.diametru;
	char buffer[100];
	cout<<"tip:  ";
	in >> buffer;
	obj.tip = new char[strlen(buffer) + 1];
	strcpy(obj.tip, buffer);
	
	return in;
}






