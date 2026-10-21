// Nekki.SF2.GUI.TableViewScroll$$get_Size @ RVA 0x31110BC

float Nekki_SF2_GUI_TableViewScroll__get_Size
                (Nekki_SF2_GUI_TableViewScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *__this_00;
  float fVar2;
  UnityEngine_Rect_o UVar3;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    iVar1 = (__this->fields).HBFGPJPFNBG;
    UVar3 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    fVar2 = UVar3.fields.m_Width;
    if (iVar1 != 1) {
      fVar2 = UVar3.fields.m_Height;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

