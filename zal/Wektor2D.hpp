class Wektor2D
{
  	private:
  		
  		double x;
  		double y;
	  	
	public:
  		
  		Wektor2D () //konstruktor domyślny
		{
  			x=0;
  			y=0;
  		}

  		
		void setX(int nowy_x){// setter
  			x=nowy_x;
		}
		
		void setY(int nowy_y){// setter
			y=nowy_y;
		}
	  	
		double getX(){// getter
	  		return x;
		}
		
		double getY(){// getter
			return y;
		}

  		Wektor2D (double wsp_x, double wsp_y){// Konstruktor nadający współrzędne
			x=wsp_x;
			y=wsp_y;
		}
		
		Wektor2D operator+(Wektor2D wekt2){// dodawanie wektorów
		    double wynik_x=x+wekt2.x;
		    double wynik_y=y+wekt2.y;
		    
		    Wektor2D wynik(wynik_x, wynik_y);
		    return wynik;
		}
		
		double operator*(Wektor2D wynik){// iloczyn skalarny
		    double skalar_xy=x*wynik.x+y*wynik.y;
		    return skalar_xy;
		}
};
