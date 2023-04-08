#include<graphics.h>
#include<iostream>

using namespace std;

//Functions declaration
void myList();
void nameID();
void myName();
void cube();
void village();
void city();
void cityAnimated();


//main function
int main()
{
    while(1)
    {
        myList();
    }
}


//myList
void myList()
{

    char S;

    cout << "\t\t\t<<<<<<<<<< Computer Graphics Project >>>>>>>>>>>" << endl;
    cout << "\t\t\t*********       Saima Chowdhury       **********" << endl;
    cout << "\t\t\t<<<<<<<<<<       CSE2001019154       >>>>>>>>>>>" << endl;
    cout << "\t\t\t************************************************" << endl;

    cout << "\t\t\t\t\t  ---List---" << endl;

    cout << "\t\t\t\t ------------------------" << endl;
    cout << "\t\t\t\t\t1. Who am I?" << endl;
    cout << "\t\t\t\t\t2. 3x3 Rubik's Cube" << endl;
    cout << "\t\t\t\t\t3. Village" << endl;
    cout << "\t\t\t\t\t4. City" << endl;
    cout << "\t\t\t\t\t5. City Animated" << endl;
    cout << "\t\t\t\t----------------------------"  << endl;
    cout << "\t\t\t\tPlease Enter Your option: ";
    cin >> S;


    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,730,"Projects of SC");

    switch(S)
    {
    case '0':
        cout << ".........."<< endl;;
        break;
    case '1':
        myName();
        break;
    case '2':
        cube();
        break;
    case '3':
        village();
        break;
    case '4':
        city();
        break;

    case '5':
        cityAnimated();
        break;

    default:
        system(" ");
        closegraph();
        main();
        break;
    }

    getch();
    closegraph();
    system("");
}


//name
void nameID()
{


    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    ellipse(420,65,0,360,213,47);
    floodfill(400,50,BLACK);

    setcolor(CYAN);
    setfillstyle(SOLID_FILL,CYAN);
    ellipse(420,65,0,360,210,45);
    floodfill(400,50,CYAN);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    //rectangle(250,30,750,100);
    ellipse(420,65,0,360,180,38);
    floodfill(400,50,LIGHTGRAY);


    /*
    //line for help
    setcolor(BLACK);
    line(260,40,740,40);
    line(260,60,740,60);
    line(260,70,740,70);
    line(260,90,740,90);
    */

    //color for writing
    setcolor(BLACK);

    //name
    //----------------------
    //N
    line(300,40,300,60);//|
    line(301,40,301,60);

    line(310,40,310,60);//|
    line(311,40,311,60);

    line(300,40,310,60);//\ .
    line(301,40,311,60);

    //A
    line(313,60,318,40);// /
    line(314,60,319,40);

    line(318,40,323,60);// \ .
    line(319,40,324,60);

    line(316,53,321,53);// -
    line(316,54,321,54);

    //M
    line(326,40,326,60);//|
    line(327,40,327,60);

    line(336,40,336,60);//|
    line(337,40,337,60);

    line(326,40,331,53);// \ .
    line(327,40,332,53);

    line(331,53,336,40);// /
    line(332,53,337,40);// /

    //E
    line(339,40,339,60);//|
    line(340,40,340,60);

    line(339,40,349,40);//_up
    line(339,41,349,41);//

    line(339,59,349,59);//_low
    line(339,60,349,60);//

    line(339,50,347,50);//-
    line(339,51,347,51);

    //:
    rectangle(353,42,355,45);
    rectangle(353,43,355,46);

    rectangle(353,54,355,57);
    rectangle(353,55,355,58);

    //my name
    //-----------------------
    //S
    arc(368,45,10,270,5);
    arc(369,45,10,270,5);
    arc(368,55,190,90,5);
    arc(369,55,190,90,5);

    //A
    line(375,60,380,40);// /
    line(376,60,381,40);

    line(380,40,385,60);// \ .
    line(381,40,386,60);

    line(378,53,383,53);// -
    line(378,54,383,54);

    //I
    line(390,40,390,60);//|
    line(391,40,391,60);

    line(388,40,393,40);//-up
    line(388,41,393,41);

    line(388,59,393,59);//-low
    line(388,60,393,60);

    //M
    line(395,40,395,60);//|
    line(396,40,396,60);

    line(405,40,405,60);//|
    line(406,40,406,60);

    line(395,40,400,53);// \ .
    line(396,40,401,53);

    line(400,53,405,40);// /
    line(401,53,406,40);

    //A
    line(408,60,413,40);// /
    line(409,60,414,40);

    line(413,40,418,60);// \ .
    line(414,40,419,60);

    line(411,53,416,53);// -
    line(411,54,416,54);

    //-------------
    //C
    ellipse(434,50,40,330,6,10);
    ellipse(435,50,40,330,6,10);

    //H
    line(441,40,441,60);//|
    line(442,40,442,60);

    line(451,40,451,60);//|
    line(452,40,452,60);

    line(441,50,451,50);//-
    line(441,51,451,51);

    //O
    ellipse(461,51,0,360,6,11);
    ellipse(462,51,0,360,6,11);

    //W
    line(468,40,471,60);//|
    line(469,40,472,60);

    line(484,40,481,60);//|
    line(485,40,482,60);

    line(471,60,476,48);// /
    line(472,60,477,48);

    line(476,48,481,60);// \ .
    line(477,48,482,60);

    //D
    line(487,40,487,60);//|
    line(488,40,488,60);

    arc(487,51,270,90,10);
    arc(488,51,270,90,10);

    //H
    line(499,40,499,60);//|
    line(500,40,500,60);

    line(509,40,509,60);//|
    line(510,40,510,60);

    line(500,50,510,50);//-
    line(500,51,510,51);

    //U
    line(512,40,512,55);//|
    line(513,40,513,55);

    line(522,40,522,55);//|
    line(523,40,523,55);

    ellipse(518,50,200,340,6,10);
    ellipse(518,51,200,340,6,10);

    //R
    line(525,40,525,60);//|
    line(526,40,526,60);

    arc(528,46,270,100,6);
    arc(529,46,270,100,6);

    line(525,50,535,60);// \ .
    line(526,50,536,60);

    //Y
    line(540,52,540,60);//|
    line(541,52,541,60);//|

    line(535,40,540,52);// \ .
    line(536,40,541,52);

    line(545,40,540,52);// \ .
    line(546,40,541,52);// / .



    //id
    //-------------------------
    //I
    line(302,70,302,90);
    line(303,70,303,90);

    line(300,70,305,70);//-up
    line(300,71,305,71);

    line(300,89,305,89);//-low
    line(300,90,305,90);

    //D
    line(307,70,307,90);//|
    line(308,70,308,90);

    arc(308,81,270,90,10);
    arc(309,81,270,90,10);

    //N
    line(323,70,323,90);//|
    line(324,70,324,90);

    line(333,70,333,90);//|
    line(334,70,334,90);

    line(323,70,333,90);//\ .
    line(324,70,334,90);

    //O
    ellipse(342,81,0,360,6,11);
    ellipse(343,81,0,360,6,11);

    //.
    rectangle(349,88,350,90);
    rectangle(350,88,351,90);


    //:
    rectangle(353,72,355,75);
    rectangle(353,73,355,76);
    rectangle(353,84,355,87);
    rectangle(353,85,355,88);

    //C
    ellipse(367,80,40,330,6,10);
    ellipse(368,80,40,330,6,10);

    //S
    arc(379,75,10,270,5);
    arc(380,75,10,270,5);
    arc(379,85,190,90,5);
    arc(380,85,190,90,5);

    //E
    line(386,70,386,90);//|
    line(387,70,387,90);

    line(386,70,396,70);//_up
    line(386,71,396,71);//

    line(386,89,396,89);//_low
    line(386,90,396,90);//

    line(386,80,394,80);//-
    line(386,81,394,81);

    //2
    ellipse(404,77,290,180,5,7);
    ellipse(405,77,290,180,5,7);

    line(399,89,409,89);//_low
    line(399,90,409,90);

    arc(404,88,80,180,5);
    arc(405,88,80,180,5);

    //0
    ellipse(417,81,0,360,6,11);
    ellipse(418,81,0,360,6,11);


    //0
    ellipse(431,81,0,360,6,11);
    ellipse(432,81,0,360,6,11);

    //1
    line(442,70,442,90);//|
    line(443,70,443,90);

    line(440,73,442,70);//-up
    line(440,74,443,71);

    line(440,89,445,89);//-low
    line(440,90,445,90);

    //0
    ellipse(453,81,0,360,6,11);
    ellipse(454,81,0,360,6,11);

    //1
    line(464,70,464,90);//|
    line(465,70,465,90);

    line(462,73,464,70);//-up
    line(462,74,464,71);

    line(462,89,466,89);//-low
    line(462,90,466,90);

    //9
    ellipse(473,81,260,110,6,11);
    ellipse(474,81,260,110,6,11);

    ellipse(473,77,0,360,5,6);
    ellipse(474,77,0,360,5,6);

    //1
    line(484,70,484,90);// |
    line(485,70,485,90);

    line(482,73,484,70);//-up
    line(482,74,485,71);

    line(482,89,487,89);//-low
    line(482,90,487,90);

    //5
    line(489,70,489,80);//|
    line(490,70,490,80);

    line(489,70,496,70);//_up
    line(489,71,496,71);//_up

    ellipse(493,83,230,140,5,7);
    ellipse(494,83,230,140,5,7);

    //4
    line(508,70,508,90);// |
    line(509,70,509,90);

    line(501,81,511,81);//-
    line(501,82,511,82);

    line(508,70,501,80);// /.
    line(509,70,502,80);

    //love
    setfillstyle(SOLID_FILL,BLACK);
    ellipse(523,77,350,250,6,7);
    ellipse(524,77,350,250,6,7);

    ellipse(535,77,290,190,6,7);
    ellipse(536,77,290,190,6,7);

    line(528,78,530,78);//connector

    line(519,80,528,89);//\ .
    line(519,81,529,91);

    line(539,80,529,90);// / .
    line(540,80,530,90);//
    floodfill(524,82,BLACK);


}

