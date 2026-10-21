// Nekki.SF2.GUI.Common.Hints.HintList$$get_HintAlignment @ RVA 0x35154BC

int32_t Nekki_SF2_GUI_Common_Hints_HintList__get_HintAlignment
                  (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  UnityEngine_UI_LayoutGroup_o *pUVar1;
  
  pUVar1 = (__this->fields)._Layout;
  if (pUVar1 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
    return (pUVar1->fields).m_ChildAlignment;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

