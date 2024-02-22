#include <iostream>
#include <string>

class Cliente {
private:
    std::string nombre;
    std::string apellido;
    std::string direccion;
    std::string telefono;

public:
    // Constructor
    Cliente(std::string nombre, std::string apellido, std::string direccion, std::string telefono) {
        this->nombre = nombre;
        this->apellido = apellido;
        this->direccion = direccion;
        this->telefono = telefono;
    }

    // Métodos para obtener los datos del cliente
    std::string getNombre() const {
        return nombre;
    }

    std::string getApellido() const {
        return apellido;
    }

    std::string getDireccion() const {
        return direccion;
    }

    std::string getTelefono() const {
        return telefono;
    }
};

int main() {
    // Crear un objeto Cliente
    Cliente cliente1("Juan", "Perez", "Calle 123", "555-1234");

    // Obtener y mostrar los datos del cliente
    std::cout << "Nombre: " << cliente1.getNombre() << std::endl;
    std::cout << "Apellido: " << cliente1.getApellido() << std::endl;
    std::cout << "Dirección: " << cliente1.getDireccion() << std::endl;
    std::cout << "Teléfono: " << cliente1.getTelefono() << std::endl;

    return 0;
}