//myName
void myName()
{
    nameID();



    //line(50, 292, 800, 292);
    //line(50, 492, 800, 492);


    //line(470,100,470,700);//for help
    setcolor(DARKGRAY);
    ellipse(270,350,29,250,230,200);//left
    ellipse(270,351,29,250,230,200);
    ellipse(271,350,29,250,230,200);
    ellipse(670,350,290,151,230,200);//right
    ellipse(670,351,290,151,230,200);
    ellipse(671,350,290,151,230,200);

    line(150,520,470,650);//left
    line(151,520,471,650);
    line(150,521,470,651);
    line(470,650,750,537);//right
    line(471,650,751,537);
    line(470,651,750,538);


    //background
    setfillstyle(LTSLASH_FILL, DARKGRAY);
    floodfill(400,250,DARKGRAY);




    //S
    setcolor(CYAN);
    setfillstyle(XHATCH_FILL, CYAN);

    arc(220, 350, 10, 220, 55); // upper arc cvr
    arc(220, 350, 5, 210, 35); // upper arc mid

    line(254, 347, 274, 340); // connector of 2 upper arc

    arc(220, 430, 185, 40, 60); // lower arc cvr
    arc(220, 430, 180, 30, 40); // upper arc mid

    line(160, 435, 180, 430); // connector of 2 lower arc

    line(189, 367, 264, 390); // mid line up
    line(177, 384, 254, 409); // mid line low

    floodfill(190,370,CYAN);


    //A
    setcolor(LIGHTBLUE);
    setfillstyle(XHATCH_FILL, LIGHTBLUE);

    line(325, 295, 270, 490); // /
    line(355, 295, 410, 490); // \

    line(325, 295, 355, 295); // upper connector

    line(320, 385, 360, 385); // mid line up
    line(315, 405, 365, 405); // mid line low

    line(320, 385, 340, 310); // mid up /
    line(340, 310, 360, 385); // mid up \

    line(290, 490, 315, 405); // mid low /
    line(365, 405, 390, 490); // mid low \

    line(270, 490, 290, 490); // lower connector left
    line(390, 490, 410, 490); // lower connector right

    floodfill(300,390,LIGHTBLUE);

    //I
    setcolor(LIGHTMAGENTA);
    setfillstyle(XHATCH_FILL, LIGHTMAGENTA);

    line(435, 315, 435, 470); // left |
    line(455, 315, 455, 470); // right |

    line(415, 295, 475, 295); // upper line
    line(415, 295, 415, 315);
    line(415, 315, 435, 315);

    line(475, 295, 475, 315);
    line(455, 315, 475, 315);

    line(415, 490, 475, 490); // lower line
    line(415, 490, 415, 470);
    line(415, 470, 435, 470);

    line(475, 490, 475, 470);
    line(455, 470, 475, 470);

    floodfill(420,300,LIGHTMAGENTA);

    //M
    setcolor(LIGHTCYAN);
    setfillstyle(XHATCH_FILL, LIGHTCYAN);

    line(480, 295, 480, 490); // left |
    line(500, 315, 500, 490); // left mid |

    line(595, 315, 595, 490); // right |
    line(615, 295, 615, 490); // right mid |

    line(500, 315, 548, 405); // mid line \  //
    line(595, 315, 548, 405); // mid line /

    line(480, 295, 510, 295); // upper connector left
    line(585, 295, 615, 295); // upper connector right

    line(510, 295, 548, 370); // mid up \  //
    line(585, 295, 548, 370); // mid up /

    line(480, 490, 500, 490); // lower connector left
    line(595, 490, 615, 490); // lower connector right

    floodfill(490,300,LIGHTCYAN);

    //A
    setcolor(LIGHTGREEN);
    setfillstyle(XHATCH_FILL, LIGHTGREEN);

    line(675, 295, 620, 490); // /
    line(705, 295, 760, 490); // \

    line(675, 295, 705, 295); // upper connector

    line(670, 385, 710, 385); // mid line up
    line(665, 405, 715, 405); // mid line low

    line(670, 385, 690, 310); // mid up /
    line(690, 310, 710, 385); // mid up \

    line(665, 405, 640, 490); // mid low /
    line(715, 405, 740, 490); // mid low \

    line(620, 490, 640, 490); // lower connector left
    line(740, 490, 760, 490); // lower connector right

    floodfill(680,300,LIGHTGREEN);

    setcolor(LIGHTMAGENTA);
    //project name
    outtextxy(390,660,"Project Name: Who am I?");


    //putpixel(400,250,WHITE);



}


