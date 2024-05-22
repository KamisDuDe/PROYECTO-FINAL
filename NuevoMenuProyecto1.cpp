#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <list>
#include <conio.h>
#include <windows.h>

using namespace std;

void CondicionalesCiclos();
void Funciones();
void POO();
void Archivos();
void HerenciaPolimorfismo();
void BaseDeDatos();

int main()
{
    int opcion;

    do
    {
        system("cls"); // Limpia la pantalla para mostrar el menú nuevamente
        cout << "\t\t------------------------" << endl;
        cout << "\t\t     Proyecto Final   " << endl;
        cout << "\t\t------------------------" << endl;

        cout << "\t[1] Condicionales y Ciclos." << endl;
        cout << "\t[2] Funciones." << endl;
        cout << "\t[3] Archivos." << endl;
        cout << "\t[4] POO." << endl;
        cout << "\t[5] Herencia y Polimorfismo." << endl;
        cout << "\t[6] Base de datos." << endl;
        cout << "\t[7] Salir del programa." << endl;

        cout << "\t -------------------------" << endl;
        cout << "\t Elije una funcion:  ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            CondicionalesCiclos();
            break;

        case 2:
            Funciones();
            break;

        case 3:
            Archivos();
            break;

        case 4:
            POO();
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            cout << "\nSaliendo del programa..." << endl;
            break;

        default:
            cout << "\nOpcion incorrecta." << endl;
            break;
        }

        cout << "\nPresiona Enter para continuar...";
        cin.ignore();
        cin.get(); // Espera a que el usuario presione Enter para continuar
    } while (opcion != 7);

    return 0;
}

