/***************************************************************************
*  $MCI M�dulo de implementa��o: PEC Estrutura Peca
*
*  Arquivo gerado:              PECA.C
*  Letras identificadoras:      PEC
*
*  Nome da base de software:    Exemplo de teste automatizado
*
*  Projeto: Disciplinas INF 1628 / 1301
*  Gestor:  DI/PUC-Rio
*  Autores: avs - Arndt von Staa
*			fvc - Felipe Vieira C�rtes
*			tbm - T�ssio Borges de Miranda
*			db  - Daniela Braz�o
*
*  $HA Hist�rico de evolu��o:
*     Vers�o  Autor    Data     Observa��es
*	  1.0     tbm   14/set/2015	In�cio do desenvolvimento
*
***************************************************************************/


#include   <stdio.h>
#include   <string.h>
#include   <malloc.h>

#define PECA_OWN
#include "PECA.h"
#undef PECA_OWN

/***********************************************************************
*
*  $TC Tipo de dados: PECPnt Descritor do dados de ponto.
*
*  $ED Descri��o do tipo
*		Descreve a estrutura de pe�a
***********************************************************************/

typedef struct tgPeca{
	char cor;
	/*Devemos usar um inteiro para facilitar a manipulacao da pe�a pela cor? Porem a cor tambem determia qual jogador 
	tem a posse da peca*/
	//struct tpp * jogador;
} tpPeca;


/*****  Dados encapsulados no m�dulo  *****/


/*****  C�digo das fun��es exportadas pelo m�dulo  *****/


/***************************************************************************
*
*  Fun��o: Pec Criar Pe�a
*  ****/

Pec_tpCondRet Pec_CriarPeca(tppPeca * PecCriado, char CorDaNovaPeca)
{
	*PecCriado= (tppPeca)malloc(sizeof(struct tgPeca));

	if(PecCriado == NULL)
		return Pec_CondRetFaltouMemoria;

	(*PecCriado)->cor = CorDaNovaPeca;

	return Pec_CondRetOK;
}

/***************************************************************************
*
*  Fun��o: PEC Destruir Pe�a
*  ****/

Pec_tpCondRet Pec_DestruirPeca(tppPeca  Peca)
{
	return Pec_CondRetOK;
}

/***************************************************************************
*
*  Fun��o: PEC Obter Cor
*  ****/

Pec_tpCondRet Pec_ObterCor(tppPeca  Peca, char *cor)
{
	*cor = Peca->cor;
	return Pec_CondRetOK;
}

/*********** Fim do m�dulo de implementa��o: M�dulo DadoPontos **************/
