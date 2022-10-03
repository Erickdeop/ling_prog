/* 
 * Universidade Federal do Rio de Janeiro
 * Centro de Tecnologia - Escola Politecnica
 * Departamento de Eletronica e Computacao
 * EEL670 - Linguagens de Programacao - Turma 2022/2
 * Professor: Miguel Elias Mitre Campista
 * Autor: Erick de Oliveira Pessoa
 * Descricao: 
 *
 */

#include <iomanip>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Estadual 
{
    public:
        Estadual(string, vector <int>);

        void setNomeEstado(string);
        string getNomeEstado();
        
        void setNumeroMeses(vector <int>);
        vector <int> getNumeroMeses();

        void setMediasMoveis();
        vector <float> getMediasMoveis();

        void setEstadoMediaMovel();
        float getEstadoMediaMovel();

        void setIntencao();
        float getIntencao();

        void mostrarMediaMovel();
        void mostrarEstadoMediaMovel();

        vector <int> meses;

    private:
        string nomeEstado;
        vector <float> mediasMoveis;
        float estadoMediaMovel;

};

class Nacional 
{
    public:
        Nacional (string, vector <Estadual>);

        void setNome(string);
        string getNome();

        void setListaEstados (vector <Estadual>);
        vector <Estadual> getListaEstados();

        void setIntencaoNacional();
        float getIntencaoNacional();

        void setIntencaoMensal();
        vector <int> getIntencaoMensal();

        void setMediaMovel();
        vector <float> getMediaMovel();

        void setEstadoMediaMovel();
        float getEstadoMediaMovel();

        void mostrarMediaMovel();
        void mostrarEstadoMediaM();
        void mostrarIntencaoNacional();

    private:
        string nome;
        vector <Estadual> listaEstados;
        vector <int> dadosIntencaoMensal;
        vector <float> mediaMovel;
        int numeroMortes;
        float estadoMediaMovel;
};