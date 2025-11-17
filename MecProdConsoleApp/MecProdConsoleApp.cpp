#include "pch.h"

using namespace System;
using namespace MecProdModel;
using namespace System::Collections::Generic;

int main(array<System::String^>^ args)
{
    return 0;
}

/*
namespace MecProdConsoleApp {
    public ref class ConsoleApp {
    public:
        static void ShowMenu() {
            Console::WriteLine("\n=== Sistema de Gestión de Ensamblaje ===");
            Console::WriteLine("1. Ingresar nuevo operador");
            Console::WriteLine("2. Consultar un operador por su Id");
            Console::WriteLine("3. Consultar todos los operadores");
            Console::WriteLine("4. Modificar un operador");
            Console::WriteLine("5. Eliminar un operador");
            Console::WriteLine("6. Salir");
            Console::Write("Seleccione una opción: ");
        }

        [STAThreadAttribute]
        static int Main(array<String^>^ args) {
            OperadorController^ controller = gcnew OperadorController();
            int opcion;

            do {
                ShowMenu();
                opcion = Convert::ToInt32(Console::ReadLine());

                switch (opcion) {
                case 1: {
                    Console::WriteLine("\n=== Ingresar Nuevo Operador ===");
                    Console::Write("ID: "); String^ id = Console::ReadLine();
                    Console::Write("Nombre: "); String^ nombre = Console::ReadLine();
                    Console::Write("Rol: "); String^ rol = Console::ReadLine();
                    Console::Write("Turno: "); String^ turno = Console::ReadLine();
                    Console::Write("Ubicación: "); String^ ubicacion = Console::ReadLine();

                    controller->registrarOperador(id, nombre, rol, turno, ubicacion);
                    Console::WriteLine(" Operador registrado correctamente.");
                    break;
                }
                case 2: {
                    Console::Write("\nIngrese el ID del operador a consultar: ");
                    String^ id = Console::ReadLine();
                    Operador^ operador = controller->buscarOperadorxId(id);
                    if (operador != nullptr) {
                        Console::WriteLine("ID: {0}, Nombre: {1}, Rol: {2}, Turno: {3}, Ubicación: {4}",
                            operador->getId(), operador->getNombre(), operador->getRol(),
                            operador->getTurno(), operador->getUbicacion());
                    }
                    else {
                        Console::WriteLine(" Operador no encontrado.");
                    }
                    break;
                }
                case 3: {
                    Console::WriteLine("\n=== Listado de Operadores ===");
                    for each (Operador ^ operador in controller->listarOperador()) {
                        Console::WriteLine("ID: {0}, Nombre: {1}, Rol: {2}, Turno: {3}, Ubicación: {4}",
                            operador->getId(), operador->getNombre(), operador->getRol(),
                            operador->getTurno(), operador->getUbicacion());
                    }
                    break;
                }
                case 4: {
                    Console::Write("\nIngrese el ID del Operador a modificar: ");
                    String^ id = Console::ReadLine();
                    Operador^ operador = controller->buscarOperadorxId(id);
                    if (operador != nullptr) {
                        Console::Write("Nuevo Nombre: "); String^ nombre = Console::ReadLine();
                        Console::Write("Nuevo Rol: "); String^ rol = Console::ReadLine();
                        Console::Write("Nuevo Turno: "); String^ turno = Console::ReadLine();
                        Console::Write("Nueva Ubicación: "); String^ ubicacion = Console::ReadLine();
                        controller->modificarOperador(id, nombre,rol, turno, ubicacion);
                        Console::WriteLine(" Operador modificado correctamente.");
                    }
                    else {
                        Console::WriteLine(" Operador no encontrado.");
                    }
                    break;
                }
                case 5: {
                    Console::Write("\nIngrese el ID del Operador a eliminar: ");
                    String^ id = Console::ReadLine();
                    controller->eliminarOperador(id);
                    Console::WriteLine(" Operador encontrado ha sido eliminado.");
                    break;
                }
                case 6: {
                    Console::WriteLine("\n Saliendo del programa...");
                    break;
                }
                default: {
                    Console::WriteLine("\n Opción no válida.");
                    break;
                }
                }
            } while (opcion != 6);
            return 0;
        }
    };
}*/
