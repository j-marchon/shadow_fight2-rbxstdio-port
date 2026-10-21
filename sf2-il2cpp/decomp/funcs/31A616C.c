// Nekki.SF2.GUI.Profile.TrickSubItem$$BFPADNIMBFK @ RVA 0x31A616C

void Nekki_SF2_GUI_Profile_TrickSubItem__BFPADNIMBFK
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  KCLPNDAPADO_o *pKVar4;
  
  pKVar4 = (__this->fields).MGHHBGMPDEI;
  if ((pKVar4 == (KCLPNDAPADO_o *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty((pKVar4->fields).MEHILFLIMCN,(MethodInfo *)0x0), bVar1))
  {
    pNVar2 = (__this->fields)._KeysDescription;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pNVar2 = (__this->fields)._KeysDescription;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pKVar4 = (__this->fields).MGHHBGMPDEI;
      if ((pKVar4 != (KCLPNDAPADO_o *)0x0) &&
         (pNVar2 = (__this->fields)._KeysDescription, pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0))
      {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,(pKVar4->fields).MEHILFLIMCN,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

