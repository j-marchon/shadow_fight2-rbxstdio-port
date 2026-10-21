// Nekki.SF2.GUI.Profile.ProfileScene$$LOCGOCHBNFM @ RVA 0x33962F8

void Nekki_SF2_GUI_Profile_ProfileScene__LOCGOCHBNFM
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *pNVar1;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  HJNDPNIMBBG_o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  UnityEngine_Color_o EFJKPCADGJH;
  
  if ((DAT_04567c58 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_EFNENLMNEII__);
    FUN_01bab630(&StringLiteral_10491);
    DAT_04567c58 = 1;
  }
  pNVar1 = (__this->fields)._ModelContainer;
  if (pNVar1 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__Init(pNVar1,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ModelContainer;
    if (pNVar1 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
      Nekki_SF2_Core_Fights_ModelContainer__UpdateModel_ItemInfo
                (pNVar1,(HOOAAGABMBL_o *)0x0,4,StringLiteral_10491,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._ModelContainer;
      CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                    thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
        Nekki_SF2_Core_Fights_ModelContainer__add_OnAnimationEnd
                  (pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._ModelContainer;
        if (pNVar1 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
          __this_01 = (pNVar1->fields).MAODNBMLDEG;
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7e == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7e = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
          if ((__this_00 != (HJNDPNIMBBG_o *)0x0) &&
             (EFJKPCADGJH = HJNDPNIMBBG__EMBBBGLKPNN(__this_00,(MethodInfo *)0x0),
             __this_01 != (OLKKAIFGGAK_o *)0x0)) {
                    /* try { // try from 03496448 to 035966fb has its CatchHandler @ 03496448
                       catch() { ... } // from try @ 03496448 with catch @ 03496448
                       catch() { ... } // from try @ 03496db4 with catch @ 03496448
                       catch() { ... } // from try @ 03496e68 with catch @ 03496448
                       catch() { ... } // from try @ 03496e70 with catch @ 03496448
                       catch() { ... } // from try @ 03496e7c with catch @ 03496448
                       catch() { ... } // from try @ 03496fe0 with catch @ 03496448 */
            OLKKAIFGGAK__HLCMLOBHLDA(__this_01,EFJKPCADGJH,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

