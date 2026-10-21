// TypeDefIndex 272
// Namespace: Nekki.SF2.GUI.Fight
// public class EndRaidRoundFightScreen : EndRaidFightScreenBase
// Fields:
//   private RaidWaitResultContent _RaidWaitResultContentPrefab; // 0x88
//   private RaidDamageResultContent _RaidDamageResultContentPrefab; // 0x90
//   private RaidQuestsRewardsContent _RaidQuestsRewardsContentPrefab; // 0x98
//   private EndRaidRoundFightScreen.GEDCPBANEAJ ILMKKGNDFLB; // 0xA0
//   private bool EIHCLDJIKFO; // 0xA4

// ===== protected override RaidEndFightBaseContent CGEIBMDFLEL()  [RVA 0x3230FA8]
// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$CGEIBMDFLEL @ RVA 0x3230FA8

Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *
Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen__CGEIBMDFLEL
          (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  CHDGOFBHAFI_o *pCVar3;
  GALHNMPIEHA_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *x;
  Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *pNVar4;
  Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *x_00;
  
  if ((DAT_04566fdf & 1) == 0) {
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidDamageResultContent>__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidQuestsRewardsContent>__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidWaitResultContent>__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566fdf = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).ILMKKGNDFLB;
  if (iVar1 == 2) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (__this_00 == (GALHNMPIEHA_o *)0x0) {
LAB_033311c4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = GALHNMPIEHA__EHFPAPHPBIP(__this_00,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0;
    if (bVar2) {
      x_00 = (__this->fields)._RaidQuestsRewardsContentPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
      pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0;
      if (bVar2) {
        pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)
                 Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                           ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                            (Il2CppObject *)(__this->fields)._RaidQuestsRewardsContentPrefab,
                            Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidQuestsRewardsContent>__
                           );
        if (pNVar4 == (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0) goto LAB_033311c4;
        Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent__Init
                  ((Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *)pNVar4,(MethodInfo *)0x0);
      }
    }
  }
  else if (iVar1 == 1) {
    pNVar4 = (__this->fields)._RaidDamageResultContentPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0;
    if (bVar2) {
                    /* try { // try from 03331174 to 03431447 has its CatchHandler @ 03331174
                       catch() { ... } // from try @ 03331174 with catch @ 03331174
                       catch() { ... } // from try @ 03331530 with catch @ 03331174
                       catch() { ... } // from try @ 03331564 with catch @ 03331174
                       catch() { ... } // from try @ 0333158c with catch @ 03331174
                       catch() { ... } // from try @ 033315cc with catch @ 03331174 */
      pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)
               Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                         ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                          (Il2CppObject *)(__this->fields)._RaidDamageResultContentPrefab,
                          Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidDamageResultContent>__
                         );
      if (pNVar4 == (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0) goto LAB_033311c4;
      Nekki_SF2_GUI_Fight_RaidDamageResultContent__Init
                (pNVar4,(__this->fields).EIHCLDJIKFO,(MethodInfo *)0x0);
    }
  }
  else {
    if (iVar1 != 0) {
      return (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0;
    }
    x = (__this->fields)._RaidWaitResultContentPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0;
    if (bVar2) {
      pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)
               Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                         ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                          (Il2CppObject *)(__this->fields)._RaidWaitResultContentPrefab,
                          Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidWaitResultContent>__
                         );
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if ((pCVar3 == (CHDGOFBHAFI_o *)0x0) ||
         (pNVar4 == (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0)) goto LAB_033311c4;
      Nekki_SF2_GUI_Fight_RaidWaitResultContent__Init
                ((Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *)pNVar4,(pCVar3->fields).AABMLCNHHPN,
                 (MethodInfo *)0x0);
    }
  }
  (__this->fields).ILMKKGNDFLB = (__this->fields).ILMKKGNDFLB + 1;
  return (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)pNVar4;
}


// ===== public override void Init(IGPDCHBJAPD PNPKEKHEMCD)  [RVA 0x32311C8]
// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$Init @ RVA 0x32311C8

void Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen__Init
               (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               MethodInfo *method)

