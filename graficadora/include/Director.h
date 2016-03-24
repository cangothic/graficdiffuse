#ifndef DIRECTOR_H
#define DIRECTOR_H


class Director
{
    public:
        virtual ~Director();
        static Director *getInstance();

    private:
        Director();
        static Director* unicaInstancia;
};

#endif // DIRECTOR_H