//cube
void cube()
{
    //background
    //-----------------------------------
    //3d wall
    setcolor(LIGHTGRAY);
    line(700,0,700,600);//|

    //left wall
    line(0,600,700,520);// /.
    line(0,680,700,600);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(0,660,LIGHTGRAY);

    //right wall
    line(700,520,1000,670);// \.
    line(700,600,1000,750);// \.
    setfillstyle(SLASH_FILL, LIGHTGRAY);
    floodfill(750,550,LIGHTGRAY);


    //wall painting
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(5,5,LIGHTGRAY);

    setfillstyle(LTSLASH_FILL, DARKGRAY);
    floodfill(800,5,LIGHTGRAY);

    //project name
    outtextxy(550,640,"Project Name: 3x3 Rubik's Cube.");


    setcolor(BLACK);

    //cube code
    //------------
    //skeleton
    //---------------------------
    line(290,250,450,160);// / -up
    line(291,250,451,160);

    line(450,160,570,290);// \ -up
    line(451,160,571,290);
    line(451,161,571,291);

    line(290,250,400,360);// \ -low
    line(291,250,401,360);

    line(400,360,570,290);// / -low
    line(401,360,571,290);
    //----------------------------
    line(290,250,310,370);//| -1st
    line(291,250,311,370);

    line(400,360,430,460);//| -2nd
    line(401,360,431,460);

    line(570,290,550,390);//| -3rd
    line(571,290,551,390);

    line(310,370,430,460);// \ -low1
    line(311,370,431,460);

    line(430,460,551,390);// / -low1
    line(431,460,551,391);

    //---------------------------------
    //details
    //flat panel-1
    //-------------------\ line
    line(342,220,458,337);
    line(343,220,459,337);
    setfillstyle(SOLID_FILL,YELLOW);//ok
    floodfill(300,250,BLACK);

    setfillstyle(SOLID_FILL,WHITE);//ok
    floodfill(400,350,BLACK);

    line(395,190,516,312);
    line(396,190,517,312);
    //---------------------/ line
    line(325,286,489,204);
    line(326,286,490,204);

    line(363,323,530,247);
    line(364,323,531,247);

    setfillstyle(SOLID_FILL,RED);//ok
    floodfill(520,300,BLACK);


    setfillstyle(SOLID_FILL,BLUE);//ok
    floodfill(510,310,BLACK);

    setfillstyle(SOLID_FILL,GREEN);//ok
    floodfill(450,200,BLACK);

    setfillstyle(SOLID_FILL,CYAN);//ok
    floodfill(390,200,BLACK);

    setfillstyle(SOLID_FILL,YELLOW);//ok
    floodfill(400,250,BLACK);

    setfillstyle(SOLID_FILL,WHITE);//ok
    floodfill(490,210,BLACK);

    //left panel
    //--------------------\ line
    line(297,290,410,394);
    line(298,290,411,394);
    setfillstyle(SOLID_FILL,RED);//ok
    floodfill(300,290,BLACK);

    line(303,330,420,427);
    line(304,330,421,427);
    setfillstyle(SOLID_FILL,YELLOW);//ok
    floodfill(305,330,BLACK);

    setfillstyle(SOLID_FILL,BLUE);//ok
    floodfill(310,340,BLACK);
    //---------------------/ line
    line(325,286,347,398);
    line(326,286,348,398);
    setfillstyle(SOLID_FILL,MAGENTA);//err
    floodfill(350,290,BLACK);

    line(363,323,389,429);
    line(364,323,390,429);

    //right panel
    //--------------------\ line
    line(457,337,470,436);
    line(458,337,471,436);
    setfillstyle(SOLID_FILL,CYAN);//ok
    floodfill(457,350,BLACK);

    line(516,312,510,413);
    line(517,312,511,413);
    setfillstyle(SOLID_FILL,MAGENTA);//ok
    floodfill(500,340,BLACK);

    setfillstyle(SOLID_FILL,GREEN);//ok
    floodfill(520,315,BLACK);
    //---------------------/ line
    line(410,394,563,324);
    line(411,394,564,324);

    line(420,427,556,357);
    line(421,427,557,357);


    nameID();

}

