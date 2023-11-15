#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void intro(char word[],int sal);
void name(char *word,int pq);
void a(int line);
void b(int line);
void c(int line);
void d(int line);
void e(int line);
void f(int line);
void g(int line);
void h(int line);
void i(int line);
void j(int line);
void k(int line);
void l(int line);
void m(int line);
void n(int line);
void o(int line);
void p(int line);
void q(int line);
void r(int line);
void s(int line);
void t(int line);
void u(int line);
void v(int line);
void w(int line);
void x(int line);
void y(int line);
void z(int line);
void _(int line);
void nothing(int line);
void trophy(int line);
int play(char *word,char *word2,int hang);
int main(){
    char main1[20]="hangman";
    char* chosen[20]={"lion","abiding","apple","achieve","poison","simple","cave","noise","trade","parents","love","time","freedom","hacker","joker","watch","glass","water","market","gaming"};
    char start[10]="";
    int i=1,j,pw,lol;
    srand(time(0));
    lol=rand()%20;
    char word_main[10];
    strcpy(word_main,chosen[lol]);
    int lp=strlen(word_main);
    char a[20]="hangman";
    char word[6]="Hello";
    int guess=sizeof(word)+1;
    printf("\n\n");
    int l=rand()%4;
    for (pw=0;pw<lp;pw++){
        strcat(start,"_");
    }
    system("clear");
    intro(main1,0);
    printf("                                                                       Generating word");
    for(j=0;j<4;j++){
        printf(".");
        sleep(1);
    }
    play(word_main,start,1);
    return 0;
}
void intro(char *word,int sal){
    int i=0 ,j,length=strlen(word),p;
    char* complete[23]={" ___________.._______","| .__________))______|","| | / /      ||","| |/ /       ||","| | /        ||.-''.","| |/         |/  _  \\","| |          ||  ~/,|","| |          (\\`_.'","| |         .-`--'.","| |        /Y . . Y\\","| |       // |   | \\","| |      //  | . |  \\","| |     ')   |   |   (`","| |          ||'||","| |          || ||","| |          || ||","| |          || ||","| |         / | | \\","''''''''''|_`-' `-' |'''|","|'|'''''''\\ \\       ''|'|","| |        \\ \\        | |",": :         \\ \\       : : ",". .          `'       . ."};
    char* incomplete[23]={" ___________.._______","| .__________))______|","| | / /        ","| |/ /         ","| | /               ","| |/                  ","| |                  ","| |                ","| |                ","| |                 ","| |                 ","| |                   ","| |                    ","| |               ","| |               ","| |               ","| |               ","| |                 ","''''''''''|_`-' `-' |'''|","|'|'''''''\\ \\       ''|'|","| |        \\ \\        | |",": :         \\ \\       : : ",". .          `'       . ."};
    char* incomplete1[23]={" ___________.._______","| .__________))______|","| | / /      ||","| |/ /       ||","| | /        ||     ","| |/         ||       ","| |          ||      ","| |                ","| |                ","| |                 ","| |                 ","| |                   ","| |                    ","| |               ","| |               ","| |               ","| |               ","| |                 ","''''''''''|_`-' `-' |'''|","|'|'''''''\\ \\       ''|'|","| |        \\ \\        | |",": :         \\ \\       : : ",". .          `'       . ."};
    char* incomplete2[23]={" ___________.._______","| .__________))______|","| | / /      ||","| |/ /       ||","| | /        ||.-''.","| |/         |/  _  \\","| |          ||  ~/,|","| |          (\\`_.'","| |                ","| |                 ","| |                 ","| |                   ","| |                    ","| |               ","| |               ","| |               ","| |               ","| |                 ","''''''''''|_`-' `-' |'''|","|'|'''''''\\ \\       ''|'|","| |        \\ \\        | |",": :         \\ \\       : : ",". .          `'       . ."};
    char* incomplete3[23]={" ___________.._______","| .__________))______|","| | / /      ||","| |/ /       ||","| | /        ||.-''.","| |/         |/  _  \\","| |          ||  ~/,|","| |          (\\`_.'","| |         .-`--'.","| |         Y . . Y ","| |          |   |  ","| |          | . |    ","| |          |   |     ","| |               ","| |               ","| |               ","| |               ","| |                ","''''''''''|_`-' `-' |'''|","|'|'''''''\\ \\       ''|'|","| |        \\ \\        | |",": :         \\ \\       : : ",". .          `'       . ."};
    char* incomplete4[23]={" ___________.._______","| .__________))______|","| | / /      ||","| |/ /       ||","| | /        ||.-''.","| |/         |/  _  \\","| |          ||  ~/,|","| |          (\\`_.'","| |         .-`--'.","| |         Y . . Y ","| |       // |   |  ","| |      //  | . |    ","| |     ')   |   |     ","| |               ","| |               ","| |               ","| |               ","| |                ","''''''''''|_`-' `-' |'''|","|'|'''''''\\ \\       ''|'|","| |        \\ \\        | |",": :         \\ \\       : : ",". .          `'       . ."};
    char* incomplete5[23]={" ___________.._______","| .__________))______|","| | / /      ||","| |/ /       ||","| | /        ||.-''.","| |/         |/  _  \\","| |          ||  ~/,|","| |          (\\`_.'","| |         .-`--'.","| |        /Y . . Y\\","| |       // |   | \\","| |      //  | . |  \\","| |     ')   |   |   (`","| |               ","| |               ","| |               ","| |               ","| |                ","''''''''''|_`-' `-' |'''|","|'|'''''''\\ \\       ''|'|","| |        \\ \\        | |",": :         \\ \\       : : ",". .          `'       . ."};
    char* incomplete6[23]={" ___________.._______","| .__________))______|","| | / /      ||","| |/ /       ||","| | /        ||.-''.","| |/         |/  _  \\","| |          ||  ~/,|","| |          (\\`_.'","| |         .-`--'.","| |        /Y . . Y\\","| |       // |   | \\","| |      //  | . |  \\","| |     ')   |   |   (`","| |          ||'  ","| |          ||   ","| |          ||   ","| |          ||   ","| |         / |     ","''''''''''|_`-' `-' |'''|","|'|'''''''\\ \\       ''|'|","| |        \\ \\        | |",": :         \\ \\       : : ",". .          `'       . ."};
    while (i<23){
        if (sal==0){
            printf("%s",complete[i]);
        }
        else if (sal==1){
            printf("%s",incomplete[i]);
        }
        else if (sal==2){
            printf("%s",incomplete1[i]);
        }
        else if (sal==3){
            printf("%s",incomplete2[i]);
        }
        else if (sal==4){
            printf("%s",incomplete3[i]);
        }
        else if (sal==5){
            printf("%s",incomplete4[i]);
        }
        else if (sal==6){
            printf("%s",incomplete5[i]);
        }
        else if (sal==7){
            printf("%s",incomplete6[i]);
        }
        else{
            printf("%s",complete[i]);
        }
        if ((i==6)||(i==7)||(i==8)||(i==9)||(i==10)){
            if (i==6){
                printf("                                                              ");
            }
            else if ((i==7)||(i==8)){
                printf("                                                                ");
            }
            else if ((i==9)||(i==10)){
                printf("                                                               ");
            }
            name(word,i-5);
        }
        if (i!=22){
            printf("\n");
        }
        else if (i=22){
            printf("         ");
        }
        i++;
    }
    printf("\n");
}
int play(char *word,char *word2,int hang){
    int j,l=strlen(word),bro,count=1,count2=1,number=1,jkl,done;
    char tell;
    int pw;
    char character;
    for (pw=0;pw<7;){
        number=1;
        system("clear");
        intro(word2,hang);
        printf("                                                                           ENTER CHARACTER:  ");
        scanf(" %c",&character);
        for (bro=0;bro<l;bro++){
            if (word[bro]==character){
                word2[bro]=character;
                number++;
            }
        }
        if (number==1){
            hang++;
            pw++;
        }
        sleep(1);
        done=strcmp(word,word2);
        if (done==0){
            system("clear");
            intro("winner",0);
            printf("Wanna play again? (y/n) : ");
            scanf(" %c",&tell);
            if (tell=='y'){
                main();
            }
            else{
                exit(1);
            }
        }
    }
    system("clear");
    intro(word,hang);
    sleep(2);
    system("clear");
    intro("you lost",0);
    printf("Wanna play again? (y/n) : ");
    scanf(" %c",&tell);
    if (tell=='y'){
        main();
    }
    else{
        exit(1);
    }
    return 0;
}
void name(char *word,int ip){
    int jk;
    char* pa=word;
    int pq=strlen(pa);
    for (jk=0;jk<pq;jk++){
            if (word[jk]==' '){
                printf("          ");
            }
            else if (word[jk]==','){
                trophy(ip);
            }
            else if (word[jk]=='a'){
                a(ip);
            }
            else if (word[jk]=='b'){
                b(ip);
            }
            else if (word[jk]=='c'){
                c(ip);
            }
            else if (word[jk]=='d'){
                d(ip);
            }
            else if (word[jk]=='e'){
                e(ip);
            }
            else if (word[jk]=='f'){
                f(ip);
            }
            else if (word[jk]=='g'){
                g(ip);
            }
            else if (word[jk]=='h'){
                h(ip);
            }
            else if (word[jk]=='i'){
                i(ip);
            }
            else if (word[jk]=='j'){
                j(ip);
            }
            else if (word[jk]=='k'){
                k(ip);
            }
            else if (word[jk]=='l'){
                l(ip);
            }
            else if (word[jk]=='m'){
                m(ip);
            }
            else if (word[jk]=='n'){
                n(ip);
            }
            else if (word[jk]=='o'){
                o(ip);
            }
            else if (word[jk]=='p'){
                p(ip);
            }
            else if (word[jk]=='q'){
                q(ip);
            }
            else if (word[jk]=='r'){
                r(ip);
            }
            else if (word[jk]=='s'){
                s(ip);
            }
            else if (word[jk]=='t'){ 
                t(ip);
            }
            else if (word[jk]=='u'){
                u(ip);
            }
            else if (word[jk]=='v'){
                v(ip);
            }
            else if (word[jk]=='w'){
                w(ip);
            }
            else if (word[jk]=='x'){
                x(ip);
            }
            else if (word[jk]=='y'){
                y(ip);
            }
            else if (word[jk]=='z'){
                z(ip);
            }
            else{
                if (ip==5){
                    _(ip);
                }
                else{
                    nothing(ip);
                }
            }
            printf("    ");
        }
    }
