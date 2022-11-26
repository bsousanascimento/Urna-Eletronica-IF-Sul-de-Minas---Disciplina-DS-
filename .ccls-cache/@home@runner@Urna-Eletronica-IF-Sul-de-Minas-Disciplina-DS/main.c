/******************************************************************************
URNA ELETRÔNICA - ELEIÇÕES PARA A ESCOLHA DO COORDENADOR(A) DO CURSO
ALUNOS: BRUNO DE SOUSA NASCIMENTO MATRÍCULA: 202224410114 
PATRÍCIA APARECIDA DE ASSUNÇÃO MATRÍCULA: 20224410123
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main()
{
  int cand1, cand2, cand3, cand4, voto, branco, nulo;
  cand1 = 0;
  cand2 = 0;
  cand3 = 0;
  cand4 = 0;
  voto =  0;
  branco = 0;
  nulo = 0;
  bool vencedor;

  printf("ELEIÇÕES 2022 - CANDIDATOS PARA COORDENADORIA DO CURSO\n");
  printf("[BRUNO (1) - VITOR (2) - PATRICIA (3) - JOAO - (4) - VOTO EM BRANCO (0)] \n\n");
  printf("******************************************************************************************************\n\n");

  printf("Eleitor nº1 - Escolha um candidato e depois pressione ENTER para confirmar ou BACKSPACE para corrigir:");
  scanf("%d", &voto);

  if (voto == 1)

    cand1 = cand1 + 1;
  else if (voto == 2)
    cand2 = cand2 + 1;
  else if (voto == 3)
    cand3 = cand3 + 1;
  else if (voto == 4)
    cand4 = cand4 + 1;
  else if (voto == 0)
    branco = branco + 1;
  else if (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4)
    nulo = nulo + 1;

  printf("Eleitor nº2 - Escolha um candidato e depois pressione ENTER para confirmar ou BACKSPACE para corrigir:");
  scanf("%d", &voto);
  if (voto == 1)
    cand1 = cand1 + 1;
  else if (voto == 2)
    cand2 = cand2 + 1;
  else if (voto == 3)
    cand3 = cand3 + 1;
  else if (voto == 4)
    cand4 = cand4 + 1;
  else if (voto == 0)
    branco = branco + 1;
  else if (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4)
    nulo = nulo + 1;

  printf("Eleitor nº3 - Escolha um candidato e depois pressione ENTER para confirmar ou BACKSPACE para corrigir:");
  scanf("%d", &voto);
  if (voto == 1)
    cand1 = cand1 + 1;
  else if (voto == 2)
    cand2 = cand2 + 1;
  else if (voto == 3)
    cand3 = cand3 + 1;
  else if (voto == 4)
    cand4 = cand4 + 1;
  else if (voto == 0)
    branco = branco + 1;
  else if (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4)
    nulo = nulo + 1;

  printf("Eleitor nº4 - Escolha um candidato e depois pressione ENTER para confirmar ou BACKSPACE para corrigir:");
  scanf("%d", &voto);
  if (voto == 1)
    cand1 = cand1 + 1;
  else if (voto == 2)
    cand2 = cand2 + 1;
  else if (voto == 3)
    cand3 = cand3 + 1;
  else if (voto == 4)
    cand4 = cand4 + 1;
  else if (voto == 0)
    branco = branco + 1;
  else if (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4)
    nulo = nulo + 1;

  printf("Eleitor nº5 - Escolha um candidato e depois pressione ENTER para confirmar ou BACKSPACE para corrigir:");
  scanf("%d", &voto);
  if (voto == 1)
    cand1 = cand1 + 1;
  else if (voto == 2)
    cand2 = cand2 + 1;
  else if (voto == 3)
    cand3 = cand3 + 1;
  else if (voto == 4)
    cand4 = cand4 + 1;
  else if (voto == 0)
    branco = branco + 1;
  else if (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4)
    nulo = nulo + 1;

  printf("\n\n********************************* RESULTADO DA APURAÇÃO ***********************************************\n");

  printf("BRUNO .......... %d VOTOS \n", cand1);
  printf("VITOR ............ %d VOTOS \n", cand2);
  printf("PARICIA ........... %d VOTOS \n", cand3);
  printf("JOAO ........... %d VOTOS \n", cand4);
  printf("VOTOS BRANCOS ... %d VOTOS \n", branco);
  printf("VOTOS NULOS ..... %d VOTOS \n", nulo);

  if (cand1 > cand2 && cand1 > cand3 && cand1 > cand4)
  {
    printf("\n-----> BRUNO GANHOU A ELEIÇÃO!!! ");
    vencedor = true;
  }
  else if (cand2 > cand1 && cand2 > cand3 && cand2 > cand4)
  {
    printf("\n-----> VITOR GANHOU A ELEIÇÃO!!!");
    vencedor = true;
  }
  else if (cand3 > cand1 && cand3 > cand2 && cand3 > cand4)
  {
    printf("\n-----> PATRICIA GANHOU A ELEIÇÃO!!!");
    vencedor = true;
  }
  else if (cand4 > cand1 && cand4 > cand2 && cand4 > cand3)
  {
    printf("\n-----> JOAO GANHOU A ELEIÇÃO!!!");
    vencedor = true;
  }
  else
    printf("\n-----> NINGUEM GANHOU!!!");

  if (cand1 == cand2 && vencedor != true)
    printf("\n-----> EMPATE ENTRE: BRUNO(1) E VITOR(2)\n");
  else if (cand1 == cand3 && vencedor != true)
    printf("\n-----> EMPATE ENTRE: BRUNO(1) E PATRICIA(3)\n");
  else if (cand1 == cand4 && vencedor != true)
    printf("\n-----> EMPATE ENTRE: BRUNO(1) E JOAO(4)\n");
  else if (cand2 == cand3 && vencedor != true)
    printf("\n-----> EMPATE ENTRE: VITOR(2) E PATRICIA(3)\n");
  else if (cand2 == cand4 && vencedor != true)
    printf("\n-----> EMPATE ENTRE: VITOR(1) E JOAO(4)\n");
  else if (cand3 == cand4 && vencedor != true)
    printf("\n-----> EMPATE ENTRE: PATRICIA(3) E JOAO(4)\n");
  else

return 0;


  }