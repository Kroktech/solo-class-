#include <iostream>
//class Vec2
//{
//public:
//    float x;
//    float y;
//};
//std::ostream& operator <<(std::ostream& s, const Vec2& v)
//{
//    s << v.x << ";" << v.y;
//    return s;
//}
//class Shape
//{
//public:
//    Shape() {}
//
//
//};
//class Circle : public Shape
//{
//
//public:
//    Circle(const Vec2& center, const float& rayon) : Shape(), v(center), r(rayon) {}
//    int r;
//    Vec2 v;
//    void show()
//    {
//
//        std::cout << "you are a circle\n";
//        std::cout << "ton centre est : ";
//        std::cout << v;
//        std::cout << " de rayon : " << r;
//        std::cout << std::endl;
//
//    }
//};
//class rectangle : public Shape
//{
//public:
//    rectangle(const Vec2& P1, const Vec2& P2) : Shape(), v1(P1), v2(P2){}
//    Vec2 v1;
//    Vec2 v2;
//    void show()
//    {
//        std::cout << "you are a rectangle\n";
//        std::cout << " le premier point est : " << v1 << " le deuxieme point est : " << v2;
//        std::cout << std:: endl;
//
//    }
//
//
//
//};
//class triangle : public Shape
//{
//public:
//    triangle(const Vec2& P1, const Vec2& P2,const Vec2& P3) : Shape(), v1(P1),v2(P2),v3(P3){}
//    Vec2 v1;
//    Vec2 v2;
//    Vec2 v3;
//    void show()
//    {
//        std::cout << "you are a triangle\n";
//        std::cout << " le premier point est : " << v1 << " le deuxieme point est : " << v2 << "le toisieme point est : ";
//        std::cout << std::endl;
//    }
//
//
//};
//int main()
//{
//    Vec2 v;
//    v.x = 2;
//    v.y = 5;
//    Vec2 v2;
//    v2.x = 6;
//    v2.y = 7;
//    Circle(v, 10).show();
//    rectangle(v, v2).show();
//    return 0;
//}
//#include <iostream>
//
//int main() {
//    // Code ANSI pour le texte rouge
//    std::cout << "\033[31mJe suis rouge\033[0m" << std::endl;
//    return 0;
//}
//class Hero
//{
//public:
//	virtual ~Hero() = default;
//	
//	virtual void object_steal() = 0;
//	virtual void lockpick() = 0;
//
//};
//class Fighting_style
//{
//public:
//	virtual ~Fighting_style() = default;
//	virtual void fight() = 0;
//
//};
//class Sword_Fight : public Fighting_style
//{
//public: 
//	void fight()
//	{
//		std::cout << " slash " << std::endl;
//	}
//};
//class Barbarian : public  Hero 
//{
//public:
//	Fighting_style->fight() ;
//	void object_steal() override
//	{
//		std::cout << "you're stolen someone \n";
//	}
//
//	void lockpick() override
//	{
//		return;
//	}
//
//};
//class Mage : public  Hero
//{
//public:
//	
//	void object_steal() override
//	{
//		std::cout << "you're stolen someone \n";
//	}
//	void lockpick() override
//	{
//		return;
//	}
//
//
//};
//class Voleur : public  Hero
//{
//public:
//	
//	void object_steal() override
//	{
//		std::cout << "..... \n";
//	}
//	void lockpick() override
//	{
//		std::cout << "you are lockpicking\n";
//	}
//
//
//
//};
//
//
//int main()
//{
//	
//	Hero* barbarian = new Barbarian();
//	
//	barbarian->object_steal();
//	Hero* mage = new Mage();
//	
//	mage->object_steal();
//	Hero* voleur = new Voleur();
//	
//	voleur->object_steal();
//	voleur->lockpick();
//	return 0;
//	delete barbarian;
//	delete mage;
//	delete voleur;
//}
void display(std::string msg)
{
	std::cout << msg << std::endl;
}
class IfightningStyle
{
public:
	virtual ~IfightningStyle() = default;
	virtual void fight() = 0;

};
class fightWithSword : public IfightningStyle
{
	void fight() override
	{
		display("Fight with sword");
	}

};
class fightWithStick : public IfightningStyle
{
	void fight() override
	{
		display("Fight with stick");
	}

};
class hero
{
public:
	virtual ~hero()
	{
		delete m_fightingStyle;
		m_fightingStyle = nullptr;
	}
	void fight()
	{
		m_fightingStyle->fight();
	 }
protected:
	IfightningStyle* m_fightingStyle;
};
class Barbarian : public hero
{
public:
	Barbarian()
	{
		m_fightingStyle = new fightWithSword();
	}
};
class Wizard : public hero
{
public:
	Wizard()
	{
		m_fightingStyle = new fightWithStick();
	}
};

int main()
{
	hero* barbarian = new Barbarian;
	barbarian->fight();
	return 0;
	delete barbarian;
}