//village
void village()
{

    //sky
    //----------------------------------------------
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(5,5,WHITE);



    //cloud1
    setcolor(WHITE);
    ellipse(70,85,70,340,25,20);//left
    ellipse(150,70,250,150,30,25);//right
    ellipse(100,65,20,190,30,30);//up
    ellipse(115,90,190,360,30,30);//down
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(120,71,WHITE);


    //cloud2
    setcolor(WHITE);
    ellipse(841,90,70,320,30,20);//left
    ellipse(940,80,300,170,35,15);//right
    ellipse(940,81,300,170,35,15);
    ellipse(880,75,340,180,30,30);//up1
    ellipse(885,110,150,360,25,20);//down1
    ellipse(940,105,220,70,50,15);//down2
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(940,80,WHITE);



    //sun
    //----------------------------------------------
    setcolor(YELLOW);
    arc(640,180,0,360,30);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(630,190,YELLOW);

    //arc(640,180,0,360,40);

    //ray
    line(580,120,610,160);
    line(600,125,615,155);
    line(610,105,622,148);
    line(627,115,630,145);
    line(640,95,640,145);//
    line(653,115,650,145);
    line(668,103,658,148);
    line(680,125,663,153);


    //hill
    //----------------------------------------------
    setcolor(GREEN);
    line(0,350,1000,350);//separate

    //1
    line(0,350,220,150);// / .
    line(220,150,350,350);// \.
    line(220,150,430,350);//3d

    //2
    line(400,320,570,120);// /.
    line(570,120,690,350);// \,
    line(570,120,750,350);//3d

    //3
    line(628,194,740,80);// /.
    line(628,195,740,81);
    line(740,80,920,350);//\.
    line(740,80,1000,350);//3d.
    line(741,80,1000,351);


    //back hill
    //----------------------------------------------
    //1
    line(0,220,40,180);// /.
    line(40,180,90,270);// \.
    line(40,180,120,250);//3d


    //2
    line(290,220,340,180);// /.
    line(340,180,450,270);// \.
    line(340,180,430,300);//3d

    //3
    line(875,220,940,170);// /.
    line(940,170,1000,230);// \.
    line(940,170,1000,270);//3d


    setfillstyle(SOLID_FILL,GREEN);
    floodfill(50,320,GREEN);

    setfillstyle(SOLID_FILL,GREEN);
    floodfill(650,340,GREEN);


    setfillstyle(SOLID_FILL,GREEN);
    floodfill(850,340,GREEN);

    //3d clr
    //----------------------------------------------
    setfillstyle(INTERLEAVE_FILL,DARKGRAY);
    floodfill(350,340,GREEN);

    setfillstyle(INTERLEAVE_FILL,GREEN);
    floodfill(700,340,GREEN);

    setfillstyle(INTERLEAVE_FILL,DARKGRAY);
    floodfill(920,340,GREEN);

    //backhill clr
    //----------------------------------------------
    setfillstyle(INTERLEAVE_FILL,GREEN);
    floodfill(5,220,GREEN);

    setfillstyle(INTERLEAVE_FILL,GREEN);
    floodfill(295,220,GREEN);

    setfillstyle(INTERLEAVE_FILL,GREEN);
    floodfill(880,220,GREEN);

    //back hill 3d
    //----------------------------------------------
    setfillstyle(INTERLEAVE_FILL,DARKGRAY);
    floodfill(90,250,GREEN);

    setfillstyle(INTERLEAVE_FILL,DARKGRAY);
    floodfill(440,270,GREEN);

    setfillstyle(INTERLEAVE_FILL,DARKGRAY);
    floodfill(995,260,GREEN);




    //area
    setcolor(BLACK);
    line(0,430,70,410);
    //line(0,431,70,411);

    line(70,409,400,394);
    //line(70,410,400,395);

    ellipse(411,470,300,99,270,75);//1
    //ellipse(411,471,300,99,270,75);
    ellipse(402,480,308,0,280,78);//down 1
    //ellipse(402,481,308,0,280,78);
    line(680, 469, 679, 487);//connector

    ellipse(330,570,300,40,280,60);//2
    //ellipse(330,571,300,40,280,60);
    ellipse(318,580,308,0,290,63);//down 2
    //ellipse(318,581,308,0,290,63);
    line(681, 469, 680, 487);//connector

    ellipse(250,660,290,40,290,60);//3
    //ellipse(250,661,290,40,290,60);
    ellipse(238,670,295,0,300,63);//3 down
    //ellipse(238,671,290,0,300,63);

    line(0,717,355,715);//lower line 1
    //line(0,718,355,716);

    line(0,728,372,726);//lower line 2
    //line(0,729,380,727);


    setfillstyle(SOLID_FILL,BROWN);
    floodfill(6,700,BLACK);

    setfillstyle(INTERLEAVE_FILL,BROWN);
    floodfill(665,500,BLACK);

    setfillstyle(INTERLEAVE_FILL,BROWN);
    floodfill(575,600,BLACK);

    setfillstyle(INTERLEAVE_FILL,BROWN);
    floodfill(475,700,BLACK);



    //boat

    ellipse(830,465,10,170,115,30);//up
    ellipse(830,466,10,170,115,30);
    ellipse(830,450,195,345,115,30);// down 1
    ellipse(831,450,195,345,115,30);
    ellipse(830,460,180,0,112,40);// down 2
    ellipse(830,461,180,0,112,40);

    ellipse(830,465,20,160,110,25);
    ellipse(830,450,200,340,110,25);

    //border
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(820,437,BLACK);

    setfillstyle(INTERLEAVE_FILL,DARKGRAY);
    floodfill(740,470,BLACK);

    setfillstyle(LTBKSLASH_FILL,DARKGRAY);
    floodfill(820,450,BLACK);//mid boat


    //stick
    line(688,355,685,495);
    line(689,355,686,495);
    line(690,355,687,495);

    ellipse(688,430,0,360,7,2);
    line(688,427,680,440);
    line(688,427,720,460);

    //wave

    setcolor(WHITE);
    ellipse(687,493,290,50,11,6);
    ellipse(687,490,340,70,15,8);
    ellipse(687,497,250,0,15,8);




    //house
    //----------------------------------------------
    setcolor(LIGHTGRAY);

    //structure
    //----------------------------------------------
    line(70, 370, 70, 442);//left |
    line(170, 370, 170, 470);//mid |
    line(370, 370, 370, 422);//right |


    //low
    //----------------------------------------------
    //low left
    line(58, 439, 172, 470);//up
    line(58, 440, 172, 471);

    line(55, 455, 172, 485);//down
    line(55, 456, 172, 486);

    //low right
    line(172, 469, 378, 420);//up
    line(172, 470, 378, 421);

    line(172, 485, 378, 435);//down
    line(172, 486, 378, 436);

    //low connector
    line(55, 438, 55, 455);//left
    line(172, 470, 172, 483);//mid
    line(378, 420, 378, 435);//right

    //3d
    //----------------------------------------------
    line(55, 438, 70, 434);//left
    line(55, 438, 70, 435);

    line(370, 417, 378, 420);//right
    line(370, 418, 378, 421);


    //roof
    //----------------------------------------------
    line(110, 290,346, 300);//roof 1
    line(110, 291,346, 301);
    line(170, 370,379, 370);//roof 2

    line(50, 370,110, 290);//roof left1
    line(51, 370,111, 290);
    line(69, 370, 117, 300);//roof left2
    line(70, 370, 118, 300);
    line(50, 370,70, 370);//roof left connector

    line(110, 290, 170, 370);//roof mid
    line(111, 290, 171, 370);
    line(345, 300,377, 370);//roof right
    line(346, 300,378, 370);

    //left door
    //----------------------------------------------
    line(100, 390, 100, 450);//left
    line(140, 400, 140, 460);//right
    line(100, 390,140, 400);//up
    line(100, 391,140, 401);

    line(255, 400, 255, 450);//left
    line(305, 398, 305, 436);//right
    line(255, 400, 305, 397);//up
    line(255, 401, 305, 398);


    //window1
    //----------------------------------------------
    line(190, 395, 230, 395);//up
    line(190, 434, 230, 429);//low
    line(190, 435, 230, 430);
    line(190, 395, 190, 435);//left |
    line(230, 395, 230, 430);//right |

    //window2
    //----------------------------------------------
    line(325, 385, 355, 385);//up
    line(325, 414, 355, 409);//low
    line(325, 415, 355, 410);
    line(325, 385, 325, 415);//left |
    line(355, 385, 355, 410);//right |



    setfillstyle(XHATCH_FILL,DARKGRAY);
    floodfill(170,300,LIGHTGRAY);


    setfillstyle(SOLID_FILL,BLACK);
    floodfill(75,360,LIGHTGRAY);

    setfillstyle(INTERLEAVE_FILL,DARKGRAY);
    floodfill(130,465,LIGHTGRAY);

    setfillstyle(SOLID_FILL,CYAN);
    floodfill(75,370,LIGHTGRAY);

    setfillstyle(SOLID_FILL,CYAN);
    floodfill(275,380,LIGHTGRAY);

    setfillstyle(XHATCH_FILL,LIGHTCYAN);
    floodfill(275,410,LIGHTGRAY);

    setfillstyle(HATCH_FILL,LIGHTCYAN);
    floodfill(215,410,LIGHTGRAY);

    setfillstyle(HATCH_FILL,LIGHTCYAN);
    floodfill(330,410,LIGHTGRAY);

    setfillstyle(XHATCH_FILL,LIGHTCYAN);
    floodfill(130,410,LIGHTGRAY);


    //hut
    setcolor(BLACK);
    ellipse(460,340,0,90,5,35);
    ellipse(480,340,90,180,5,35);

    line(458,310,482,310);
    line(458,340,482,340);

    setfillstyle(INTERLEAVE_FILL,BROWN);
    floodfill(470,315,BLACK);


    //tree
    setcolor(LIGHTGREEN);
    ellipse(441,290,80,295,20,15);//left
    ellipse(520,280,300,170,25,8);//right
    ellipse(520,281,300,170,25,8);
    ellipse(470,275,340,190,28,20);//up1
    ellipse(475,300,190,10,28,15);//down1
    ellipse(525,295,220,80,30,10);//down2
    setfillstyle(INTERLEAVE_FILL,LIGHTGREEN);
    floodfill(441,290,LIGHTGREEN);

    //low
    setcolor(LIGHTGRAY);
    ellipse(470,430,0,180,50,95);
    ellipse(470,430,180,0,50,10);

    setfillstyle(INTERLEAVE_FILL,BROWN);
    floodfill(470,430,LIGHTGRAY);


    setcolor(LIGHTMAGENTA);
    //project name
    outtextxy(750,620,"Project Name: Village.");


    putpixel(441,290,WHITE);



    nameID();

}

