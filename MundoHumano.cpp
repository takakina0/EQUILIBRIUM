#include "MundoHumano.h"

using namespace std;

int main() {
    vector<MundoHumano*> humanos;
    humanos.push_back(new EnemigoHumano());
    humanos.push_back(new PreguntaHumano());
    humanos.push_back(new ProtagonistaHumano());
    humanos.push_back(new RecursoHumano());

    return 0;
}