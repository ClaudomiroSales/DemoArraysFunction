#ifndef ARRAYTEST_H
#define ARRAYTEST_H

#include<string>
using std::string;

#include <iostream>
using std::cout;

class Distribuicao
{
public:
	
	Distribuicao( );
	Distribuicao(const string [ ], int);
	~Distribuicao();
	
	void setNomesVerssDistribuicao( const string [ ], int );
	
	
	void printDistribuicao( ) const;
	
	
private:

	string *nomesVerssDistribuicao;
	int sizeNomesVerssDistribuicao;

};

#endif // ARRAYTEST_H
