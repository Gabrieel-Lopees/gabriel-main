#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main() {
    printf("Roleta Russa \n");
    printf("   xuu$``$$$uuu.\n");
    printf(" . $``$  $$$`$$$\n");
    printf("dP*$  $  $$$ $$$\n");
    printf("?k $  $  $$$ $$$\n");
    printf(" $ $  $  $$$ $$$\n");
    printf(" \":$  $  $$$ $$$\n");
    printf("  N$  $  $$$ $$$\n");
    printf("  $$  $  $$$ $$$\n");
    printf("   $  $  $$$ $$$\n");
    printf("   $  $  $$$ $$$\n");
    printf("   $  $  $$$ $$$\n");
    printf("   $  $  $$$ $$$\n");
    printf("   $  $  $$$ $$$\n");
    printf("   $$#$  $$$ $$$\n");
    printf("   $$'$  $$$ $$$\n");
    printf("   $$`R  $$$ $$$\n");
    printf("   $$$&  $$$ $$$\n");
    printf("   $#*$  $$$ $$$\n");
    printf("   $  $  $$$ @$$\n");
    printf("   $  $  $$$ $$$\n");
    printf("   $  $  $$$ $$$\n");
    printf("   $  $  $B$ $$&.\n");
    printf("   $  $  $D$ $$$$$muL.\n");
    printf("   $  $  $Q$ $$$$$  `\"**mu..\n");
    printf("   $  $  $R$ $$$$$    k  `$$*t\n");
    printf("   $  @  $$$ $$$$$    k   $$!4\n");
    printf("   $ x$uu@B8u$NB@$uuuu6...$$X?\n");
    printf("   $ $(\"RF\"$`````R$ $$5`\"\"\"#\"R\n");
    printf("   $ $\" M$ $     $$ $$$      ?\n");
    printf("   $ $  ?$ $     T$ $$$      $\n");
    printf("   $ $F H$ $     M$ $$K      $  ..\n");
    printf("   $ $L $$ $     $$ $$R.     \"d$$$$Ns.\n");
    printf("   $ $~ $$ $     N$ $$X      .\"    \"%2h\n");
    printf("   $ 4k f  $     *$ $$&      R       \"iN\n");
    printf("   $ $$ %uz!     tuuR$$:     Buu      ?`:\n");
    printf("   $ $F          $??$8B      | '*Ned*$~L$\n");
    printf("   $ $k          $'@$$$      |$.suu+!' !$\n");
    printf("   $ ?N          $'$$@$      $*`      d:\"\n");
    printf("   $ dL..........M.$&$$      5       d\"P\n");
    printf(" ..$.^\"*I$RR*$C\"\"??77*?      \"nu...n*L*\n");
    printf("'$C\"R   ``\"\"!$*@#\"\"` .uor    bu8BUU+!`\n");
    printf("'*@m@.       *d\"     *$Rouxxd\"```$\n");
    printf("     R*@mu.           \"#$R *$    !\n");
    printf("     *%x. \"*L               $     %.\n");
    printf("        \"N  `%.      ...u.d!` ..ue$$$o..\n");
    printf("         @    \".    $*\"\"\"\" .u$$$$$$$$$$$$beu...\n");
    printf("        8  .mL %  :R`     x$$$$$$$$$$$$$$$$$$$$$$$$$$WmeemeeWc\n");
    printf("       |$e!\" \"s:k 4      d$N\"`\"#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n");
    printf("       $$      \"N @      $?$    F$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n");
    printf("       $@       ^%Uu..   R#8buu$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n");
    printf("                  ```\"\"*u$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n");
    printf("                         #$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n");
    printf("                          \"5$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n");
    printf("                            `*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n");
    printf("                              ^#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$>\n");
    printf("                                 \"*$$$$$$$$$$$$$$$$$$$$$$$$$$>\n");
    printf("                                   `\"*$$$$$$$$$$$$$$$$$$$$$$$>\n");
    printf("                                       ^!$$$$$$$$$$$$$$$$$$$$>\n");
    printf("                                           `\"#+$$$$$$$$$$$$$$>\n");
    printf("                                                 \"\"**$$$$$$$$>\n");
    printf("                                                        ```\"\"\n");

    int chosen, current = 1;
    char input;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Escolhe um número aleatório de 1 a 8
    chosen = rand() % 8 + 1;

    printf("Simulador de Roleta Russa\n");
    printf("Pressione Enter para girar o tambor.\n");

    // Loop até que o número escolhido seja alcançado
    while (1) {
        // Espera o usuário pressionar Enter
        input = getchar();

        if (input == '\n') {
            // Avança um número
            printf("Giro %d\n", current);

            // Verifica se o número atual é o escolhido
            if (current == chosen) {
    printf("BANG! \a\n");
    printf("         | |\n");
    printf("       @#####@\n");
    printf("     (###   ###)-.\n");
    printf("   .(###     ###) \\\n");
    printf("  /  (###   ###)   )\n");
    printf(" (=-  .@#####@|_--\"\n");
    printf(" /\\    \\_|l|_/ (\\\n");
    printf("(=-\\     |l|    /\n");
    printf(" \\  \\.___|l|___/\n");
    printf(" /\\      |_|   /\n");
    printf("(=-\\._________/\\\n");
    printf(" \\             /\n");
    printf("   \\._________/\n");
    printf("     #  ----  #\n");
    printf("     #   __   #\n");
    printf("     \\########/\n");
                break;
            }

            // Passa para o próximo número
            current++;

            // Se passou de 8, volta para 1
            if (current > 8) {
                current = 1;
            }
        }
    }

    return 0;
}


