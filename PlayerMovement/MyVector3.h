#ifndef MYVECTOR3 
#define MYVECTOR3

/// <summary>
/// @author = Mantas Zalnierius
/// @date = 14th of January 2019
/// 
/// Estimated time: 600 mins
/// 
/// Date:   5/01/2019 (Session 1).
/// Start:  15:00
/// Finish: 17:00
/// 
/// Date:   10/01/2019 (Session 2).
/// Start:  14:00
/// Finish: 20:00
/// 
/// Date:   13/01/2019 (Session 3).
/// start:  18:00
/// finish: 21:00
/// 
/// Date:   14/01/2019 (Session 4).
/// start:  17:00
/// finish: 21:00
/// 
/// Actual time taken = 860 mins.
/// 
/// Description: This is vector3{} maths.
/// 
/// Known bugs: None at this moment.
/// Got help Joshua, Michale and Jack.
/// This website helped me to understand how to use vertex's and to better understand how they worked https://onlinemschool.com/math/assistance/vector/angl/

#include <iostream> // This adds the input and output libaries.
#include <SFML/Graphics.hpp> // This adds the sfml graphics liabary.


class MyVector3
{
public:
	double x; // This is a double x cordinate value for the MyVector3 Constructor.
	double y; // This is a double y cordinate value for the MyVector3 Constructor.
	double z; // This is a double z cordinate value for the MyVector3 Constructor.

	MyVector3(); // This is the default MyVector3 constructor.
	~MyVector3(); // This is the default MyVector3 Destructor.
	std::string toString(); // This is a function declaration, for setting vectors to strings.


	
	MyVector3(double t_x, double t_y, double t_z); // This is the overloaded MyVector3 constructor.
	MyVector3(sf::Vector3f t_sfVector); // This is the overloaded MyVector3 constructor that has a sf::vector3f{} argument.
	MyVector3(sf::Vector3i t_sfVector); // This is the overloaded MyVector3 constructor that has a sf::vector3i{} argument.
	MyVector3(sf::Vector2i t_sfVector); // This is the overloaded MyVector3 constructor that has a sf::vector2i{} agrument
	MyVector3(sf::Vector2u t_sfVector); // This is the overloaded MyVector3 constructor that has a sf::vector2u{} agrument
	MyVector3(sf::Vector2f t_sfVector);  // This is the overloaded MyVector3 constructor that has a sf::vector2f{} argument.
	
	
	MyVector3 operator +(const MyVector3 t_right) const; // This is a overloaded + opreator function, that has a const MyVector3{} argument.
	MyVector3 operator -(const MyVector3 t_right) const; // This is a overloaded - opreator function, that has a const MyVector3{} argument.
	MyVector3 operator *(const double t_scalar) const; // This is a overloaded * opreator function, that has a const double scalar argument.
	MyVector3 operator /(const double t_divisor) const; // This is a overloaded / opreator function, that has const double divisor argument.
	MyVector3 operator +=(const MyVector3 t_right); // This is a overloaded += opreator function, that has a const MyVector3{} argument.
	MyVector3 operator -=(const MyVector3 t_right); // This is a overloaded -= opreator function, that has a const MyVector3{} argument.

	bool operator == (const MyVector3 t_right) const; // This is a overloaded == opreator function, that has a const MyVector3{} argument.
	bool operator != (const MyVector3 t_right) const; // This is a overloaded != opreator function, that has a const MyVector3{} argument.

	// negative of a vector 
	MyVector3 operator -();  // this changes the vector
	//new methods for bouncing off sides of table in billiards
	void reverseX(); // this negates the x element of the vector
	void reverseY();  // this negates the y element of the vector

	double length()const; // This is a function declaration that gets the length of a vector, and doesn't allow to change the compenents of the vector.
	double lengthSquared()const; // This is a function declaration that gets the length squared of a vector, and doesn't allow to change the compenents of the vectors.
	double dot(const MyVector3 t_other) const; // This is a function declaration that gets the dot product of two vectors, and doesn't allow to change the compenents of the vectors.
	MyVector3 crossProduct(const MyVector3 t_other)const; // This a function declaration that gets the cross product of a two vectors, and doesn't allow to change the compenents of the vectors
	double angleBetween(const MyVector3 t_other)const;  // answer in degrees
	MyVector3 unit() const;  // vector doesn't change
	void normalise(); // vector changes and will have length 1 
	MyVector3 projection(const MyVector3 t_onto)const; // This is the function declaration.
	// projection onto the other vector so answer will parallel to other vector.
	MyVector3 rejection(const MyVector3 t_onto)const; // This is the function declaration, that gets the rejection and doesn't allow to change the compentes of the vectors.

	
	operator sf::Vector2f() { return sf::Vector2f{static_cast<float>(x),static_cast<float>(y) }; }; // {2.4,-2.6,3.0} ->  {2.4~,-2.6~}
	operator sf::Vector2i() { return sf::Vector2i{static_cast<int>(round(x)), static_cast<int>(round(y)) }; };// {2.4,-2.6,3.0} ->  {2,-3}
	operator sf::Vector2u();// {2.4,-2.6,3.0} ->  {2,3}  needs more space than an inline
	operator sf::Vector3i() { return sf::Vector3i{static_cast<int>(round(x)), static_cast<int>(round(y)),static_cast<int>(round(z)) }; };// {2.4,-2.6,3.0} ->  {2,-3,3}
	operator sf::Vector3f() { return sf::Vector3f{ static_cast<float>(x), static_cast<float>(y), static_cast<float>(z) }; };// {2.4,-2.6,3.0} ->  {2.4~,-2.6~, 3.0}

};



#endif // !MYVECTOR3