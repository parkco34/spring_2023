import java.lang.String;

public class Book
{
    private String title, author;
    private int year;
    private double price;
    private boolean used;

    // Constructor (Default)
    public Book()
    {
        title = "Modal Logic: An Introduction";
        author = "Brian F. Chellas";
        year = 1980;
        price = 33.99;
        used = false;
    }

    public Book(String theTitle, String theAuthor)
    {
        title = theTitle;
        author = theAuthor;
        year = 1793;
        price = 6.99;
        used = false;
    }

    public Book(String theTitle, String theAuthor, int theYear, double thePrice, boolean uzed)
    {
        title = theTitle;
        author = theAuthor;
        year = theYear;
        price = thePrice;
        used = uzed;
    }
   
    // Accessor meethods
    public String getTitle()
    {
        return title;
    }

    public String getAuthor()
    {
        return author;
    }

    public int getYear()
    {
        return year;
    }

    public double getPrice()
    {
        return price;
    }

    public boolean isUsed()
    {
        return used;
    }

    // Mutator methods
    public void setTitle(String theTitle)
    {
        title = theTitle;
    }

    public void setAuthor(String theAuthor)
    {
        author = theAuthor;
    }

    public void setYear(int theYear)
    {
        year = theYear;
    }

    public void setPrice(double thePrice)
    {
        price = thePrice;
    }

    public void setUsed(boolean uzed)
    {
        used = uzed;
    }

    // Display information
    public String toString()
    {
        return "Title: " + title + "\nAuthor: " + author + "\nYear: " + year + 
            "\nPrice: " + price + "\nUsed: " + used;
    }
}

