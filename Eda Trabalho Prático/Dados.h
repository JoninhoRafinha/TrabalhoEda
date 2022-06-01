/**
 * Author: Jo�o Antune
 * Email: joaorantune03@gmail.com
 * Github: JoninhoRafinha
 * Date: 27/03/2022
 * Descri��o: Assinatura de Fun��es e Structs para o Structs.c do Trabalho Pr�trico - EDA
 */

#ifndef Structs
#define Structs

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#pragma warning( disable : 4996 )

#pragma region Estruturas

 /**
  * @brief Estrutura para armazenar uma Operacao
  *
  * Uma Operacao cont�m um Id (@@Id) e uma Lista de Maquinas (@@Maquinas).
  * Cont�m apontador para a proxima Operacao
  */
typedef struct Operacao
{
    int Id;
    struct Maquina* Maquinas;
    struct Operacao* Next;
} Operacao;

/**
 * @brief Estrutura para armazenar uma Maquina
 *
 * Uma Maquina cont�m um Id (@@Id) e um Tempo (@@Tempo).
 * Cont�m apontador para a proxima Maquina
 */
typedef struct Maquina
{
    int Id;
    int Tempo;
    struct Maquina* Next;
} Maquina;

/**
 * @brief Estrutura para armazenar um Job
 *
 * Um Job cont�m um Id (@@Id) e uma Lista de Operacoes (@@Operacoes).
 * Cont�m apontador para o proximo Job
 */
typedef struct Job
{
    int Id;
    struct Operacao* Operacoes;
    struct Job* Next;
} Job;

#pragma endregion

#pragma region Ficheiros

Job* LerFicheiro();

#pragma endregion

#endif