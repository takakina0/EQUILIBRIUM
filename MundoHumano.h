#pragma once
#include "Mundo.h"
#include <iostream>
#include <string>
#include <vector>

class MundoHumano : public Mundo {
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

class EnemigoHumano : public MundoHumano {
private:
    int daño;
public:
    void mover();
    void recibirDaño(int);
};

class PreguntaHumano : public MundoHumano {
private:
    std::string enunciado;
    std::string opciones;
    std::string respuestaCorrecta;
public:
    void mostrarPregunta();
    bool verificarRespuesta(std::string);
};

class ProtagonistaHumano : public MundoHumano {
private:
    int energia;
public:
    void recolectarRecurso();
    bool responderPregunta();
};

class RecursoHumano : public MundoHumano {
private:
    std::string tipo;
    int rx;
    int ry;
public:
    void activar(ProtagonistaHumano);
};