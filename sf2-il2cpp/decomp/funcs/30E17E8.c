// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$GIENGNEGHPJ @ RVA 0x30E17E8

Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GIENGNEGHPJ
          (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_01;
  System_Action_RaidInfoSprite__o *pSVar3;
  GCIFMNHADDF_o *pGVar4;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_03;
  System_Action_BaseDialog__o *pSVar5;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI;
  MethodInfo *method_00;
  
  if ((DAT_045663b6 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_BLMMCMDLLDL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_KANFKOMJMHF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_OKGJAJMILMD__);
    FUN_01bab630(&StringLiteral_20430);
    DAT_045663b6 = 1;
    method = extraout_x1;
  }
  if (DAT_04566479 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo,method);
    DAT_04566479 = '\x01';
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields,__this);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._raidInfoSprite;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__Init(pNVar2,(MethodInfo *)0x0);
                    /* try { // try from 031e18d0 to 032e18d7 has its CatchHandler @ 031e18f4 */
      __this_01 = (__this->fields)._raidPlayersRoll;
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
                    /* try { // try from 031e18d8 to 032e18db has its CatchHandler @ 031e1420 */
                    /* try { // try from 031e18dc to 032e18df has its CatchHandler @ 031e18e8 */
                    /* try { // try from 031e18e0 to 032e190f has its CatchHandler @ 031e1420 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e18dc with catch @ 031e18e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e16e0 with catch @ 031e18ec
                        */
        Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__Init(__this_01,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e1684 with catch @ 031e18f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e18d0 with catch @ 031e18f4
                        */
        pNVar2 = (__this->fields)._raidInfoSprite;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e1714 with catch @ 031e18f8
                        */
        pSVar3 = (System_Action_RaidInfoSprite__o *)
                 thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
        System_Action<object>___ctor();
                    /* try { // try from 031e1910 to 032e1913 has its CatchHandler @ 031e1928 */
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
                    /* catch() { ... } // from try @ 031e1910 with catch @ 031e1928 */
          Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__add_OnFightBtnClick
                    (pNVar2,pSVar3,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._raidInfoSprite;
          pSVar3 = (System_Action_RaidInfoSprite__o *)
                   thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__add_OnExitBtnClick
                      (pNVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 031e1968 to 032e198f has its CatchHandler @ 031e19a4 */
            if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = PNLFHHJGDLI__FPPAOOIPKEO((MethodInfo *)0x0);
            if (bVar1) {
              if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031e1990 to 032e199b has its CatchHandler @ 031e1420 */
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 031e199c to 032e19a3 has its CatchHandler @ 031e19a4 */
              if (DAT_0456647a == '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031e1968 with catch @ 031e19a4
                       catch(type#2 @ 00000000) { ... } // from try @ 031e199c with catch @ 031e19a4
                        */
                    /* try { // try from 031e19a8 to 032e1bd3 has its CatchHandler @ 031e19a8
                       catch() { ... } // from try @ 031e19a8 with catch @ 031e19a8
                       catch() { ... } // from try @ 031e1ca8 with catch @ 031e19a8
                       catch() { ... } // from try @ 031e1d68 with catch @ 031e19a8
                       catch() { ... } // from try @ 031e1d70 with catch @ 031e19a8
                       catch() { ... } // from try @ 031e1e3c with catch @ 031e19a8 */
                FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                DAT_0456647a = '\x01';
              }
              if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              method_00 = (MethodInfo *)0x0;
              bVar1 = System_String__op_Inequality
                                (PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField,
                                 StringLiteral_20430,(MethodInfo *)0x0);
              if (bVar1) {
                if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)0x0);
                method_00 = (MethodInfo *)0x0;
                PNLFHHJGDLI__ODFHMBHFNJB(StringLiteral_20430,true,(MethodInfo *)0x0);
              }
            }
            pGVar4 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
            if (pGVar4 != (GCIFMNHADDF_o *)0x0) {
              GCIFMNHADDF__HAMCIMDBOCI(pGVar4,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__DNOPCPONLEN(__this_02,true,method_00);
              Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__KANFKOMJMHF
                        (__this_03,LMEHKLFGEHI,method_00);
              pGVar4 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
              pSVar5 = (System_Action_BaseDialog__o *)
                       thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
              System_Action<object>___ctor();
              if (pGVar4 != (GCIFMNHADDF_o *)0x0) {
                GCIFMNHADDF__JNDNMPDMDGB(pGVar4,pSVar5,(MethodInfo *)0x0);
                pGVar4 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
                pSVar5 = (System_Action_BaseDialog__o *)
                         thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
                System_Action<object>___ctor();
                if (pGVar4 != (GCIFMNHADDF_o *)0x0) {
                  GCIFMNHADDF__EOAPHMAFKKP(pGVar4,pSVar5,(MethodInfo *)0x0);
                  return __this;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

