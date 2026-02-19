#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //NELEMENTS el van írva
    int *b = new int[N_ELEMENTS];
    //Elírás, pontos vessző hiánya
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    //Ciklusfeltétel nem teljes
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //így 0-tól kezdjök a számolást, nem 1 től (i+1 kellene)
        b[i] = (i+1) * 2;
    }
    //Ciklusfeltétel hiányos
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //Kiirandó érték és pontos vessző hiányzik
        std::cout << "Ertek: " << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //double helyett egész zámos változó és nincs inicializáló érték
    double atlag = 0;
    //vessző helyett pontos vessző kell a ciklusfeltételben
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //pontosvessző hianya
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Feladat átnézve. Árpád programja működik. " << std::endl;
    return 0;
}
