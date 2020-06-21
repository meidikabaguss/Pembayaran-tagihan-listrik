#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	pembayarantagihanlistrik::MyForm form;
	Application::Run(% form);
}

