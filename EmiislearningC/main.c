#include <stdio.h>
#include <stdlib.h>

int main(){
    char Username[20];
    printf("Hello, what's your name?\n");
    fgets(Username,19,stdin);
    SayHi(Username);
    Gaming();
    Socialmedia();
    Homework();
    Bricklaying();
    printf("CREDITS\n");
    printf("Artistic Idea: your nostril\n");
    printf("Designed by: toilet paper\n");
    printf("QA by: underpaid debugger\n");
    printf("Distributed by: manual bots\n");
    printf("Executed by: Guillotine\n");
    return 0;
}
int cube (int Userage){
    return Userage*Userage*Userage;
}
void SayHi (char name[]){
    int Userage;
    printf("Hello %s\n",name);
    printf("How old are you?\n");
    scanf ("%d",&Userage);
    printf ("You are lying, you are %d years old\n",cube(Userage));
    if (Userage>18){HangingOut();
    }else {Birthdates();
    }
}
void Gameover(){
    char Username1[]="Big Loser";
    printf("Game Over\n");
    printf("It was nice too meet you\n");
    printf("You'll surely be missed\n");
    printf("%s\n",Username1);
    SayHi(Username1);}
void BronzeAge(){
int guesscount=0;
int guesslimit=5;
int favnum=14;
int Xnum;
int outofguesses=0;
while(Xnum != favnum && outofguesses==0){
    if (guesscount<guesslimit){
        printf("Welcome to the Bronze Age\n");
        printf ("Guess my favorite number:\n");
        scanf ("%d",&Xnum);
        guesscount++;
    }else{
        outofguesses=1;}
}
if(outofguesses==1){
   printf("Prepare to travel in time\n");
        StoneAge();
} else {
    printf("You were only going to get out of here dead!\n");
    Credits();}
}
void StoneAge(){
char START [20];
printf ("Welcome to the Stone Age\n");
printf ("press START to start the game\n");
scanf ("%s",START);
int Userbirth;
printf ("Please state the year you were born\n");
scanf ("%d",&Userbirth);
printf ("So, you were born in %d B.C.?\n",Userbirth);
printf ("You are really old!\n");
if (Userbirth<1900){
    Gameover();
}else BronzeAge(); }
struct chonguis{
char cname[50];
char cnick [50];
int cbirth;
double sexrate};
void HangingOut(){
    struct chonguis ex1;
        ex1.cbirth=1992;
        ex1.sexrate=7.5;
        strcpy (ex1.cname,"Anthony");
        strcpy (ex1.cnick,"Shorty");
    struct chonguis ex2;
        ex2.cbirth=1996;
        ex2.sexrate=3.5;
        strcpy (ex2.cname, "Jenna");
        strcpy (ex2.cnick, "Flatty");
    char gender;
    char ermi []="Emiliano";
    char chamo []="Agustina";
    char juana  []="Joyce";
    char gollum []="Rodolfo";
    char morsik []="Sofia";
    char novia []="Estela";
    char chongo [20];
    const int BOTTLES =15; /* constants in uppercase practice OK */
    int Followers =27;
    char passion []= "chocolates & whiskies";
    char booze []= "wines";
    char Xdrinker[10] ; /* number limits amount of characters */
    printf("%s loves %s \n",chamo,ermi);
    printf("%s is %s's little sister\n",morsik,chamo);
    printf("%s loves %s\n",morsik,passion);
    printf("Who does %s hang out with?\n",morsik);
    fflush (stdin);
    gets (chongo);
    printf("%s seems nice!\n",chongo);
    printf("%s surely is %s's friend\n",chongo,chamo);
    printf("%s drinks %d %s per day \n",gollum,BOTTLES,booze);
    /* BOTTLES =13; you can't modify a constant */
    printf("%s drank %f %s\n",ermi,pow(2.0,4),booze);
    printf("%s drank %f %s\n",morsik,-1.7/-0.3,booze);
    printf("%s drank %f %s\n",novia,pow(0.7,4),booze);
    printf("%s drank %f %s\n",chamo,sqrt(2),booze);
    printf("%s drank %f %s\n",chongo,ceil(82.5),booze);
    printf("%s drank %f %s\n",juana,floor(0.783),booze);
    printf("Who drank more %s?\n",booze);
    fflush (stdin);
    gets(Xdrinker); /* don't include "\n" in here */
    printf("You drink more %s than %s!\n",booze,Xdrinker);
    printf("Choose your gender (m-f)\n");
    scanf (" %c",&gender);
    switch (gender){
        case 'm':
            printf ("Your name is %s\n",ex1.cname);
            printf ("I'll call you %s\n",ex1.cnick);
            printf ("You were born in %d\n",ex1.cbirth);
            printf ("You kiss %f times per week\n",ex1.sexrate);
        break;
        case 'f':
            printf ("Your name is %s\n",ex2.cname);
            printf ("I'll call you %s\n",ex2.cnick);
            printf ("You were born in %d\n",ex2.cbirth);
            printf ("You kiss %f times per week\n",ex2.sexrate);
        break;
        default:
            printf ("Are you even human?\n");
            BronzeAge();}
}
void Birthdates(){
    char ermi []="Emiliano";
    char chamo []="Agustina";
    char juana  []="Joyce";
    char gollum []="Rodolfo";
    char morsik []="Sofia";
    char novia []="Estela";
    int birth[]={1991,1994};
    int Xage1;
    int agediff;
    printf("%s was born in %d, how old is he?\n",ermi,birth[0]);
    scanf ("%d",&Xage1);
    printf("%s has six years more than %s\n",chamo,ermi);
    printf("If %s was born in %d, how much older is %s than her?\n",morsik,birth[1],chamo);
    scanf ("%d",&agediff);
    printf ("So %s was born in %d\n",chamo,birth[1]-agediff);
    if (Xage1<agediff || 8>=agediff){
        Gameover();
    }else if (10<agediff){
    printf ("You've won the Troll Prize!\n");
    }else if (agediff==9) {
    printf ("You've nailed it!\n");}
    else {
    printf ("Almost there!\n");}
    printf ("Let's create an avatar!\n");
    struct chonguis jr;
    printf ("Insert a name:\n");
    fflush (stdin);
    gets (jr.cname);
    printf ("Don't name your kids like that!\n");
    printf ("Insert a nickname:\n");
    fflush (stdin);
    gets (jr.cname);
    printf ("That's bullying!\n");
    printf ("State year of birth:\n");
    scanf ("%d",&jr.cbirth);
    if (jr.cbirth<1985){
        printf("%s is older than %s\n",jr.cname,chamo);
        StoneAge();
    }else if (1985<=jr.cbirth && jr.cbirth<1991){
        printf ("%s is older than %s\n",jr.cname,ermi);
    }else if (1991<=jr.cbirth && jr.cbirth<1994){
        printf ("%s is older than %s\n",jr.cname,morsik);
    }else {
    printf ("%s is really young!\n",jr.cname);}
}
void Gaming(){
    char ermi []="Emiliano";
    char chamo []="Agustina";
    char juana  []="Joyce";
    char gollum []="Rodolfo";
    char morsik []="Sofia";
    char novia []="Estela";
    const double AVG =3.5;
    char game [20];
    double average;
    char option;
    printf("What's %s's favourite videogame?\n",juana);
    fflush (stdin);
    gets(game);
    printf("%s scored %f in %s\n",juana,AVG,game);
    printf("OK, and how many points scored %s?\n",juana);
    scanf("%lf",&average); /* always put "%lf" when scanning decimals */
    printf("Well, it's really %f!\n",floor(average));
    printf ("Scoring is only in integers\n");
    printf ("The Roller Coaster has broken down!\n");
    printf ("Choose an option:\n");
    printf ("a. repair the Roller Coaster\n");
    printf ("b. ride the Roller Coaster\n");
    printf ("c. play another game\n");
    scanf (" %c",&option);
    if (option=='a'){
        printf ("Got to find %s; he's having some wine\n",gollum);
        HangingOut ();
    }else if (option=='b'){
        StoneAge();
    }else if (option=='c'){
    printf ("Let's make a story with %s\n",novia);
    }else {Gameover ();}
}
void Socialmedia () {
    char novia []="Estela";
    int likes1;
    int likes2;
    int Followers =27;
    int seconds;
    printf("%s has %d followers in TikTok\n",novia,Followers);
    printf("How many likes does %s have?\n",novia);
    scanf("%d",&likes1);
    printf("How many likes do you have?\n");
    scanf("%d",&likes2);
    if (likes1>likes2){
            printf("How unlucky you are!\n");
            printf("So, those are %d likes of difference!\n",likes1-likes2);
    }else{printf ("How popular you are!\n");
          printf("So, those are %d likes of difference!\n",likes2-likes1);
    }
    if (likes2==0){
    StoneAge();
    }else {
    printf("You can have my like!\n");}
    printf ("It's about to be New Year\n");
    printf ("We'll take a picture\n");
    printf ("How many seconds 'till New Year?\n");
    scanf ("%d",&seconds);
    while (seconds>=0 || seconds>100){
        printf ("%d\n",seconds);
        seconds--;}
    printf ("Happy new year!\n!");
}
Homework (){
char juana []="Joyce";
char grade;
printf ("%s has been doing the homework\n", juana);
printf ("Give her a grade (A-G):\n");
scanf (" %c",&grade);
switch (grade){
    case 'A':
        printf ("Avengers!\n");
        break;
    case 'B':
        printf ("Braveheart!\n");
        break;
    case 'C':
        printf ("Citizen Kane!\n");
        break;
    case 'D':
        printf ("Dunkerque!\n");
        break;
    case 'E':
        printf ("Enigma Code!\n");
        break;
    case 'F':
        printf ("Farenheit 911!\n");
        break;
    case 'G':
        printf ("Ghostbusters!\n");
        break;
    default: StoneAge();}
printf("Apparently, it was a movie catalog!\n");
printf("I'll aim hard for that 'G' now!\n");
}
void Credits(){
    printf("CREDITS\n");
    printf("Artistic Idea: accountant\n");
    printf("Designed by: Al-Zeimer\n");
    printf("QA by: insecure guy\n");
    printf("Distributed by: spam\n");
    printf("Executed by: drunkard\n");
    }
void Bricklaying(){
char gollum []= "Rodolfo";
int bricks;
int day = 1;
int brickcourse;
printf ("%s wants to make a wall\n",gollum);
printf ("How many courses of brick will he put up?\n");
scanf ("%d",&brickcourse);
for (bricks = 1; bricks <= brickcourse; bricks++){
    printf ("On day %d, %s laid %d bricks\n",day++,gollum,bricks*13);
    }
    char Xlocation;
    printf ("What an unlucky choice of bricks\n");
    printf ("Do you want to know where %s is? (y-n)\n", gollum);
    scanf (" %c",&Xlocation);
    switch (Xlocation){
case 'y':
    printf("%p\n",&Xlocation);
    printf("Looking into other's memories, uh?\n");
    printf("Have you revalidated your psychology degree?\n");
    break;
case 'n':
    printf("Thanks for respecting other's privacy\n");
    break;
    default:Gameover();
    }
}
