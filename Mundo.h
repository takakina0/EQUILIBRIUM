#pragma once
#include <iostream>
#include "Protagonista.h"
#include "Enemigo.h"
#include "Pregunta.h"
#include "Recurso.h"
using namespace std;
class Mundo
{
private:
	string nombre;
	Protagonista protagonista;
	Enemigo enemigo;
	Recurso recurso;
	Pregunta pregunta;
public:
	Mundo(string nombre, Protagonista protagonista, Enemigo enemigo, Recurso recurso, Pregunta pregunta) {
		this->nombre = nombre;
		this->protagonista = protagonista;
		this->enemigo = enemigo;
		this->recurso = recurso;
		this->pregunta = pregunta;
	}
	void iniciarMundo() {
		cout << "Iniciando el mundo: " << nombre << endl;
	}
	void verificarCondiciones()
	{
		cout << "Verificando condiciones del mundo: " << nombre << endl;
	}

};