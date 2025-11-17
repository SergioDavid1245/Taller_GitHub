
using namespace System;
using namespace System::Collections::Generic;
using namespace MecProdModel;
using namespace MecProdPersistance;

namespace MecProdController {
    public ref class Controller {
    
    public:
        // Métodos CRUD
        static int AgregarOperador(Operador^ operador);
        static List<Operador^>^ ListarOperadores();
        static Operador^ BuscarOperadorxId(int operadorId);
        static int ModificarOperador(Operador^ operador);
        static int EliminarOperador(int operadorId);

        //CRUD MAQUINA
        static int AgregarMaquina(Maquina^ maquina);
        static List<Maquina^>^ ListarMaquina();
        static int EliminarMaquina(int maquinaId);
    };
}