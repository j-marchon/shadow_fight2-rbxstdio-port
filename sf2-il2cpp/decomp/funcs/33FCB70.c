// MGNPHCAAEIO$$ECLNPCHEBFA @ RVA 0x33FCB70

FCJBEKHDLAF_o *
MGNPHCAAEIO__ECLNPCHEBFA
          (AFFHKININGD_o *FBFPLEFCDOK,PJKHAJKEHEL_o *LIHKNGAPNAH,
          System_Collections_Generic_List_PJKHAJKEHEL__o *MMAONJONCLH,
          Nekki_SF2_GUI_Fight_PreFight_o *HIBPKNAIPLH,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  System_String_o *pSVar2;
  NJNCPNBIPCD_o *__this;
  FCJBEKHDLAF_o *__this_00;
  PKHMIGFEJCL_o *pPVar3;
  System_String_o **ppSVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar5;
  
  if ((DAT_04567fc6 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04567fc6 = 1;
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    pPVar3 = (pNVar1->fields).QuestParameters;
    pSVar2 = MMOGKBGEPGM__GKMAFGODLLG(0,(MethodInfo *)0x0);
    if (pPVar3 != (PKHMIGFEJCL_o *)0x0) {
      ppSVar4 = &(pPVar3->fields).CHFDDNODLGP;
      *ppSVar4 = pSVar2;
      thunk_FUN_01c20e04(ppSVar4,pSVar2);
      if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565ff1 == '\0') {
        FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
        DAT_04565ff1 = '\x01';
      }
      if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
LAB_034fccac:
        __this_00 = (FCJBEKHDLAF_o *)thunk_FUN_01bda818(FCJBEKHDLAF_TypeInfo);
        FCJBEKHDLAF___ctor(__this_00,FBFPLEFCDOK,LIHKNGAPNAH,MMAONJONCLH,HIBPKNAIPLH,
                           (MethodInfo *)0x0);
        return __this_00;
      }
      if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
        if ((FBFPLEFCDOK->fields).JDNKKGPNHPB != 0x14) goto LAB_034fccac;
        CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0)
        ;
        if (LIHKNGAPNAH != (PJKHAJKEHEL_o *)0x0) {
          (LIHKNGAPNAH->fields).DHGNGIKCDON.fields = CVar5;
          (LIHKNGAPNAH->fields).BLJLIBHLGLI = true;
          CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            (true,(MethodInfo *)0x0);
          (LIHKNGAPNAH->fields).HJPOJOPKEKI.fields = CVar5;
          if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this = NJNCPNBIPCD__AIHNLLGNBLC((MethodInfo *)0x0);
          if (__this != (NJNCPNBIPCD_o *)0x0) {
            NJNCPNBIPCD__OGJOKMNNBPK(__this,(MethodInfo *)0x0);
            goto LAB_034fccac;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

