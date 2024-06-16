#include <iostream>
#include <math.h>
using namespace std;
int sizeInt = 500;
//Agregar tipos de caracter por columna y fila fija
int tipo_0[12] = {1,0,0,1,0,0,1,1,0,1,0,1}, tipo_1[12] = {1,0,0,1,0,0,1,1,1,1,1,0}, tipo_2[12] = {1,0,0,1,0,0,1,0,1,1,1,0}, tipo_3[12] = {1,0,0,1,0,0,1,0,1,1,1,1}, tipo_4[12] = {1,0,0,1,0,0,1,1,0,1,1,1}, tipo_5[12] = {1,1,1,1,1,1,1,0,0,1,0,0}, tipo_6[12] = {1,0,0,0,1,0,1,0,0,0,1,0}, tipo_7[12] = {1,0,0,0,0,0,1,1,0,0,0,0}, tipo_8[12] = {1,0,0,0,0,0,1,1,0,0,0,1}, tipo_9[12] = {1,0,0,0,0,0,1,0,0,0,1,0};
int tipo_10[12] = {1,0,0,1,0,0,1,0,0,1,0,0}, tipo_11[12] = {0,0,0,0,0,0,1,0,0,0,0,0}, tipo_12[12] = {0,0,0,0,0,0,1,1,0,0,0,1}, tipo_13[12] = {0,0,1,1,0,0,0,1,0,1,0,1}, tipo_14[12] = {0,0,1,0,0,0,1,1,0,0,0,0}, tipo_15[12] = {0,0,0,1,0,0,0,0,0,1,0,0}, tipo_16[12] = {0,1,1,1,1,1,1,0,1,1,1,0}, tipo_17[12] = {0,0,0,0,1,1,1,0,1,0,1,0}, tipo_18[12] = {1,1,1,1,1,1,0,0,0,1,0,0}, tipo_19[12] = {1,0,1,0,0,0,1,0,0,0,1,0};
int tipo_20[12] = {0,1,0,0,1,0,0,1,0,0,1,0}, tipo_21[12] = {1,0,1,0,0,0,1,0,0,0,0,1}, tipo_22[12] = {1,0,0,1,0,0,0,0,0,1,0,0}, tipo_23[12] = {0,1,1,0,1,1,0,0,0,0,0,0}, tipo_24[12] = {0,1,0,0,0,1,0,1,0,0,0,0}, tipo_25[12] = {0,0,1,0,1,0,0,0,0,0,0,0}, tipo_26[12] = {0,1,0,0,0,1,0,0,0,0,0,1}, tipo_27[12] = {1,0,0,1,1,1,1,0,1,1,0,1}, tipo_28[12] = {1,0,0,0,1,0,0,1,0,0,0,1}, tipo_29[12] = {1,0,0,1,0,0,0,1,1,1,1,0};
int tipo_30[12] = {0,0,0,1,0,0,0,1,1,1,1,1}, tipo_31[12] = {0,0,1,0,1,0,0,1,1,0,0,0}, tipo_32[12] = {0,0,0,0,0,0,1,1,0,0,0,0}, tipo_33[12] = {0,0,0,1,0,0,0,1,0,1,0,1}, tipo_34[12] = {1,0,0,0,1,0,1,1,0,0,0,1}, tipo_35[12] = {1,0,0,1,1,0,0,1,1,1,1,0}, tipo_36[12] = {0,0,0,1,1,1,0,1,0,1,0,1}, tipo_37[12] = {1,0,0,0,0,0,1,0,1,0,0,0}, tipo_38[12] = {0,0,1,0,1,0,1,0,0,0,0,1}, tipo_39[12] = {0,0,0,1,0,0,1,1,1,1,1,0}; 
int tipo_40[12] = {0,0,1,0,0,0,1,1,0,0,0,0}, tipo_41[12] = {0,0,0,1,0,0,1,0,1,1,1,1}, tipo_42[12] = {0,0,1,0,1,0,1,1,0,0,0,1}, tipo_43[12] = {0,0,0,1,0,0,0,1,1,1,1,0}, tipo_44[12] = {0,1,0,1,1,1,1,0,0,1,0,0}, tipo_45[12] = {0,0,0,0,0,0,1,0,0,0,1,0}, tipo_46[12] = {0,0,0,0,1,0,0,0,1,0,1,0}, tipo_47[12] = {0,0,0,1,1,0,0,1,0,1,0,1}, tipo_48[12] = {0,0,1,0,0,0,0,1,1,0,0,1}, tipo_49[12] = {0,0,1,0,0,0,1,1,0,0,0,1};
int tipo_50[12] = {0,0,1,0,1,0,0,1,0,0,0,1}, tipo_51[12] = {0,0,1,0,1,0,1,1,0,0,0,0}, tipo_52[12] = {0,0,0,0,1,1,0,1,0,0,0,1}, tipo_53[12] = {0,0,0,0,1,1,0,0,1,0,1,0}, tipo_54[12] = {0,0,1,0,1,0,1,0,0,0,1,0}, tipo_55[12] = {1,0,0,0,0,0,1,0,0,0,0,1}; 

