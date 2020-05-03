#ifndef SHAPES_H
#define SHAPES_H

namespace NickSchantz
{
    // Shape
    class Shape
    {
        public:
            virtual void display() const;
    };
    
    // 2D
    class TwoDimensionalShape: public Shape
    {
        public:
            virtual void getArea() const;
    }
    
    // Circle
    class Circle: public TwoDimensionalShape
    {
        public:
            Circle(double radius);

            void display() const;
            double getArea() const;
    
        private:
            double radius;
    }
    
    // Square
    class Square: public TwoDimensionalShape
    {
        public:
            Square(double lengthOfSide);

            void display() const;
            double getArea() const;

        private:
            double lengthOfSide;
    }
    
    // 3D
    class ThreeDimensionalShape: public Shape
    {
        public:
            virtual double getSurfaceArea() const;
            virtual double getVolume() const;
    }
    
    // Sphere
    class Sphere: public ThreeDimensionalShape
    {
        public:
            Sphere(double radius);
    
            void display() const;
    
            double getSurfaceArea() const;
            double getVolume() const;

        private:
            double radius;
    }
    
    // Cube
    class Cube: public ThreeDimensionalShape
    {
        public:
            Cube(double lengthOfSide);
            void display() const;
            double getSurfaceArea() const;
            double getVolume() const;

        private:
            double lengthOfSide;

    }
    

}

#endif
