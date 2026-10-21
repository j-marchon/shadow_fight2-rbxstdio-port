// Nekki.SF2.GUI.SimpleScroll$$get_IsXcenter @ RVA 0x302AE94

bool Nekki_SF2_GUI_SimpleScroll__get_IsXcenter
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
    bVar1 = Util__JFJCDAJGFKD(UVar2.fields.x,0.5,0.01,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

