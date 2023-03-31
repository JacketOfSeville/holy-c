#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 3
#define PLAYER_ONE 'X'
#define PLAYER_TWO 'O'

// Função para imprimir o tabuleiro na tela
void print_board(char board[][BOARD_SIZE])
{
    printf("\n");

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < BOARD_SIZE - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < BOARD_SIZE - 1)
        {
            printf("---|---|---\n");
        }
    }

    printf("\n");
}

// Função para verificar se o jogo terminou
char check_game_over(char board[][BOARD_SIZE])
{
    // Verifica se houve vencedor em alguma das linhas
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return board[i][0];
        }
    }

    // Verifica se houve vencedor em alguma das colunas
    for (int j = 0; j < BOARD_SIZE; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j])
        {
            return board[0][j];
        }
    }

    // Verifica se houve vencedor na diagonal principal
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return board[0][0];
    }

    // Verifica se houve vencedor na diagonal secundária
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return board[0][2];
    }

    // Verifica se houve empate
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (board[i][j] == ' ')
            {
                return ' ';
            }
        }
    }

    return 'T';
}

int main()
{
    char board[BOARD_SIZE][BOARD_SIZE];
    char current_player = PLAYER_ONE;
    int row, col;

    // Inicializa o tabuleiro com espaços em branco
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }

    // Loop principal do jogo
    while (1)
    {
        // Imprime o tabuleiro na tela
        print_board(board);

        // Pede ao jogador atual que faça sua jogada
        printf("Jogador %c, digite a linha (0 a 2) e a coluna (0 a 2) da sua jogada separados por espaco: ", current_player);
        scanf("%d %d", &row, &col);

        // Verifica se a jogada é válida
        if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || board[row][col] != ' ')
        {
            printf("Jogada invalida, tente novamente.\n");
            continue;
        }

        // Realiza a jogada
        board[row][col] = current_player;

        // Verifica se o jogo terminou
        char game_over = check_game_over(board);
        if (game_over != ' ')
        {
            print_board(board);
            if (game_over == 'T')
            {
                printf("Deu velha!\n");
            }
            else
            {
                printf("Jogador %c venceu!\n", game_over);
            }
            break;
        }

        // Passa a vez para o próximo jogador
        current_player = (current_player == PLAYER_ONE) ? PLAYER_TWO : PLAYER_ONE;
    }

    return 0;
}