void nothing(int line){
    printf("          ");
}
void trophy(int line){
    if (line==1){
        printf("  ___________  ");
    }
    else if (line==2){
        printf(" '._==_==_=_.' ");
    }
    else if (line==3){
        printf(" .-\\:      /-. ");
    }
    else if (line==4){
        printf("| (|:.     |) |");
    }
    else if (line==5){
        printf(" '-|:.     |-' ");
    }
    else if (line==6){
        printf("   \\::.    /   ");
    }
    else if (line==7){
        printf("    '::. .'    ");
    }
    else if (line==8){
        printf("      ) (      ");
    }
    else if (line==9){
        printf("    _.' '._    ");
    }
    else if (line==10){
        printf(" `'''''''`     ");
    }
}
void _(int line){
    printf("__________");
}
void a(int line){
    if ((line==1)||(line==3)){
        printf("* * * * *");
    }
    else{
        printf("*       *");
    }
}
void b(int line){
    if ((line==1)||(line==3)||(line==5)){
        printf("* * * *  ");
    }
    else{
        printf("*       *");
    }
}
void c(int line){
    if ((line==1)||(line==5)){
        printf("* * * * *");
    }
    else{
        printf("*        ");
    }
}
void d(int line){
    if ((line==1)||(line==5)){
        printf("* * * *  ");
    }
    else{
        printf("*       *");
    }
}
void e(int line){
    if ((line==1)||(line==5)){
        printf("* * * * *");
    }
    else if ((line==2)||(line==4)){
        printf("*        ");
    }
    else{
        printf("* * *    ");
    }
}
void f(int line){
    if (line==1){
        printf("* * * * *");
    }
    else if (line==3){
        printf("* * *    ");
    }
    else{
        printf("*        ");
    }
}
void g(int line){
    if (line==2){
        printf("*        ");
    }
    else if (line==3){
        printf("*   * * *");
    }
    else if (line==4){
        printf("*       *");
    }
    else{
        printf("* * * * *");
    }
}
void h(int line){
    if (line==3){
        printf("* * * * *");
    }
    else{
        printf("*       *");
    }
}
void i(int line){
    if ((line==1)||(line==5)){
        printf("* * * * *");
    }
    else{
        printf("    *    ");
    }
}
void j(int line){
    if (line==1){
        printf("* * * * *");
    }
    else if (line==4){
        printf("*     *  ");
    }
    else if (line==5){
        printf("  * *    ");
    }
    else{
        printf("      *  ");
    }
}
void k(int line){
    if (line==3){
        printf("* * *    ");
    }
    else if ((line==1)||(line==5)){
        printf("*       *");
    }
    else{
        printf("*     *  ");
    }
}
void l(int line){
    if (line==5){
        printf("* * * * *");
    }
    else{
        printf("*        ");
    }
}
void m(int line){
    if (line==2){
        printf("* *   * *");
    }
    else if (line==3){
        printf("*   *   *");
    }
    else{
        printf("*       *");
    }
}
void n(int line){
    if (line==2){
        printf("* *     *");
    }
    else if (line==3){
        printf("*   *   *");
    }
    else if (line==4){
        printf("*     * *");
    }
    else{
        printf("*       *");
    }
}
void o(int line){
    if ((line==1)||(line==5)){
        printf("* * * * *");
    }
    else{
        printf("*       *");
    }
}
void p(int line){
    if (line==2){
        printf("*       *");
    }
    else if ((line==1)||(line==3)){
        printf("* * * * *");
    }
    else{
        printf("*        ");
    }
}
void q(int line){
    if (line==2){
        printf("*       *");
    }
    else if(line==3){
        printf("*   *   *");
    }
    else if ((line==1)||(line==5)){
        printf("* * * * *");
    }
    else{
        printf("*     * *");
    }
}
void r(int line){
    if (line==2){
        printf("*       *");
    }
    else if (line==4){
        printf("*     *  ");
    }
    else if ((line==1)||(line==3)){
        printf("* * * *  ");
    }
    else{
        printf("*       *");
    }
}
void s(int line){
    if(line==1){
        printf("  * * * *");
    }
    else if (line==2){
        printf("*        ");
    }
    else if (line==3){
        printf("  * * *  ");
    }
    else if (line==4){
        printf("        *");
    }
    else{
        printf("* * * *  ");
    }
}
void t(int line){
    if (line==1){
        printf("* * * * *");
    }
    else{
        printf("    *    ");
    }
}
void u(int line){
    if (line==5){
        printf("  * * *  ");
    }
    else{
        printf("*       *");
    }
}
void v(int line){
    if (line==4){
        printf("  *   *  ");
    }
    else if (line==5){
        printf("    *    ");
    }
    else{
        printf("*       *");
    }
}
void w(int line){
    if (line==3){
        printf("*   *   *");
    }
    else if (line==4){
        printf("* *   * *");
    }
    else{
        printf("*       *");
    }
}
void x(int line){
    if (line==3){
        printf("    *    ");
    }
    else if ((line==2)||(line==4)){
        printf("  *   *  ");
    }
    else{
        printf("*       *");
    }
}
void y(int line){
    if (line==1){
        printf("*       *");
    }
    else if (line==2){
        printf("  *   *  ");
    }
    else{
        printf("    *    ");
    }
}
void z(int line){
    if (line==2){
        printf("      *  ");
    }
    else if (line==3){
        printf("    *    ");
    }
    else if (line==4){
        printf("  *      ");
    }
    else {
        printf("* * * * *");
    }
}
