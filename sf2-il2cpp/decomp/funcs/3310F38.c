// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$OnScroll @ RVA 0x3310F38

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OnScroll
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_BaseScrollItem_o **ppNVar2;
  Nekki_SF2_GUI_BaseScrollItem_o *pNVar3;
  
  if ((DAT_045677af & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045677af = 1;
  }
  ppNVar2 = &(__this->fields).GANIJIIKPNM;
  pNVar3 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = *ppNVar2;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)IKKAMAMLIKA,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
  }
  (__this->fields).GANIJIIKPNM = IKKAMAMLIKA;
  thunk_FUN_01c20e04(ppNVar2,IKKAMAMLIKA);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__UpdateData(__this,false,method_00);
  return;
}

