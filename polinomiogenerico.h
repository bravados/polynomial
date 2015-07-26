#ifndef __POLINOMIOGENERICO_H__
#define __POLINOMIOGENERICO_H__

#include <iostream>

using namespace std;

/**

TDA Polinomio

Permite trabajar con polinomios de grado indefinido y tipo genérico (enteros, reales, coma flotante)

Operaciones: =,==,!=,>,>=,<,<=,+,-,*,/,(),Grado,Coef,<<

Usa Memoria Dinámica

*/

template <class T>
class Polinomio {

	T *p;
	int res;
	int util;

	public:

/**
@brief Constructor por defecto de la clase. Inicializa el polinomio a 0
*/
Polinomio();


/**
@brief Constructor de copia. Asigna al polinomio de la clase el polinomio indicado (SOLO EN LA DECLARACIÓN)

*/
Polinomio(const Polinomio<T> &P);


/**
@brief Constructor por parámetros. Inicializa el polinomio en función de los parámetros dados.

@pre El numero de coeficientes ha de ser > 0

@param n Grado maximo del polinomio
@param v Vector con cada uno de los coeficientes: desde el monomio de grado n hasta el de grado 0

Recibe de la forma x²+x+1 y escribe de la forma 1+x+x²

*/
Polinomio(int n, T v[]);


/**
@brief Operador de asignacion. Asiagna al polinomio de la clase el polinomio indicado.

@param P Polinomio que queremos copiar

@return Una referencia al polinomio de la clase
*/
Polinomio & operator=(const Polinomio &P);


/**
@brief Operador de igualdad. Comprueba si dos polinomios son iguales

@param P Polinomio con el que comparar el de la clase

@return true si son iguales, false si no
*/
bool operator==(const Polinomio<T> &P) const;


/**
@brief Operador de distinto. Comprueba si dos polinomios son distintos

@param P Polinomio con el que comparar el de la clase

@return true si son distintos, false si no
*/
bool operator!=(const Polinomio<T> &P) const;


/**
@brief Operador >. Comprueba si el polinomio de la clase es mayor que el indicado

@param P polinomio con el que comprar el de la clase

@return true si es mayor, false en otro caso.
*/
bool operator>(const Polinomio<T> &P) const;


/**
@brief Operador >=. Comprueba si el polinomio de la clase es mayor o igual que el indicado

@param P polinomio con el que comprar el de la clase

@return true si es mayor o igual, false en otro caso.
*/
bool operator>=(const Polinomio<T> &P) const;


/**
@brief Operador <. Comprueba si el polinomio de la clase es menor que el indicado

@param P polinomio con el que comprar el de la clase

@return true si es menor, false en otro caso.
*/
bool operator<(const Polinomio<T> &P) const;


/**
@brief Operador <=. Comprueba si el polinomio de la clase es menor o igual que el indicado

@param P polinomio con el que comprar el de la clase

@return true si es menor o igual, false en otro caso.
*/
bool operator<=(const Polinomio<T> &P) const;



/**
@brief Operador de suma. Suma dos polinomios

@param P Polinomio a sumar junto al de la clase

@return El polinomio suma

*/
Polinomio operator+(const Polinomio &P) const;



/**
@brief Operador de resta. Resta dos polinomios

@param P Sustraendo

@return El polinomio diferencia

*/
Polinomio operator-(const Polinomio<T> &P) const;



/**
@brief Operador producto. Multiplica dos polinomios

@param P Polinomio a multiplicar junto al de la clase

@return El producto de los dos polinomios

*/
Polinomio operator*(const Polinomio &P) const;



/**
@brief Operador de division. Divide dos polinomios

@param P Divisor

@return El cociente de los dos polinomios

*/
Polinomio operator/(const Polinomio<T> &P) const;



/**
@brief Modulo. Devuelve el resto de un cociente

@param P Divisor

@return El resto del cociente
*/
Polinomio operator%(const Polinomio<T> &P) const;



/**
@brief Operador paréntesis. Evalua el polinomio en un punto dado

@param n Punto en el que evaluar el polinomio

@return El valor del polinomio en dicho punto
*/
T operator()(T n) const;



/**
@brief Devuelve el grado de un polinomio.

return El mayor grado de los monomios
*/
int Grado() const;



/**
@brief Devuelve el coeficiente del monomio de grado n

@param n Grado del monomio del coeficiente

@return El Coeficiente
*/
T Coef(int n) const;


/**
@brief Imprime un polinomio

@param os Flujo de salida

@param P Polinomio a Imprimir

@return El flujo de Salida
*/
template<typename U>
friend ostream & operator<<(ostream &os, const Polinomio<U> & P);


};

#include "polinomiogenerico.template"
#endif
