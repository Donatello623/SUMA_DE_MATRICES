#include <iostream>
using namespace std;
void sumarMatrices(int matriz1[][2], int matriz2[][2], int resultado[][2]) {
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
resultado[i][j] = matriz1[i][j] + matriz2[i][j];
}
}
}
int main() {
int matriz1[2][2] = {{1, 2}, {3, 4}};
int matriz2[2][2] = {{5, 6}, {7, 8}};
int resultado[2][2] = {0};
sumarMatrices(matriz1, matriz2, resultado);
cout << "Matriz resultante de la suma:" << endl;
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
cout << resultado[i][j] << " ";
}
cout << endl;
}
return 0;
}