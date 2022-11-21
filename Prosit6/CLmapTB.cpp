#include "pch.h"
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::SelectByName(void)
{
	return "SELECT [table_adresse].[adresse],[table_adresse].[ville],[table_adresse].[cp],[table_adresse].[id_adresse] FROM [table_clients] INNER JOIN [prosit_6].[dbo].[table_adresse] ON [table_adresse].id_personne = [table_clients].id_personne WHERE [table_clients].nom = '" + this->nom + "'; ";
}

System::String^ NS_Comp_Mappage::CLmapTB::SelectById(void)
{
	return "SELECT [table_adresse].[adresse],[table_adresse].[ville],[table_adresse].[cp],[table_adresse].[id_adresse] FROM [table_clients] INNER JOIN [prosit_6].[dbo].[table_adresse] ON [table_adresse].id_personne = [table_clients].id_personne WHERE [table_clients].id_personne = '" + this->Id + "'; ";
}

System::String^ NS_Comp_Mappage::CLmapTB::UpdateAdresse(void)
{
	return "UPDATE [table_adresse] SET [table_adresse].[adresse] = '" + this->adresse + "',[table_adresse].[ville]= '" + this->ville + "',[table_adresse].[cp]= '" + this->cp + "' WHERE [table_adresse].id_adresse = '" + this->Id + "'; ";
}

System::String^ NS_Comp_Mappage::CLmapTB::SelectIdName(void)
{
	return "SELECT [table_clients].[id_personne]  FROM [table_clients]  WHERE [table_clients].nom = '" + this->nom + "' and [table_clients].prenom = '" + this->prenom + "'; ";
}
System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT [id_personne], [nom], [prenom] FROM [prosit_6].[dbo].[table_clients]";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO table_adresse (adresse, ville,cp,id_personne) VALUES('" + this->adresse + "','" + this->ville + "','" + this->cp + "','" + this->Id + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM [prosit_6].[dbo].[table_adresse] WHERE [table_adresse].id_adresse='" + this->Id + "';";
}
/*System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "SELECT [table_adresse].[adresse],[table_adresse].[ville],[table_adresse].[cp] FROM [table_clients] INNER JOIN [prosit_6].[dbo].[table_adresse] ON [table_adresse].id_personne = [table_clients].id_personne WHERE [table_clients].id_personne = '" + this->Id + "'; ";
}*/
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void NS_Comp_Mappage::CLmapTB::setVille(System::String^ ville)
{
	this->ville = ville;
}

void NS_Comp_Mappage::CLmapTB::setCp(int cp)
{
	this->cp = cp;
}

void NS_Comp_Mappage::CLmapTB::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }

