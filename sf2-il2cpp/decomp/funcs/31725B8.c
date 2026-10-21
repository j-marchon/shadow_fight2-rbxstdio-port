// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$GIENGNEGHPJ @ RVA 0x31725B8

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__GIENGNEGHPJ
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_00;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar1;
  EEOMEMBBGNA_o *__this_02;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  GKLPDMLELJF_o *pGVar2;
  System_Action_EOLFEKNCPLM__o *pSVar3;
  
  if ((DAT_04566934 & 1) == 0) {
                    /* try { // try from 032725e0 to 033725e7 has its CatchHandler @ 03272694 */
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
                    /* try { // try from 032725e8 to 0337260f has its CatchHandler @ 032724b8 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
                    /* catch() { ... } // from try @ 032725b4 with catch @ 032725fc */
                    /* catch() { ... } // from try @ 032725a4 with catch @ 03272600 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_GGOICDIOIIK__);
    DAT_04566934 = 1;
  }
                    /* try { // try from 03272610 to 03372613 has its CatchHandler @ 03272688 */
                    /* try { // try from 03272614 to 0337264f has its CatchHandler @ 032724b8 */
  if ((HEHMPFLAEGE != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar2 = (HEHMPFLAEGE->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
    __this_00 = (__this->fields)._screen;
    (__this->fields).PMKMIDBNMOE = (pGVar2->fields).ANAJGHJEEOC;
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__Init(__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
      (__this->fields).IGIDKCCDBPK = true;
      Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__FKOGCHJKFGB(__this_01,false,method_00);
                    /* try { // try from 03272650 to 03372653 has its CatchHandler @ 032726a0 */
                    /* try { // try from 03272654 to 0337265b has its CatchHandler @ 03272698 */
      if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* try { // try from 0327266c to 03372683 has its CatchHandler @ 03272714 */
                    /* try { // try from 03272684 to 033726c3 has its CatchHandler @ 032724b8 */
                    /* catch() { ... } // from try @ 03272610 with catch @ 03272688 */
        (*(pNVar1->klass->vtable)._17_Hide.methodPtr)
                  (pNVar1,(pNVar1->klass->vtable)._17_Hide.method);
                    /* catch() { ... } // from try @ 032725e0 with catch @ 03272694 */
                    /* catch() { ... } // from try @ 03272654 with catch @ 03272698 */
                    /* catch() { ... } // from try @ 03272584 with catch @ 0327269c */
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03272650 with catch @ 032726a0 */
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0327256c with catch @ 032726ac */
        CJNHFNHJHPE = (System_Action_OJEHKJHEBID__o *)
                      thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
                    /* try { // try from 032726c4 to 033726c7 has its CatchHandler @ 032726f0 */
                    /* try { // try from 032726c8 to 033726f7 has its CatchHandler @ 032724b8 */
        System_Action<object>___ctor();
        if (__this_02 != (EEOMEMBBGNA_o *)0x0) {
          EEOMEMBBGNA__MFDOCMJONOH(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).BADMDODBKLB;
          if (pSVar3 != (System_Action_EOLFEKNCPLM__o *)0x0) {
                    /* catch() { ... } // from try @ 032726c4 with catch @ 032726f0 */
                    /* try { // try from 032726f8 to 033726ff has its CatchHandler @ 03272714 */
                    /* try { // try from 03272700 to 0337270b has its CatchHandler @ 032724b8 */
                    /* WARNING: Could not recover jumptable at 0x03272708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar3->fields).super.super.invoke_impl)
                      ((pSVar3->fields).super.super.method_code,HEHMPFLAEGE,
                       (pSVar3->fields).super.super.method);
            return;
          }
                    /* try { // try from 0327270c to 03372713 has its CatchHandler @ 03272714 */
                    /* catch() { ... } // from try @ 0327266c with catch @ 03272714
                       catch() { ... } // from try @ 032726f8 with catch @ 03272714
                       catch() { ... } // from try @ 0327270c with catch @ 03272714 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

