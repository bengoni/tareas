#include <iostream>
#include <string>

class Cliente {
public:
    // Constructor
    Cliente(std::string nombre, std::string apellido, int edad, std::string telefono)
        : nombre_(nombre), apellido_(apellido), edad_(edad), telefono_(telefono) {}

    // Métodos
    void mostrarDatos() {
        std::cout << "Nombre: " << nombre_ << std::endl;
        std::cout << "Apellido: " << apellido_ << std::endl;
        std::cout << "Edad: " << edad_ << std::endl;
        std::cout << "Teléfono: " << telefono_ << std::endl;
    }

    // Getters y setters
    std::string getNombre() const { return nombre_; }
    void setNombre(std::string nombre) { nombre_ = nombre; }
    std::string getApellido() const { return apellido_; }
    void setApellido(std::string apellido) { apellido_ = apellido; }
    int getEdad() const { return edad_; }
    void setEdad(int edad) { edad_ = edad; }
    std::string getTelefono() const { return telefono_; }
    void setTelefono(std::string telefono) { telefono_ = telefono; }

private:
    std::string nombre_;
    std::string apellido_;
    int edad_;
    std::string telefono_;
};

int main() {
    Cliente cliente("Juan", "Perez", 30, "123456789");
    cliente.mostrarDatos();

    cliente.setNombre("Pedro");
    cliente.setApellido("Gomez");
    cliente.setEdad(25);
    cliente.setTelefono("987654321");
    cliente.mostrarDatos();

    return 0;
}

