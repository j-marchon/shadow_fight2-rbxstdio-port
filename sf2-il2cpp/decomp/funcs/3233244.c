// Nekki.SF2.GUI.Common.HintCanvas$$PKEJAJKKOAN @ RVA 0x3233244

void Nekki_SF2_GUI_Common_HintCanvas__PKEJAJKKOAN
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_HintBox_o *pNVar2;
  
  if ((DAT_04566ff5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ff5 = 1;
  }
  pNVar2 = (__this->fields).DMKLEIPIGKO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).DMKLEIPIGKO;
    if ((pNVar2 != (Nekki_SF2_GUI_HintBox_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

