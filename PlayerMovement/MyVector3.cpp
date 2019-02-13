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
/// </summary>

#include "MyVector3.h" // This adds the MyVector.h header file.
#include <string.h> // This adds the string libary.
#define PI           3.14159265358979323846

/// <summary>
/// Default constructor set all 3 values to zero
/// </summary>
MyVector3::MyVector3() :
	x{ 0.0 },
	y{ 0.0 },
	z{ 0.0 }
{
}

/// <summary>
/// default destructor
/// nothing to release because we only have
/// primitive type data
/// </summary>
MyVector3::~MyVector3()
{
}

/// <summary>
/// 
/// </summary>
/// <returns>the vector as a string surrounded by square brackets and separated by commas</returns>
std::string MyVector3::toString()
{
	const std::string output = "[" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + "]";
	return output;	
}

/// <summary>
/// This is a overloaded constructor for MyVector3, 
/// that has three double variables for the components
/// For the MyVector3. 
/// </summary>
/// <param name="t_x">double t_x</param>
/// <param name="t_y">double t_y</param>
/// <param name="t_z">double t_z</param>
MyVector3::MyVector3(double t_x, double t_y, double t_z)
{
	x = t_x;
	y = t_y;
	z = t_z;
}

/// <summary>
/// create a vector 3 from an sf::vector3f
/// </summary>
/// <param name="t_sfVector">input vector</param>
MyVector3::MyVector3(sf::Vector3f t_sfVector)
{
	x = static_cast<float>(t_sfVector.x); // Converts the x of the vector that's getting passed into the function to a float.
	y = static_cast<float>(t_sfVector.y); // Converts the y of the vector that's getting passed into the function to a float.
	z = static_cast<float>(t_sfVector.z); // Converts the z of the vector that's getting passed into the function to a float.
}

/// <summary>
/// create a vector 3 from an sf::vector3i
/// </summary>
/// <param name="t_sfVector"></param>
MyVector3::MyVector3(sf::Vector3i t_sfVector)
{
	x = static_cast<int>(t_sfVector.x); // Converts the x of the vector that's getting passed into the function to a int.
	y = static_cast<int>(t_sfVector.y); // Converts the y of the vector that's getting passed into the function to a int.
	z = static_cast<int>(t_sfVector.z); // Converts the z of the vector that's getting passed into the function to a int.
}

/// <summary>
/// create a vector 3 from an sf::vector2i
/// </summary>
/// <param name="t_sfVector"></param>
MyVector3::MyVector3(sf::Vector2i t_sfVector)
{
	x = static_cast<int>(t_sfVector.x); // Converts the x of the vector that's getting passed into the function to a int.
	y = static_cast<int>(t_sfVector.y); // Converts the y of the vector that's getting passed into the function to a int.
	z = 0; // sets the z to be equal to zero.
}

/// <summary>
/// create a vector 3 from an sf::vector2u
/// </summary>
/// <param name="t_sfVector"></param>
MyVector3::MyVector3(sf::Vector2u t_sfVector)
{
	x = static_cast<unsigned int>(t_sfVector.x); // Converts the x of the vector that's getting passed into the function to a unsigned int.
	y = static_cast<unsigned int>(t_sfVector.y); // Converts the y of the vector that's getting passed into the function to a unsigned int.
	z = 0;  // sets the z to be equal to zero.
}

/// <summary>
/// create a vector 3 from an sf::vector2f
/// </summary>
/// <param name="t_sfVector"></param>
MyVector3::MyVector3(sf::Vector2f t_sfVector)
{
	x = static_cast<float>(t_sfVector.x); // Converts the x of the vector that's getting passed into the function to a float.
	y = static_cast<float>(t_sfVector.y); // Converts the y of the vector that's getting passed into the function to a float.
	z = 0.0f; // sets the z to be equal to zero.
}

/// <summary>
/// This is the overloaded + opreator,
/// This adds the components value of one vector
/// To another vector.
/// </summary>
/// <param name="t_right">MyVector3{}</param>
/// <returns>MyVector3{}</returns>
MyVector3 MyVector3::operator+(const MyVector3 t_right) const
{
	return MyVector3(x + t_right.x, y + t_right.y, z + t_right.z); // This returns the value of both vectors begin added togehter.
}

/// <summary>
/// This is the overloaded - opreator,
/// This subtracts the components values of one vector
/// From another vector.
/// </summary>
/// <param name="t_right">MyVector3{}</param>
/// <returns>MyVector3{}</returns>
MyVector3 MyVector3::operator-(const MyVector3 t_right) const
{
	return MyVector3(x - t_right.x, y - t_right.y, z - t_right.z); // This returns the value of both vectors begin subtracted from each togehter.
}

