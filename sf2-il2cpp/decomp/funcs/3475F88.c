// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$LHHLFBBBJLD @ RVA 0x3475F88

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               UnityEngine_Transform_o *FPANKOCKNJA,System_String_o *KLEGNFLIAPC,
               Nekki_SF2_GUI_HintBoxAutoKilled_o *BKHPMKPNDGK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  UnityEngine_Vector3_o HHPABFGHALF;
  
                    /* try { // try from 03575f88 to 03675f8b has its CatchHandler @ 03575f94 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575eb0 with catch @ 03575f8c
                       try { // try from 03575f8c to 03675fb7 has its CatchHandler @ 03575d7c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575f84 with catch @ 03575f90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575ea4 with catch @ 03575f94
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03575f88 with catch @ 03575f94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575f80 with catch @ 03575f98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575f4c with catch @ 03575f9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03575f48 with catch @ 03575fa0
                        */
  if ((DAT_04568331 & 1) == 0) {
                    /* try { // try from 03575fb8 to 03675fcf has its CatchHandler @ 03576178 */
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03575fd0 to 03676163 has its CatchHandler @ 03575d7c */
    DAT_04568331 = 1;
  }
  if (KLEGNFLIAPC != (System_String_o *)0x0) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)FPANKOCKNJA,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if (BKHPMKPNDGK != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)BKHPMKPNDGK,(MethodInfo *)0x0);
        __this_01 = (__this->fields).PDHMLFAMNCO;
        if ((__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
           (HOKHHGFLMNA = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           FPANKOCKNJA != (UnityEngine_Transform_o *)0x0)) {
          HHPABFGHALF = UnityEngine_Transform__get_position(FPANKOCKNJA,(MethodInfo *)0x0);
          if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04566664 == '\0') {
            FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
            DAT_04566664 = '\x01';
          }
          if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                                (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,
                                 DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM,-1.0,-1.0,
                                 (MethodInfo *)0x0);
          if (__this_00 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
            Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(__this_00,KLEGNFLIAPC,(MethodInfo *)0x0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

