// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$OGJEAHMIGLK @ RVA 0x3427E48

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__OGJEAHMIGLK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int32_t DFIBGGDJPLM,
               int32_t NJFJAKIHMEO,MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  int iVar2;
  
                    /* try { // try from 03527e68 to 03627e6f has its CatchHandler @ 03527ef0 */
  if ((DAT_04568128 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2273);
    FUN_01bab630(&StringLiteral_2433);
                    /* try { // try from 03527e8c to 03627ea7 has its CatchHandler @ 03527ef4 */
    FUN_01bab630(&StringLiteral_2179);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 03527ea8 to 03627edb has its CatchHandler @ 03527dc4 */
    FUN_01bab630(&StringLiteral_1377);
    DAT_04568128 = 1;
  }
  pSVar1 = StringLiteral_1;
  iVar2 = DFIBGGDJPLM;
  if (0 < DFIBGGDJPLM) {
    do {
                    /* try { // try from 03527edc to 03627edf has its CatchHandler @ 03527eec */
      pSVar1 = System_String__Concat(pSVar1,StringLiteral_1377,(MethodInfo *)0x0);
                    /* try { // try from 03527ee0 to 03627ee3 has its CatchHandler @ 03527ee8 */
      iVar2 = iVar2 + -1;
                    /* try { // try from 03527ee4 to 03627f0b has its CatchHandler @ 03527dc4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527ee0 with catch @ 03527ee8
                        */
    } while (iVar2 != 0);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527edc with catch @ 03527eec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527e68 with catch @ 03527ef0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527e8c with catch @ 03527ef4
                        */
  if (DFIBGGDJPLM < NJFJAKIHMEO) {
                    /* try { // try from 03527f0c to 03627f0f has its CatchHandler @ 03527f38 */
                    /* try { // try from 03527f10 to 03627f47 has its CatchHandler @ 03527dc4 */
    pSVar1 = System_String__Concat(pSVar1,StringLiteral_2273,(MethodInfo *)0x0);
    iVar2 = NJFJAKIHMEO - DFIBGGDJPLM;
    do {
      pSVar1 = System_String__Concat(pSVar1,StringLiteral_1377,(MethodInfo *)0x0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
                    /* catch() { ... } // from try @ 03527f0c with catch @ 03527f38 */
    pSVar1 = System_String__Concat(pSVar1,StringLiteral_2179,(MethodInfo *)0x0);
  }
                    /* try { // try from 03527f48 to 03627f4f has its CatchHandler @ 03527f64 */
  __this_00 = (__this->fields)._waitingResultLabel;
                    /* try { // try from 03527f50 to 03627f5b has its CatchHandler @ 03527dc4 */
  pSVar1 = System_String__Concat(StringLiteral_2433,pSVar1,(MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03527f5c to 03627f63 has its CatchHandler @ 03527f64 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03527f48 with catch @ 03527f64
                       catch(type#2 @ 00000000) { ... } // from try @ 03527f5c with catch @ 03527f64
                        */
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,pSVar1,(MethodInfo *)0x0);
  return;
}

