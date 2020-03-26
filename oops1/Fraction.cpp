class Fraction{
	private:
	//Numerator
	//Denominator
	int numerator;
	int denominator;
	public:
	//Constructor
	Fraction(int numerator,int denominator){
	this->numerator=numerator; //means this ke baad wala numerator is class properties and RHS wala is value came from main via object creation;
	this->denominator=denominator;	
	}
	//Print function
	void print(){  //Don't Require any argument since we will change the requirement via object calling
	
	cout<<this->numerator<<"/"<<denominator<<endl; //here this is option since there is no name clash due to argument as	
	
	}
	void simplify(){
	int gcd=1;
	int j=min(numerator,denominator);
	for(int i=1;i<gcd;i++){
		gcd=i;	
	}
		this->numerator=numerator/gcd;
		this->denominator=denominator/gcd;
	}
	//const(to avoid changes) reference (to avoid copying)
	void add(Fraction const & f2){   //f2 is of type Fraction not int becoz when we call this function we are adding two object not normal variable and also it's intutive that f2 contain both it's 	numerator and denominator
			int lcm=denominator*(f2.denominator);
			int x=lcm/(denominator);
			int y=lcm/(f2.denominator);
			numerator=x*numerator+(y*(f2.numerator));  //yaha x*(this->numerator) likh sakte hain
			denominator=lcm;
			simplify();
	}
	void multiply(Fraction const& f2){
		numerator=numerator*f2.numerator;
		denominator=denominator*f2.denominator;
		simplify();
	}
};
