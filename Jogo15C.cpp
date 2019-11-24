#include <stdio.h>
#include <windows.h>



int x = 0, y = 0, vitoria,nivel,mov=0;
char* nivdemo = "NIVEL DEMO"; char* nivfacil = "NIVEL FACIL";char* nivmedio = "NIVEL MEDIO";char* nivdificil = "NIVEL DIFICIL";char* nivboss = "CHARADA DE BOSS";
char mostradif[20];



char mp[4][4] = {'A', 'B', 'C', 'D',
	            'E', 'F', 'G', 'H',
                'I', 'J', 'K', 'L',
                'M', 'N', 'O', ' '};



void menu(){
	char nome[40];
	int nivel;
	
	system("color 5E");   
	system("cls");       
	
	printf ("*=============================================================================*\n");
	printf ("|         ________ __________ _________ __________  _____    _________        |\n");
	printf ("|         XXXXXXXX XXXXXXXXXX XXXXXXXXX XXXXXXXXXX  XXXXX    XXXXXXXXX        |\n");
	printf ("|         XXXXXXXX XXXXXXXXXX XXXXXXXXX XXXXXXXXXX  XXXXX    XXXXXXXXX        |\n");
	printf ("|             XX   XX      XX XX   ____ XX      XX     XX    XXX______        |\n");
	printf ("|             xx   XX      XX XX   XXXX XX      XX     XX    XXXXXXXXX        |\n");
	printf ("|         XX__XX   XX______XX XX____XXX XX______XX ___ XX___ _______XX        |\n");
	printf ("|         XXXXXX   XXXXXXXXXX XXXXXXXXX XXXXXXXXXX XXXXXXXXX XXXXXXXXX        |\n");
	printf ("|         XXXXXX   XXXXXXXXXX XXXXXXXXX XXXXXXXXXX XXXXXXXXX XXXXXXXXX        |\n");
	printf ("|                                                                             |\n");
	printf ("*=============================================================================*\n");
	printf ("|                  UNICESUMAR - CENTRO UNIVERSITARIO DE MARINGA               |\n");
	printf ("|                     ANALISE E DESENVOLVIMENTO DE SISTEMAS                   |\n");
    printf ("|              ALUNO:LEONARDO O. B. YOSHII | LEO_YOSHII@OUTLOOK.COM           |\n");
    printf ("|                      PROFESSOR: ALEXANDRE EDSON MORENO                      |\n");
    printf ("|                             MARINGA - PR - 2019                             |\n");
	printf ("*=============================================================================*\n\n");	
	printf ("*=============================================================================*\n");	
	printf ("|=================| O QUEBRA-CABECAS DAS QUINZE PASTILHAS |===================|\n");
	printf ("*=============================================================================*\n");
	printf ("\nInforme o nome do participante e em seguida pressione \"enter\".\n\n");
	printf ("\nNOME DO PARTICIPANTE: ");
	gets(nome);	
	system("cls");
	
	
	printf ("-------------------------------------------------------------------------------\n");
	printf ("---------------------------------INSTRUCOES------------------------------------\n");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("\nSEJA BEM VINDO \"%s\"\n",nome);
	printf ("O jogo consiste em uma pequena caixa quadrada, com 15 espacos cobertos por  \n");
	printf ("quinze pecas, que contem letras, e um espaco vazio para que se possa  \n");
	printf ("movimenta-las. As pecas devem ser ordenadas na caixa em ordem alfabetica, \n");
	printf ("deslocando-se as pecas ocupando o espaco vazio, fazendo quantos movimentos   \n");
	printf ("quiser, colocando-as na sequencia e deixando o 16 quadradinho vazio. \n");
	printf ("Como no exemplo a seguir:\n");
	printf ("-------------------------------------------------------------------------------\n");
	for(int i = 0; i < 4; i++){
		printf("\n");
		for(int j = 0; j < 4; j++){
			printf("     %c ", mp[i][j]);
		}
	}
	printf("\n\n");
	printf ("-------------------------------------------------------------------------------\n");
	
	printf ("Pressione \"enter\" para continuar...");
	getchar();	
	system ("cls");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("---------------------------------INSTRUCOES------------------------------------\n");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Utilize as setas direcionais para movimentar os colchetes: \n\n");
	printf ("	[A]	 B	 C 	 D 	--->	 A 	[B]	 C 	 D 		 \n");
	printf ("	 E 	   	 G	 H 	--->	 E 	   	 G	 H 	     \n");
	printf ("	 I 	 J 	 K	 L 	--->	 I 	 J 	 K	 L 		 \n");
	printf ("	 N 	 M	 O	 F	--->	 N 	 M	 O	 F		 \n\n");
	printf ("Utilize a tecla ESPACO para movimentar a peca para o lado:  \n\n");
	printf ("	 A 	[B]	 C 	 D 	--->	 A 	[ ]	 C 	 D 		 \n");
	printf ("	 E 	   	 G	 H 	--->	 E 	 B 	 G	 H 		 \n");
	printf ("	 I 	 J 	 K	 L 	--->	 I 	 J 	 K	 L 		 \n");
	printf ("	 N 	 M	 O	 F	--->	 N 	 M	 O	 F		 \n\n");
	printf ("A peca se movimentara apenas se tiver um ESPACO VAZIO do lado.  \n\n");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Boa sorte e bom jogo\n\n");
	printf ("Pressione \"enter\" para continuar...");
	getchar();	
	system ("cls");
	
	
	dificuldade:
	printf ("-------------------------------------------------------------------------------\n");
	printf ("-----------------------------NIVEIS DE DIFICULDADE-----------------------------\n");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("|  1 - %s\n",nivdemo);
	printf ("|  2 - %s\n",nivfacil);
	printf ("|  3 - %s\n",nivmedio);
	printf ("|  4 - %s\n",nivdificil);
	printf ("|  5 - %s\n",nivboss);
	printf ("-------------------------------------------------------------------------------\n");
	printf ("DESEJA JOGAR EM QUAL NIVEL? \n");
	scanf ("%d",&nivel);
	switch (nivel){  // selecionar nivel e predefine a matriz, pois existe um numero grande de possibilidades impossiveis, impossibilitando randomizar.
		case 1:
			strcpy(mostradif,nivdemo); // Demostraçao - só mexer as letras O L K. GG
			mp[2][3] = 'O';
			mp[2][2] = 'L';
			mp[3][3] = 'K';
			mp[3][2] = ' ';
        break; 
		case 2:
			strcpy(mostradif,nivfacil);
			mp[0][0]=' ';mp[0][1]='O';mp[0][2]='N';mp[0][3]='M';
			mp[1][0]='L';mp[1][1]='K';mp[1][2]='J';mp[1][3]='I';
			mp[2][0]='H';mp[2][1]='G';mp[2][2]='F';mp[2][3]='E';
			mp[3][0]='D';mp[3][1]='C';mp[3][2]='B';mp[3][3]='A';
        break;  
		case 3:
			strcpy(mostradif,nivmedio);
			mp[0][0]='B';mp[0][1]='F';mp[0][2]='D';mp[0][3]='H';
			mp[1][0]='A';mp[1][1]='J';mp[1][2]='C';mp[1][3]='L';
			mp[2][0]='E';mp[2][1]='M';mp[2][2]='G';mp[2][3]='O';
			mp[3][0]='I';mp[3][1]='N';mp[3][2]='K';mp[3][3]=' ';
        break;  
		case 4:
			strcpy(mostradif,nivdificil);
			mp[0][0]='D';mp[0][1]='A';mp[0][2]='B';mp[0][3]=' ';
			mp[1][0]='G';mp[1][1]='E';mp[1][2]='L';mp[1][3]='O';
			mp[2][0]='F';mp[2][1]='C';mp[2][2]='K';mp[2][3]='M';
			mp[3][0]='H';mp[3][1]='N';mp[3][2]='I';mp[3][3]='J';
        break;
		case 5:
			strcpy(mostradif,nivboss); // CHARADA DE BOSS  - Uma das possibilidades impossiveis, alterando apenas o N com o O nas casas 15 e 14.
			mp[0][0]='A';mp[0][1]='B';mp[0][2]='C';mp[0][3]='D';
			mp[1][0]='E';mp[1][1]='F';mp[1][2]='G';mp[1][3]='H';
			mp[2][0]='I';mp[2][1]='J';mp[2][2]='K';mp[2][3]='L';
			mp[3][0]='M';mp[3][1]='O';mp[3][2]='N';mp[3][3]=' ';
        break;             
		
	system("cls");
	}
}


