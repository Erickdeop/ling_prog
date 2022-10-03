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

#include "candidatos.h"

// ESTADUAL
Estadual::Estadual (string nome, vector <int> dados): meses(9), mediasMoveis(3)
{
    setNomeEstado(nome);
    setNumeroMeses(dados);
    setMediasMoveis();
    setEstadoMediaMovel();
    setIntencao();
}

void Estadual::setNomeEstado(string nome)
{
    nomeEstado = nome;
}

string Estadual::getNomeEstado()
{
    return nomeEstado;
}

void Estadual::setNumeroMeses(vector <int> dados)
{
    meses = dados;
}

vector <int> Estadual::getNumeroMeses()
{
    return meses;
}

void Estadual::setMediasMoveis()
{
    mediasMoveis[0] = 0;
    mediasMoveis[1] = 0;
    mediasMoveis[2] = 0;

    int max = 7;

    for (int cont = 0; cont < max; cont++)
    {
        mediasMoveis[0] = mediasMoveis
    }
}