
#ifndef _MATH_
#define _MATH_

namespace com
{
	namespace toxiclabs
	{
		namespace galaxy
		{
			namespace math
			{
				class Point
				{
					public:
					
					union
					{
						struct
						{
							float x;
							float y;		
						};
						
						struct
						{
							float data[2];
						};
					
					};
					
					Point();
					Point(float x,float y);
					Point(Point & p);
					
					
				};
				
				class Rectangle
				{
					public:
					
					float x;
					float y;
					float width;
					float height;
					
					Rectangle();
					Rectangle(float x,float y,float width,float height);
					
					bool Collision(Point & p);
					
				};
			}
		}
	}
}

#endif
