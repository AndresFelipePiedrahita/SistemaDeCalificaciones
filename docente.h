#ifndef DOCENTE_H
#define DOCENTE_H
#include "asignatura.h"
typedef struct{
    char tipo[10];
    int id;
    char nombre[50];
    char apellido[50];
    char contraseña[50];
    Asignatura asignaturas[6];
} Docente;


void menuDocente();
void crearDocente();
void actualizarDocente();
void mostrarDocente();
void eliminarDocente();
#endif