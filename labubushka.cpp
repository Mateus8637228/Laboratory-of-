/***************************
* Автор: Дорошкевич Матвей.*
* Вариант: 5               *
***************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

  double tR; tB; nuCm2S; nu; g; d;
  tR = 500.0
  tB = 15.0;
  nu_cm2_s = 0.15;
  nu = nu_cm2_s * 0.0001;
  g = 9.81;
  d = 0.1

  cout << fixed << setprecision(1);
  cout << "m    Gr          Nu" << endl;

  while (d <= 0.3) {
    double deltaT = tR - tB;
    double Gr = g * pow(d, 3.0) * deltaT / (nu * nu * (tB + 273.0));

    double Nu;
    if (Gr < 1000000000) {
      Nu = 0.76 * pow(Gr, 0.22);
    } else {
      Nu = 0.15 * pow(Gr, 0.35);
    }

    cout << d << "  " << Gr << "  " << Nu << endl;

    if (d == 0.1) d = 0.2;
    else if (d == 0.2) d = 0.25;
    else if (d == 0.25) d = 0.275;
    else if (d == 0.275) d = 0.3;
    else d += 1;
  }
  return 0;
}
