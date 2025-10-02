#include "MundoIA.h"

using namespace std;

int main() {
	vector<MundoIA*>IA;
	IA.push_back(new EnemigoIA());
	IA.push_back(new PreguntaIA());
	IA.push_back(new Protagonista());
	IA.push_back(new Recurso());

	return 0;
}