#include "estudiante.h"

Estudiante::Estudiante()
{

}

void Estudiante::SetNombre(QString _nombre)
{
    nombre = _nombre;
}

void Estudiante::SetMateria(QString _materia)
{
    materia = _materia;
}

void Estudiante::SetEdad(int _edad)
{
    edad = _edad;
}

QString Estudiante::GetNombre(void)
{
    return nombre;
}

QString Estudiante::GetMateria(void)
{
    return materia;
}

int Estudiante::GetEdad(void)
{
    return edad;
}
