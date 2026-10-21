// Nekki.SF2.GUI.Map.RaidQuestsButton$$EFJFDCNMFJC @ RVA 0x3486384

void Nekki_SF2_GUI_Map_RaidQuestsButton__EFJFDCNMFJC
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  GALHNMPIEHA_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *HCAAAAMDCNO;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *x;
  
  if ((DAT_045683b1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_18262);
    FUN_01bab630(&StringLiteral_19891);
    FUN_01bab630(&StringLiteral_18259);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_10836);
    FUN_01bab630(&StringLiteral_19892);
    DAT_045683b1 = 1;
    method = extraout_x1;
  }
  x = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  UnityEngine_UI_Selectable__set_transition
            ((UnityEngine_UI_Selectable_o *)__this,2,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (__this_00 != (GALHNMPIEHA_o *)0x0) {
    bVar3 = GALHNMPIEHA__KCAJCGDCFCA(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03586498 to 0368649b has its CatchHandler @ 035864e4 */
    puVar1 = &StringLiteral_18259;
                    /* try { // try from 0358649c to 0368649f has its CatchHandler @ 035864c8 */
                    /* try { // try from 035864a0 to 036864a3 has its CatchHandler @ 035864e4 */
                    /* try { // try from 035864a4 to 036864a7 has its CatchHandler @ 03585cbc */
                    /* try { // try from 035864a8 to 036864ab has its CatchHandler @ 035864b4 */
    if (!bVar3) {
      puVar1 = &StringLiteral_19891;
    }
                    /* try { // try from 035864ac to 036864fb has its CatchHandler @ 03585cbc */
                    /* catch() { ... } // from try @ 035864a8 with catch @ 035864b4 */
                    /* catch() { ... } // from try @ 03586240 with catch @ 035864b8 */
                    /* catch() { ... } // from try @ 03586274 with catch @ 035864bc */
    puVar2 = (undefined8 *)&StringLiteral_18262;
                    /* catch() { ... } // from try @ 03586250 with catch @ 035864c0 */
    if (!bVar3) {
      puVar2 = &StringLiteral_19892;
    }
                    /* catch() { ... } // from try @ 03586268 with catch @ 035864c4 */
    pSVar4 = System_String__Concat(StringLiteral_10836,(System_String_o *)*puVar1,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 0358649c with catch @ 035864c8 */
                    /* catch() { ... } // from try @ 03586284 with catch @ 035864cc */
                    /* catch() { ... } // from try @ 0358628c with catch @ 035864d0 */
                    /* catch() { ... } // from try @ 035862a4 with catch @ 035864d4 */
                    /* catch() { ... } // from try @ 03586204 with catch @ 035864d8 */
                    /* catch() { ... } // from try @ 035861a8 with catch @ 035864dc */
                    /* catch() { ... } // from try @ 035862b0 with catch @ 035864e0 */
                    /* catch() { ... } // from try @ 03586498 with catch @ 035864e4
                       catch() { ... } // from try @ 035864a0 with catch @ 035864e4 */
    Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092,pSVar4,
               (MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,StringLiteral_14092,pSVar4,
               (MethodInfo *)0x0);
    pSVar4 = StringLiteral_14092;
                    /* try { // try from 035864fc to 036864ff has its CatchHandler @ 0358650c */
                    /* catch() { ... } // from try @ 035864fc with catch @ 0358650c */
    HCAAAAMDCNO = System_String__Concat
                            (StringLiteral_10836,(System_String_o *)*puVar2,(MethodInfo *)0x0);
                    /* try { // try from 0358651c to 03686583 has its CatchHandler @ 03586598 */
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,pSVar4,HCAAAAMDCNO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

