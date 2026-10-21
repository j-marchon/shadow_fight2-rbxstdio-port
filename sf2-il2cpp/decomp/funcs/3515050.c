// Nekki.SF2.GUI.Common.Hints.HintList$$set_HintAlignment @ RVA 0x3515050

void Nekki_SF2_GUI_Common_Hints_HintList__set_HintAlignment
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method
               )

{
  UnityEngine_UI_LayoutGroup_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._Layout;
  if (__this_00 == (UnityEngine_UI_LayoutGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields).m_ChildAlignment == CJNHFNHJHPE) {
    return;
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Common_Hints_HintList__JODPCNMCILH(__this,method_00);
  return;
}

