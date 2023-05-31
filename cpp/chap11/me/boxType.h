class boxType: public rectangleType
{
    public:
        // Function set length, width and height
        void setDimension(double l, double w, double h);
        double getHeight() const;
        // Ger surface area of box
        double area() const;
        
}
