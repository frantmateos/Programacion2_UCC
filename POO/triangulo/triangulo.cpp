
void triangulo::setB(int base) {
    B = base;
}
void triangulo::seth(int altura) {
    h = altura;
}

void triangulo::sets(int x){
    s = x;
}

int triangulo::getB(){
    return B;
}
int triangulo::gets() {
    return s;
}
int triangulo::geth() {
    return h;
}

float triangulo::perimetro() {
    return B+s+h;
}
float triangulo::superficie(){
    float p = perimetro();
    return  sqrt(p*(p-B)*(p-s)*(p-h));
}