//Los caracteres asociados a cada fila de la matriz de 77x35
char car[77]={'0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/',']','_','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','-'};
// 385 arreglos de 5  (77x5)
// 77 matrices de 5x7
int characters[77][35]{
0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 1, 1,
1, 0, 1, 0, 1,
1, 1, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,

0, 0, 1, 0, 0,
0, 1, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 1, 1, 0,

0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
0, 0, 0, 0, 1,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
1, 1, 1, 1, 1,

1, 1, 1, 1, 1,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,

0, 0, 0, 1, 0,
0, 0, 1, 1, 0,
0, 1, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 1, 1, 1,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,

1, 1, 1, 1, 1,
1, 0, 0, 0, 0,
1, 1, 1, 1, 0,
0, 0, 0, 0, 1,
0, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,

0, 0, 1, 1, 0,
0, 1, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,

1, 1, 1, 1, 1,
0, 0, 0, 0, 1,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,

0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,

0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 1,
0, 0, 0, 0, 1,
0, 0, 0, 1, 0,
0, 1, 1, 0, 0,

0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,

0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
1, 0, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 1, 1, 1,
0, 0, 0, 0, 0,
1, 1, 1, 1, 1,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

0, 1, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 0, 1,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,

0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
0, 0, 0, 0, 1,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,

// Arroba @
0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
0, 0, 0, 0, 1,
0, 1, 1, 0, 1,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
0, 1, 1, 1, 0,

0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 1, 1, 1, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,

1, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 1, 1, 1, 0,

0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,

1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,    

1, 1, 1, 1, 1,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 1,

1, 1, 1, 1, 1,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,

0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 0,
1, 0, 1, 1, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 1,

1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 1, 1, 1, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,

0, 1, 1, 1, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 1, 1, 0,

0, 0, 1, 1, 1,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,

1, 0, 0, 0, 1,
1, 0, 0, 1, 0,
1, 0, 1, 0, 0,
1, 1, 0, 0, 0,
1, 0, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 0, 1,

1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 1,

1, 0, 0, 0, 1,
1, 1, 0, 1, 1,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,

1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 1, 0, 0, 1,
1, 0, 1, 0, 1,
1, 0, 0, 1, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,

0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,

1, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 1, 1, 1, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,

0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 1, 0, 1,
1, 0, 0, 1, 0,
0, 1, 1, 0, 1,

1, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 1, 1, 1, 0,
1, 0, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 0, 1,

0, 1, 1, 1, 1,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 1,
0, 0, 0, 0, 1,
1, 1, 1, 1, 0,

1, 1, 1, 1, 1,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,

1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,

1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 0, 1, 0,
0, 0, 1, 0, 0,

1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
0, 1, 0, 1, 0,

1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,

1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 0, 1, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,

1, 1, 1, 1, 1,
0, 0, 0, 0, 1,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 1,

//         [
0, 1, 1, 1, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 1, 1, 0,

0, 0, 0, 0, 0,
1, 0, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 0, 1,
0, 0, 0, 0, 0,

0, 1, 1, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 1, 1, 1, 0,



//
// Espacio en blanco.  Colocar?
//


//     Piso _
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 1, 1, 1,

//
// Espacio en blanco 2.
//

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 1,
0, 1, 1, 1, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 1,

1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 1, 1, 1, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 1,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
0, 1, 1, 1, 1,

0, 0, 0, 0, 1,
0, 0, 0, 0, 1,
0, 0, 0, 0, 1,
0, 1, 1, 1, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 1,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 1, 1, 1, 1,
1, 0, 0, 0, 0,
0, 1, 1, 1, 1,

0, 0, 0, 1, 0,
0, 0, 1, 0, 1,
0, 0, 1, 0, 0,
0, 1, 1, 1, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 1,
0, 0, 0, 0, 1,
1, 1, 1, 1, 0,

1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,

0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,

0, 0, 0, 1, 0,
0, 0, 0, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,

0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 1,
0, 1, 0, 1, 0,
0, 1, 1, 0, 0,
0, 1, 0, 1, 0,
0, 1, 0, 0, 1, 

0, 1, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 1, 1, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 0, 1, 1,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 1, 1, 0,
1, 1, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 1, 1, 0,
1, 0, 0, 0, 1,
1, 1, 1, 1, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 1,
0, 0, 0, 0, 1,
0, 0, 0, 0, 1,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 1, 1, 0,
1, 1, 0, 0, 1,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 1,
1, 0, 0, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 1,
1, 1, 1, 1, 0,

0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
1, 1, 1, 1, 1,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 1,
0, 0, 0, 1, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 1, 1, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
0, 1, 0, 1, 0,
0, 0, 1, 0, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
0, 1, 0, 1, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 0, 0, 1,
0, 1, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 1, 0,
1, 0, 0, 0, 1,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 0, 0, 1,
0, 1, 0, 1, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,

0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 1, 1, 1,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
1, 1, 1, 1, 1,

//      {
0, 0, 1, 1, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
1, 0, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 1, 0,


0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,

0, 1, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 0, 1,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 1, 1, 0, 0,


//
// Espacio en blanco 3.
//

1, 1, 1, 1, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 0, 0, 0, 1,
1, 1, 1, 1, 1
};

