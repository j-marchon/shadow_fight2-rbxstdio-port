// Nekki.SF2.GUI.Profile.TricksController$$SizeForRowInTableView @ RVA 0x315546C

float Nekki_SF2_GUI_Profile_TricksController__SizeForRowInTableView
                (Nekki_SF2_GUI_Profile_TricksController_o *__this,
                Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Rect_o UVar2;
  
                    /* try { // try from 03255480 to 033554ab has its CatchHandler @ 0325614c */
  if ((DAT_04566832 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo,GECPJPBIBPN,HAJDGFPLGNK);
    DAT_04566832 = 1;
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
                    /* try { // try from 032554ec to 033554f3 has its CatchHandler @ 032560f0 */
      FUN_01bab8c8();
    }
    UVar2 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    fVar1 = UVar2.fields.m_Height;
    (__this->fields).PFDLJJBHELJ = fVar1;
  }
  return fVar1;
}

