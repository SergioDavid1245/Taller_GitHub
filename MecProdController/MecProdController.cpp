
#include "pch.h"
#include "MecProdController.h"

int MecProdController::Controller::AgregarOperador(Operador^ operador) {
    return Persistance::AgregarOperador(operador);
}

List<Operador^>^ MecProdController::Controller::ListarOperadores() {
    return Persistance::ListarOperadores();
}

Operador^ MecProdController::Controller::BuscarOperadorxId(int operadorId) {
    return Persistance::BuscarOperadorxId( operadorId);
}

int MecProdController::Controller::ModificarOperador(Operador^ operador) {
    return Persistance::ModificarOperador(operador);

}
int MecProdController::Controller::EliminarOperador(int operadorId) {
    return Persistance::EliminarOperador(operadorId);
}

// PARA MAQUINA

int MecProdController::Controller::AgregarMaquina(Maquina^ maquina)
{
    return Persistance::AgregarMaquina(maquina);

}

List<Maquina^>^ MecProdController::Controller::ListarMaquina()
{
    return Persistance::ListarMaquina();
}

int MecProdController::Controller::EliminarMaquina(int maquinaId)
{
    return Persistance::EliminarMaquina(maquinaId);
}
