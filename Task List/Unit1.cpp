//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
	String taskText=TaskInputField->Text;
	TasksListBox->Items->Add(taskText);   //Add tasks to the ListBox
    TaskInputField->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	   int index = Item->Index;
	   TasksListBox->Items->Delete(index); //Deletes Tasks from ListBox
}
//---------------------------------------------------------------------------