//city
void city()
{


    /*
    //sun
    for (int x=900;x>650;x--)
    {
        setcolor(RED);
        circle(x, 100,30);
        setfillstyle(SOLID_FILL,RED);
        floodfill(x, 101,RED);
        delay(30);
        cleardevice();
    }
    */




    /*To-let part
    --------------------------------------*/
    outtextxy(53,371,"SamcitY");

    rectangle(30, 350, 130, 400);
    rectangle(31, 351, 129, 399);

    line(75,400,75,500);
    line(80,400,80,500);

    setfillstyle(SOLID_FILL,BLUE);
    floodfill(50,370,WHITE);


    /*ROAD
    --------------------------------------*/
    //left side
    line(0,386,30,386);  //mini1
    line(0,387,30,387);  //mini1

    line(0,396,30,396);  //mini2
    line(0,397,30,397);  //mini2

    line(130,385,300,380);  //up1.1
    line(130,386,300,381);  //up1.1

    line(300,380,560,267);  //up1 angle
    line(300,381,560,268);  //up1 angle

    line(130,395,300,390);  //up1.2
    line(130,396,300,391);  //up1.2

    line(300,390,560,275);  //up1.2 angle
    line(300,391,560,276);  //up1.2 angle

    //right side
    line(545,380,1000,390);  //up2.1
    line(545,381,1000,391);  //up2.1

    line(545,390,1000,400);  //up2.2
    line(545,391,1000,401);  //up2.2

    line(545,380,545,390);  //connector
    line(545,381,545,391);  //connector

    line(545,380,560,368);  //connector
    line(545,381,560,369);  //connector

    line(0,500,1000,500);  //mid1
    line(0,501,1000,501);  //mid1
    line(0,510,1000,510);  //mid2
    line(0,511,1000,511);  //mid2

    line(0,640,1000,640);  //low1
    line(0,641,1000,641);  //low1

    line(0,650,1000,650);  //low2
    line(0,651,1000,651);  //low2

    setfillstyle(LTBKSLASH_FILL,WHITE);
    floodfill(70,700,WHITE);


    //road line
    //----------------------------------
    //up
    rectangle(10,443,60,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(11,445,WHITE);

    rectangle(90,443,140,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(91,445,WHITE);

    rectangle(170,443,220,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(171,445,WHITE);

    rectangle(250,443,300,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(251,445,WHITE);

    rectangle(330,443,380,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(331,445,WHITE);

    rectangle(410,443,460,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(411,445,WHITE);

    rectangle(490,443,550,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(491,445,WHITE);

    rectangle(580,443,630,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(581,445,WHITE);

    rectangle(660,443,710,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(661,445,WHITE);

    rectangle(740,443,790,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(741,445,WHITE);

    rectangle(820,443,870,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(821,445,WHITE);

    rectangle(900,443,950,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(901,445,WHITE);

    rectangle(980,443,1030,452);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(981,445,WHITE);



    //low
    rectangle(10,569,60,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(11,570,WHITE);

    rectangle(90,569,140,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(91,570,WHITE);

    rectangle(170,569,220,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(171,570,WHITE);

    rectangle(250,569,300,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(251,570,WHITE);

    rectangle(330,569,380,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(331,570,WHITE);

    rectangle(410,569,460,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(411,570,WHITE);

    rectangle(490,569,550,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(491,570,WHITE);

    rectangle(580,569,630,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(581,570,WHITE);

    rectangle(660,569,710,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(661,570,WHITE);

    rectangle(740,569,790,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(741,570,WHITE);

    rectangle(820,569,870,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(821,570,WHITE);

    rectangle(900,569,950,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(901,570,WHITE);

    rectangle(980,569,1030,578);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(981,570,WHITE);



    /*left side buildings
    -------------------------------------*/
    //b-01
    setcolor(WHITE);
    line(2,191,70,191);
    line(3,190,70,190);
    line(2,191,2,380);//left line
    line(3,190,3,380);
    line(2,380,30,380);//low
    line(3,379,30,379);//

    //window
    rectangle(23,210,50,230);
    rectangle(23,250,50,270);
    rectangle(23,290,50,310);
    rectangle(23,330,50,350);


    //b-02
    setcolor(WHITE);
    line(70,130,200,130);//up
    line(70,131,200,131);
    line(70,130,70,350);//left line
    line(71,130,71,350);
    line(199,130,199,375);//right line
    line(200,130,200,375);
    line(130,374,200,374);//low line
    line(130,375,200,375);

    //window
    rectangle(140,150,185,170);
    rectangle(85,180,130,200);
    rectangle(140,210,185,230);
    rectangle(85,240,130,260);
    rectangle(140,270,185,290);
    rectangle(85,300,130,320);
    rectangle(140,330,185,350);


    //b-03 mid
    rectangle(200,190,300,370);
    rectangle(201,189,299,369);
    line(350,170,350,350);//z
    line(351,170,351,350);

    line(300,369,350,349);//lower connector
    line(300,370,350,350);//lower connector

    line(250,170,350,170);//upper
    line(250,171,350,171);//upper

    line(250,170,200,190);//upper connector left z
    line(250,171,200,191);

    line(350,172,300,189);//upper connector right z
    line(350,173,300,190);

    line(350,200,310,217);//z-mid1
    line(350,201,310,218);

    line(340,230,300,247);//z-mid2
    line(340,231,300,248);

    line(350,260,310,277);//z-mid3
    line(350,261,310,278);

    line(340,290,300,307);//z-mid4
    line(340,291,300,308);

    line(350,320,310,337);//z-mid5
    line(350,321,310,338);

    //window
    rectangle(215,210,285,230);
    circle(250,280,10);
    circle(250,280,40);
    setfillstyle(XHATCH_FILL,LIGHTGRAY);
    floodfill(220,280,WHITE);
    rectangle(215,330,285,350);


    //b-04
    line(350,270,460,240);//up
    line(350,271,460,241);
    line(350,349,460,304);//low
    line(350,350,460,305);
    line(460,240,460,305);//right
    line(460,241,460,304);
    line(350,240,460,240);//3d
    line(350,241,460,241);

    //window
    ellipse(407,305,330,240,15,30);
    ellipse(408,305,330,240,15,30);

    ellipse(372,305,0,360,15,17);
    ellipse(373,305,0,360,15,17);

    ellipse(440,285,0,360,15,17);
    ellipse(441,285,0,360,15,17);


    //b-05
    line(460,200,460,305);//left
    line(461,200,461,305);
    line(460,304,520,277);//low
    line(460,305,520,278);
    line(520,190,520,278);//right
    line(521,190,521,278);
    line(350,200,460,200);//up
    line(350,201,460,201);
    line(350,190,520,190);//3d up
    line(350,191,520,191);
    line(460,200,520,190);//up connect 3d
    line(460,201,520,191);

    line(462,222,518,208);//3d1
    line(463,244,518,226);//3d2
    line(463,263,518,244);//3d3
    line(463,283,518,261);//3d4


    //window
    circle(472,210,8);//r1
    circle(492,207,7);
    circle(511,204,7);

    circle(472,231,8);//r2
    circle(492,226,7);
    circle(511,222,7);

    circle(472,251,8);//r3
    circle(492,245,7);
    circle(511,240,7);

    circle(472,270,8);//r4
    circle(492,264,7);
    circle(511,257,7);

    circle(472,288,8);//r5
    circle(492,280,7);
    circle(511,273,7);


    //b-06
    line(559,205,559,260);//|

    line(520,273,560,259);//low
    line(520,274,560,260);
    line(520,214,560,207);//up connect
    line(520,215,560,208);
    line(520,205,560,205);//up connect 3d
    line(520,206,560,206);

    //window
    ellipse(548,237,50,310,20,18);


    //color
    //------------------------------------
    //left b-01 color
    setfillstyle(SOLID_FILL,RED);
    floodfill(10,200,WHITE);

    //left b-02 color
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(100,150,WHITE);

    //left b-03 color
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(210,210,WHITE);

    setfillstyle(CLOSE_DOT_FILL,LIGHTBLUE);//rooftop
    floodfill(325,180,WHITE);


    setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);//z
    floodfill(325,190,WHITE);

    //left b-04 color
    setfillstyle(CLOSE_DOT_FILL,LIGHTMAGENTA);//rooftop
    floodfill(360,260,WHITE);

    setfillstyle(SLASH_FILL,LIGHTMAGENTA);
    floodfill(360,280,WHITE);

    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    floodfill(360,280,WHITE);


    //left b-05 color
    setfillstyle(INTERLEAVE_FILL,GREEN);
    floodfill(360,230,WHITE);

    setfillstyle(CLOSE_DOT_FILL,GREEN);//rooftop
    floodfill(360,195,WHITE);

    setfillstyle(SOLID_FILL,GREEN);
    floodfill(480,282,WHITE);

    //left b-06 color
    setfillstyle(INTERLEAVE_FILL,LIGHTRED);
    floodfill(522,260,WHITE);

    setfillstyle(CLOSE_DOT_FILL,LIGHTRED);
    floodfill(522,207,WHITE);



    /*right side buildings
    ---------------------------------*/
    //b-01
    rectangle(560,140,660,375);
    rectangle(561,141,659,374);

    //window
    rectangle(570,150,605,165);//c1
    rectangle(570,175,605,190);
    rectangle(570,200,605,215);
    rectangle(570,225,605,240);
    //rectangle(570,250,605,265);
    rectangle(570,275,605,290);
    rectangle(570,300,605,315);
    rectangle(570,325,605,340);
    rectangle(570,350,605,365);

    rectangle(615,150,650,165);//c2
    rectangle(615,175,650,190);
    rectangle(615,200,650,215);
    rectangle(615,225,650,240);
    //rectangle(615,250,650,265);
    rectangle(615,275,650,290);
    rectangle(615,300,650,315);
    rectangle(615,325,650,340);
    rectangle(615,350,650,365);


    ellipse(610,259,0,360,40,10);

    //b-02
    rectangle(660,180,710,373);
    rectangle(661,181,709,372);

    //window
    rectangle(660,195,700,205);
    rectangle(660,215,700,225);
    rectangle(660,235,700,245);
    rectangle(660,255,700,265);
    rectangle(660,275,700,285);
    rectangle(660,295,700,305);
    rectangle(660,315,700,325);
    rectangle(660,335,700,345);
    rectangle(660,355,700,365);

    //b-03
    rectangle(710,220,820,378);
    rectangle(711,221,819,377);

    rectangle(720,230,730,250);//c1
    rectangle(720,260,730,280);
    rectangle(720,290,730,310);
    rectangle(720,320,730,340);
    rectangle(720,350,730,370);

    rectangle(740,230,750,250);//c2
    rectangle(740,260,750,280);
    rectangle(740,290,750,310);
    rectangle(740,320,750,340);
    rectangle(740,350,750,370);

    rectangle(760,230,770,250);//c3
    rectangle(760,260,770,280);
    rectangle(760,290,770,310);
    rectangle(760,320,770,340);
    rectangle(760,350,770,370);

    rectangle(780,230,790,250);//c4
    rectangle(780,260,790,280);
    rectangle(780,290,790,310);
    rectangle(780,320,790,340);
    rectangle(780,350,790,370);

    rectangle(800,230,810,250);//c5
    rectangle(800,260,810,280);
    rectangle(800,290,810,310);
    rectangle(800,320,810,340);
    rectangle(800,350,810,370);


    //b-04
    rectangle(820,150,920,380);
    rectangle(821,151,919,379);

    //window
    rectangle(830,160,910,175);
    ellipse(870,190,0,360,40,10);
    rectangle(830,205,910,220);
    ellipse(870,235,0,360,40,10);
    rectangle(830,250,910,265);
    ellipse(870,280,0,360,40,10);
    rectangle(830,295,910,310);
    ellipse(870,325,0,360,40,10);
    rectangle(830,340,910,355);
    ellipse(870,375,340,200,25,15);


    //b-05
    rectangle(920,190,998,377);
    rectangle(921,191,997,378);

    //window
    rectangle(920,205,985,215);
    rectangle(920,225,985,235);
    rectangle(920,245,985,255);
    rectangle(920,265,985,275);
    rectangle(920,285,985,295);
    rectangle(920,305,985,315);
    rectangle(920,325,985,335);
    rectangle(920,345,985,355);
    rectangle(920,365,985,377);



    //color
    //------------------------------------
    //right b-01 color
    setfillstyle(SOLID_FILL,CYAN);
    floodfill(562,142,WHITE);

    //right b-02 color
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    floodfill(665,190,WHITE);

    //right b-03 color
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(715,225,WHITE);

    //right b-04 color
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(822,155,WHITE);

    //right b-05 color
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(924,192,WHITE);




    //sky
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(5,5,WHITE);

    //cloud1
    setcolor(WHITE);
    ellipse(70,85,70,340,25,20);//left
    ellipse(150,70,250,150,30,25);//right
    ellipse(100,65,20,190,30,30);//up
    ellipse(115,90,190,360,30,30);//down
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(120,71,WHITE);

    //sun
    setcolor(YELLOW);
    circle(840,60,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(840,55,YELLOW);

    //circle(840,60,25);
    line(795,24,820,45);//1
    line(795,25,820,46);
    line(815,23,825,39);//2
    line(815,24,825,40);
    line(824,10,831,35);//3
    line(825,10,832,35);
    line(839,15,839,35);//4
    line(840,15,840,35);
    line(859,8,849,36);//5
    line(860,8,850,36);
    line(871,28,857,42);//6
    line(872,28,858,42);
    line(896,35,861,49);//7
    line(897,35,862,49);
    line(890,55,865,58);//8
    line(890,54,865,57);

    setcolor(RED);
    line(794,26,819,47);//1
    line(794,27,819,48);
    line(813,26,823,41);//2
    line(814,26,824,41);
    line(826,10,833,35);//3
    line(827,10,834,35);
    line(841,15,841,35);//4
    line(842,15,842,35);
    line(861,8,851,36);//5
    line(862,8,852,36);
    line(873,28,859,42);//6
    line(873,29,859,43);
    line(899,35,864,50);//7
    line(900,35,865,50);
    line(889,56,866,59);//8
    line(889,57,866,60);



    //cloud2
    setcolor(WHITE);
    ellipse(761,90,70,320,30,20);//left
    ellipse(860,80,300,170,35,15);//right
    ellipse(860,81,300,170,35,15);
    ellipse(800,75,340,180,30,30);//up1
    ellipse(805,110,150,360,25,20);//down1
    ellipse(860,105,220,70,50,15);//down2
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(860,80,WHITE);



    //putpixel(800,420,WHITE);


    //project name
    outtextxy(770,610,"Project Name: City.");

    nameID();


    //--------------------------------------------------------------------------------------------------

    //--------------------------------------------------------------------------------------------------



}

void cityAnimated()
{
    for (int i=0; i<800; i++)
    {
        /***CAR BODY ******/
        line(50+i,590,90+i,590);
        arc(110+i,590,0,180,20);
        line(130+i,590,220+i,590);
        arc(240+i,590,0,180,20);
        line(260+i,590,300+i,590);
        line(300+i,590,300+i,570);
        line(300+i,570,240+i,550);
        line(240+i,550,200+i,520);
        line(200+i,520,110+i,520);
        line(110+i,520,80+i,550);
        line(80+i,550,50+i,570);
        line(50+i,570,50+i,590);

        /***CAR Windows***/
        line(165+i,525,165+i,550);
        line(165+i,550,230+i,550);
        line(230+i,550,195+i,525);
        line(195+i,525,165+i,525);

        line(160+i,525,160+i,550);
        line(160+i,550,95+i,550);
        line(95+i,550,120+i,525);
        line(120+i,525,160+i,525);

        /**Wheels**/
        circle(110+i,590,17);
        circle(110+i,590,5);
        circle(240+i,590,17);
        circle(240+i,590,5);

        //color
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(165+i,555,WHITE);

        setfillstyle(SOLID_FILL,WHITE);
        floodfill(110+i,580,WHITE);

        setfillstyle(SOLID_FILL,WHITE);
        floodfill(240+i,580,WHITE);


        delay(2);
        cleardevice();


        /*
        //sun
        for (int x=900;x>650;x--)
        {
            setcolor(RED);
            circle(x, 100,30);
            setfillstyle(SOLID_FILL,RED);
            floodfill(x, 101,RED);
            delay(30);
            cleardevice();
        }
        */




        /*To-let part
        --------------------------------------*/
        outtextxy(53,371,"SamcitY");

        rectangle(30, 350, 130, 400);
        rectangle(31, 351, 129, 399);

        line(75,400,75,500);
        line(80,400,80,500);

        setfillstyle(SOLID_FILL,BLUE);
        floodfill(50,370,WHITE);


        /*ROAD
        --------------------------------------*/
        //left side
        line(0,386,30,386);  //mini1
        line(0,387,30,387);  //mini1

        line(0,396,30,396);  //mini2
        line(0,397,30,397);  //mini2

        line(130,385,300,380);  //up1.1
        line(130,386,300,381);  //up1.1

        line(300,380,560,267);  //up1 angle
        line(300,381,560,268);  //up1 angle

        line(130,395,300,390);  //up1.2
        line(130,396,300,391);  //up1.2

        line(300,390,560,275);  //up1.2 angle
        line(300,391,560,276);  //up1.2 angle

        //right side
        line(545,380,1000,390);  //up2.1
        line(545,381,1000,391);  //up2.1

        line(545,390,1000,400);  //up2.2
        line(545,391,1000,401);  //up2.2

        line(545,380,545,390);  //connector
        line(545,381,545,391);  //connector

        line(545,380,560,368);  //connector
        line(545,381,560,369);  //connector

        line(0,500,1000,500);  //mid1
        line(0,501,1000,501);  //mid1
        line(0,510,1000,510);  //mid2
        line(0,511,1000,511);  //mid2

        line(0,640,1000,640);  //low1
        line(0,641,1000,641);  //low1

        line(0,650,1000,650);  //low2
        line(0,651,1000,651);  //low2

        setfillstyle(LTBKSLASH_FILL,WHITE);
        floodfill(70,700,WHITE);


        //road line
        //----------------------------------
        //up
        rectangle(10,443,60,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(11,445,WHITE);

        rectangle(90,443,140,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(91,445,WHITE);

        rectangle(170,443,220,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(171,445,WHITE);

        rectangle(250,443,300,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(251,445,WHITE);

        rectangle(330,443,380,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(331,445,WHITE);

        rectangle(410,443,460,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(411,445,WHITE);

        rectangle(490,443,550,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(491,445,WHITE);

        rectangle(580,443,630,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(581,445,WHITE);

        rectangle(660,443,710,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(661,445,WHITE);

        rectangle(740,443,790,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(741,445,WHITE);

        rectangle(820,443,870,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(821,445,WHITE);

        rectangle(900,443,950,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(901,445,WHITE);

        rectangle(980,443,1030,452);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(981,445,WHITE);



        /*left side buildings
        -------------------------------------*/
        //b-01
        setcolor(WHITE);
        line(2,191,70,191);
        line(3,190,70,190);
        line(2,191,2,380);//left line
        line(3,190,3,380);
        line(2,380,30,380);//low
        line(3,379,30,379);//

        //window
        rectangle(23,210,50,230);
        rectangle(23,250,50,270);
        rectangle(23,290,50,310);
        rectangle(23,330,50,350);


        //b-02
        setcolor(WHITE);
        line(70,130,200,130);//up
        line(70,131,200,131);
        line(70,130,70,350);//left line
        line(71,130,71,350);
        line(199,130,199,375);//right line
        line(200,130,200,375);
        line(130,374,200,374);//low line
        line(130,375,200,375);

        //window
        rectangle(140,150,185,170);
        rectangle(85,180,130,200);
        rectangle(140,210,185,230);
        rectangle(85,240,130,260);
        rectangle(140,270,185,290);
        rectangle(85,300,130,320);
        rectangle(140,330,185,350);


        //b-03 mid
        rectangle(200,190,300,370);
        rectangle(201,189,299,369);
        line(350,170,350,350);//z
        line(351,170,351,350);

        line(300,369,350,349);//lower connector
        line(300,370,350,350);//lower connector

        line(250,170,350,170);//upper
        line(250,171,350,171);//upper

        line(250,170,200,190);//upper connector left z
        line(250,171,200,191);

        line(350,172,300,189);//upper connector right z
        line(350,173,300,190);

        line(350,200,310,217);//z-mid1
        line(350,201,310,218);

        line(340,230,300,247);//z-mid2
        line(340,231,300,248);

        line(350,260,310,277);//z-mid3
        line(350,261,310,278);

        line(340,290,300,307);//z-mid4
        line(340,291,300,308);

        line(350,320,310,337);//z-mid5
        line(350,321,310,338);

        //window
        rectangle(215,210,285,230);
        circle(250,280,10);
        circle(250,280,40);
        setfillstyle(XHATCH_FILL,LIGHTGRAY);
        floodfill(220,280,WHITE);
        rectangle(215,330,285,350);


        //b-04
        line(350,270,460,240);//up
        line(350,271,460,241);
        line(350,349,460,304);//low
        line(350,350,460,305);
        line(460,240,460,305);//right
        line(460,241,460,304);
        line(350,240,460,240);//3d
        line(350,241,460,241);

        //window
        ellipse(407,305,330,240,15,30);
        ellipse(408,305,330,240,15,30);

        ellipse(372,305,0,360,15,17);
        ellipse(373,305,0,360,15,17);

        ellipse(440,285,0,360,15,17);
        ellipse(441,285,0,360,15,17);


        //b-05
        line(460,200,460,305);//left
        line(461,200,461,305);
        line(460,304,520,277);//low
        line(460,305,520,278);
        line(520,190,520,278);//right
        line(521,190,521,278);
        line(350,200,460,200);//up
        line(350,201,460,201);
        line(350,190,520,190);//3d up
        line(350,191,520,191);
        line(460,200,520,190);//up connect 3d
        line(460,201,520,191);

        line(462,222,518,208);//3d1
        line(463,244,518,226);//3d2
        line(463,263,518,244);//3d3
        line(463,283,518,261);//3d4


        //window
        circle(472,210,8);//r1
        circle(492,207,7);
        circle(511,204,7);

        circle(472,231,8);//r2
        circle(492,226,7);
        circle(511,222,7);

        circle(472,251,8);//r3
        circle(492,245,7);
        circle(511,240,7);

        circle(472,270,8);//r4
        circle(492,264,7);
        circle(511,257,7);

        circle(472,288,8);//r5
        circle(492,280,7);
        circle(511,273,7);


        //b-06
        line(559,205,559,260);//|

        line(520,273,560,259);//low
        line(520,274,560,260);
        line(520,214,560,207);//up connect
        line(520,215,560,208);
        line(520,205,560,205);//up connect 3d
        line(520,206,560,206);

        //window
        ellipse(548,237,50,310,20,18);


        //color
        //------------------------------------
        //left b-01 color
        setfillstyle(SOLID_FILL,RED);
        floodfill(10,200,WHITE);

        //left b-02 color
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(100,150,WHITE);

        //left b-03 color
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(210,210,WHITE);

        setfillstyle(CLOSE_DOT_FILL,LIGHTBLUE);//rooftop
        floodfill(325,180,WHITE);


        setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);//z
        floodfill(325,190,WHITE);

        //left b-04 color
        setfillstyle(CLOSE_DOT_FILL,LIGHTMAGENTA);//rooftop
        floodfill(360,260,WHITE);

        setfillstyle(SLASH_FILL,LIGHTMAGENTA);
        floodfill(360,280,WHITE);

        setfillstyle(SOLID_FILL,LIGHTMAGENTA);
        floodfill(360,280,WHITE);


        //left b-05 color
        setfillstyle(INTERLEAVE_FILL,GREEN);
        floodfill(360,230,WHITE);

        setfillstyle(CLOSE_DOT_FILL,GREEN);//rooftop
        floodfill(360,195,WHITE);

        setfillstyle(SOLID_FILL,GREEN);
        floodfill(480,282,WHITE);

        //left b-06 color
        setfillstyle(INTERLEAVE_FILL,LIGHTRED);
        floodfill(522,260,WHITE);

        setfillstyle(CLOSE_DOT_FILL,LIGHTRED);
        floodfill(522,207,WHITE);



        /*right side buildings
        ---------------------------------*/
        //b-01
        rectangle(560,140,660,375);
        rectangle(561,141,659,374);

        //window
        rectangle(570,150,605,165);//c1
        rectangle(570,175,605,190);
        rectangle(570,200,605,215);
        rectangle(570,225,605,240);
        //rectangle(570,250,605,265);
        rectangle(570,275,605,290);
        rectangle(570,300,605,315);
        rectangle(570,325,605,340);
        rectangle(570,350,605,365);

        rectangle(615,150,650,165);//c2
        rectangle(615,175,650,190);
        rectangle(615,200,650,215);
        rectangle(615,225,650,240);
        //rectangle(615,250,650,265);
        rectangle(615,275,650,290);
        rectangle(615,300,650,315);
        rectangle(615,325,650,340);
        rectangle(615,350,650,365);


        ellipse(610,259,0,360,40,10);

        //b-02
        rectangle(660,180,710,373);
        rectangle(661,181,709,372);

        //window
        rectangle(660,195,700,205);
        rectangle(660,215,700,225);
        rectangle(660,235,700,245);
        rectangle(660,255,700,265);
        rectangle(660,275,700,285);
        rectangle(660,295,700,305);
        rectangle(660,315,700,325);
        rectangle(660,335,700,345);
        rectangle(660,355,700,365);

        //b-03
        rectangle(710,220,820,378);
        rectangle(711,221,819,377);

        rectangle(720,230,730,250);//c1
        rectangle(720,260,730,280);
        rectangle(720,290,730,310);
        rectangle(720,320,730,340);
        rectangle(720,350,730,370);

        rectangle(740,230,750,250);//c2
        rectangle(740,260,750,280);
        rectangle(740,290,750,310);
        rectangle(740,320,750,340);
        rectangle(740,350,750,370);

        rectangle(760,230,770,250);//c3
        rectangle(760,260,770,280);
        rectangle(760,290,770,310);
        rectangle(760,320,770,340);
        rectangle(760,350,770,370);

        rectangle(780,230,790,250);//c4
        rectangle(780,260,790,280);
        rectangle(780,290,790,310);
        rectangle(780,320,790,340);
        rectangle(780,350,790,370);

        rectangle(800,230,810,250);//c5
        rectangle(800,260,810,280);
        rectangle(800,290,810,310);
        rectangle(800,320,810,340);
        rectangle(800,350,810,370);


        //b-04
        rectangle(820,150,920,380);
        rectangle(821,151,919,379);

        //window
        rectangle(830,160,910,175);
        ellipse(870,190,0,360,40,10);
        rectangle(830,205,910,220);
        ellipse(870,235,0,360,40,10);
        rectangle(830,250,910,265);
        ellipse(870,280,0,360,40,10);
        rectangle(830,295,910,310);
        ellipse(870,325,0,360,40,10);
        rectangle(830,340,910,355);
        ellipse(870,375,340,200,25,15);


        //b-05
        rectangle(920,190,998,377);
        rectangle(921,191,997,378);

        //window
        rectangle(920,205,985,215);
        rectangle(920,225,985,235);
        rectangle(920,245,985,255);
        rectangle(920,265,985,275);
        rectangle(920,285,985,295);
        rectangle(920,305,985,315);
        rectangle(920,325,985,335);
        rectangle(920,345,985,355);
        rectangle(920,365,985,377);



        //color
        //------------------------------------
        //right b-01 color
        setfillstyle(SOLID_FILL,CYAN);
        floodfill(562,142,WHITE);

        //right b-02 color
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        floodfill(665,190,WHITE);

        //right b-03 color
        setfillstyle(SOLID_FILL,MAGENTA);
        floodfill(715,225,WHITE);

        //right b-04 color
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        floodfill(822,155,WHITE);

        //right b-05 color
        setfillstyle(SOLID_FILL,LIGHTRED);
        floodfill(924,192,WHITE);




        //sky
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(5,5,WHITE);

        //cloud1
        setcolor(WHITE);
        ellipse(70,85,70,340,25,20);//left
        ellipse(150,70,250,150,30,25);//right
        ellipse(100,65,20,190,30,30);//up
        ellipse(115,90,190,360,30,30);//down
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(120,71,WHITE);

        //sun
        setcolor(YELLOW);
        circle(840,60,20);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(840,55,YELLOW);

        //circle(840,60,25);
        line(795,24,820,45);//1
        line(795,25,820,46);
        line(815,23,825,39);//2
        line(815,24,825,40);
        line(824,10,831,35);//3
        line(825,10,832,35);
        line(839,15,839,35);//4
        line(840,15,840,35);
        line(859,8,849,36);//5
        line(860,8,850,36);
        line(871,28,857,42);//6
        line(872,28,858,42);
        line(896,35,861,49);//7
        line(897,35,862,49);
        line(890,55,865,58);//8
        line(890,54,865,57);

        setcolor(RED);
        line(794,26,819,47);//1
        line(794,27,819,48);
        line(813,26,823,41);//2
        line(814,26,824,41);
        line(826,10,833,35);//3
        line(827,10,834,35);
        line(841,15,841,35);//4
        line(842,15,842,35);
        line(861,8,851,36);//5
        line(862,8,852,36);
        line(873,28,859,42);//6
        line(873,29,859,43);
        line(899,35,864,50);//7
        line(900,35,865,50);
        line(889,56,866,59);//8
        line(889,57,866,60);



        //cloud2
        setcolor(WHITE);
        ellipse(761,90,70,320,30,20);//left
        ellipse(860,80,300,170,35,15);//right
        ellipse(860,81,300,170,35,15);
        ellipse(800,75,340,180,30,30);//up1
        ellipse(805,110,150,360,25,20);//down1
        ellipse(860,105,220,70,50,15);//down2
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(860,80,WHITE);



        //putpixel(800,420,WHITE);


        //project name
        outtextxy(770,610,"Project Name: City.");

        //nameID();

    }

}




