#include "Distribuicao.h"

Distribuicao::Distribuicao()
{	
	nomesVerssDistribuicao = 0;
	sizeNomesVerssDistribuicao = 0;
}


Distribuicao::Distribuicao(const string nomesDistri[ ], int sizeNomesDistri)
{
	nomesVerssDistribuicao = 0;
	sizeNomesVerssDistribuicao = 0;
	setNomesVerssDistribuicao( nomesDistri, sizeNomesDistri );
}

Distribuicao::~Distribuicao()
{
}


void Distribuicao::setNomesVerssDistribuicao( const string nomesDistri[ ], int sizeNomesDistri )
{
	if( nomesVerssDistribuicao != 0 )
	{
		delete [ ] nomesVerssDistribuicao;	
		nomesVerssDistribuicao = 0;
	}
	
	
	sizeNomesVerssDistribuicao = sizeNomesDistri;
	nomesVerssDistribuicao = new string[ sizeNomesVerssDistribuicao ];
	for( int i = 0; i < sizeNomesVerssDistribuicao; i++ )
		nomesVerssDistribuicao[ i ] = nomesDistri[ i ];	
	
}


void Distribuicao::printDistribuicao( ) const
{
	cout << "Distribuicoes: \n";
	for( int i = 0; i < sizeNomesVerssDistribuicao; i++ )
			cout << nomesVerssDistribuicao[ i ] << "\n";
	
}