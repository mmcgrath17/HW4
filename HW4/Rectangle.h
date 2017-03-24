using namespace std;

class Rectangle2D
{
private:
	double x, y;
	double width, height;

public:
	Rectangle2D()
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}

	Rectangle2D(double xx, double yy, double wwidth, double hheight)
	{
		x = xx;
		y = yy;
		width = wwidth;
		height = hheight;
	}

	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	double getWidth()
	{
		return width;
	}
	double getHeight()
	{
		return height;
	}

	double setX(double ex)
	{
		x = ex;
	}
	double setY(double why)
	{
		y = why;
	}
	double setWidth(double wid)
	{
		width = wid;
	}
	double setHeight(double heigh)
	{
		height = heigh;
	}

	const double getArea()
	{
		return width*height;
	}
	const double getPerimeter()
	{
		return 2 * width + 2 * height;
	}
	const bool contains(double xxx, double yyy)
	{
		if ((xxx <= x + (width / 2.0) && xxx >= x - (width / 2.0)) && ((yyy <= y + (height / 2.0) && yyy >= y - (height / 2.0))))
			return true;
		else
			return false;
	}

	const bool contains(const Rectangle2D &r)
	{
		Rectangle2D rect = r;
		double xx = rect.getX();
		double yy = rect.getY();
		double h = rect.getHeight();
		double w = rect.getWidth();
		if ((yy + (h / 2)) < (y + (height / 2)) && (yy - (h / 2)) > (y - (height / 2)) && (xx + (w / 2)) < (x + (width / 2)) && (xx - (w / 2)) > (x - (width / 2)))
			return true;
		else
			return false;
	}
	const bool overlaps(const Rectangle2D &r)
	{
		Rectangle2D rect = r;
		double xx = rect.getX();
		double yy = rect.getY();
		double h = rect.getHeight();
		double w = rect.getWidth();
		if (((x + width / 2 <= xx - w / 2) && ((x - width / 2 >= xx - w / 2)) && ((y + height / 2 <= yy + h / 2) && (y - height / 2 >= yy - h / 2))))
			return true;
		else
			return false;
	}
	
};