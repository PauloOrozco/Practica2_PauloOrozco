#include <iostream>
#include <string>

using namespace std;

class Usuario
{

protected:
    string Nombre;
    int Telefono;
    int Edad;
    string Contraseña;

public:
    void Login();
    void LogOut();
    void Cambio_Contra();

    Usuario(string, int, int, string); // Constructor
};

Usuario::Usuario(string _Nombre, int _Telefono, int _Edad, string _Contraseña)
{
    Nombre = _Nombre;
    Telefono = _Telefono;
    Edad = _Edad;
    Contraseña = _Contraseña;
}

void Usuario::Login()
{
    cout << "El usuario " << Nombre << " ha iniciado sesion " << endl;
}

void Usuario::LogOut()
{
    cout << "El usuario " << Nombre << " ha cerrado sesion " << endl;
}

void Usuario::Cambio_Contra()
{
}

class Cliente : public Usuario
{
protected:
    int Id_Cliente;
    int No_Tarjeta;
    string Producto;

public:
    void Comprar();
    void Apartar();
    Cliente(string, int, int, string, int, int, string);
};

void Cliente::Comprar()
{
    cout << "El cliente compro: " << Producto << endl;
}

void Cliente::Apartar()
{
    cout << "El cliente aparto el producto: " << Producto << endl;
}

Cliente::Cliente(string _Nombre, int _Telefono, int _Edad, string _Contraseña, int Id_Cliente, int No_Tarjeta, string _Producto) : Usuario(_Nombre, _Telefono, _Edad, _Contraseña)
{

    Id_Cliente = Id_Cliente;
    No_Tarjeta = No_Tarjeta;
    Producto = _Producto;
}

class Vendedor : public Usuario
{

private:
    int Id_Vendedor;

public:
    Vendedor(string, int, int, string, int);
    void Vender();
};

void Vendedor::Vender()
{
    cout << "Has vendido un producto " << endl;
}

int main(int argc, char const *argv[])
{

    Cliente _Cliente1 = Cliente("Paulo", 3315360222, 21, "Contraseña", 18300329, 555444222333, "Coca cola" );
    _Cliente1.Login();
    _Cliente1.Comprar();
    _Cliente1.Apartar();


    return 0;
}
