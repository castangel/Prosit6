#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapTB
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ adresse;
		System::String^ ville;
		int cp;
	public:
		System::String^ Select(void);
		System::String^ SelectByName(void);
		System::String^ SelectById(void);
		System::String^ UpdateAdresse(void);
		System::String^ SelectIdName(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		//System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setAdresse(System::String^);
		void setVille(System::String^);
		void setCp(int);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
	};
}
