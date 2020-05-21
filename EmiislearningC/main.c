#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Username[20];
    printf("Hello, what's your name?\n");
    fgets(Username,19,stdin);
    SayHi(Username);
    Gaming();
    Socialmedia();
    printf("Thank you\n");
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
void HangingOut(){
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
    scanf("%s",chongo);
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
    scanf("%s",&Xdrinker); /* don't include "\n" in here */
    printf("You drink more %s than %s!\n",booze,Xdrinker);
}
char Gameover (){
    char Username1[]="Big Loser";
    printf("Game Over\n");
    printf("It was nice too meet you\n");
    printf("You'll surely be missed\n");
    printf("%s\n",Username1);
    SayHi(Username1);}
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
    if (Xage1<agediff || 8>agediff){
        Gameover();
    }else if (10<agediff){
    printf ("You've won the Troll Prize!\n");
    } else {
    printf ("You've nailed it!\n");}

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
    printf("What's %s's favourite videogame?\n",juana);
    scanf ("%s",&game);
    printf("%s scored %f in %s\n",juana,AVG,game);
    printf("OK, and how many points scored %s?\n",juana);
    scanf("%lf",&average); /* always put "%lf" when scanning decimals */
    printf("Well, it's really %f!\n",floor(average));
    printf ("Scoring is only in integers\n");
}
int Likediff (int likes1,int likes2){
    int result;
    if (likes1>likes2){
        result=likes1-likes2;
    }
    else {result=likes2-likes1;
    }
}
void Socialmedia () {
    char ermi []="Emiliano";
    char chamo []="Agustina";
    char juana  []="Joyce";
    char gollum []="Rodolfo";
    char morsik []="Sofia";
    char novia []="Estela";
    int likes1;
    int likes2;
    int Followers =27;
    printf("%s has %d followers in TikTok\n",novia,Followers);
    printf("How many likes does %s have?\n",novia);
    scanf("%d",&likes1);
    printf("How many likes do you have?\n");
    scanf("%d",&likes2);
    if (likes1>likes2){printf("How unlucky you are!\n");
    }else{printf ("How popular you are!\n");
    }
    printf("So, those are %d likes of difference!\n",Likediff(likes1,likes2));
}
