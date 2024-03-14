#include <iostream>
#include <string>

class Cliente {
public:
    // Constructor
    Cliente(std::string nombre, std::string apellido, int edad) : nombre_(nombre), apellido_(apellido), edad_(edad) {}

    // Métodos
    void mostrarDatos() {
        std::cout << "Nombre: " << nombre_ << std::endl;
        std::cout << "Apellido: " << apellido_ << std::endl;
        std::cout << "Edad: " << edad_ << std::endl;
    }

    // Getters y setters
    std::string getNombre() const { return nombre_; }
    void setNombre(std::string nombre) { nombre_ = nombre; }
    std::string getApellido() const { return apellido_; }
    void setApellido(std::string apellido) { apellido_ = apellido; }
    int getEdad() const { return edad_; }
    void setEdad(int edad) { edad_ = edad; }

private:
    std::string nombre_;
    std::string apellido_;
    int edad_;
};

int main() {
    Cliente cliente("Juan", "Perez", 30);
    cliente.mostrarDatos();

    cliente.setNombre("Pedro");
    cliente.setApellido("Gomez");
    cliente.setEdad(25);
    cliente.mostrarDatos();

    return 0;
}
