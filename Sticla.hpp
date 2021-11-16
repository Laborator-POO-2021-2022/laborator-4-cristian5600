#ifndef STICLA_HPP
#define STICLA_HPP

#include "Dop.hpp"


class Sticla: public Dop{
	
	int pret;
	char *marca;
	
public:
	Sticla();
	Sticla(int, const char*,const char*,int);
	Sticla(const Sticla&);
	~Sticla();	
	
	Sticla& operator=(const Sticla&);
	friend ostream& operator<<(ostream&, const Sticla&);
	friend istream& operator>>(istream&, Sticla&);
	int getPret() const;
	int getDiametru() const;	
	
};


#endif