void CondicionalesCiclos()
{
    // Conversión de quetzales a diferentes monedas
    const float Dolar = 0.13;
    const float Bitcoin = 0.0000021;
    const float PesosA = 113.62;
    const float PesosC = 499.24;
    const float Yenes = 20.10;

    char continuar;
    float quetzales;

    do
    {
        cout << "Escribe la cantidad de Quetzales a convertir: ";
        cin >> quetzales;

        system("cls"); // Limpia la pantalla para mostrar el menú nuevamente
        cout << "\t------------------------" << endl;
        cout << "\t       Opciones   " << endl;
        cout << "\t------------------------" << endl;

        cout << "[1] Convertir a USD" << endl;
        cout << "[2] Convertir a BTC" << endl;
        cout << "[3] Convertir a ARS" << endl;
        cout << "[4] Convertir a COP" << endl;
        cout << "[5] Convertir a JPY" << endl;
        cout << "[6] Regresar al menu principal" << endl;

        int eleccion;
        cin >> eleccion;

        if (eleccion == 1)
        {
            cout << "Son " << quetzales * Dolar << " Dolares." << endl;
        }
        else if (eleccion == 2)
        {
            cout << "Son " << quetzales * Bitcoin << " Bitcoins." << endl;
        }
        else if (eleccion == 3)
        {
            cout << "Son " << quetzales * PesosA << " Pesos Argentinos." << endl;
        }
        else if (eleccion == 4)
        {
            cout << "Son " << quetzales * PesosC << " Pesos Colombianos." << endl;
        }
        else if (eleccion == 5)
        {
            cout << "Son " << quetzales * Yenes << " Yenes." << endl;
        }
        else if (eleccion == 6)
        {
            break; // Salir del bucle y regresar al menú principal
        }
        else
        {
            cout << "Opcion inválida." << endl;
        }

        cout << "Desea realizar otra conversion? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Regresando al menu principal..." << endl;
}

// INICIO DEL PROGRAMA DE FUNCIONES

// Función para convertir grados a radianes
double gradosARadianes(double grados)
{
    const double PI = acos(-1);
    return grados * (PI / 180);
}

// Función para calcular el área de un círculo
double areaCirculo(double radio)
{
    const double PI = acos(-1);
    return PI * pow(radio, 2);
}

// Función para calcular el factorial de un número
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// Función que ejecuta el primer ejercicio
void ejercicio1()
{
    char repetir;
    do
    {
        double grados;
        cout << "Ingrese el angulo en grados: ";
        cin >> grados;
        double radianes = gradosARadianes(grados);
        double seno = sin(radianes);
        double coseno = cos(radianes);
        double tangente = tan(radianes);
        cout << "Seno de " << grados << " grados: " << seno << endl;
        cout << "Coseno de " << grados << " grados: " << coseno << endl;
        cout << "Tangente de " << grados << " grados: " << tangente << endl;
        cout << "Desea repetir el ejercicio? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');
}

// Función que ejecuta el segundo ejercicio
void ejercicio2()
{
    char repetir;
    do
    {
        double radio;
        cout << "Ingrese el radio del circulo: ";
        cin >> radio;
        double area = areaCirculo(radio);
        cout << "Area del circulo con radio " << radio << ": " << area << endl;
        cout << "Desea repetir el ejercicio? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');
}

// Función que ejecuta el tercer ejercicio
void ejercicio3()
{
    char repetir;
    do
    {
        int n;
        cout << "Ingrese un numero entero positivo: ";
        cin >> n;
        int fact = factorial(n);
        cout << "Factorial de " << n << ": " << fact << endl;
        cout << "Desea repetir el ejercicio? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');
}

void Funciones()
{
    int opcion;
    do
    {
        system("cls"); // Limpiar la pantalla antes de mostrar el menú
        cout << "\t------------------------" << endl;
        cout << "\t         Opciones   " << endl;
        cout << "\t------------------------" << endl;

        cout << "[1] Convertir grados a radianes." << endl;
        cout << "[2] Calcular el area de un circulo." << endl;
        cout << "[3] Calcular el factorial de un numero." << endl;
        cout << "[4] Regresar al menu principal." << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        case 4:
            cout << "Regresando al menu principal..." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
        }
    } while (opcion != 4);
}

// AQUÍ FINALIZA EL PROGRAMA DE FUNCIONES

void Archivos()
{
    int opcion;
    int arregloNotas[5];
    string arregloNombres[5];
    vector<int> vectorNotas;
    int suma = 0;
    ofstream ArchivoSalida;

    do
    {
        system("cls"); // Limpia la pantalla para mostrar el menú nuevamente
        cout << "\t\t------------------------" << endl;
        cout << "\t\t       Operaciones      " << endl;
        cout << "\t\t------------------------" << endl;

        cout << "\t[1] Ingresar datos." << endl;
        cout << "\t[2] Borrar datos." << endl;
        cout << "\t[3] Modificar datos." << endl;
        cout << "\t[4] Realizar otra operacion." << endl;
        cout << "\t[5] Regresar al menu principal." << endl;

        cout << "\t -------------------------" << endl;
        cout << "\t Elije una opcion:  ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            // Abrir el archivo de salida
            ArchivoSalida.open("listado.txt");

            // Ciclo para llenar el arreglo de nombres y notas
            for (int i = 0; i < 5; i++)
            {
                cout << "Ingrese el nombre del estudiante No. " << i + 1 << ": ";
                cin >> arregloNombres[i];
                cout << "Ingrese la nota del estudiante No. " << i + 1 << ": ";
                cin >> arregloNotas[i];
                suma += arregloNotas[i];
            }

            // Inserción de los valores en orden inverso
            for (int i = 4; i >= 0; i--)
            {
                vectorNotas.push_back(arregloNotas[i]);
            }

            // Mostrar los nombres y las notas en el orden de ingreso
            cout << "\nNombres y Notas (Orden de ingreso):\n";
            for (int i = 0; i < 5; i++)
            {
                cout << i + 1 << ". " << arregloNombres[i] << " - " << arregloNotas[i] << endl;
                // Escribir en el archivo de salida
                ArchivoSalida << i + 1 << ". " << arregloNombres[i] << " - " << arregloNotas[i] << endl;
            }

            // Mostrar los nombres y las notas en orden inverso
            cout << "\nNombres y Notas (Orden inverso):\n";
            for (int i = 0; i < 5; i++)
            {
                cout << i + 1 << ". " << arregloNombres[i] << " - " << vectorNotas[i] << endl;
            }

            // Calcular y mostrar el promedio de las notas
            cout << "\nEl promedio de las notas es de: " << suma / 5 << endl;
            // Escribir en el archivo de salida
            ArchivoSalida << "-------------------------------------------------------" << endl;
            ArchivoSalida << "El promedio de las notas es de: " << suma / 5 << endl;

            // Cerrar el archivo de salida
            ArchivoSalida.close();
            break;

        case 2:
            // Código para borrar datos de estudiantes
            int indiceBorrar;
            cout << "Ingrese el numero de estudiante que desea borrar: ";
            cin >> indiceBorrar;
            if (indiceBorrar >= 1 && indiceBorrar <= 5)
            {
                // Borrar el estudiante seleccionado
                arregloNombres[indiceBorrar - 1] = "";
                arregloNotas[indiceBorrar - 1] = 0;
                cout << "Estudiante borrado exitosamente." << endl;
            }
            else
            {
                cout << "Numero de estudiante no valido." << endl;
            }
            break;

        case 3:
            // Código para modificar datos de estudiantes
            int indiceModificar;
            cout << "Ingrese el numero de estudiante que desea modificar: ";
            cin >> indiceModificar;
            if (indiceModificar >= 1 && indiceModificar <= 5)
            {
                cout << "Ingrese el nuevo nombre del estudiante: ";
                cin >> arregloNombres[indiceModificar - 1];
                cout << "Ingrese la nueva nota del estudiante: ";
                cin >> arregloNotas[indiceModificar - 1];
                cout << "Estudiante modificado exitosamente." << endl;
            }
            else
            {
                cout << "Numero de estudiante no valido." << endl;
            }
            break;

        case 4:
            // Código para realizar otra operación de ingreso de datos
            for (int i = 0; i < 5; i++)
            {
                cout << "Ingrese el nombre del estudiante No. " << i + 1 << ": ";
                cin >> arregloNombres[i];
                cout << "Ingrese la nota del estudiante No. " << i + 1 << ": ";
                cin >> arregloNotas[i];
                suma += arregloNotas[i];
            }
            cout << "Datos ingresados exitosamente." << endl;
            break;

        case 5:
            cout << "\nRegresando al menu principal..." << endl;
            break;

        default:
            cout << "\nOpcion incorrecta." << endl;
            break;
        }

        cout << "\nPresiona Enter para continuar...";
        cin.ignore();
        cin.get(); // Espera a que el usuario presione Enter para continuar
    } while (opcion != 5);
}

// DECLARACIONES, CLASES Y METÓDOS
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void gotoxy(int x, int y)
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon, dwPos);
}

