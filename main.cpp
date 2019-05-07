#include <iostream>
using std::cout;

#include<string.h>
using std::string;

#include "Distribuicao.h"


int main(int argc, char **argv)
{
	
	
	cout << "Testando metodos que recebem arrays\n\n";
	
	const static int SIZEDISTR = 3;
	string nomeDistri[ SIZEDISTR ] = { "aaaa", "bbb", "ccc" };
	Distribuicao distr( nomeDistri, SIZEDISTR );
	
	distr.printDistribuicao( );
	
	
	return 0;
}
