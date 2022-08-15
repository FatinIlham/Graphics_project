#include<graphics.h>
#include <math.h>
#include <time.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    initwindow(800,600);
    int xm=getmaxx()/2, ym=getmaxy()/2;
    int rx1=150,color=2;
    int cx1=xm,cy1=ym+200;
    int page=0,life=3;  
    int i=0,j=0,upper=600,lower=200,point=0;
    char lengtharr[3],chance[3];

    while(1){
        
        setactivepage(page);
        setvisualpage(1-page);
        if(GetAsyncKeyState(VK_RIGHT)){
            j+=5; 
        }
        if(GetAsyncKeyState(VK_LEFT)){
            j-=5;
        }
        cleardevice();
        setcolor(WHITE);
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
        outtextxy(20,20,"Score: ");
        outtextxy(20,40,"Life: ");
        if(i+15==cy1-60 && (rx1+15==cx1+j-50 || (rx1+15>cx1+j-50 && rx1+15<cx1+j+50) || rx1-15==cx1+j+50 || (rx1-15<cx1+j+50 && rx1-15>cx1+j-50))){
            rx1=(rand()%(upper-lower+1))+lower;
            color=(rand()%(14))+2;
            i=0;
            point++;
            Beep(775,10);
            Beep(1000,10);
        }
        
        else if(i-60>=600) {
            i=0;
            life--;
            Beep(5000,10);
           
            if(life==0 && point%2==0){
                setactivepage(0);
                cleardevice();
                break;
            } else if(life==0 && point%2==1){
                setactivepage(1);
                cleardevice();
                break;
            }
           
        }
        
        setcolor(color);
        circle(rx1,i,15);
        setfillstyle(SOLID_FILL,color);
        floodfill(rx1,i,color);
        

        setcolor(WHITE);
        line(cx1+j-50,cy1-60,cx1+j+50,cy1-60);
        line(cx1+j-30,cy1+20,cx1+j+30,cy1+20);
        line(cx1+j-30,cy1+20,cx1+j-50,cy1-60);
        line(cx1+j+30,cy1+20,cx1+j+50,cy1-60);
        setfillstyle(XHATCH_FILL,WHITE);
        floodfill(cx1+j,cy1,WHITE);
        
        setcolor(RED);
        arc(cx1+j,cy1-60,0,180,50);
        arc(cx1+j,cy1-61,0,180,50);
        arc(cx1+j,cy1-62,0,180,50);
        arc(cx1+j,cy1-63,0,180,50);
        arc(cx1+j,cy1-64,0,180,50);
        arc(cx1+j,cy1-65,0,180,50);
        
        setcolor(RED);
        circle(cx1+j-50,cy1-60,5);
        circle(cx1+j+50,cy1-60,5);
        setfillstyle(SOLID_FILL,RED);
        floodfill(cx1+j-50,cy1-60,RED);
        floodfill(cx1+j+50,cy1-60,RED);
        
        
        lengtharr[0]=char(48+point/10);
        lengtharr[1]=char(48+point%10);
        lengtharr[2]='\0';
        
        chance[0]=char(48+life/10);
        chance[1]=char(48+life%10);
        chance[2]='\0';
         
        setcolor(WHITE);   
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
        outtextxy(79,20,lengtharr);
        outtextxy(79,40,chance);
        
        i+=8;
        delay(1);
        page=1-page;
    }
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
    outtextxy(xm-160,ym-40,"Game Over :(");
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
    outtextxy(xm-80,ym+20,"Your Score: ");
    outtextxy(xm+27,ym+20,lengtharr);
    
    delay(10000);
    getch();
}
