#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    int nota[3];
};

int main() {
    int numEstudiantes = 0;
    cout << "¿Cuantos estudiantes deseas agregar a la lista?: " << endl;
    cin >> numEstudiantes;
    Alumno estudiantes[numEstudiantes];
    Alumno *ptrEstudiante = estudiantes;
    bool condicion = true;
    string respuesta;
    
    for(int i = 0; i < numEstudiantes; i++){
        cout << "Nombre del estudiante: ";
        cin >> ptrEstudiante->nombre;
        cout << "Notas del estudiante: ";
        for (int j = 0; j < 3; j++) {
            cin >> ptrEstudiante->nota[j];
        }
        ptrEstudiante++;
    }
    
    ptrEstudiante = estudiantes;
    
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "Estudiante " << i + 1 << ": " << ptrEstudiante->nombre << ", Notas: ";
        for (int j = 0; j < 3; j++) {
            cout << ptrEstudiante->nota[j] << " ";
        }
        cout << endl;
        ptrEstudiante++;
    }

    return 0;
}