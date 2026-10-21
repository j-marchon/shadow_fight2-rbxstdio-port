// Nekki.SF2.GUI.Scripts.CheckBox$$.ctor @ RVA 0x352115C

void Nekki_SF2_GUI_Scripts_CheckBox___ctor
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  System_Action_CheckBox_EKFFAMKMBIH__o **ppSVar1;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar2;
  UnityEngine_Color_o UVar3;
  
  if ((DAT_045689c0 & 1) == 0) {
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scripts_CheckBox_<>c_KMPAHBPEMPC__);
    FUN_01bab630(&Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo);
    DAT_045689c0 = 1;
  }
  UVar3 = CFBGPBCDAGA__NFFPCFGDOKG(0x96,0x96,0x96,200,(MethodInfo *)0x0);
  (__this->fields)._disabledColor.fields.r = UVar3.fields.r;
  (__this->fields)._disabledColor.fields.g = UVar3.fields.g;
  (__this->fields)._disabledColor.fields.b = UVar3.fields.b;
  (__this->fields)._disabledColor.fields.a = UVar3.fields.a;
  UVar3 = CFBGPBCDAGA__NFFPCFGDOKG(0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  (__this->fields)._enabledColor.fields.r = UVar3.fields.r;
  (__this->fields)._enabledColor.fields.g = UVar3.fields.g;
  (__this->fields)._enabledColor.fields.b = UVar3.fields.b;
  (__this->fields)._enabledColor.fields.a = UVar3.fields.a;
  if ((Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->static_fields->__9__20_0;
  if (pSVar2 == (System_Action_CheckBox_EKFFAMKMBIH__o *)0x0) {
    if ((Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
             thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Scripts_CheckBox_<>c_TypeInfo->static_fields->__9__20_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  (__this->fields).LCDOFOMLNLI = pSVar2;
  thunk_FUN_01c20e04(&(__this->fields).LCDOFOMLNLI,pSVar2);
  SFButton___ctor((SFButton_o *)__this,(MethodInfo *)0x0);
  return;
}