class Segmentos{
    public:
    //Segmentos de los paquetes de 3x6
    int seg[6];
    int type;

    Segmentos(){
        for(int i=0; i<35; i++){
            seg[i] = 0;
        }
        type = -1;
    }
    //llenar segmento
    void llenarSeg(int aux[]){
        for(int i=0; i<6; i++){
            seg[i] = aux[i];
        }
    }
    //Imprime segmento
    void printSeg(){
        int count=0;
        for(int i=0; i<6; i++){
            cout<<seg[i];
            count++;
            if(count==2){
                cout<<endl;
                count=0;
            }
        }
        cout<<endl;
    }

};

class Character{
public:
    //Paquete de 7x5 en un arreglo de 35
    int pack[35];

    //Caracter asociado al paquete
    char c;

    //Tipo por columna y fila fija
    int type;
    
    Character(){
        for(int i=0; i<35; i++){
            pack[i] = 0;
        }
        c = '.';
        type = -1;
    }  
    //Compara la fila fija con un tipo
    bool compareFil(int type[]){
        int count=7; 
        for(int i=15; i<20; i++){
            if(pack[i]!=type[count]) return false;
            count++;
        }
        return true;
    }
    //Compara la columna fija con un tipo
    bool compareCol(int type[]){
        int count=0; 
        for(int i=2; i<35; i+=5){
            if(pack[i]!=type[count]) return false;
            count++;
        }
        return true;
    }
    //Asigna tipo al paquete
    bool asignType(int type[], int tipo){
        bool seAsigno=false;
        if(compareCol(type)&&compareFil(type)){
            this->type=tipo;
            seAsigno = true;
        } 
        return seAsigno;
    }
    //Llenar Pack de 35
    void llenarPack(int array[]){
        for(int i=0; i<35; i++){
            pack[i] = array[i];
        }
    }
    //Asignar segmentos
    void assignSeg(int aux[], int indexOne, int indexTwo, int indexThree, int indexFour, int indexFive, int indexSix){
        aux[0] = pack[indexOne];
        aux[1] = pack[indexTwo];
        aux[2] = pack[indexThree];
        aux[3] = pack[indexFour];
        aux[4] = pack[indexFive];
        aux[5] = pack[indexSix];
    }
    //>Funcion para llenar de la matriz de caracteres y asignar el caracter correspondiente
    void llenarChar(int matriz[][35], int charActual){
        for(int i=0; i<35; i++){
            pack[i] = matriz[charActual][i];
        }
        c = car[charActual];
    }
    //Imprime la matriz de 7x5 del char para fines de verificacion
    void printChar(){
        int count=0;
        for(int i=0; i<35; i++){
            cout<<pack[i];
            count++;
            if(count==5){
                cout<<endl;
                count=0;
            }
        }
    }
};

