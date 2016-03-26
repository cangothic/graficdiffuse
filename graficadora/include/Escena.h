#ifndef ESCENA_H
#define ESCENA_H

class Escena
{
    public:
        Escena();
        virtual void actualizar();
        virtual void eventos();
        virtual void dibujar();
        virtual ~Escena();


    protected:

    private:
        int idEscena;
};

#endif // ESCENA_H