void ocultarCursor()
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 50;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hCon, &cci);
}

void pintarLimite()
{
    for (int i = 2; i < 78; i++)
    {
        gotoxy(i, 3);
        printf("%c", 205);
        gotoxy(i, 33);
        printf("%c", 205);
    }
    for (int i = 4; i < 33; i++)
    {
        gotoxy(2, i);
        printf("%c", 186);
        gotoxy(77, i);
        printf("%c", 186);
    }
    gotoxy(2, 3);
    printf("%c", 201);
    gotoxy(2, 33);
    printf("%c", 200);
    gotoxy(77, 3);
    printf("%c", 187);
    gotoxy(77, 33);
    printf("%c", 188);
}

class NAVE
{
    int x, y;
    int corazones;
    int vidas;

public:
    NAVE(int _x, int _y, int _corazones, int _vidas);
    void pintar();
    void borrar();
    void mover();
    void pintarCorazones();
    void perderVida();
    void dismunirCorazon() { corazones--; }
    int X() { return x; }
    int Y() { return y; }
    int vidasJugador() { return vidas; }
};

NAVE::NAVE(int _x, int _y, int _corazones, int _vidas)
{
    x = _x;
    y = _y;
    corazones = _corazones;
    vidas = _vidas;
}

void NAVE::pintar()
{
    gotoxy(x, y);
    printf("  %c", 30);
    gotoxy(x, y + 1);
    printf(" %c%c%c", 40, 207, 41);
    gotoxy(x, y + 2);
    printf("%c%c %c%c", 30, 190, 190, 30);
}

void NAVE::borrar()
{
    gotoxy(x, y);
    printf("         ");
    gotoxy(x, y + 1);
    printf("         ");
    gotoxy(x, y + 2);
    printf("         ");
}

void NAVE::mover()
{
    if (_kbhit())
    {
        char tecla = _getch();
        borrar();
        if (tecla == IZQUIERDA && x > 3)
        {
            x--;
        }
        else if (tecla == DERECHA && x + 6 < 77)
        {
            x++;
        }
        else if (tecla == ARRIBA && y > 4)
        {
            y--;
        }
        else if (tecla == ABAJO && y + 3 < 33)
        {
            y++;
        }
        else if (tecla == 'e')
        {
            corazones--;
        }
        pintar();
        pintarCorazones();
    }
}

void NAVE::pintarCorazones()
{
    gotoxy(50, 2);
    printf("Vida: %d", vidas);
    gotoxy(64, 2);
    printf("Salud:");
    gotoxy(70, 2);
    printf("      ");
    for (int i = 0; i < corazones; i++)
    {
        gotoxy(70 + i, 2);
        printf("%c", 3);
    }
}

void NAVE::perderVida()
{
    if (corazones == 0)
    {
        borrar();
        gotoxy(x, y);
        printf("   **   ");
        gotoxy(x, y + 1);
        printf("  ****  ");
        gotoxy(x, y + 2);
        printf("   **   ");
        Sleep(200);
        borrar();
        gotoxy(x, y);
        printf(" * ** *");
        gotoxy(x, y + 1);
        printf("  **** ");
        gotoxy(x, y + 2);
        printf(" * ** *");
        Sleep(200);
        borrar();
        vidas--;
        corazones = 3;
        pintarCorazones();
        pintar();
    }
}

class Asteroide
{
    int x, y;

public:
    Asteroide(int _x, int _y);
    void pintar();
    void mover();
    void colisionNave(NAVE &nave);
    int X() { return x; }
    int Y() { return y; }
};

