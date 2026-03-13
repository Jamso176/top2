io.cpp

#include "Io.h"

// Constructeur par défaut
Io::Io()
{
    type = UNKNOWN;
    id = 0;
    pinNumber = -1;
    name = "";
    vcc = 0.0;
}

// Constructeur avec paramètres
Io::Io(IoType type, int id, int pinNumber, String name, float vcc)
{
    this->type = type;
    this->id = id;
    this->pinNumber = pinNumber;
    this->name = name;
    this->vcc = vcc;
}

// Getters
Io::IoType Io::getType()
{
    return type;
}

int Io::getId()
{
    return id;
}

int Io::getPinNumber()
{
    return pinNumber;
}

String Io::getName()
{
    return name;
}

float Io::getVcc()
{
    return vcc;
}

// Setters
void Io::setType(IoType t)
{
    type = t;
}

void Io::setId(int i)
{
    id = i;
}

void Io::setPinNumber(int p)
{
    pinNumber = p;
}

void Io::setName(String n)
{
    name = n;
}

void Io::setVcc(float v)
{
    vcc = v;
}

// Initialisation du pin
void Io::begin()
{
    if(type == DIGITAL || type == PWM)
        pinMode(pinNumber, OUTPUT);

    if(type == ANALOG)
        pinMode(pinNumber, INPUT);
}