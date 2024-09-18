//string

struct notas{
    float n1;
    float n2;
};

struct aluno{
    char nome[25];
    /*...*/
    struct notas n;
};

main(){
    int i;
    struct aluno al[3];
    for (i = 0; i < 3; i++){
        fflush(stdin);
        gets (al[i].nome);
        scanf ("%f", &al[i]. n.n1);
        scanf ("%f", &al[i]. n.n2);
        printf ("%s - %c - %f = %f\n", al[i].nome , al[i].nome[0], al[i].n.n1, al[i].n.n2)
    }
}
