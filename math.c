#include <math.h>
#include <emscripten.h>

// 1. Função Seno (Onda)
EMSCRIPTEN_KEEPALIVE
float func_sin(float x) {
    return sin(x);
}

// 2. Função Cosseno (Onda defasada)
EMSCRIPTEN_KEEPALIVE
float func_cos(float x) {
    return cos(x);
}

// 3. Função Tangente (Curvas verticais)
EMSCRIPTEN_KEEPALIVE
float func_tan(float x) {
    return tan(x);
}

// 4. Função Quadrática (Parábola: x^2)
EMSCRIPTEN_KEEPALIVE
float func_quad(float x) {
    return x * x; // x ao quadrado
}

// 5. Função Exponencial (Crescimento rápido)
EMSCRIPTEN_KEEPALIVE
float func_exp(float x) {
    return exp(x) / 10.0; // Dividido por 10 para caber melhor na tela
}
