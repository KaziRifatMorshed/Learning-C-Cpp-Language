// created by: azmain inquaid haque turjo
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>

int main() {
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TC||BGI");
  int wd = initwindow(1600, 500, "smooth_car");

  setcurrentwindow(wd);

  // settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
  // outtextxy(25,240,"PRESS");
  // getch();
  int n = 0;
  double k = 2, m = 0.05;
  for (double i = 0, j = 0; i <= 700; i += k, j += m) {
    if (kbhit()) {
      char ch = getch();
      if (ch == 'a') {
        m = abs(m);
        k -= 5;
      } else if (ch == 'd') {
        m = -m;
        k += 5;
      } else if (ch == 32) {
        k = 0;
      }
    }

    setbkcolor(WHITE);
    // route
    setcolor(BLACK);
    line(5, 450, 1600, 450);
    //        line(5,410,900,410);
    // body
    // rectangle(75+i,300,i+275,400 );
    setcolor(RED);
    line(75 + i, 300, 275 + i, 300);
    line(75 + i, 350, 275 + i, 350);
    line(105 + i, 400, 245 + i, 400);
    line(75 + i, 378, 75 + i, 300);

    // window
    setcolor(CYAN);
    rectangle(200 + i, 320, 250 + i, 350);
    rectangle(140 + i, 320, 190 + i, 350);
    rectangle(90 + i, 320, 130 + i, 350);

    // head
    //  rectangle(275+i,350,340+i,400);
    line(275 + i, 300, 340 + i, 350);
    line(275 + i, 350, 340 + i, 350);
    line(275 + i, 350, 275 + i, 300);
    line(340 + i, 350, 340 + i, 400);
    line(305 + i, 400, 340 + i, 400);

    // driver
    setcolor(YELLOW);
    circle(290 + i, 330, 10);
    line(290 + i, 350, 290 + i, 340);

    // wheel
    setcolor(BLACK);
    circle(75 + i, 410, 30);
    circle(275 + i, 410, 30);
    circle(75 + i, 410, 15);
    circle(275 + i, 410, 15);
    // spikes

    line(75 + i, 410, 75 + i + 30 * cos(j), 410 + 30 * sin(j));
    line(275 + i, 410, 275 + i + 30 * cos(j), 410 + 30 * sin(j));

    //        line(45+i,410,103+i,410);
    //        line(245+i,410,305+i,410);

    // tree
    setcolor(BLUE);
    line(70, 448, 70, 270);
    line(90, 448, 90, 270);
    circle(70, 270, 40);
    circle(90, 270, 40);

    // tree 2
    setcolor(GREEN);
    line(250, 448, 250, 270);
    line(280, 448, 280, 270);
    circle(250, 270, 40);
    circle(280, 270, 40);

    // tree 3
    setcolor(RED);
    line(400, 448, 400, 270);
    line(480, 448, 480, 270);
    circle(400, 270, 40);
    circle(480, 270, 40);

    // rock
    rectangle(1000, 400, 1050, 450);

    delay(5);
    cleardevice();
  }

  // game over

  Beep(600, 300);
  for (int i = 0; i < 10; i++) {
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 8);
    Beep(600, 300);
    outtextxy(500, 250, "GAME OVER");
    // after fall
    delay(1000);
    cleardevice();
  }
  double i = 700;
  //    for(double j = 700; j<=900; j++)
  //    {
  //        //route
  //        line(5,450,1600,450);
  ////        line(5,410,900,410);
  //        //body
  //        // rectangle(75+i,300,i+275,400 );
  //        line(75+i,330,275+i,330);
  //        line(75+i,380,275+i,380);
  //        line(105+i,430,245+i,430);
  //        line(75+i,408,75+i,330);
  //
  //        //window
  //        rectangle(200+i,350,250+i,380);
  //        rectangle(140+i,350,190+i,380);
  //        rectangle(90+i,350,130+i,380);
  //
  //        //head
  //        // rectangle(275+i,350,340+i,400);
  //        //  line(275+i,300,340+i,350);
  //        line(300+i,350,340+i,350);
  //        line(275+i,350,275+i,300);
  //        line(340+i,350,340+i,400);
  //        line(305+i,400,340+i,400);
  //
  //        //driver
  //        circle(320+i,360,10);
  //        line(290+i,380,290+i,370);
  //
  //        //wheel
  //        circle(75+j,410,30);
  //        circle(275+j,410,30);
  //        circle(75+j,410,15);
  //        circle(275+j,410,15);
  //        //spikes
  //
  //
  ////        line(45+i,410,103+i,410);
  ////        line(245+i,410,305+i,410);
  //
  //
  //        //tree
  //        line(70,448,70,270);
  //        line(90,448,90,270);
  //        circle(70,270,40);
  //        circle(90,270,40);
  //
  //        //tree 2
  //        line(250,448,250,270);
  //        line(280,448,280,270);
  //        circle(250,270,40);
  //        circle(280,270,40);
  //
  //        //tree 3
  //        line(400,448,400,270);
  //        line(480,448,480,270);
  //        circle(400,270,40);
  //        circle(480,270,40);
  //
  //        //rock
  //        rectangle(1000,400,1050,450);
  //
  //        delay(10);
  //        cleardevice();
  //    }

  getch();
  closegraph();
  return 0;
}
// created by: azmain inquaid haque turjo
