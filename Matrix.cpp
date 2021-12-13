#include "pch.h"
#include "Matrix.h"
#include <iostream>

using namespace algebre;
using namespace std;
/*algebre::Matrix::Matrix(unsigned int l, unsigned int c)
{
	this->ligne = l;
	this->colonne = c;
	this->ligne = l;
	this->colonne = c;
	this->matrice = new int* [l];
	for (int i = 0; i < l; i++)
		this->matrice[i] = new int[c];
	for (int i = 0; i < this->ligne; i++)
		for (int j = 0; j < this->colonne; j++)
			this->matrice[i][j] = 0;
	assert(l >= 0 && c >= 0);
	try {
		if (l < 0 || c < 0)
			throw "la ligne ou/et la colonne sont negative";

		//l'alocation memoire
		this->matrice = new float* [l];
		for (unsigned int i = 0; i < l; i++)
			this->matrice[i] = new float[c];
		//le remplissage
		for (unsigned int i = 0; i < this->ligne; i++)
			for (int j = 0; j < this->colonne; j++)
				this->matrice[i][j] = 0;
	}
	catch (char* e) {
		cout << e;
	}

}

void algebre::Matrix::Remplissage(int valeur)
{
	for (unsigned int i = 0; i < this->ligne; i++)
		for (unsigned int j = 0; j < this->colonne; j++)
			this->matrice[i][j] = valeur;
}

void algebre::Matrix::print() const
{
	for (unsigned int i = 0; i < this->ligne; i++) {
		for (unsigned int j = 0; j < this->colonne; j++)
			cout << this->matrice[i][j];
		cout << endl;
	}

}

void algebre::Matrix::operator+(const Matrix& M) const
{
	assert(M.colonne == this->colonne && M.ligne == this->ligne);
	try {
		if (M.colonne != this->colonne || M.ligne != this->ligne)
			throw "la matrice n'a pas les dimension convenable";
		//Matrix* sum = new Matrix(this->ligne, this->colonne);
		for (int i = 0; i < this->ligne; i++)
			for (int j = 0; j < this->colonne; j++)
				this->matrice[i][j] = this->matrice[i][j] + M.matrice[i][j];
		//return *sum;
	}
	catch (char* e) {
		cout << e;
	}

}

void algebre::Matrix::operator-(const Matrix& M) const
{
	assert(M.colonne == this->colonne && M.ligne == this->ligne);
	try {
		if (M.colonne != this->colonne || M.ligne != this->ligne)
			throw "la matrice n'a pas les dimension convenable";
		Matrix* sub = new Matrix(this->ligne, this->colonne);
		for (int i = 0; i < this->ligne; i++)
			for (int j = 0; j < this->colonne; j++)
				this->matrice[i][j] = this->matrice[i][j] - M.matrice[i][j];
		//return *sub;
	}
	catch (char* e) {
		cout << e;
	}

}

void algebre::Matrix::operator*(int elem) const
{
	//Matrix* Mpro = new Matrix(this->ligne, this->colonne);
	for (unsigned int i = 0; i < this->ligne; i++)
		for (unsigned int j = 0; j < this->colonne; j++)
			this->matrice[i][j] *= elem;
	//return *Mpro;
}

void algebre::Matrix::operator*(const Matrix& M) const
{
	Matrix* Mpro = new Matrix(this->ligne, this->colonne);
	int elem;
	for (unsigned int i = 0; i < this->ligne; i++)
		for (unsigned int j = 0; j < this->colonne; j++)
		{
			elem = 0;
			for (unsigned int l = 0; l < this->ligne; l++)
				elem += this->matrice[l][j] * M.matrice[j][l];
			Mpro->matrice[i][j] = elem;
		}
	for (unsigned int i = 0; i < this->ligne; i++)
		for (unsigned int j = 0; j < this->colonne; j++)
			this->matrice[i][j] = Mpro->matrice[i][j];
	delete Mpro;
	Mpro = 0;
	//return *Mpro;
}

void algebre::Matrix::vecteurToMatrix(const Vecteur3D& vet)
{
	assert(this->ligne >= 3);
	for (int i=0; i < 3; i++) {
		this->matrice[i][0] = vet.at(i);
	}
}

Vecteur3D* algebre::Matrix::MatrixToVecteur()
{
	assert(this->ligne == 3);
	Vecteur3D *vect=new Vecteur3D;
	for (int i = 0; i < 3; i++)
	{
		(*vect)[i]=this->matrice[i][0];
	}
	return vect;
}

algebre::Matrix::~Matrix()
{
	if (this->matrice) {
		for (int i = 0; i < this->ligne; i++)
			{
			//pour chaque x=type new[n] on utilise delete[] x
				delete[] this->matrice[i];
				matrice[i] = 0;
			}
			delete this->matrice;
			this->matrice = 0;
	}
	

}
*/