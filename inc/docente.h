#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

typedef struct{
    int id;
    char nombre[50];
    char apellido[50];
    char contrasena[50];
} Docente;


void menuDocente();
void crearDocente();
void actualizarDocente();
void mostrarDocente();
void eliminarDocente();

#endif