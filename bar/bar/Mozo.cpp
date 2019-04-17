using namespace std;
#include "Cliente.cpp"
class Mozo: public Persona{
	private:
		int id;
		string turno;
	public:
		Mozo(string nombre, string apellido, int dni, int id, string turno):Persona(nombre,apellido,dni){
			this->id= id;
			this->turno = turno;}

		Mozo():Persona(){
		}



		void set_id(int id){
			this->id=id;}

		void set_turno(string turno){
			this->turno=turno;}

		int get_id() const{
			return id;}
		string get_turno() const{
			return turno;
		}
		virtual string toString(){
			stringstream s;
			s<<"Soy Mozo.\n";
			s<<Persona::toString();
			s<<" ID: "<<id<<", Turno: "<<turno<<"\n";
			return s.str();
		}
};
Mozo mo[6];

Mozo b;
int m;

void n_mozo(){
	int dni, id;
	string nombre, apellido,turno;
	cout<<"Ingrese cuantos Mozo quiere cargar: \n";
	cin>>m;
	for (int w = 0; w < m; w++) {
			cout<<"Ingrese el nombre del Mozo ("<<w+1<<"): \n";
			cin>>nombre;
			mo[w].set_nombre(nombre);
			cout<<"Ingrese el apellido del mozo: \n";
			cin>>apellido;
			mo[w].set_apellido(apellido);
			cout<<"Ingrese el dni del mozo: \n";
			cin>>dni;
			mo[w].set_dni(dni);
			cout<<"Ingrese el Turno del mozo: \n";
			cin>>turno;
			mo[w].set_turno(turno);
			cout<<"Ingrese el I.D del mozo: \n";
			cin>>id;
			mo[w].set_id(id);
			cout<<mo[w].toString();
	}
}
void n_mo(){
	int dni, id;
	string nombre, apellido,turno;
			cout<<"Ingrese el nombre del Mozo : \n";
			cin>>nombre;
			b.set_nombre(nombre);
			cout<<"Ingrese el apellido del mozo: \n";
			cin>>apellido;
			b.set_apellido(apellido);
			cout<<"Ingrese el dni del mozo: \n";
			cin>>dni;
			b.set_dni(dni);
			cout<<"Ingrese el Turno del mozo: \n";
			cin>>turno;
			b.set_turno(turno);
			cout<<"Ingrese el I.D del mozo: \n";
			cin>>id;
			b.set_id(id);
			cout<<b.toString();

}

void mostrar_mozo(){
	for (int w = 0; w < m; w++) {
	cout<<"Datos del mozo ("<<w<<")\n";
	cout<<"---------------------------\n";
	cout<<mo[w].toString();
	cout<<"---------------------------\n";
	}
}
