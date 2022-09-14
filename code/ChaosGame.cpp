// Include important C++ libraries here
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>

// Make code easier to type with "using namespace"
using namespace sf;
using namespace std;

int main()
{
	// Create a video mode object
	VideoMode vm(1920, 1080);

	// Create and open a window for the game

	RenderWindow window(vm, "Chaos Game!", Style::Default);

    while (window.isOpen())
	{
        Event event;
		while (window.pollEvent(event))
		{
            if (event.type == Event::Closed)
				// Quit the game when the window is closed
				window.close();
		}
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    std::cout << "the right button was pressed" << std::endl;
                    std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                    std::cout << "mouse y: " << event.mouseButton.y << std::endl;

                    if(vertices.size() < 3)
                    {
                        vertices.push_backVector2f(event.mouseButton.x, event.mouseButton.y));
                    }
                    else if(points.size() == 0)
                    {
                        //fourth click
                        ///push back to points vector
                    }
                }
            }


        }
        if(Keyboard::isKeyPressed(Keyboard::Return))
        {
            window.close();

        }
        /*
		****************************************
		Update
		****************************************
		*/
		///Vector2f v(2,2);
        ///RectangleShape rect(2,2);
        RectangleShape rect(Vector2f(20,2));
        rect.getPosition(Vector2f(1920/2, 1080/2));
        rect.setFillColor(Color::Magenta);
}
window.draw(rect);
window.display();


        if(points.size() > 0)
        {
            //generate more point(s)
            //select random vertex
            ///calculate midpoint betweeen random vertex and the last point in the vector
        }

		/*
		****************************************
		Draw
		****************************************
		*/
        window.clear();
        for(int i = 0; i < vertices.size(); i++)
        {
            RectangleShape rect(Vector2f(10,10));
            rect.setPosition(Vector2f(vertices[i].x, vertices[i].y));
            rect.setFillColor(Color::Magenta);
            window.draw(rect);
        }
        //window.draw();
        window.display();
    }






}




