#pragma once
#include "CLmapTB.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerUnePersonne(System::String^, System::String^, System::String^);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		System::Data::DataSet^ selectionnerParId(System::String^, int);
		void ajouterUneAdresse(System::String^, System::String^, int, int);
		void enleverUneAdresse(int);
		int returnid(System::String^, System::String^);
		void update_adresse(int id_adresse, System::String^ adresse, System::String^ ville, int cp);

	};
}
