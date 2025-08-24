#include <iostream>

using namespace std;

class Box
{
    float largura;
    float altura;
    float profundidade;
    float areaExterna;
    float volume;

public:
    void setLargura(float lar)
    {
        largura = lar;
        cout << "Largura setada -> " << largura << endl;
    }
    
    void setAltura(float alt)
    {
        altura = alt;
        cout << "Altura setada -> " << altura << endl;
    }

    void setProfundidade(float prof)
    {
        profundidade = prof;
        cout << "Profundidade setada -> " << profundidade << endl;
    }

    void calculaAreaExt()
    {
        areaExterna = 2 * (largura*altura + largura*profundidade + altura*profundidade);
        cout << "Area externa claculada -> " << areaExterna << endl;
    }

    void claculaVolume()
    {
        volume = altura*largura*profundidade;
        cout << "Valume calculado -> " << volume << endl;
    }
};

int main()
{
    Box box;
    box.setLargura(10.0);
    box.setAltura(10.0);
    box.setProfundidade(10.0);
    box.calculaAreaExt();
    box.claculaVolume();
}
