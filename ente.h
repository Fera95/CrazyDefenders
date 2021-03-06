#ifndef ENTE_H
#define ENTE_H

/**
 * @brief La clase ente , encargada de ser una clase abstract que ayude a crear entes en el juego
 */
class Ente
{


protected:
    int Vida;
    int Posx;
    int Posy;
    bool Existe;

public:
    void Moverse_arriba(){
       int movimiento = this->get_Posy() + 10;
       this->set_Posy(movimiento);
    }
    void Moverse_abajo(){
       int movimiento = this->get_Posy() - 10;
       this->set_Posy(movimiento);
    }
    void Moverse_derecha(){
       int movimiento = this->get_Posx() + 10;
       this->set_Posx(movimiento);
    }
    void Moverse_izquierda(){
       int movimiento = this->get_Posx() - 10;
       this->set_Posx(movimiento);
    }


    int get_Vida(){
        return this->Vida;

    }


    void set_Vida(int vida){
        this->Vida = vida;

    }


    void set_Posx(int posx){
        this->Posx = posx;

    }

    int get_Posx(){
        return this->Posx;


    }

    void set_Posy(int posy){
        this->Posy = posy;
    }

    int get_Posy(){
        return this->Posy;


    }



    Ente(int,int,int);
};

#endif // ENTE_H
