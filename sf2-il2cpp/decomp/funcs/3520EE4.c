// Nekki.SF2.GUI.Scripts.CheckBox$$NKIOJIILDGG @ RVA 0x3520EE4

void Nekki_SF2_GUI_Scripts_CheckBox__NKIOJIILDGG
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_045689c1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045689c1 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._uncheckedSprite;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._uncheckedSprite;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03620f98;
    UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).OIKLOAGFFGO == 1,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._checkedSprite;
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).OIKLOAGFFGO == 0,(MethodInfo *)0x0);
    return;
  }
LAB_03620f98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