/// <summary>
/// This is the overloaded * opreator,
/// That multiplies every component of
///	The vector.
/// </summary>
/// <param name="t_scalar">const double scalar</param>
/// <returns>MyVector3{}</returns>
MyVector3 MyVector3::operator*(const double t_scalar) const
{
	MyVector3 newVector{ x, y, z }; // This is a myVector3, with x, y and z values.
	newVector.x = x * t_scalar; // This multiplies the x by the scalar.
	newVector.y = y * t_scalar; // This multiplies the y by the scalar.
	newVector.z = z * t_scalar; // This multiplies the z by the scalar.
	return newVector; // This returns the new vector.
}

/// <summary>
/// This is the overloaded / opreator,
/// That multiplies every component of
///	The vector.
/// </summary>
/// <param name="t_divisor">const double divisor</param>
/// <returns>MyVector3{}</returns>
MyVector3 MyVector3::operator/(const double t_divisor) const
{
	MyVector3 newVector{ x, y, z }; // This is a myVector3, with x, y and z values.

	if(t_divisor == 0) // This checks if the t_divisor is equal to zero.
	{
		newVector.x = x; // This sets the x value to itself.
		newVector.y = y; // This sets the y value to itself.
		newVector.z = z; // This sets the z value to itself.
	}
	else
	{
		newVector.x = x / t_divisor; // This multiplies the x by the divisor.
		newVector.y = y / t_divisor; // This multiplies the y by the divisor.
		newVector.z = z / t_divisor; // This multiplies the z by the divisor.
	}
	
	return newVector; // This returns the new vector.
}

/// <summary>
/// This is the overloaded += opreator,
/// This adds the components value of one vector
/// To another vector.
/// </summary>
/// <param name="t_right">MyVector3{}</param>
/// <returns>MyVector3{}</returns>
MyVector3 MyVector3::operator+=(const MyVector3 t_right)
{
	return MyVector3(x += t_right.x,  y += t_right.y, z += t_right.z); // This adds one vector to another and returns the new vector.
}

/// <summary>
/// This is the overloaded -= opreator,
/// This subtracts components value of one vector
/// From another vector.
/// </summary>
/// <param name="t_right">MyVector3{}</param>
/// <returns>MyVector3{}</returns>
MyVector3 MyVector3::operator-=(const MyVector3 t_right)
{
	return MyVector3(x -= t_right.x,  y -= t_right.y, z -= t_right.z); // This subtracts one vector from another and returns the new vector.
}

/// <summary>
/// This is the overloaded == opreator
/// This checks if one vector is the 
/// same with another vector.
/// </summary>
/// <param name="t_right">MyVector3{}</param>
/// <returns>MyVector3{}</returns>
bool MyVector3::operator==(const MyVector3 t_right) const
{
	return((x == t_right.x) && (y == t_right.y) && (z == t_right.z)); // This returns true or false.
}

/// <summary>
/// This is the overloaded != opreator
/// This checks if one vector is not the 
/// same with another vector.
/// </summary>
/// <param name="t_right">MyVector3{}</param>
/// <returns>MyVector3{}</returns>
bool MyVector3::operator!=(const MyVector3 t_right) const
{
	return(!(this->operator==(t_right))); // This returns true or false.
}
/// <summary>
/// This reverses every component 
/// Of a vector, so plus become minuses
/// And minuses become pluses.
/// </summary>
/// <returns>MyVector3{}</returns>
MyVector3 MyVector3::operator-()
{
	x *= -1; // This multplies the x by -1.
	y *= -1; // This multplies the y by -1.
	z *= -1; // This multplies the z by -1.
	return MyVector3(x, y, z); // This returns a changed vector.
}

/// <summary>
/// This reverses the x of a vector.
/// </summary>
void MyVector3::reverseX()
{
	MyVector3 reverseTheaX{ x, y, z }; // This is a myVector3, with x, y and z values.

	if (x != 0) // This checks if the value for x is not equal to zero.
	{
		x *= -1; // This multplies the x by -1.
	}
}

/// <summary>
/// This changes the y of a vector.
/// </summary>
void MyVector3::reverseY()
{
	MyVector3 reverseTheY{ x, y, z }; // This is a myVector3, with x, y and z values.

	if (y != 0) // This checks if the value for x is not equal to zero.
	{
		y *= -1; // This multplies the y by -1.
	}
}

/// <summary>
/// This gets the length(magnitude)
/// Of a vector.
/// </summary>
/// <returns>Double</returns>
double MyVector3::length() const
{
	return sqrt((x * x) + (y * y) + (z * z)); // This returns the length of a vector.
}
/// <summary>
/// This gets the length squared 
/// Of a vector.
/// </summary>
/// <returns>Double</returns>
double MyVector3::lengthSquared() const
{
	return ((x * x) + (y * y) + (z * z)); // This returns the length squared of a vector.
}

