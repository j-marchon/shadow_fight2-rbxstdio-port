// Nekki.SF2.GUI.Map.MapButtonViewBase$$DFAIHDKINDN @ RVA 0x31B8B44

void Nekki_SF2_GUI_Map_MapButtonViewBase__DFAIHDKINDN
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  
  __this_00 = (__this->fields)._hintButton;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    SFButton__set_IsFlashing((SFButton_o *)__this_00,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._hintRoot;
    if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      (__this->fields).super.DFGLKIENEIH = true;
      (__this->fields).AIBKGCEBLND = 2;
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