//Llena el diccionario
void llenarDic(int matriz[][35], Character c[]){
    for(int i=0; i<77; i++){
        c[i].llenarChar(matriz, i);
    }
}

//Asigna tipo al caracter
void asignType(Character c[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<56; j++){
            bool seAsigno=false;
            switch(j){
            case 0: if(c[i].asignType(tipo_0, j)) seAsigno=true;
            break;
            case 1: if(c[i].asignType(tipo_1, j)) seAsigno=true;
            break;
            case 2: if(c[i].asignType(tipo_2, j)) seAsigno=true;
            break;
            case 3: if(c[i].asignType(tipo_3, j)) seAsigno=true;
            break;
            case 4: if(c[i].asignType(tipo_4, j)) seAsigno=true;
            break;
            case 5: if(c[i].asignType(tipo_5, j)) seAsigno=true;
            break;
            case 6: if(c[i].asignType(tipo_6, j)) seAsigno=true;
            break;
            case 7: if(c[i].asignType(tipo_7, j)) seAsigno=true;
            break;
            case 8: if(c[i].asignType(tipo_8, j)) seAsigno=true;
            break;
            case 9: if(c[i].asignType(tipo_9, j)) seAsigno=true;
            break;
            case 10: if(c[i].asignType(tipo_10, j)) seAsigno=true;
            break;
            case 11: if(c[i].asignType(tipo_11, j)) seAsigno=true;
            break;
            case 12: if(c[i].asignType(tipo_12, j)) seAsigno=true;
            break;
            case 13: if(c[i].asignType(tipo_13, j)) seAsigno=true;
            break;
            case 14: if(c[i].asignType(tipo_14, j)) seAsigno=true;
            break;
            case 15: if(c[i].asignType(tipo_15, j)) seAsigno=true;
            break;
            case 16: if(c[i].asignType(tipo_16, j)) seAsigno=true;
            break;
            case 17: if(c[i].asignType(tipo_17, j)) seAsigno=true;
            break;
            case 18: if(c[i].asignType(tipo_18, j)) seAsigno=true;
            break;
            case 19: if(c[i].asignType(tipo_19, j)) seAsigno=true;
            break;
            case 20: if(c[i].asignType(tipo_20, j)) seAsigno=true;
            break;
            case 21: if(c[i].asignType(tipo_21, j)) seAsigno=true;
            break;
            case 22: if(c[i].asignType(tipo_22, j)) seAsigno=true;
            break;
            case 23: if(c[i].asignType(tipo_23, j)) seAsigno=true;
            break;
            case 24: if(c[i].asignType(tipo_24, j)) seAsigno=true;
            break;
            case 25: if(c[i].asignType(tipo_25, j)) seAsigno=true;
            break;
            case 26: if(c[i].asignType(tipo_26, j)) seAsigno=true;
            break;
            case 27: if(c[i].asignType(tipo_27, j)) seAsigno=true;
            break;
            case 28: if(c[i].asignType(tipo_28, j)) seAsigno=true;
            break;
            case 29: if(c[i].asignType(tipo_29, j)) seAsigno=true;
            break;
            case 30: if(c[i].asignType(tipo_30, j)) seAsigno=true;
            break;
            case 31: if(c[i].asignType(tipo_31, j)) seAsigno=true;
            break;
            case 32: if(c[i].asignType(tipo_32, j)) seAsigno=true;
            break;
            case 33: if(c[i].asignType(tipo_33, j)) seAsigno=true;
            break;
            case 34: if(c[i].asignType(tipo_34, j)) seAsigno=true;
            break;
            case 35: if(c[i].asignType(tipo_35, j)) seAsigno=true;
            break;
            case 36: if(c[i].asignType(tipo_36, j)) seAsigno=true;
            break;
            case 37: if(c[i].asignType(tipo_37, j)) seAsigno=true;
            break;
            case 38: if(c[i].asignType(tipo_38, j)) seAsigno=true;
            break;
            case 39: if(c[i].asignType(tipo_39, j)) seAsigno=true;
            break;
            case 40: if(c[i].asignType(tipo_40, j)) seAsigno=true;
            break;
            case 41: if(c[i].asignType(tipo_41, j)) seAsigno=true;
            break;
            case 42: if(c[i].asignType(tipo_42, j)) seAsigno=true;
            break;
            case 43: if(c[i].asignType(tipo_43, j)) seAsigno=true;
            break;
            case 44: if(c[i].asignType(tipo_44, j)) seAsigno=true;
            break;
            case 45: if(c[i].asignType(tipo_45, j)) seAsigno=true;
            break;
            case 46: if(c[i].asignType(tipo_46, j)) seAsigno=true;
            break;
            case 47: if(c[i].asignType(tipo_47, j)) seAsigno=true;
            break;
            case 48: if(c[i].asignType(tipo_48, j)) seAsigno=true;
            break;
            case 49: if(c[i].asignType(tipo_49, j)) seAsigno=true;
            break;
            case 50: if(c[i].asignType(tipo_50, j)) seAsigno=true;
            break;
            case 51: if(c[i].asignType(tipo_51, j)) seAsigno=true;
            break;
            case 52: if(c[i].asignType(tipo_52, j)) seAsigno=true;
            break;
            case 53: if(c[i].asignType(tipo_53, j)) seAsigno=true;
            break;
            case 54: if(c[i].asignType(tipo_54, j)) seAsigno=true;
            break;
            case 55: if(c[i].asignType(tipo_55, j)) seAsigno=true;
            break;
            default: c[i].c = ' ';
            break;
            }
            if(seAsigno) break;
        }
    }
}

