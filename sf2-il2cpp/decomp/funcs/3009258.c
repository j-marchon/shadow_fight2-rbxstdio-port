// Nekki.SF2.GUI.Shop.InfoPanelContent$$HMDPBFDLELC @ RVA 0x3009258

void Nekki_SF2_GUI_Shop_InfoPanelContent__HMDPBFDLELC
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method
               )

{
  Nekki_SF2_GUI_LabelAlias_o **ppNVar1;
  IconLabelButton_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
                    /* try { // try from 03109260 to 0320926f has its CatchHandler @ 03109428 */
                    /* try { // try from 03109270 to 0320928f has its CatchHandler @ 03109438 */
  if ((DAT_04565b69 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
                    /* try { // try from 03109290 to 0320929b has its CatchHandler @ 03109424 */
    FUN_01bab630(&StringLiteral_12052);
    DAT_04565b69 = 1;
  }
  ppNVar1 = &(__this->fields).FLLKPPCFJAG;
                    /* try { // try from 031092ac to 032092b3 has its CatchHandler @ 03109420 */
  if ((__this->fields).FLLKPPCFJAG == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    __this_00 = (__this->fields).PPBLJHFNPKG;
    if (__this_00 == (IconLabelButton_o *)0x0) goto LAB_03109350;
    pNVar2 = (Nekki_SF2_GUI_LabelAlias_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)__this_00,
                        Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
    *ppNVar1 = pNVar2;
    thunk_FUN_01c20e04(ppNVar1,pNVar2);
  }
                    /* try { // try from 031092dc to 032092eb has its CatchHandler @ 03109448 */
  if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = *ppNVar1;
                    /* try { // try from 031092fc to 032092ff has its CatchHandler @ 03109444 */
                    /* try { // try from 03109300 to 032093a3 has its CatchHandler @ 0310944c */
  if (FEPCHKMAIBL_TypeInfo->static_fields->JKIEAGJNDFE < LFJGFLNMBMC) {
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03109328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,(__this->fields).OLHENOKIMKB,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
  }
  else if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,StringLiteral_12052,(MethodInfo *)0x0);
    return;
  }
LAB_03109350:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

