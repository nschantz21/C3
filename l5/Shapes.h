#ifndef SHAPES_H
#define SHAPES_H

namespace NickSchantz
{
    // Shape
    class Shape
    {
        public:
            virtual void display() const = 0;
    
            virtual ~Shape(){}
    };
    
    // 2D
    class TwoDimensionalShape: public Shape
    {
        public:
            virtual double getArea() const = 0;
            virtual ~TwoDimensionalShape(){}
    };
    
    // Circle
    class Circle: public TwoDimensionalShape
    {
        public:
            Circle(double radius);

            virtual void display() const;
            virtual double getArea() const;
            virtual ~Circle(){}
    
        private:
            double radius;
    };
    
    // Square
    class Square: public TwoDimensionalShape
    {
        public:
            Square(double lengthOfSide);

            virtual void display() const;
            virtual double getArea() const;
            virtual ~Square(){}

        private:
            double lengthOfSide;
    };
    
    // 3D
    class ThreeDimensionalShape: public Shape
    {
        public:
            virtual double getSurfaceArea() const = 0;
            virtual double getVolume() const = 0;
            virtual ~ThreeDimensionalShape(){}
    };
    
    // Sphere
    class Sphere: public ThreeDimensionalShape
    {
        public:
            Sphere(double radius);
    
            virtual void display() const;
    
            virtual double getSurfaceArea() const;
            virtual double getVolume() const;
            virtual ~Sphere(){}

        private:
            double radius;
    };
    
    // Cube
    class Cube: public ThreeDimensionalShape
    {
        public:
            Cube(double lengthOfSide);
            
            virtual void display() const;
            virtual double getSurfaceArea() const;
            virtual double getVolume() const;
            virtual ~Cube(){}

        private:
            double lengthOfSide;

    };
    

}

#endif
