#include <stdio.h> /*stdio.h*/
#include <gconio.h> /*gconio.h - importowana z folderu lib*/
main()
{/*0otwarte*/
        int x,y;
        printf("\n Kolko i krzyzyk w wersji 1.0. Grasz z komputerem.");
        printf("\n Jezeli chcesz wykonac ruch to nacisnij odpowiednia cyfre a nastepnie potwierdz enterem. Pole do gry wyglada nastepujaco:");
        printf("\n [1][2][3]");
        printf("\n [4][5][6]");
        printf("\n [7][8][9]");
        printf("\n Kazdemu polu przypisana jest cyfra. Komputer rozpoczyna gre. Gra X-ami, a ty kolkami.");
        printf("\n ________________________________________________________");
        printf("\n Komputer wykonuje pierwszy ruch, stawia [x] na polu [5]. ");
        printf("\n [1][2][3]");
        printf("\n [4][x][6]");
        printf("\n [7][8][9]");
        printf("\n Ty wykonujesz ruch kolkiem [o] na polu (wprowadz cyfre i nacisnij enter)... ");
        scanf("%d",&x);
        printf("\n ________________________________________________________");
        if(x==1 || x==2 || x==3 || x==4 || x==5 || x==6 || x==7 || x==8 || x==9){/* 1otwarte */
if(x==4){/*2otwarte*/
printf("\n Postawiles kolko [o] na polu [4]. Komputer w odpowiedzi stawia [x] na polu [8]. ");
printf("\n [1][2][3]");
printf("\n [o][x][6]");
printf("\n [7][x][9]");
printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
scanf("%d",&y);
printf("\n ________________________________________________________");
if(y==1 || y==3 || y==6 || y==7 || y==2 || y==9){/*3otwarte*/

if(y==1){
        printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [o][x][3]");
        printf("\n [o][x][6]");
        printf("\n [7][x][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
 else
	if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [1][x][o]");
        printf("\n [o][x][6]");
        printf("\n [7][x][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
	else
        if(y==7){
        printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [1][x][3]");
        printf("\n [o][x][6]");
        printf("\n [o][x][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
     if(y==6){
        printf("\n Postawiles kolko [o] na polu [6]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [1][x][3]");
        printf("\n [o][x][o]");
        printf("\n [7][x][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
    if(y==9){
        printf("\n Postawiles kolko [o] na polu [9]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [1][x][3]");
        printf("\n [o][x][6]");
        printf("\n [7][x][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
    return 0;}
	else

  if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [1][o][3]");
        printf("\n [o][x][6]");
        printf("\n [x][x][9]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
 if(y==3 || y==1 || y==6 || y==9){
        if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [9]. ");
        printf("\n [1][o][o]");
        printf("\n [o][x][6]");
        printf("\n [x][x][x]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==1){
        printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [3]. ");
        printf("\n [o][o][x]");
        printf("\n [o][x][6]");
        printf("\n [x][x][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==6){
        printf("\n Postawiles kolko [o] na polu [6]. Komputer w odpowiedzi stawia [x] na polu [3]. ");
        printf("\n [1][o][x]");
        printf("\n [o][x][o]");
        printf("\n [x][x][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        if(y==9){
         printf("\n Postawiles kolko [o] na polu [9]. Komputer w odpowiedzi stawia [x] na polu [3]. ");
        printf("\n [1][o][x]");
        printf("\n [o][x][6]");
        printf("\n [x][x][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

        }else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*3zamkniete*/
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*2zamkniete*/
else
if(x==1){/*2otwarte*/
printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [4]. ");
printf("\n [o][2][3]");
printf("\n [x][x][6]");
printf("\n [7][8][9]");
printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
scanf("%d",&y);
printf("\n ________________________________________________________");
if(y==2 || y==3 || y==6 || y==7 || y==8 || y==9){/*3otwarte*/

if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [o][o][3]");
        printf("\n [x][x][x]");
        printf("\n [7][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
 else
	if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [o][2][o]");
        printf("\n [x][x][x]");
        printf("\n [7][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
	else
        if(y==7){
        printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [o][2][3]");
        printf("\n [x][x][x]");
        printf("\n [o][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
     if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [o][2][3]");
        printf("\n [x][x][x]");
        printf("\n [7][o][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
    if(y==9){
        printf("\n Postawiles kolko [o] na polu [9]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [o][2][3]");
        printf("\n [x][x][x]");
        printf("\n [7][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
    return 0;}
	else

  if(y==6){
        printf("\n Postawiles kolko [o] na polu [6]. Komputer w odpowiedzi stawia [x] na polu [3]. ");
        printf("\n [o][2][x]");
        printf("\n [x][x][o]");
        printf("\n [7][8][9]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
 if(y==2 || y==7 || y==8 || y==9){
if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [o][o][x]");
        printf("\n [x][x][o]");
        printf("\n [x][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [o][2][x]");
        printf("\n [x][x][o]");
        printf("\n [x][o][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==9){
        printf("\n Postawiles kolko [o] na polu [9]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [o][2][x]");
        printf("\n [x][x][o]");
        printf("\n [x][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        if(y==7){
         printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [o][x][x]");
        printf("\n [x][x][o]");
        printf("\n [o][8][9]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
        if(y==8 || y==9){
        if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [9]. ");
        printf("\n [o][x][x]");
        printf("\n [x][x][o]");
        printf("\n [o][o][x]");
        printf("\n Remis.");
        printf("\n");
        getch();
        return 0;}
        else
        if(y==9){
        printf("\n Postawiles kolko [o] na polu [9]. Komputer w odpowiedzi stawia [x] na polu [8]. ");
        printf("\n [o][x][x]");
        printf("\n [x][x][o]");
        printf("\n [o][x][o]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;        }

        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

        }
        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

}
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
		}
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;

		}
}/*3zamkniete*/
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*2zamkniete*/
else
if(x==2){/*2otwarte*/
printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [4]. ");
printf("\n [1][o][3]");
printf("\n [x][x][6]");
printf("\n [7][8][9]");
printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
scanf("%d",&y);
printf("\n ________________________________________________________");
if(y==1 || y==3 || y==6 || y==7 || y==8 || y==9){/*3otwarte*/

if(y==1){
        printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [o][o][3]");
        printf("\n [x][x][x]");
        printf("\n [7][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
 else
	if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][o][o]");
        printf("\n [x][x][x]");
        printf("\n [7][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
	else
        if(y==7){
        printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][o][3]");
        printf("\n [x][x][x]");
        printf("\n [o][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
     if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][o][3]");
        printf("\n [x][x][x]");
        printf("\n [7][o][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
    if(y==9){
        printf("\n Postawiles kolko [o] na polu [9]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][o][3]");
        printf("\n [x][x][x]");
        printf("\n [7][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
    return 0;}
	else

  if(y==6){
        printf("\n Postawiles kolko [o] na polu [6]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][o][3]");
        printf("\n [x][x][o]");
        printf("\n [7][8][9]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
 if(y==3 || y==7 || y==8 || y==9){
        if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [x][o][o]");
        printf("\n [x][x][o]");
        printf("\n [x][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [x][o][3]");
        printf("\n [x][x][o]");
        printf("\n [x][o][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==9){
        printf("\n Postawiles kolko [o] na polu [9]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [x][o][3]");
        printf("\n [x][x][o]");
        printf("\n [x][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        if(y==7){
         printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [9]. ");
        printf("\n [x][o][x]");
        printf("\n [x][x][o]");
        printf("\n [o][8][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

        }else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*3zamkniete*/
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*2zamkniete*/
else
if(x==3){/*2otwarte*/
printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [4]. ");
printf("\n [1][2][o]");
printf("\n [x][x][6]");
printf("\n [7][8][9]");
printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
scanf("%d",&y);
printf("\n ________________________________________________________");
if(y==1 || y==2 || y==6 || y==7 || y==8 || y==9){/*3otwarte*/

if(y==1){
        printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [o][2][o]");
        printf("\n [x][x][x]");
        printf("\n [7][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
 else
	if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][o][o]");
        printf("\n [x][x][x]");
        printf("\n [7][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
	else
        if(y==7){
        printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][2][o]");
        printf("\n [x][x][x]");
        printf("\n [o][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
     if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][2][o]");
        printf("\n [x][x][x]");
        printf("\n [7][o][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
    if(y==9){
        printf("\n Postawiles kolko [o] na polu [9]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][2][o]");
        printf("\n [x][x][x]");
        printf("\n [7][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
    return 0;}
	else

  if(y==6){
        printf("\n Postawiles kolko [o] na polu [6]. Komputer w odpowiedzi stawia [x] na polu [9]. ");
        printf("\n [1][2][o]");
        printf("\n [x][x][o]");
        printf("\n [7][8][x]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
 if(y==2 || y==7 || y==8 || y==1){
if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][o][o]");
        printf("\n [x][x][o]");
        printf("\n [7][8][x]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][o]");
        printf("\n [x][x][o]");
        printf("\n [7][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==7){
        printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][o]");
        printf("\n [x][x][o]");
        printf("\n [o][8][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        if(y==1){
         printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [o][x][o]");
        printf("\n [x][x][o]");
        printf("\n [7][8][x]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
        if(y==8 || y==7){
        if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [o][x][o]");
        printf("\n [x][x][o]");
        printf("\n [x][o][x]");
        printf("\n Remis.");
        printf("\n");
        getch();
        return 0;}
        else
        if(y==7){
        printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [8]. ");
        printf("\n [o][x][o]");
        printf("\n [x][x][o]");
        printf("\n [o][x][x]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;        }

        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

        }
        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

}
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
		}
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;

		}
}/*3zamkniete*/
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*2zamkniete*/
else
if(x==6){/*2otwarte*/
printf("\n Postawiles kolko [o] na polu [6]. Komputer w odpowiedzi stawia [x] na polu [9]. ");
printf("\n [1][2][3]");
printf("\n [4][x][o]");
printf("\n [7][8][x]");
printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
scanf("%d",&y);
printf("\n ________________________________________________________");
if(y==1 || y==3 || y==8 || y==7 || y==2 || y==4){/*3otwarte*/

if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][o]");
        printf("\n [4][x][o]");
        printf("\n [7][8][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
 else
	if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][3]");
        printf("\n [4][x][o]");
        printf("\n [7][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
	else
        if(y==7){
        printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][3]");
        printf("\n [4][x][o]");
        printf("\n [o][8][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
     if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][o][3]");
        printf("\n [4][x][o]");
        printf("\n [7][8][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
    if(y==4){
        printf("\n Postawiles kolko [o] na polu [4]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][3]");
        printf("\n [o][x][o]");
        printf("\n [7][8][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
    return 0;}
	else

  if(y==1){
        printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [8]. ");
        printf("\n [o][2][3]");
        printf("\n [4][x][o]");
        printf("\n [7][x][x]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
 if(y==3 || y==2 || y==4 || y==7){
        if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [o][x][o]");
        printf("\n [4][x][o]");
        printf("\n [7][x][x]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [o][o][3]");
        printf("\n [4][x][o]");
        printf("\n [x][x][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==4){
        printf("\n Postawiles kolko [o] na polu [4]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [o][2][3]");
        printf("\n [o][x][o]");
        printf("\n [x][x][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        if(y==7){
         printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [o][x][3]");
        printf("\n [4][x][o]");
        printf("\n [o][x][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

        }else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*3zamkniete*/
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*2zamkniete*/
else
if(x==7){/*2otwarte*/
printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [4]. ");
printf("\n [1][2][3]");
printf("\n [x][x][6]");
printf("\n [o][8][9]");
printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
scanf("%d",&y);
printf("\n ________________________________________________________");
if(y==2 || y==3 || y==6 || y==1 || y==8 || y==9){/*3otwarte*/

if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][o][3]");
        printf("\n [x][x][x]");
        printf("\n [o][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
 else
	if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][2][o]");
        printf("\n [x][x][x]");
        printf("\n [o][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
	else
        if(y==1){
        printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [o][2][3]");
        printf("\n [x][x][x]");
        printf("\n [o][8][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
     if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][2][3]");
        printf("\n [x][x][x]");
        printf("\n [o][o][9]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
    if(y==9){
        printf("\n Postawiles kolko [o] na polu [9]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][2][3]");
        printf("\n [x][x][x]");
        printf("\n [o][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
    return 0;}
	else

  if(y==6){
        printf("\n Postawiles kolko [o] na polu [6]. Komputer w odpowiedzi stawia [x] na polu [9]. ");
        printf("\n [1][2][3]");
        printf("\n [x][x][o]");
        printf("\n [o][8][x]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
 if(y==2 || y==3 || y==8 || y==1){
if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][o][3]");
        printf("\n [x][x][o]");
        printf("\n [o][8][x]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][o]");
        printf("\n [x][x][o]");
        printf("\n [o][8][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][3]");
        printf("\n [x][x][o]");
        printf("\n [o][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        if(y==1){
         printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [o][x][3]");
        printf("\n [x][x][o]");
        printf("\n [o][8][x]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
        if(y==8 || y==3){
        if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [3]. ");
        printf("\n [o][x][x]");
        printf("\n [x][x][o]");
        printf("\n [o][o][x]");
        printf("\n Remis.");
        printf("\n");
        getch();
        return 0;}
        else
        if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [8]. ");
        printf("\n [o][x][o]");
        printf("\n [x][x][o]");
        printf("\n [o][x][x]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;}

        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

        }
        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

}
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
		}
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;

		}
}/*3zamkniete*/
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*2zamkniete*/
else
if(x==8){/*2otwarte*/
printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [9]. ");
printf("\n [1][2][3]");
printf("\n [4][x][6]");
printf("\n [7][o][x]");
printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
scanf("%d",&y);
printf("\n ________________________________________________________");
if(y==1 || y==3 || y==6 || y==7 || y==2 || y==4){/*3otwarte*/

if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][o]");
        printf("\n [4][x][6]");
        printf("\n [7][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
 else
	if(y==6){
        printf("\n Postawiles kolko [o] na polu [6]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][3]");
        printf("\n [4][x][o]");
        printf("\n [7][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
	else
        if(y==7){
        printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][3]");
        printf("\n [4][x][6]");
        printf("\n [o][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
     if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][o][3]");
        printf("\n [4][x][6]");
        printf("\n [7][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
    if(y==4){
        printf("\n Postawiles kolko [o] na polu [4]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][2][3]");
        printf("\n [o][x][6]");
        printf("\n [7][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
    return 0;}
	else

  if(y==1){
        printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [o][2][3]");
        printf("\n [4][x][x]");
        printf("\n [7][o][x]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
 if(y==3 || y==2 || y==4 || y==7){
        if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [4]. ");
        printf("\n [o][2][o]");
        printf("\n [x][x][x]");
        printf("\n [7][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [3]. ");
        printf("\n [o][o][x]");
        printf("\n [4][x][x]");
        printf("\n [7][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==4){
        printf("\n Postawiles kolko [o] na polu [4]. Komputer w odpowiedzi stawia [x] na polu [3]. ");
        printf("\n [o][2][x]");
        printf("\n [o][x][x]");
        printf("\n [7][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        if(y==7){
         printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [4]. ");
        printf("\n [o][2][3]");
        printf("\n [x][x][x]");
        printf("\n [o][o][x]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

        }else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*3zamkniete*/
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*2zamkniete*/
else
if(x==9){/*2otwarte*/
printf("\n Postawiles kolko [o] na polu [9]. Komputer w odpowiedzi stawia [x] na polu [4]. ");
printf("\n [1][2][3]");
printf("\n [x][x][6]");
printf("\n [7][8][o]");
printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
scanf("%d",&y);
printf("\n ________________________________________________________");
if(y==2 || y==3 || y==6 || y==1 || y==8 || y==7){/*3otwarte*/

if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][o][3]");
        printf("\n [x][x][x]");
        printf("\n [7][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
 else
	if(y==3){
        printf("\n Postawiles kolko [o] na polu [3]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][2][o]");
        printf("\n [x][x][x]");
        printf("\n [7][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	    printf("\n");
	    getch();
        return 0;}
	else
        if(y==1){
        printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [o][2][3]");
        printf("\n [x][x][x]");
        printf("\n [7][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
     if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][2][3]");
        printf("\n [x][x][x]");
        printf("\n [7][o][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
        return 0;}
	else
    if(y==7){
        printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [6]. ");
        printf("\n [1][2][3]");
        printf("\n [x][x][x]");
        printf("\n [o][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
	printf("\n");
	getch();
    return 0;}
	else

  if(y==6){
        printf("\n Postawiles kolko [o] na polu [6]. Komputer w odpowiedzi stawia [x] na polu [3]. ");
        printf("\n [1][2][x]");
        printf("\n [x][x][o]");
        printf("\n [7][8][o]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
 if(y==2 || y==7 || y==8 || y==1){
if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [1][o][x]");
        printf("\n [x][x][o]");
        printf("\n [x][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==1){
        printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [o][2][x]");
        printf("\n [x][x][o]");
        printf("\n [x][8][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}
        else
        if(y==8){
        printf("\n Postawiles kolko [o] na polu [8]. Komputer w odpowiedzi stawia [x] na polu [7]. ");
        printf("\n [1][2][x]");
        printf("\n [x][x][o]");
        printf("\n [x][o][o]");
        printf("\n Komputer wygrał. Koniec gry.");
        printf("\n");
		printf("\n");
		getch();
        return 0;}

        else
        if(y==7){
         printf("\n Postawiles kolko [o] na polu [7]. Komputer w odpowiedzi stawia [x] na polu [8]. ");
        printf("\n [1][2][x]");
        printf("\n [x][x][o]");
        printf("\n [o][x][o]");
        printf("\n Ty wykonujesz ruch (kolkiem) na polu... ");
        scanf("%d",&y);
        printf("\n ________________________________________________________");
        if(y==2 || y==1){
        if(y==2){
        printf("\n Postawiles kolko [o] na polu [2]. Komputer w odpowiedzi stawia [x] na polu [1]. ");
        printf("\n [x][o][x]");
        printf("\n [x][x][o]");
        printf("\n [o][x][o]");
        printf("\n Remis.");
        printf("\n");
        getch();
        return 0;}
        else
        if(y==1){
        printf("\n Postawiles kolko [o] na polu [1]. Komputer w odpowiedzi stawia [x] na polu [2]. ");
        printf("\n [o][x][x]");
        printf("\n [x][x][o]");
        printf("\n [o][x][o]");
        printf("\n Komputer wygrał. Koniec gry.");
		printf("\n");
		getch();
        return 0;}

        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

        }
        else
        printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
		printf("\n");
		getch();
		return 0;

}
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
		}
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;

		}
}/*3zamkniete*/
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*2zamkniete*/
else/*tutaj bylo "liczba dalej" */
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/* 1zamkniete */
else
printf("\n Wybierz odpowiednią cyfrę, która nie została jeszcze użyta. Zacznij od początku.");
printf("\n");
getch();
return 0;
}/*0zamkniete*/