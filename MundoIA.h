#pragma once
#include "Mundo.h"
#include <iostream>
#include <string>
#include <vector>

class MundoIA :public Mundo {
private:
	std::string nombre;
	Protagonista protagonista;
	Enemigo enemigo;
	Recurso recurso;
	Pregunta pregunta;
public:
	virtual void iniciarMundo();
	virtual bool verificarCondiciones();
};

class EnemigoIA : public MundoIA {
private:
	int daño;
public:
	void mover();
	void recibirDaño(int);
};

class PreguntaIA : public MundoIA {
private:
	std::string enunciado;
	std::string opciones;
	std::string respuestaCorrecta;
public:
	void mostrarPregunta();
	bool verificarRespuesta(std::string);
};

class Protagonista : public MundoIA {
private:
	int energia;
public:
	void recolectarRecurso();
	bool responderPregunta();
};

class Recurso : MundoIA {
private:
	std::string tipo;
	int rx;
	int ry;
public:
	void activar(Protagonista);
};