Asteroide::Asteroide(int _x, int _y)
{
    x = _x;
    y = _y;
}

void Asteroide::pintar()
{
    gotoxy(x, y);
    printf("%c", 184);
}

void Asteroide::mover()
{
    gotoxy(x, y);
    printf(" ");
    y++;
    if (y > 32)
    {
        x = (rand() % 71) + 4;
        y = 4;
    }
    pintar();
}

void Asteroide::colisionNave(NAVE &nave)
{
    if (x >= nave.X() && x < nave.X() + 6 && y >= nave.Y() && y <= nave.Y() + 2)
    {
        nave.dismunirCorazon();
        nave.borrar();
        nave.pintar();
        nave.pintarCorazones();
        x = (rand() % 71) + 4;
        y = 4;
    }
}

class Bala
{
    int x, y;

public:
    Bala(int _x, int _y);
    void mover();
    bool fuera();
    int X() { return x; }
    int Y() { return y; }
};

Bala::Bala(int _x, int _y)
{
    x = _x;
    y = _y;
}

void Bala::mover()
{
    gotoxy(x, y);
    printf(" ");
    y--;
    gotoxy(x, y);
    printf("*");
}

bool Bala::fuera()
{
    if (y == 4)
        return true;
    return false;
}

void POO()
{
    int opcion;
    bool jugarDeNuevo = false;

    do
    {
        system("cls"); // Limpia la pantalla para mostrar el menú del juego
        cout << "\t\t------------------------" << endl;
        cout << "\t\t        Juego          " << endl;
        cout << "\t\t------------------------" << endl;

        cout << "\t[1] Jugar de nuevo." << endl;
        cout << "\t[2] Regresar al menu principal." << endl;

        cout << "\t Elije una opcion:  ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            jugarDeNuevo = true;
            break;
        case 2:
            return; // Sale de la función y regresa al menú principal
        default:
            cout << "\nOpcion incorrecta." << endl;
            break;
        }

        if (jugarDeNuevo)
        {
            system("cls"); // Limpia la pantalla para mostrar el menú del juego
            ocultarCursor();
            pintarLimite();
            NAVE n(37, 30, 3, 3);
            n.pintar();
            n.pintarCorazones();
            list<Asteroide *> A;
            list<Asteroide *>::iterator itA;
            int puntos = 0;
            for (int i = 0; i < 5; i++)
            {
                A.push_back(new Asteroide(rand() % 75 + 3, rand() % 5 + 4));
            }
            list<Bala *> B;
            list<Bala *>::iterator it;
            bool gameOver = false;

            while (!gameOver)
            {

                gotoxy(4, 2);
                printf("Puntos: %d", puntos);
                if (_kbhit())
                {
                    char tecla = _getch();
                    if (tecla == 'a' || tecla == 'A')
                    {
                        B.push_back(new Bala(n.X() + 2, n.Y() - 1));
                    }
                }
                // Disparo
                for (it = B.begin(); it != B.end();)
                {
                    (*it)->mover();
                    if ((*it)->fuera())
                    {

                        gotoxy((*it)->X(), (*it)->Y());
                        printf(" ");
                        delete (*it);
                        it = B.erase(it);
                    }
                    else
                    {
                        it++;
                    }
                }
                for (itA = A.begin(); itA != A.end(); itA++)
                {
                    (*itA)->mover();
                    (*itA)->colisionNave(n);
                }
                // Colision Bala - Asteroide
                for (itA = A.begin(); itA != A.end(); itA++)
                {
                    for (it = B.begin(); it != B.end();)
                    {
                        if ((*itA)->X() == (*it)->X() && ((*itA)->Y() + 1 == (*it)->Y() || (*itA)->Y() == (*it)->Y()))
                        {
                            gotoxy((*it)->X(), (*it)->Y());
                            printf(" ");
                            delete (*it);
                            it = B.erase(it);
                            A.push_back(new Asteroide(rand() % 75 + 3, 4));
                            gotoxy((*itA)->X(), (*itA)->Y());
                            printf(" ");
                            delete (*itA);
                            itA = A.erase(itA);
                            puntos += 5;
                        }
                        else
                        {
                            it++;
                        }
                    }
                }
                if (n.vidasJugador() <= 0)
                {
                    gameOver = true;
                    gotoxy(25, 18);
                    printf("Game Over :(");
                }
                n.perderVida();
                n.mover();
                Sleep(30);
            }
            _getch();

            // Liberar memoria
            for (it = B.begin(); it != B.end(); ++it)
            {
                delete (*it);
            }
            B.clear();
            for (itA = A.begin(); itA != A.end(); ++itA)
            {
                delete (*itA);
            }
            A.clear();
        }
    } while (opcion != 2);
}

// FINALIZA POO