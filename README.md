# Catch the Balls
It is a simple game in which balls are dropped randomly from the top, which we have to catch. The user of the game controls a basket in which the balls must be collected. The aim is to catch as many balls as possible and earn points. The basket is located at the bottom of the screen and can only move to the left and right. The user gets 3 life’s. If he misses to catch 3 time’s the game will be over.
##Overview: 
In this project, I use “Graphics.h” library and C++ programing language. Some functionality 
used in this project is given below:
*  **Dropping balls:** In this process, I used rand()%(upper-lower+1))+lower function. This is randomly generating a number between upper and lower bound. And from that        random position the ball is dropping.
*  **Controlling basket:** The basket is controlled by GetAsyncKeyState(VK_RIGHT) and GetAsyncKeyState(VK_LEFT) function. The basket moves right if right arrow key is 
   pressed and left if left arrow key is pressed.
*  **Scoring:** This scoring is function in a way that, if a user catch the ball the point increased and point is shown on the top left of the screen by                    outtextxy(x,y,"Your    Score: ") function.
*  **Game over:** The user have 3 life’s. If he misses to catch then the life is decreased. And if the life is 0 then the game is over. Here this condition is used          if(life==0)break.
 

<img src="https://user-images.githubusercontent.com/61835955/184641545-fad262fd-1017-4ee4-a36d-59f4532deb97.png" width="500px">

<img src="https://user-images.githubusercontent.com/61835955/184641681-a8da9b7f-d6eb-48a0-8f3e-096f7e0f5b71.png" width="500px">

<img src="https://user-images.githubusercontent.com/61835955/184641768-a8738f9c-2ac5-4b16-a726-4fd8c34ac085.png" width="500px">


