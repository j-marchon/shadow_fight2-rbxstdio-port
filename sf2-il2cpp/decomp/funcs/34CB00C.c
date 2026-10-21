// Nekki.SF2.GUI.BaseScrollItem$$EnableVisibility @ RVA 0x34CB00C

void Nekki_SF2_GUI_BaseScrollItem__EnableVisibility
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  UnityEngine_RectTransform_o *pUVar2;
  
  if ((DAT_04568668 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568668 = 1;
  }
  pUVar2 = (__this->fields)._visibilityRoot;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._visibilityRoot;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(CMMIJCJOBBF,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

