// Nekki.SF2.GUI.SimpleScroll$$LEJPCCHDLBN @ RVA 0x302BCF4

int32_t Nekki_SF2_GUI_SimpleScroll__LEJPCCHDLBN
                  (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_RectTransform_o *__this_00;
  int iVar2;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    iVar1 = UnityEngine_Transform__get_childCount
                      ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    iVar2 = -2;
    if ((__this->fields).GNMNFMOHDMG.fields == (UnityEngine_Vector2_Fields)0x0) {
      iVar2 = -1;
    }
    return iVar2 + iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

