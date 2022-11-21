#include "pch.h"
#include "CLservice.h"
#include "CAD.h"

NS_Comp_Data::CLcad::CLcad(void)
{
	this->sCnx = "Data Source = DEKSTOP-ANGEL\\SQLEXPRESS;Initial Catalog = prosit_6;Integrated Security=true;";

	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();
	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_Comp_Data::CLcad::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);
	return this->oDs;
}
void NS_Comp_Data::CLcad::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}

int NS_Comp_Data::CLcad::returnID(System::String^ sSql)
{
	int id;
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	sdr = oCmd->ExecuteReader();
	sdr->Read();
	id = sdr->GetInt32(0);
	this->oCnx->Close();
	return id;
}


