#include <SFML/Graphics.hpp>
#include <time.h>

using namespace sf;

int main()
{
   srand(time(0));

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
}