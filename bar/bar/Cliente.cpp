using namespace std;
void mostrar_cliente();
void n_cliente();
class Persona{
	protected:
		string nombre;
		string apellido;
		int dni;

	public:
		Persona(string nombre, string apellido, int dni){
			this->nombre=nombre;
			this->apellido=apellido;
			this->dni=dni;
		}
		Persona(){
		}
		virtual string toString(){
			stringstream s;
			s<<"Nombre: "<<nombre<<", Apellido: "<<apellido<<", dni: "<<dni<<"\n";
			return s.str();}

		void set_nombre(string nombre){
			this->nombre = nombre;}

		void set_apellido(string apellido){
			this->apellido = apellido;}

		void set_dni(int dni){
			this->dni=dni;}

		string get_nombre() const{
				return nombre;}

		string get_apellido() const{
				return apellido;}

		int get_dni() const{
				return dni;}
};
	Persona ar[6];
	Persona a;
	int c;

void n_cliente(){
	int dni;
	string nombre, apellido;
	cout<<"Ingrese cuantos cliente quiere cargar: \n";
	cin>>c;
	for (int w = 0; w < c; w++) {
			cout<<"Ingrese el nombre del cliente ("<<w+1<<"): \n";
			cin>>nombre;
			ar[w].set_nombre(nombre);
			cout<<"Ingrese el apellido del clinete: \n";
			cin>>apellido;
			ar[w].set_apellido(apellido);
			cout<<"Ingrese el dni del clinete: \n";
			cin>>dni;
			ar[w].set_dni(dni);
			cout<<ar[w].toString();
	}
}
void n_cli(){
	int dni;
	string nombre, apellido;
			cout<<"Ingrese el nombre del cliente: \n";
			cin>>nombre;
			a.set_nombre(nombre);
			cout<<"Ingrese el apellido del clinete: \n";
			cin>>apellido;
			a.set_apellido(apellido);
			cout<<"Ingrese el dni del clinete: \n";
			cin>>dni;
			a.set_dni(dni);
			cout<<a.toString();
}

void mostrar_cliente(){
	for (int w = 0; w < c; w++) {
	cout<<"Datos del cliente ("<<w<<")\n";
	cout<<"---------------------------\n";
	cout<<ar[w].toString();
	cout<<"---------------------------\n";
	}
}
