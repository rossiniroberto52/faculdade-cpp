#include <cstdio>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a, b, c, delta, delta_root;

    cin >> a;
    cin >> b;
    cin >> c;

    if(a == 0){
        cout << "Impossivel calcular\n";
    }else{
        delta = (pow(b, 2) - 4 * a * c);
        if(delta>0){
            delta_root = sqrt(delta);
            float x1 = (-b + delta_root)/(2*a);
            float x2 = (-b - delta_root)/(2*a);
            printf("R1 = %f\nR2 = %f\n", x1, x2);
        }else if(delta == 0){
            float x = (-b)/(2*a);
            printf("Uma raiz real dupla: %f", x);
        }else{
            delta_root = sqrt(abs(delta));
            float real_p = (-b)/(2*a);
            float imagine_p = delta_root/(2*a);
            printf("Duas raizes complexas conjugadas: \n{%f} + {%f}\n{%f} - {%f}\n", real_p, imagine_p, real_p, imagine_p);
        }
    }

    return 0;
}