#pragma once
#include <iostream>
#include <assert.h>
using namespace std;

namespace geometre {
template <class T>
	class Vecteur3D
	{
	private:
		T vect[3];
	public:
		Vecteur3D(T x = 0.0, T y = 0.0, T z = 0.0) 
			{
				this->vect[0] = x;
				this->vect[1] = y;
				this->vect[2] = z;
			}
		//l'interdiction du constructeur de recoupie et =
		Vecteur3D(const Vecteur3D&)=delete;//impossible d'utiliser cette methode
		Vecteur3D& operator=(const Vecteur3D&) = delete;//,,
		void print()const {
			cout << "Vecteur [";
			for (int ind = 0; ind < 3; ind++)
				cout << this->at(ind) << " ";
			cout << "]\n";
		}
		T at(unsigned int i)const {
			assert(i >= 0 && i < 3);//debug
			try//mode release
			{
				if (i < 0 || i >= 3)throw "rang error";
				return this->vect[i];
			}
			catch (char* e)
			{
				cout << e << endl;
			}
		}
		T& operator[](unsigned int i)//accede en mode lecture et ecriure
		{
			assert(i >= 0 && i < 3);//debug
			try//mode release
			{
				if (i < 0 || i >= 3)throw "rang error";
				return this->vect[i];
			}
			catch (char* e)
			{
				cout << e << endl;
			}
		}
		bool operator==(const Vecteur3D&v)const {
			bool res = true;
			for (int i = 0; i < 3; i++)
			{
				//res = res && (this->vect[i] == v.vect[i]);
				res = res && (this->at(i) == v.at(i));
			}
			return res;
		}
		bool operator!=(const Vecteur3D&v)const {
			bool res = !(*this == v);
			return res;
		}
		//friend void display(Vecteur3D& V);
		T norme()const {
			return sqrt(pow(this->at(0), 2) + pow(this->at(1), 2) + pow(this->at(2), 2));
		}
		T P_scalaire(const Vecteur3D&v)const {
			T res = 0;
			for (int i = 0; i < 3; i++)
			{
				res += this->at(i) * v.at(i);
			}
			return res;
		}
		void P_vectoriel(const Vecteur3D& v) {
			T a = (this->at(1) * v.at(2)) - (this->at(2) * v.at(1));
			T b = (this->at(2) * v.at(0)) - (this->at(0) * v.at(2));
			T c = (this->at(0) * v.at(1)) - (this->at(1) * v.at(0));
			this->vect[0] = a;
			this->vect[1] = b;
			this->vect[2] = c;
		}
		bool perpendiculaire(const Vecteur3D& v)const {
			return (this->P_scalaire(v) == 0.0);
		}
		bool isVectNull()const {
			for (int i = 0; i < 3; i++)
				if (this->at(i) != 0) return false;
			return true;
		}
		bool parallele(const Vecteur3D& v)const
		{
			Vecteur3D tmp(this->at(0), this->at(1), this->at(2));
			tmp.P_vectoriel(v);
			return tmp.isVectNull();
		}
	};
	//void display(Vecteur3D& V);
};
