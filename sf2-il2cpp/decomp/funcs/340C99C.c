// MGNPHCAAEIO$$HMGOIPKIDBB @ RVA 0x340C99C

void MGNPHCAAEIO__HMGOIPKIDBB(MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this;
  KKLJIDJBFEI_o *pKVar2;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar3;
  EGMONPGHHDP_o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar4;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar5;
  
  if ((DAT_04568042 & 1) == 0) {
                    /* try { // try from 0350c9bc to 0360c9c7 has its CatchHandler @ 0350c7e0 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 0350c9c8 to 0360c9cf has its CatchHandler @ 0350c9d0 */
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0350c994 with catch @ 0350c9d0
                       catch(type#2 @ 00000000) { ... } // from try @ 0350c9c8 with catch @ 0350c9d0
                        */
                    /* try { // try from 0350c9d4 to 0360ca13 has its CatchHandler @ 0350c9d4
                       catch() { ... } // from try @ 0350c9d4 with catch @ 0350c9d4
                       catch() { ... } // from try @ 0350ca60 with catch @ 0350c9d4
                       catch() { ... } // from try @ 0350ca98 with catch @ 0350c9d4
                       catch() { ... } // from try @ 0350caf8 with catch @ 0350c9d4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568042 = 1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
                    /* try { // try from 0350ca14 to 0360ca23 has its CatchHandler @ 0350ca68 */
  pNVar5 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0350ca3c to 0360ca47 has its CatchHandler @ 0350ca60 */
  if (!bVar1) {
                    /* try { // try from 0350ca80 to 0360ca97 has its CatchHandler @ 0350caf0 */
    return;
  }
  __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (NDPMLPGANCI_o *)0x0) {
    bVar1 = NDPMLPGANCI__FHLFKIOFBKL(__this,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 0350ca5c to 0360ca5f has its CatchHandler @ 0350ca64 */
      pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350ca3c with catch @ 0350ca60
                       try { // try from 0350ca60 to 0360ca7f has its CatchHandler @ 0350c9d4 */
      if (pKVar2 == (KKLJIDJBFEI_o *)0x0) goto LAB_0350cb30;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350ca5c with catch @ 0350ca64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350ca14 with catch @ 0350ca68
                        */
      bVar1 = (pKVar2->fields).super._MGGBEPKMPCF_k__BackingField != false;
    }
    else {
      bVar1 = false;
    }
                    /* try { // try from 0350ca98 to 0360cadf has its CatchHandler @ 0350c9d4 */
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar3 = LPGPNBGHDBD__OICLMNIHIJJ((MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if (__this_00 != (EGMONPGHHDP_o *)0x0) {
      pJVar4 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0350cae0 to 0360caef has its CatchHandler @ 0350caf0 */
      if (DAT_04565b84 == '\0') {
                    /* catch() { ... } // from try @ 0350ca80 with catch @ 0350caf0
                       catch() { ... } // from try @ 0350cae0 with catch @ 0350caf0 */
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                    /* try { // try from 0350caf4 to 0360caf7 has its CatchHandler @ 0350cb00 */
                    /* try { // try from 0350caf8 to 0360cb03 has its CatchHandler @ 0350c9d4 */
        DAT_04565b84 = '\x01';
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0350caf4 with catch @ 0350cb00
                        */
      pNVar5 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (pNVar5 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        Nekki_SF2_GUI_Menu_MainMenu__ShowDojoProgressBar
                  (pNVar5,(bool)(bVar1 & (pJVar3 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0 ||
                                         pJVar4 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0)),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0350cb30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

