using namespace std;
#include "Mozo.cpp"
void mostrar_facturas();
		class Factura{
		private:
		  int fecha;
		  double monto;
		  string tipo;//debito credito efectivo
		  Persona* persona;
			Mozo* mozo;


		public:
		  Factura(int fecha,  double monto, string tipo, Persona* persona, Mozo* mozo ){
		    this->fecha=fecha;
		    this->monto=monto;
		    this->tipo=tipo;
		    this->persona=persona;
		    this->mozo=mozo;
		  }
			Factura(){

			}
		  void setFecha(int fecha){
		    this->fecha=fecha;}

		  int getFecha(){
		    return fecha;}

		  void setMonto(double monto){
		    this->monto=monto;}

		  double getMonto(){
		    return monto;}

		  void setTipo(string tipo){
		    this->tipo=tipo;}

			

		  string getTipo(){
		    return tipo;
		  }

		  virtual string toString(){
		    stringstream s;
		      s<<"Fecha: "<<fecha<<"\nMonto: "<<monto<<"\nForma de pago: "<<tipo<<" Persona: "<<persona<<" Mozo: "<<mozo<<"\n";

		      return s.str();
		    }

		};
Factura fa[5];
int q;

void n_factra(/* arguments */) {
	int dni, id, fecha, id_factura, monto;
	string nombre, apellido,turno, tipo;
	cout<<"ingrese cuantas facuras va a cargar: ";
	cin>>q;
		for (size_t f = 0; f < q; f++) {
			cout<<"Ingrese el Monto: ";
			cin>>monto;
			fa[f].getMonto();
			cout<<"Ingrese Fecha: ";
			cin>>fecha;
			fa[f].getFecha();
			cout<<"Ingrese el Tio(Debito; Credito; Efectivo: ";
			cin>>tipo;
			fa[f].getTipo();
			n_cli();
			//fa[f].setCliente(a);
			n_mo();
		}
		}

void mostrar_facturas(){
		//void n_cli();
		cout<<"------------------------------------------\n";
		cout<<"---------------- Factura -----------------\n";
		cout<<"------------------------------------------\n";
		cout<<"------------- Datos  Cliente -------------\n";
		Persona c("cliente","cliente",55);
		cout<<c.toString();
		cout<<"--------------- Datos Mozo ---------------\n";
		Mozo m("mozo"," mozo",55,41,"noche");
		cout<<m.toString();
		cout<<"------------- Datos  Factura -------------\n";
		Factura f(99,55,"efectivo", &c, &m);
		cout<<f.toString();
		cout<<"------------------------------------------\n";
	}
