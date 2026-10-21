// Nekki.SF2.GUI.Dialogs.SimpleDialog$$.ctor @ RVA 0x301EE70

void Nekki_SF2_GUI_Dialogs_SimpleDialog___ctor
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04565c36 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04565c36 = 1;
  }
  (__this->fields).DHHJFNPJFLF = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).ENHHJMDENNI = true;
  ppSVar1 = &(__this->fields).JKBAACEKGJF;
  *ppSVar1 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar1);
  (__this->fields).RepositionCheckbox_X = true;
  (__this->fields).RepositionCheckbox_Y = true;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  (__this->fields).AdditionalTextSize.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  (__this->fields).FJBAGGCNDLF = 100.0;
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

