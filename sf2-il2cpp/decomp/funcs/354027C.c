// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$.ctor @ RVA 0x354027C

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  System_Action_string__o **ppSVar1;
  System_Action_o **ppSVar2;
  System_Action_string__o *pSVar3;
  System_Action_o *pSVar4;
  UnityEngine_Color_o UVar5;
  
  if ((DAT_04568af1 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_CNMLPFGBFED__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_EAHKMGLBGHL__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo);
    DAT_04568af1 = 1;
  }
  UVar5 = CFBGPBCDAGA__NFFPCFGDOKG(0xff,0xd9,0xa0,0xff,(MethodInfo *)0x0);
  (__this->fields)._textColor.fields.r = UVar5.fields.r;
  (__this->fields)._textColor.fields.g = UVar5.fields.g;
  (__this->fields)._textColor.fields.b = UVar5.fields.b;
  (__this->fields)._textColor.fields.a = UVar5.fields.a;
  if ((Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->static_fields->__9__24_0;
  if (pSVar3 == (System_Action_string__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->static_fields->__9__24_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  ppSVar1 = &(__this->fields).OnClosedOkAction;
  *ppSVar1 = pSVar3;
  thunk_FUN_01c20e04(ppSVar1,pSVar3);
  if ((Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->static_fields->__9__24_1;
  if (pSVar4 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->static_fields->__9__24_1;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
  }
  ppSVar2 = &(__this->fields).OnClosedCancelAction;
  *ppSVar2 = pSVar4;
  thunk_FUN_01c20e04(ppSVar2,pSVar4);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