//Asignar segmentos totales
void assignSeg(Segmentos s[], Character c[], int sizeChar){
    int aux[6];
    int index=0;
    int count=0;
    for(int i=0; i<sizeChar; i++){
        //Segmento arriba a la izquierda
       c[i].assignSeg(aux, 0,1,5,6,10,11);
       s[count].llenarSeg(aux);
       count++;
       //Segmento Arriba a la derecha
       c[i].assignSeg(aux,3,4,8,9,13,14);
       s[count].llenarSeg(aux);
       count++;
       //Segmento abajo a la izquierda
       c[i].assignSeg(aux, 20,21,25,26,30,31);
       s[count].llenarSeg(aux);
       count++;
       //Segmento abajo a la derecha
       c[i].assignSeg(aux,23,24,28,29,33,34);
       s[count].llenarSeg(aux);
       count++;
    }
}

//Lenar caracteres entrados por consola
int llenarChar( Character c[], int casoPrueba[], int size){
    int aux[35];
    int j=0;
    int count=0;
    for(int i=0; i<size; i++){
        aux[j] = casoPrueba[i];
        j++;
        if(j==35){
            c[count].llenarPack(aux);
            j=0;
            count++;
        }
        
    }
    return count;
}

int main(){
    //Los caracteres para comparar en formato clase
    Character dictionary[77];
    llenarDic(characters, dictionary);
    asignType(dictionary, 77);
    //caracteres que entraran por consola
    Character interByConsol[sizeInt];  

    //Segmentos de los caracteres entrados por consola
    Segmentos *segmentos; 
    
    //Caso de prueba sustento a cambios
    int casoprueba[910]={0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,0,0,1,1,1,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,1,1,1,0,1,1,1,0,0,1,0,0,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,1,0,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,1,1,0,1,0,0,0,1,1,0,0,0,0,1,0,1,1,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,1,0,0,1,0,0,1,1,0,0,1,0,0,0,1,1,0,0,1,0,1,0,1,0,0,1,1,0,0,0,1,0,1,0,0,1,0,0,1,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,0,0,0,1,1,1,0,1,1,1,0,1,0,1,1,0,1,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,0,0,1,1,0,1,0,1,1,0,0,1,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0,1,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,0,1,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,1,1,1,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,1,1,1,1};
    
    //Cantidad real de caracteres entrados por consola
    int cantidadRealdeChar = llenarChar(interByConsol, casoprueba, 910);
    //interByConsol[0].printChar();
    //Cantidad de segmentos totales
    segmentos = new Segmentos [cantidadRealdeChar*4];
    assignSeg(segmentos, interByConsol, cantidadRealdeChar);
    // segmentos[4].printSeg();
    // segmentos[5].printSeg();
    // segmentos[6].printSeg();
    // segmentos[7].printSeg();
    // for(int i=0; i<77; i++){
    //     cout<<dictionary[i].c<<" "<< dictionary[i].type<<endl;;
    //     dictionary[i].printChar();
    //     cout<<endl;
    // }
    delete[]segmentos;
    return 0;
}