void show()
{
   
	system("cls");
	vitoria = 1;
	printf("    =========================================\n");
	printf("                  %s                 \n",mostradif);
	printf("    =========================================\n");

	for(int i = 0; i < 4; i++){		
		for(int j = 0; j < 4; j++){
			if (j == x && i == y){
				 printf("        [%c]", mp[i][j]);
			}
			else{
				printf("         %c ", mp[i][j]);
			}           
			 
			// Condição de vitória é verificada a cada jogada
			if(j + i < 6 && mp[i][j] != i * 4 + j + 65) vitoria = 0;
		}
		printf("\n\n");
	}
	printf("    =========================================\n");
	printf("                 MOVIMENTOS:%d         \n",mov);
	printf("    =========================================\n");
	Sleep(100);
}



int main() {
	char again;
	
	menu();
    show();
    while(!GetAsyncKeyState(VK_ESCAPE))
	{          //Movimentação
		if(GetAsyncKeyState(VK_LEFT) != 0 && x > 0) { x--; show(); }
		if(GetAsyncKeyState(VK_RIGHT)!= 0 && x < 3) { x++; show(); }
		if(GetAsyncKeyState(VK_DOWN) != 0 && y < 3) { y++; show(); }
		if(GetAsyncKeyState(VK_UP)   != 0 && y > 0) { y--; show(); }
		if(GetAsyncKeyState(VK_SPACE)!= 0)
		{
			for(int i = 0; i < 4; i++)
			{
				for(int j = 0; j < 4; j ++)
				{
					if(x == j && y == i)
                    {
						if(j > 0 && mp[i][j-1] == ' ') { mp[i][j-1] = mp[i][j]; mp[i][j] = ' '; mov++;}
						if(j < 3 && mp[i][j+1] == ' ') { mp[i][j+1] = mp[i][j]; mp[i][j] = ' '; mov++;}
						if(i < 3 && mp[i+1][j] == ' ') { mp[i+1][j] = mp[i][j]; mp[i][j] = ' '; mov++;}
						if(i > 0 && mp[i-1][j] == ' ') { mp[i-1][j] = mp[i][j]; mp[i][j] = ' '; mov++;}
					}
				}
			}
			printf("%c",7);
			show();
		}                 
		if(vitoria) {
		system("cls");
		printf ("*=============================================================================*\n");
		printf ("|     ___     ___ __________ __      __   ___     ___ _________ ___   ___     |\n");
		printf ("|     XXX     XXX XXXXXXXXXX XX      XX   XXX     XXX XXXXXXXXX XXX_  XXX     |\n");
		printf ("|      XXX   XXX  XXXXXXXXXX XX      XX   XXX  _  XXX XXXXXXXXX XXXX_ XXX     |\n");
		printf ("|       XXX XXX   XX      XX XX      XX   XXX  X  XXX    XXX    XXXXX_XXX     |\n");
		printf ("|         XXX     XX      XX XX      XX   XXX XXX XXX    XXX    XXX XXXXX     |\n");
		printf ("|         XXX     XX______XX XX______XX   XXXXX XXXXX    XXX    XXX XXXXX     |\n");
		printf ("|         XXX     XXXXXXXXXX XXXXXXXXXX   XXXX   XXXX XXXXXXXXX XXX  XXXX     |\n");
		printf ("|         XXX     XXXXXXXXXX XXXXXXXXXX   XXX     XXX XXXXXXXXX XXX   XXX     |\n");
		printf ("|                                                                             |\n");
		printf ("*=============================================================================*\n");
		printf ("                  PARABENS, voce completou no nivel:%s        \n",mostradif);
		printf ("                            MOVIMENTOS = %d                                    \n",mov);
	    printf ("*=============================================================================*\n\n");	
		printf ("*=============================================================================*\n");	
		printf ("|=========================| PRESSIONE ESC PARA SAIR |=========================|\n");
		printf ("*=============================================================================*\n");
		Sleep(400); system("color 60");
		Sleep(400); system("color 06");
		}
	}
}




