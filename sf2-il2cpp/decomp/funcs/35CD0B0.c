// Nekki.SF2.GUI.BaseScrollContent$$set_TopSpacing @ RVA 0x35CD0B0

void Nekki_SF2_GUI_BaseScrollContent__set_TopSpacing
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar1;
  
  pUVar1 = (__this->fields)._layout;
  if ((pUVar1 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) &&
     (__this_00 = (pUVar1->fields).super.m_Padding, __this_00 != (UnityEngine_RectOffset_o *)0x0)) {
    UnityEngine_RectOffset__set_top(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

