// Nekki.SF2.GUI.Profile.PerksController$$SizeForRowInTableView @ RVA 0x32D1C14

float Nekki_SF2_GUI_Profile_PerksController__SizeForRowInTableView
                (Nekki_SF2_GUI_Profile_PerksController_o *__this,
                Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Rect_o UVar2;
  
                    /* try { // try from 033d1c14 to 034d1c17 has its CatchHandler @ 033d1c40 */
                    /* try { // try from 033d1c18 to 034d1c4f has its CatchHandler @ 033d1954 */
  if ((DAT_0456755b & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo,GECPJPBIBPN,HAJDGFPLGNK);
    DAT_0456755b = 1;
  }
                    /* catch() { ... } // from try @ 033d1c14 with catch @ 033d1c40 */
  fVar1 = (__this->fields).PFDLJJBHELJ;
  if (fVar1 <= 0.0) {
    __this_00 = (__this->fields).super._CellPrefab;
                    /* try { // try from 033d1c50 to 034d1c57 has its CatchHandler @ 033d1c6c */
                    /* try { // try from 033d1c58 to 034d1c63 has its CatchHandler @ 033d1954 */
                    /* try { // try from 033d1c64 to 034d1c6b has its CatchHandler @ 033d1c6c */
                    /* catch() { ... } // from try @ 033d1c50 with catch @ 033d1c6c
                       catch() { ... } // from try @ 033d1c64 with catch @ 033d1c6c */
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

