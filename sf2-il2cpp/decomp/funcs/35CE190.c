// Nekki.SF2.GUI.BaseScrollContent$$get_TopSpacing @ RVA 0x35CE190

int32_t Nekki_SF2_GUI_BaseScrollContent__get_TopSpacing
                  (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar2;
  
  pUVar2 = (__this->fields)._layout;
  if ((pUVar2 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) &&
     (__this_00 = (pUVar2->fields).super.m_Padding, __this_00 != (UnityEngine_RectOffset_o *)0x0)) {
    iVar1 = UnityEngine_RectOffset__get_top(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