{
  IGPDCHBJAPD_o *pIVar1;
  
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__Init
            ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,PNPKEKHEMCD,(MethodInfo *)0x0);
  pIVar1 = (__this->fields).super.KNEAEEIMDGH;
  if (pIVar1 != (IGPDCHBJAPD_o *)0x0) {
    (__this->fields).ILMKKGNDFLB = (uint)((pIVar1->fields).BLKENLJGDIE != 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string LLBHHOGNCOL()  [RVA 0x32311FC]
// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$LLBHHOGNCOL @ RVA 0x32311FC

System_String_o *
Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen__LLBHHOGNCOL
          (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,MethodInfo *method)

{
  if ((DAT_04566fe0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20398/*"raid_battle_finish_round"*/);
    DAT_04566fe0 = 1;
  }
  return StringLiteral_20398/*"raid_battle_finish_round"*/;
}


// ===== public void .ctor()  [RVA 0x323123C]
// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$.ctor @ RVA 0x323123C

void Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen___ctor
               (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase___ctor
            ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override IMessage FMNNEOGINIP()  [RVA 0x3231244]
// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$FMNNEOGINIP @ RVA 0x3231244

Google_Protobuf_IMessage_o *
Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen__FMNNEOGINIP
          (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,MethodInfo *method)

{
  KJNCNBJIJPC_o *__this_00;
  PIADCKMDDAK_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_02;
  NJNCPNBIPCD_o *pNVar1;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_ABAALAENAKC_o *pMVar2;
  
  if ((DAT_04566fe1 & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_KIAOELALKBL<BJEFHIBMHEJ>__);
    FUN_01bab630(&Method_AJKNKCLEEAD_KIAOELALKBL<IHMIMECHIAN>__);
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_04566fe1 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->FDIJMKPILBI;
  __this_00 = (KJNCNBJIJPC_o *)thunk_FUN_01bda818(KJNCNBJIJPC_TypeInfo);
  KJNCNBJIJPC___ctor(__this_00,(MethodInfo *)0x0);
  if ((pMVar2 == (MGNPHCAAEIO_ABAALAENAKC_o *)0x0) || (__this_00 == (KJNCNBJIJPC_o *)0x0))
  goto LAB_03331440;
  (__this_00->fields).OLGJBKMCGIC = (pMVar2->fields).MAOLKFCJGLD;
  (__this_00->fields).OJBIFDEEBNO = (pMVar2->fields).HPPAGNLEOEJ;
  if (0 < (pMVar2->fields).IDHCEJLJIGI) {
    __this_01 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
    PIADCKMDDAK___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 == (PIADCKMDDAK_o *)0x0) goto LAB_03331440;
    PIADCKMDDAK__HCOCAAIGNNL(__this_01,(pMVar2->fields).GJFGFNAGPEO,(MethodInfo *)0x0);
    (__this_01->fields).GDKPGIBMFPA = (pMVar2->fields).IDHCEJLJIGI;
    __this_02 = (__this_00->fields).DDEAFMPDPBJ;
    if (__this_02 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
    goto LAB_03331440;
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,(Il2CppObject *)__this_01
               ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
  }
  AJKNKCLEEAD__KIAOELALKBL<object>
            ((Google_Protobuf_Collections_RepeatedField_T__o *)(__this_00->fields).EACBGCPPLBO,
             (System_Collections_Generic_IList_T__o *)(pMVar2->fields).OBLIJEFDJGN,
             Method_AJKNKCLEEAD_KIAOELALKBL<IHMIMECHIAN>__);
  AJKNKCLEEAD__KIAOELALKBL<object>
            ((Google_Protobuf_Collections_RepeatedField_T__o *)(__this_00->fields).KELNJLBBHEC,
             (System_Collections_Generic_IList_T__o *)(pMVar2->fields).GJBLBEALOBO,
             Method_AJKNKCLEEAD_KIAOELALKBL<BJEFHIBMHEJ>__);
  (__this_00->fields).HFNMLHEEAJM = (pMVar2->fields).EOLGPJMKFNA;
  (__this_00->fields).GAGJCDGEGBL = (pMVar2->fields).FNLILHMAONM;
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
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar1 = NJNCPNBIPCD__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar1 == (NJNCPNBIPCD_o *)0x0) {
LAB_03331440:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar1->fields).LEDBMKOBNDM = __this_00;
    thunk_FUN_01c20e04(&pNVar1->fields,__this_00);
  }
  return (Google_Protobuf_IMessage_o *)__this_00;
}


// ===== protected override int IMEAGKDHPMM(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3231444]
// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$IMEAGKDHPMM @ RVA 0x3231444

int32_t Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen__IMEAGKDHPMM
                  (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
                  MethodInfo *method)

{
                    /* try { // try from 03331448 to 0343144f has its CatchHandler @ 0333156c */
  return 0x29c5;
}


// ===== protected override void EBIMOCGLMPK(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x323144C]
// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$EBIMOCGLMPK @ RVA 0x323144C

void Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen__EBIMOCGLMPK
               (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CHDGOFBHAFI_o *pCVar2;
  EEGDOGKBLNG_o *__this_00;
  
                    /* try { // try from 0333145c to 0343152f has its CatchHandler @ 03331570 */
  if ((DAT_04566fe2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<FIMAAAOEIGM>__);
    DAT_04566fe2 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<FIMAAAOEIGM>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if ((pIVar1 != (Il2CppObject *)0x0) && (pCVar2 != (CHDGOFBHAFI_o *)0x0)) {
      CHDGOFBHAFI__BNPLDAHKIED(pCVar2,pIVar1[1].monitor,pIVar1[2].monitor,(MethodInfo *)0x0);
      pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
        (pCVar2->fields).GBGHPLFONHD = true;
        if (pIVar1[3].klass != (Il2CppClass *)0x0) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_03331538;
          EEGDOGKBLNG__JOMFHMDCMNG(__this_00,(KAMBBJFPLGM_o *)pIVar1[3].klass,(MethodInfo *)0x0);
        }
        (__this->fields).EIHCLDJIKFO = *(bool_conflict *)&pIVar1[2].klass;
                    /* try { // try from 03331530 to 0343155f has its CatchHandler @ 03331174 */
        return;
      }
    }
  }
LAB_03331538:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

