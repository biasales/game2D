#include "Game.hpp"
#include "DEFINITIONS.hpp"

using namespace sf;

int main()
{
   /*srand(time(0));

   RenderWindow app(VideoMode(1080,720),"Frog Adventure");
   app.setFramerateLimit(600);

   Texture background;

   background.loadFromFile("Graphics/background.jpg");

   Sprite sBg(background);


   while (app.isOpen())
   {
       Event e;
       while(app.pollEvent(e))
       {
           if(e.type == Event::Closed)
           app.close();
       }
       app.clear();
       app.draw(sBg);
       app.display();
   }

   return 0;
   */
  TheFrog::Game(SCREEN_WIDTH,SCREEN_HEIGHT,"The Frog");
  return EXIT_SUCCESS;
}