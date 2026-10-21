// Nekki.SF2.GUI.TableView$$MAGEKPGDFOA @ RVA 0x30D9430

float Nekki_SF2_GUI_TableView__MAGEKPGDFOA(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  float fVar1;
  UnityEngine_Rect_o UVar2;
  
  if ((DAT_04566355 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566355 = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00->klass == UnityEngine_RectTransform_TypeInfo)) {
    UVar2 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    fVar1 = UVar2.fields.m_Height;
    if ((__this->fields).tableViewOrientation != 0) {
      fVar1 = UVar2.fields.m_Width;
    }
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

