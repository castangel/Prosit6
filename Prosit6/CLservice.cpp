#include "pch.h"
#include "CLservice.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerUnePersonne(System::String^ dataTableName, System::String^ nom, System::String^ prenom)
{
	System::String^ sql;
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);

	sql = this->oMappTB->SelectByName();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerParId(System::String^ dataTableName, int id)
{
	System::String^ sql;
	this->oMappTB->setId(id);

	sql = this->oMappTB->SelectById();
	return this->oCad->getRows(sql, dataTableName);
}

int NS_Comp_Svc::CLservices::returnid(System::String^ nom, System::String^ prenom) {
	System::String^ sql;
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);

	sql = this->oMappTB->SelectIdName();
	return this->oCad->returnID(sql);

}


System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUneAdresse(System::String^ adresse, System::String^ ville , int cp , int id)
{
	System::String^ sql;

	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCp(cp);
	this->oMappTB->setId(id);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::enleverUneAdresse(int id)
{
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();
	this->oCad->actionRows(sql);

}

void NS_Comp_Svc::CLservices::update_adresse(int id_adresse, System::String^adresse, System::String^ ville,int cp)
{
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCp(cp);
	this->oMappTB->setId(id_adresse);
	System::String^ sql;

	sql = this->oMappTB->UpdateAdresse();
	this->oCad->actionRows(sql);

}

