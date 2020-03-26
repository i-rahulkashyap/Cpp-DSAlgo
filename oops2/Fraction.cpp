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
	void print () const{  //Don't Require any argument since we will change the requirement via object calling
	
	cout<<this->numerator<<"/"<<denominator<<endl; 
//here this is optional since there is no name clash due to argument as	
	
	}
//-----------------------------------------FOR CONSTANT FUNCTION DEMONSTRATION------------------------------------------//
	Fraction(){
	
	}
	//GETTER to READ the private data member	
	int getNumerator() const{
		return numerator;	
	}
	int getDenominator() const{
		return denominator;
	}
	//SETTER to WRITE the private data member
	int setNumerator(int n){
		numerator=n;
	}
	int setDenominator(int d){
		denominator=d;
	}
//--------------------------------------------CONSTANT FUNCTION SNIPPET ENDS HERE------------------------------------//
	
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
//______________________________________________OPERATOR OVERLOADING BEGINS______________________________________________//
	//ADD
	//MULTIPLY
	//check i.e ==
	//preincrement ++f1;
	//postincrement f1++; nesting here make no sense since (f1++)++ becoz f1++ if f1 and again ++ of this will be f1 
	//+=...... i.e f1+=f2; add and updating the result in this
	

	//ADD f3=f1+f2;
	//this function can be const since it is not making any changes into "this" 
	Fraction operator+(Fraction const &f2) const{
		int lcm=denominator *f2.denominator;
		int x=lcm/denominator;
		int y=lcm/f2.denominator;
		int num=x*numerator +(y * f2.numerator);
		
		Fraction fNew(num,lcm);
		fNew.simplify();
		return fNew;
	}
	
	//Multiply 
	//it is also can be constant
	Fraction operator*(Fraction const &f2) const{
	int n=numerator*f2.numerator;
	int d=denominator*f2.denominator;
	Fraction fNew(n,d);
	fNew.simplify();
	return fNew;
	
	}
	
	//Double equal check ==
	//this function can also be a const
	bool operator==(Fraction const &f2) const{
		return(numerator==f2.numerator && denominator==f2.denominator);
	
	}
	
	//preincrement
	//this function can not be const since no argument so changes will be reflected back to the calling object that is via "this" change will done
	//can also be retured as reference to avoid buffer
	Fraction& operator++(){
		numerator=numerator+denominator; //here change in this ka numerator;
	simplify();
	return *this;
	
	}
	
	//PostIncrement
	Fraction operator++(int){
	//here change will be reflected to same object and passed the previous value 
	Fraction fNew(numerator,denominator); //passed before change
	numerator =numerator+denominator; //general change
	simplify(); //simplify on changed (on "this")
	fNew.simplify(); //simplify on passed
	return fNew;
	
	
	
	}
	//+=
	Fraction operator+=(Fraction const &f2){
		int lcm=denominator *f2.denominator;
		int x=lcm/denominator;
		int y=lcm/f2.denominator;
		int num=x*numerator+ (y * f2.numerator);
		numerator =num;
		denominator=lcm;
		simplify();
		
		return *this;
	
	
	}
	











//______________________________________________OPERATOR OVERLOADING ENDS HERE___________________________________________//
};
