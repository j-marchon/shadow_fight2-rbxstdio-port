// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$FMAEMJENECC @ RVA 0x3426604

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FMAEMJENECC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  BHEDGAKGKPO_StaticFields *pBVar1;
  DG_Tweening_Sequence_o **ppDVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568115 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04568115 = 1;
    method = extraout_x1;
  }
  ppDVar2 = &(__this->fields).NEBFELNKBFG;
  if (*ppDVar2 == (DG_Tweening_Sequence_o *)0x0) {
    return;
  }
  pNVar3 = (__this->fields)._timeLabel;
                    /* try { // try from 03526648 to 0362664f has its CatchHandler @ 0352669c */
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo,method);
                    /* try { // try from 03526658 to 03626667 has its CatchHandler @ 03526698 */
  }
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar1 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* try { // try from 03526668 to 036266b3 has its CatchHandler @ 03526540 */
    (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
              ((pBVar1->FHIAKPJBBCB).fields.r,(pBVar1->FHIAKPJBBCB).fields.g,
               (pBVar1->FHIAKPJBBCB).fields.b,(pBVar1->FHIAKPJBBCB).fields.a,pNVar3,
               (pNVar3->klass->vtable)._23_set_color.method);
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar2,true,(MethodInfo *)0x0);
    *ppDVar2 = (DG_Tweening_Sequence_o *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526658 with catch @ 03526698
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526648 with catch @ 0352669c
                        */
    thunk_FUN_01c20e04(ppDVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035266b4 to 036266b7 has its CatchHandler @ 035266d8 */
  FUN_01bab8c8();
}

