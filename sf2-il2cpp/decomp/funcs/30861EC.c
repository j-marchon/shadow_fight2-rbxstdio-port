// Nekki.SF2.GUI.Fight.ActivePerkItem$$GPFDBPGPKFM @ RVA 0x30861EC

void Nekki_SF2_GUI_Fight_ActivePerkItem__GPFDBPGPKFM
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar2;
  int local_14;
  
  pNVar1 = (__this->fields)._stackCount;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive
              (__this_00,0 < (__this->fields)._GHKKDOAIBFM_k__BackingField,(MethodInfo *)0x0);
    local_14 = (__this->fields)._GHKKDOAIBFM_k__BackingField;
    if (0 < local_14) {
      pNVar1 = (__this->fields)._stackCount;
      pSVar2 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
      if (pNVar1 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03186268;
      (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                (pNVar1,pSVar2,(pNVar1->klass->vtable)._75_set_text.method);
    }
    return;
  }
LAB_03186268:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

