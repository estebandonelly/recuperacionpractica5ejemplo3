#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include<QString>


class Estudiante
{
private:
    QString nombre;
    int edad;
    QString materia;
public:
    Estudiante();

    void SetNombre(QString _nombre);
    void SetMateria(QString _materia);
    void SetEdad(int _edad);

    QString GetNombre(void);
    QString GetMateria(void);
    int GetEdad(void);
};

#endif // ESTUDIANTE_H
