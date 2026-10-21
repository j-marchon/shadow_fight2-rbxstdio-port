// Nekki.SF2.GUI.LabelAlias$$GOLOBCMKJFJ @ RVA 0x31AE748

void Nekki_SF2_GUI_LabelAlias__GOLOBCMKJFJ(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  int32_t BMLIMNBPGIJ;
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_Font_o *local_18;
  
  if ((DAT_04566b6a & 1) == 0) {
                    /* catch() { ... } // from try @ 032ae734 with catch @ 032ae760 */
                    /* try { // try from 032ae768 to 033ae76f has its CatchHandler @ 032ae784 */
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
                    /* try { // try from 032ae770 to 033ae77b has its CatchHandler @ 032ae5f8 */
    DAT_04566b6a = 1;
    method = extraout_x1;
  }
  local_18 = (UnityEngine_Font_o *)0x0;
                    /* try { // try from 032ae77c to 033ae783 has its CatchHandler @ 032ae784 */
  if (*(char *)&(__this->fields).super.OIHEBGFLFLH != '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ae768 with catch @ 032ae784
                       catch(type#2 @ 00000000) { ... } // from try @ 032ae77c with catch @ 032ae784
                        */
                    /* try { // try from 032ae788 to 033ae8ab has its CatchHandler @ 032ae788
                       catch() { ... } // from try @ 032ae788 with catch @ 032ae788
                       catch() { ... } // from try @ 032ae9e0 with catch @ 032ae788
                       catch() { ... } // from try @ 032aea88 with catch @ 032ae788
                       catch() { ... } // from try @ 032aea90 with catch @ 032ae788
                       catch() { ... } // from try @ 032aeb58 with catch @ 032ae788 */
    BMLIMNBPGIJ = *(int32_t *)((long)&(__this->fields).super.OIHEBGFLFLH + 4);
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo,method);
    }
    bVar1 = KGFBAIBBNNH__EPNEGIJAJHI(BMLIMNBPGIJ,&local_18,(MethodInfo *)0x0);
    if (bVar1) {
      UnityEngine_UI_Text__set_font((UnityEngine_UI_Text_o *)__this,local_18,(MethodInfo *)0x0);
    }
  }
  return;
}

