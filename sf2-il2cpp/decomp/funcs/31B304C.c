// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$HAHOEJMBGIP @ RVA 0x31B304C

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__HAHOEJMBGIP
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,bool CMPKOOEKFKF,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  
  if ((DAT_04566b8f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b8f = 1;
  }
  pUVar2 = (__this->fields)._hintContent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._hintContent;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pUVar2 = (__this->fields)._hintContent;
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CMPKOOEKFKF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

