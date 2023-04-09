#include "flower.h"

Flower::Flower(sf::RenderWindow* window)
{
	this->window = window;
}

void Flower::draw()
{
	

	sf::CircleShape bee(15);
	bee.setFillColor(sf::Color::Yellow);
	bee.setPosition(window->getSize().x / 2 - bee.getRadius()+170, window->getSize().y / 2 - bee.getRadius()-270);
	bee.scale(1.8, 2.5);
	bee.rotate(75.0);
	window->draw(bee);


	sf::CircleShape eye(3);
	eye.setFillColor(sf::Color::Black);
	eye.setPosition(window->getSize().x / 2 - eye.getRadius() + 103, window->getSize().y / 2 - eye.getRadius() - 258);
	eye.scale(1.5, 2.5);
	eye.rotate(35.0);
	window->draw(eye);

	sf::RectangleShape strip(sf::Vector2f(8.0f, 300.0f));
	strip.setFillColor(sf::Color::Black);
	strip.setPosition(window->getSize().x / 2 + 170, window->getSize().y / 2 -270);
	strip.move(-28, -10);
	strip.rotate(-20.0);
	window->draw(strip);

	sf::RectangleShape strip2(sf::Vector2f(8.0f, 300.0f));
	strip2.setFillColor(sf::Color::Black);
	strip2.setPosition(window->getSize().x / 2 + 170, window->getSize().y / 2 - 270);
	strip2.move(-45, -10);
	strip2.rotate(-20.0);
	window->draw(strip2);

	sf::RectangleShape strip3(sf::Vector2f(8.0f, 300.0f));
	strip3.setFillColor(sf::Color::Black);
	strip3.setPosition(window->getSize().x / 2 + 170, window->getSize().y / 2 - 270);
	strip3.move(-62, -10);
	strip3.rotate(-20.0);
	window->draw(strip3);

	sf::CircleShape w1(15.0);
	w1.setFillColor(sf::Color::Cyan);
	w1.setPosition(window->getSize().x / 2 - w1.getRadius()+190, window->getSize().y / 2 - w1.getRadius()-285);
	w1.scale(1.0, 2.5);
	w1.rotate(75.0);
	window->draw(w1);

	sf::RectangleShape stem(sf::Vector2f(10.0f, 300.0f));
	stem.setFillColor(sf::Color::Green);
	stem.setPosition(window->getSize().x / 2 + 8.5, window->getSize().y / 2 + 150);
	stem.move(-10.5, -10.5);
	window->draw(stem);

	sf::CircleShape c5(40);
	c5.setFillColor(sf::Color::Cyan);
	c5.setPosition(window->getSize().x / 2 - c5.getRadius() + 30.0, window->getSize().y / 2 - c5.getRadius()+90.0);
	c5.scale(1.3, 2.5);
	c5.rotate(-90.0);
	window->draw(c5);

	sf::CircleShape c4(40);
	c4.setFillColor(sf::Color::Cyan);
	c4.setPosition(window->getSize().x / 2 - c4.getRadius()+50.0, window->getSize().y / 2 - c4.getRadius()-10.0 );
	c4.scale(1.3, 2.5);
	c4.rotate(90.0);
	window->draw(c4);

	sf::CircleShape c3(40);
	c3.setFillColor(sf::Color::Cyan);
	c3.setPosition(window->getSize().x / 2 - c3.getRadius() -10.0, window->getSize().y / 2 - c3.getRadius()-130.0 );
	c3.scale(1.3, 2.5);
	window->draw(c3);


	sf::CircleShape c2(40);
	c2.setFillColor(sf::Color::Cyan);
	c2.setPosition(window->getSize().x / 2 - c2.getRadius()-10.0, window->getSize().y / 2 - c2.getRadius()+15.0);
	c2.scale(1.3, 2.5);
	window->draw(c2);

	
	sf::CircleShape mag1(40);
	mag1.setFillColor(sf::Color::Magenta);
	mag1.setPosition(window->getSize().x / 2 - mag1.getRadius() - 10.0, window->getSize().y / 2 - mag1.getRadius() + 15.0);
	mag1.scale(1.3, 2.5);
	mag1.rotate(45.0);
	window->draw(mag1);

	sf::CircleShape mag2(40);
	mag2.setFillColor(sf::Color::Magenta);
	mag2.setPosition(window->getSize().x / 2 - mag2.getRadius() + 170.0, window->getSize().y / 2 - mag2.getRadius()-140);
	mag2.scale(1.3, 2.5);
	mag2.rotate(45.0);
	window->draw(mag2);

	sf::CircleShape mag3(40);
	mag3.setFillColor(sf::Color::Magenta);
	mag3.setPosition(window->getSize().x / 2 - mag3.getRadius()+60 , window->getSize().y / 2 - mag3.getRadius()+5);
	mag3.scale(1.3, 2.5);
	mag3.rotate(135.0);
	window->draw(mag3);

	sf::CircleShape mag4(40);
	mag4.setFillColor(sf::Color::Magenta);
	mag4.setPosition(window->getSize().x / 2 - mag4.getRadius()+230, window->getSize().y / 2 - mag4.getRadius()+155);
	mag4.scale(1.3, 2.5);
	mag4.rotate(135.0);
	window->draw(mag4);

	sf::CircleShape circle(70);
	circle.setFillColor(sf::Color::	Yellow);
	circle.setPosition(window->getSize().x / 2 - circle.getRadius(),window->getSize().y / 2 - circle.getRadius());
	window->draw(circle);

	sf::RectangleShape rectangle2(sf::Vector2f(90.0f, 90.0f));
	rectangle2.setFillColor(sf::Color::Yellow);
	rectangle2.setPosition(window->getSize().x / 2 ,window->getSize().y / 2 - 58.0);
	rectangle2.rotate(45.0);
	window->draw(rectangle2);

	sf::RectangleShape r4(sf::Vector2f(60.0f, 60.0f));
	r4.setFillColor(sf::Color::Red);
	r4.setPosition(window->getSize().x / 2,window->getSize().y / 2 - 28.0);
	r4.rotate(45.0);
	window->draw(r4);

	sf::CircleShape wing(30);
	wing.setFillColor(sf::Color::Red);
	wing.setPosition(window->getSize().x / 2 -56, window->getSize().y / 2-40);
	window->draw(wing);

	sf::CircleShape wing2(30);
	wing2.setFillColor(sf::Color::Red);
	wing2.setPosition(window->getSize().x / 2-6, window->getSize().y / 2 - 40);
	window->draw(wing2);

	sf::CircleShape leaf(20);
	leaf.setFillColor(sf::Color::Green);
	leaf.setPosition(window->getSize().x / 2 - 67.0, window->getSize().y / 2 +220);
	leaf.scale(5.0, 2.0);
	leaf.rotate(55.0);
	window->draw(leaf);

	
		sf::RectangleShape grass(sf::Vector2f(100.0f, 100.0f));
		grass.setFillColor(sf::Color::Green);
		grass.setPosition(window->getSize().x , window->getSize().y-30 );
		grass.rotate(45.0);
		window->draw(grass);
	
		sf::RectangleShape grass2(sf::Vector2f(100.0f, 100.0f));
		grass2.setFillColor(sf::Color::Green);
		grass2.setPosition(window->getSize().x-50, window->getSize().y - 30);
		grass2.rotate(45.0);
		window->draw(grass2);

		sf::RectangleShape grass3(sf::Vector2f(100.0f, 100.0f));
		grass3.setFillColor(sf::Color::Green);
		grass3.setPosition(window->getSize().x - 100, window->getSize().y - 30);
		grass3.rotate(45.0);
		window->draw(grass3);

		sf::RectangleShape grass4(sf::Vector2f(100.0f, 100.0f));
		grass4.setFillColor(sf::Color::Green);
		grass4.setPosition(window->getSize().x - 150, window->getSize().y - 30);
		grass4.rotate(45.0);
		window->draw(grass4);

		sf::RectangleShape grass5(sf::Vector2f(100.0f, 100.0f));
		grass5.setFillColor(sf::Color::Green);
		grass5.setPosition(window->getSize().x - 200, window->getSize().y - 30);
		grass5.rotate(45.0);
		window->draw(grass5);

		sf::RectangleShape grass6(sf::Vector2f(100.0f, 100.0f));
		grass6.setFillColor(sf::Color::Green);
		grass6.setPosition(window->getSize().x - 250, window->getSize().y - 30);
		grass6.rotate(45.0);
		window->draw(grass6);

		sf::RectangleShape grass7(sf::Vector2f(100.0f, 100.0f));
		grass7.setFillColor(sf::Color::Green);
		grass7.setPosition(window->getSize().x - 320, window->getSize().y - 30);
		grass7.rotate(45.0);
		window->draw(grass7);

		sf::RectangleShape grass8(sf::Vector2f(100.0f, 100.0f));
		grass8.setFillColor(sf::Color::Green);
		grass8.setPosition(window->getSize().x - 370, window->getSize().y - 30);
		grass8.rotate(45.0);
		window->draw(grass8);

		sf::RectangleShape grass9(sf::Vector2f(100.0f, 100.0f));
		grass9.setFillColor(sf::Color::Green);
		grass9.setPosition(window->getSize().x - 420, window->getSize().y - 30);
		grass9.rotate(45.0);
		window->draw(grass9);

		sf::RectangleShape grass10(sf::Vector2f(100.0f, 100.0f));
		grass10.setFillColor(sf::Color::Green);
		grass10.setPosition(window->getSize().x - 470, window->getSize().y - 30);
		grass10.rotate(45.0);
		window->draw(grass10);

		sf::RectangleShape grass11(sf::Vector2f(100.0f, 100.0f));
		grass11.setFillColor(sf::Color::Green);
		grass11.setPosition(window->getSize().x - 520, window->getSize().y - 30);
		grass11.rotate(45.0);
		window->draw(grass11);

		sf::RectangleShape grass12(sf::Vector2f(100.0f, 100.0f));
		grass12.setFillColor(sf::Color::Green);
		grass12.setPosition(window->getSize().x - 570, window->getSize().y - 30);
		grass12.rotate(45.0);
		window->draw(grass12);


		sf::RectangleShape bp(sf::Vector2f(15.0f, 5.0f));
		bp.setFillColor(sf::Color::White);
		bp.setPosition(window->getSize().x / 2 + 220, window->getSize().y / 2 - 260);
		bp.move(-28, -10);
		bp.rotate(-20.0);
		window->draw(bp);

		sf::RectangleShape bp1(sf::Vector2f(15.0f, 5.0f));
		bp1.setFillColor(sf::Color::White);
		bp1.setPosition(window->getSize().x / 2 + 240, window->getSize().y / 2 - 260);
		bp1.move(-28, -10);
		bp1.rotate(-20.0);
		window->draw(bp1);

		sf::RectangleShape bp2(sf::Vector2f(15.0f, 5.0f));
		bp2.setFillColor(sf::Color::White);
		bp2.setPosition(window->getSize().x / 2 + 254, window->getSize().y / 2 - 272);
		bp2.move(-28, -10);
		bp2.rotate(-20.0);
		window->draw(bp2);

		sf::RectangleShape bp3(sf::Vector2f(15.0f, 5.0f));
		bp3.setFillColor(sf::Color::White);
		bp3.setPosition(window->getSize().x / 2 + 273.3, window->getSize().y / 2 - 273);
		bp3.move(-28, -10);
		bp3.rotate(-20.0);
		window->draw(bp3);

		sf::RectangleShape bp4(sf::Vector2f(15.0f, 5.0f));
		bp4.setFillColor(sf::Color::White);
		bp4.setPosition(window->getSize().x / 2 + 288, window->getSize().y / 2 - 285);
		bp4.move(-28, -10);
		bp4.rotate(-20.0);
		window->draw(bp4);

		sf::RectangleShape bp5(sf::Vector2f(15.0f, 5.0f));
		bp5.setFillColor(sf::Color::White);
		bp5.setPosition(window->getSize().x / 2 + 305, window->getSize().y / 2 - 282);
		bp5.move(-28, -10);
		bp5.rotate(-20.0);
		window->draw(bp5);

		sf::RectangleShape bgrass(sf::Vector2f(100.0f, 100.0f));
		bgrass.setFillColor(sf::Color::Green);
		bgrass.setPosition(window->getSize().x - 595, window->getSize().y - 30);
		bgrass.rotate(45.0);
		window->draw(bgrass);

		sf::RectangleShape bgrass2(sf::Vector2f(100.0f, 100.0f));
		bgrass2.setFillColor(sf::Color::Green);
		bgrass2.setPosition(window->getSize().x - 545, window->getSize().y - 30);
		bgrass2.rotate(45.0);
		window->draw(bgrass2);

		sf::RectangleShape bgrass3(sf::Vector2f(100.0f, 100.0f));
		bgrass3.setFillColor(sf::Color::Green);
		bgrass3.setPosition(window->getSize().x - 495, window->getSize().y - 30);
		bgrass3.rotate(45.0);
		window->draw(bgrass3);

		sf::RectangleShape bgrass4(sf::Vector2f(100.0f, 100.0f));
		bgrass4.setFillColor(sf::Color::Green);
		bgrass4.setPosition(window->getSize().x - 445, window->getSize().y - 30);
		bgrass4.rotate(45.0);
		window->draw(bgrass4);

		sf::RectangleShape bgrass5(sf::Vector2f(100.0f, 100.0f));
		bgrass5.setFillColor(sf::Color::Green);
		bgrass5.setPosition(window->getSize().x - 395, window->getSize().y - 30);
		bgrass5.rotate(45.0);
		window->draw(bgrass5);

		sf::RectangleShape bgrass6(sf::Vector2f(100.0f, 100.0f));
		bgrass6.setFillColor(sf::Color::Green);
		bgrass6.setPosition(window->getSize().x - 345, window->getSize().y - 30);
		bgrass6.rotate(45.0);
		window->draw(bgrass6);

		sf::RectangleShape bgrass7(sf::Vector2f(100.0f, 100.0f));
		bgrass7.setFillColor(sf::Color::Green);
		bgrass7.setPosition(window->getSize().x - 275, window->getSize().y - 30);
		bgrass7.rotate(45.0);
		window->draw(bgrass7);

		sf::RectangleShape bgrass8(sf::Vector2f(100.0f, 100.0f));
		bgrass8.setFillColor(sf::Color::Green);
		bgrass8.setPosition(window->getSize().x - 225, window->getSize().y - 30);
		bgrass8.rotate(45.0);
		window->draw(bgrass8);

		sf::RectangleShape bgrass9(sf::Vector2f(100.0f, 100.0f));
		bgrass9.setFillColor(sf::Color::Green);
		bgrass9.setPosition(window->getSize().x - 175, window->getSize().y - 30);
		bgrass9.rotate(45.0);
		window->draw(bgrass9);

		sf::RectangleShape bgrass10(sf::Vector2f(100.0f, 100.0f));
		bgrass10.setFillColor(sf::Color::Green);
		bgrass10.setPosition(window->getSize().x - 125, window->getSize().y - 30);
		bgrass10.rotate(45.0);
		window->draw(bgrass10);
		
		sf::RectangleShape bgrass11(sf::Vector2f(100.0f, 100.0f));
		bgrass11.setFillColor(sf::Color::Green);
		bgrass11.setPosition(window->getSize().x - 75, window->getSize().y - 30);
		bgrass11.rotate(45.0);
		window->draw(bgrass11);
		
		sf::RectangleShape bgrass12(sf::Vector2f(100.0f, 100.0f));
		bgrass12.setFillColor(sf::Color::Green);
		bgrass12.setPosition(window->getSize().x - 25, window->getSize().y - 30);
		bgrass12.rotate(45.0);
		window->draw(bgrass12);


}
