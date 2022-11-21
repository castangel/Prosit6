
#pragma once

namespace NS_Comp_Data
{
	ref class CLcad
	{
	private:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlCommandBuilder^Cmdb;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
		System::Data::SqlClient::SqlDataReader^ sdr;
	public:
		CLcad(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
		int returnID(System::String^);
	};
}