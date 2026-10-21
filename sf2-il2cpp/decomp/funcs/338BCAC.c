// Nekki.SF2.GUI.Menu.MenuScroll$$GetCurrentLength @ RVA 0x338BCAC

float Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength
                (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *__this_00;
  float fVar2;
  UnityEngine_Rect_o UVar3;
  
  iVar1 = (__this->fields).JDNKKGPNHPB;
  __this_00 = Nekki_SF2_GUI_Menu_MenuScroll__get_RectTransform(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar3 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    fVar2 = UVar3.fields.m_Height;
    if (iVar1 != 1) {
      fVar2 = UVar3.fields.m_Width;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

