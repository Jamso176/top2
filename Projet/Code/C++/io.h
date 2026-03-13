io.h
#ifndef IO_H
#define IO_H

#include <Arduino.h>

class Io
{
public:

    // Type d'entrée/sortie
    enum IoType
    {
        DIGITAL,
        ANALOG,
        PWM,
        DAC,
        UNKNOWN
    };

private:
    IoType type;
    int id;
    int pinNumber;
    String name;
    float vcc;

public:

    // Constructeur
    Io();

    // Constructeur avec paramètres
    Io(IoType type, int id, int pinNumber, String name, float vcc);

    // Getters
    IoType getType();
    int getId();
    int getPinNumber();
    String getName();
    float getVcc();

    // Setters
    void setType(IoType t);
    void setId(int i);
    void setPinNumber(int p);
    void setName(String n);
    void setVcc(float v);

    // Initialisation du pin Arduino
    void begin();

};

#endif