/// <summary>
/// This gets the dot product of two
/// Vectors.
/// </summary>
/// <param name="t_other">M</param>
/// <returns>Double</returns>
double MyVector3::dot(const MyVector3 t_other) const
{
	return (x * t_other.x) + (y * t_other.y) + (z * t_other.z); // This returns the dot product which is a double.
}

/// <summary>
/// This gets the cross product of two
/// Vectors.
/// </summary>
/// <param name="t_other">MyVector3{}</param>
/// <returns>MyVector3{}</returns>
MyVector3 MyVector3::crossProduct(const MyVector3 t_other) const
{
	MyVector3 crossProduct{ y * t_other.z - z * t_other.y,
							z * t_other.x - x * t_other.z,
						    x * t_other.y - y * t_other.x }; // This gets the cross product of two vectors.
	return crossProduct; // returns the cross product.
}

/// <summary>
/// This gets the angle between two 
/// Vectors.
/// </summary>
/// <param name="t_other">MyVector3{}</param>
/// <returns>double</returns>
double MyVector3::angleBetween(const MyVector3 t_other) const
{
	MyVector3 vec{ x, y, z }; // This is a myVector3, with x, y and z values.
	double magnitude1 = vec.length(); // This gets the length of a vector.
	double magnitude2 = t_other.length(); // This gets the length of another vector.
	double dotCalculation = vec.dot(t_other); // This gets the dot product of two vectors.
	const double ANGLE_IN_RADIANS = acos(dotCalculation / (magnitude1 * magnitude2)); // This gets angles in radians.
	const double ANGLE_IN_DEGREES = ANGLE_IN_RADIANS * 180 / PI; // This gets the angle in degrees.
	return ANGLE_IN_DEGREES; // This returns the angle in degrees.
}

/// <summary>
/// This gets the unit vector. 
/// Which has a magnitude of 1.
/// </summary>
/// <returns>MyVector3{}</returns>
MyVector3 MyVector3::unit() const
{
	MyVector3 unitVector{ x, y, z }; // This is a myVector3, with x, y and z values.
	double length = unitVector.length(); // This gets the length of the vector.
	unitVector = unitVector / length; // This divides the vector by it's length, which gets the unit vector.
	return unitVector; // This returns the unit vector.
}

/// <summary>
/// This makes a normalise
/// Vector out of a vector.
/// Which has a magnitude of 1.
/// </summary>
void MyVector3::normalise()
{
	MyVector3 vectorForNormalise{ x, y, z }; // This is a myVector3, with x, y and z values.
	double length = vectorForNormalise.length(); // This gets the length of a vector.
	x = x / length; // This divides the x by the length of the vector.
	y = y / length; // This divides the y by the length of the vector
	z = z / length; // This divides the z by the length of the vector
}

/// <summary>
/// This function gets the projection by getting 
/// the dot product of the vectors and the magnitude
/// of the vector your projecting onto, and then using 
/// them to get the projection of the new vector.
/// </summary>
/// <param name="t_onto">MyVector3{}</param>
/// <returns>MyVector3{}</returns>
MyVector3 MyVector3::projection(const MyVector3 t_onto) const
{
	MyVector3 vectorForProjection{ x, y, z };
	double dotProductCalculation = vectorForProjection.dot(t_onto);
	double magnitude = t_onto.length();
	double projectionCalculation = (dotProductCalculation / (magnitude * magnitude));
	return MyVector3(projectionCalculation * t_onto.x, projectionCalculation * t_onto.y, projectionCalculation * t_onto.z);
}

/// <summary>
/// This gets the rejection vector, which is
/// The projection of a vector subtracted from
/// The vector that is begin projected onto.
/// </summary>
/// <param name="t_onto"></param>
/// <returns></returns>
MyVector3 MyVector3::rejection(const MyVector3 t_onto) const
{
	MyVector3 vectorRejection1{ x, y, z };
	MyVector3 vectorProjectionCalculation = vectorRejection1.projection(t_onto);
	MyVector3 vectorRejection2 = vectorRejection1 - vectorProjectionCalculation;
	return vectorRejection2;
}
/// <summary>
/// This is the sf::Vector2u
/// opreator, which gets a vector2u{} 
/// from a MyVector3{}
/// </summary>
/// <returns>sf::Vector2u</returns>
MyVector3::operator sf::Vector2u()
{
	if (x < 0) // This checks if x is less than zero.
	{
		x *= -1; // This multplies x by -1.
	}

	if (y < 0) // This checks if y is less than zero.
	{
		y *= -1; // This multplies y by -1.
	}

	return sf::Vector2u{ static_cast<unsigned int>(round(x)), static_cast<unsigned int>(round(y)) }; // This returns a sf::Vector2u{}.
}
