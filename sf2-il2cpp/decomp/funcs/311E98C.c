// Nekki.SF2.GUI.Profile.SealsController$$SizeForRowInTableView @ RVA 0x311E98C

float Nekki_SF2_GUI_Profile_SealsController__SizeForRowInTableView
                (Nekki_SF2_GUI_Profile_SealsController_o *__this,
                Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Rect_o UVar2;
  
  if ((DAT_0456660f & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo,GECPJPBIBPN,HAJDGFPLGNK);
    DAT_0456660f = 1;
  }
  fVar1 = (__this->fields).PFDLJJBHELJ;
  if (fVar1 <= 0.0) {
    __this_00 = (__this->fields).super._CellPrefab;
    if (((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
        (__this_01 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
        __this_01 == (UnityEngine_RectTransform_o *)0x0)) ||
       (__this_01->klass != UnityEngine_RectTransform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar2 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    fVar1 = UVar2.fields.m_Height;
    (__this->fields).PFDLJJBHELJ = fVar1;
  }
  return fVar1;
}

