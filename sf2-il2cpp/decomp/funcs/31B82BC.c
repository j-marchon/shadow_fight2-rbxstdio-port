// Nekki.SF2.GUI.Map.MapButtonViewBase$$OPOJHCGBBBM @ RVA 0x31B82BC

void Nekki_SF2_GUI_Map_MapButtonViewBase__OPOJHCGBBBM
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_TouchPhase_array *MJPJJMNNMGC;
  
  if ((DAT_04566bc7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_TouchPhase___TypeInfo);
    DAT_04566bc7 = 1;
  }
  if ((__this->fields).AIBKGCEBLND < 1) {
    pUVar2 = (__this->fields)._hintRoot;
    if ((pUVar2 == (UnityEngine_RectTransform_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) {
LAB_032b83ac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar1) {
      MJPJJMNNMGC = (UnityEngine_TouchPhase_array *)
                    FUN_01bab718(UnityEngine_TouchPhase___TypeInfo,1);
      bVar1 = HPHIGFJMKAC__ENKOEPDLPCP(MJPJJMNNMGC,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Application__get_isEditor((MethodInfo *)0x0);
        if ((!bVar1) || (bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0), !bVar1))
        goto LAB_032b8394;
      }
      pUVar2 = (__this->fields)._hintRoot;
      if ((pUVar2 == (UnityEngine_RectTransform_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032b83ac;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      (__this->fields).AIBKGCEBLND = 0;
    }
  }
LAB_032b8394:
  (__this->fields).AIBKGCEBLND = (__this->fields).AIBKGCEBLND + -1;
  return;
}

