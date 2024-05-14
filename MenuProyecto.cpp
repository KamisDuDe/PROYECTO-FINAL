#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     int Imp;

     do
     {
          cout << "\t\t╔═══════════════════╗" << endl;
          cout << "\t\t║  Proyecto Final   ║" << endl;
          cout << "\t\t╚═══════════════════╝" << endl;

          cout << "\t[1] Condicionales y Ciclos.\n"
               << endl;
          cout << "\t[2] Funciones.\n"
               << endl;
          cout << "\t[3] Archivos.\n"
               << endl;
          cout << "\t[4] POO.\n"
               << endl;
          cout << "\t[5] Herencia y Polimorfismo.\n"
               << endl;
          cout << "\t[6] Base de datos.\n"
               << endl;
          cout << "\t[7] Salir del programa.\n"
               << endl;

          cout << "\t  ┌──────────────────────┐" << endl;
          cout << "\t  ╞ Elije una funcion:   ╡" << endl;
          cout << "\t  └──────────────────────┘";
          cin >> Imp;

          switch (Imp)
          {
          case 1:
               break;

          case 2:
               break;

          case 3:
               break;

          case 4:
               break;

          case 5:
               break;

          case 6:
               break;

          case 7:
               break;

          default:
               cout << "Opcion incorrecta." << endl;
               break;
          }
     } while (Imp != 7);

     system("pause");
     return 0;
}
