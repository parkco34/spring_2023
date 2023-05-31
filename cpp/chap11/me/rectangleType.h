class rectangleType
{
    public:
        void setDimension(double l, double w);
        double getLength() const;
        double getWidth() const;
        double area() const;
        double perimeter() const;
        void print() const;
        //Constructors
        rectangleType();
        rectangleType(double, double);

    private:
        double length, width;
};
