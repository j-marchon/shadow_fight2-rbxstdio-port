// Nekki.SF2.GUI.Fight.ComboItem$$UpdateCount @ RVA 0x34B34FC

void Nekki_SF2_GUI_Fight_ComboItem__UpdateCount
               (Nekki_SF2_GUI_Fight_ComboItem_o *__this,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  int32_t local_14;
  
  pNVar2 = (__this->fields)._label;
  local_14 = DFIBGGDJPLM;
  pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
    pNVar2 = (__this->fields)._label;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Fight_ComboItem__UpdateSize(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

