// Original name: Nekki.SF2.Core.Zones.BattlePeriodic  (obfuscated AGILEPNENOH)
// TypeDefIndex 1151
// Namespace: 
// public class BattlePeriodic : OOMHDDBCBJP
// Fields:
//   protected static List<BattlePeriodic> DEKLKEHGJEB; // 0x0
//   private static ObscuredLong GKGHELAOIBG; // 0x8
//   private static ObscuredLong MKMJJANAAFD; // 0x28
//   private static ObscuredLong DKMPMFFECBK; // 0x48

// ===== public override void GOLLEBBHEHE(FightList FBFPLEFCDOK, int DPJIDNBJIBG)  [RVA 0x30FDB20]
// BattlePeriodic$$GOLLEBBHEHE @ RVA 0x30FDB20

void BattlePeriodic__GOLLEBBHEHE
               (BattlePeriodic_o *__this,FightList_o *FBFPLEFCDOK,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  Nekki_Utils_GlobalTimer_o *__this_00;
  int64_t iVar1;
  
  if ((DAT_045664a7 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045664a7 = 1;
  }
  OOMHDDBCBJP__GOLLEBBHEHE((OOMHDDBCBJP_o *)__this,FBFPLEFCDOK,DPJIDNBJIBG,(MethodInfo *)0x0);
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    iVar1 = Nekki_Utils_GlobalTimer__GetTime(__this_00,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x031fdbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._18_NCENBOMEPBN.methodPtr)
              (__this,iVar1,(__this->klass->vtable)._18_NCENBOMEPBN.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void LLCONNGHGKD(long LFJGFLNMBMC)  [RVA 0x30FDBC0]
// BattlePeriodic$$LLCONNGHGKD @ RVA 0x30FDBC0

void BattlePeriodic__LLCONNGHGKD(BattlePeriodic_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AGILEPNENOH__o *__this_00;
  Roster_o *__this_01;
  BattlePeriodic_StaticFields *pAVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  bool_conflict bStack_68;
  bool_conflict bStack_67;
  undefined6 uStack_66;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045664a8 & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePeriodic>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045664a8 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  BattlePeriodic__MEAECAEGGOD(__this,LFJGFLNMBMC,method);
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = BattlePeriodic_TypeInfo->static_fields->DEKLKEHGJEB;
  if (__this_00 != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_80,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BattlePeriodic>_GetEnumerator__);
    local_60.fields._index = local_80.fields._index;
    local_60.fields._version = local_80.fields._version;
    local_60.fields._list = local_80.fields._list;
    local_60.fields._current = local_80.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_MoveNext__
                             ), bVar1) {
      if ((BattlePeriodic_o *)local_60.fields._current != __this) {
        if ((BattlePeriodic_o *)local_60.fields._current == (BattlePeriodic_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        BattlePeriodic__MEAECAEGGOD((BattlePeriodic_o *)local_60.fields._current,LFJGFLNMBMC,method);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_Dispose__);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
              (&local_a0,LFJGFLNMBMC,(MethodInfo *)0x0);
    local_80.fields._index = (undefined4)local_a0.fields.hiddenValue;
    local_80.fields._version = local_a0.fields.hiddenValue._4_4_;
    local_80.fields._list = (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey
    ;
    bStack_68 = local_a0.fields.fakeValueActive;
    bStack_67 = local_a0.fields.inited;
    uStack_66 = local_a0.fields._26_6_;
    local_80.fields._current = (Il2CppObject *)local_a0.fields.fakeValue;
    if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = BattlePeriodic_TypeInfo->static_fields;
    (pAVar2->DKMPMFFECBK).fields.fakeValueActive = bStack_68;
    (pAVar2->DKMPMFFECBK).fields.inited = bStack_67;
    *(undefined6 *)&(pAVar2->DKMPMFFECBK).fields.field_0x1a = uStack_66;
    (pAVar2->DKMPMFFECBK).fields.fakeValue = (int64_t)local_80.fields._current;
    (pAVar2->DKMPMFFECBK).fields.hiddenValue = local_80.fields._8_8_;
    (pAVar2->DKMPMFFECBK).fields.currentCryptoKey = (int64_t)local_80.fields._list;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_01 != (Roster_o *)0x0) {
      Roster__EFMHMBBCBGM(__this_01,LFJGFLNMBMC,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DKFHOCKJKPG(int MHAHPACPGCC, long PIBELEMLEPN)  [RVA 0x30FDFEC]
// BattlePeriodic$$DKFHOCKJKPG @ RVA 0x30FDFEC

void BattlePeriodic__DKFHOCKJKPG(int32_t MHAHPACPGCC,int64_t PIBELEMLEPN,MethodInfo *method)

{
  bool bVar1;
  BattlePeriodic_c *pAVar2;
  Il2CppObject *__this;
  bool bVar3;
  System_Collections_Generic_List_AGILEPNENOH__o *__this_00;
  long lVar4;
  BattlePeriodic_StaticFields *pAVar5;
  GameUtils_StaticFields *pMVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  System_Collections_Generic_List_T__o *local_80;
  int64_t iStack_78;
  BattlePeriodic_o *pAStack_70;
  bool_conflict bStack_68;
  bool_conflict bStack_67;
  undefined6 uStack_66;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045664a9 & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePeriodic>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_3441/*"BattlePeriodic::initBattles WARNING - no duel fights found, repeatTime has not been set!"*/);
    DAT_045664a9 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_a0,PIBELEMLEPN,(MethodInfo *)0x0);
  iStack_78 = local_a0.fields.hiddenValue;
  local_80 = (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey;
  bStack_68 = local_a0.fields.fakeValueActive;
  bStack_67 = local_a0.fields.inited;
  uStack_66 = local_a0.fields._26_6_;
  pAStack_70 = (BattlePeriodic_o *)local_a0.fields.fakeValue;
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = BattlePeriodic_TypeInfo;
  pAVar5 = BattlePeriodic_TypeInfo->static_fields;
  (pAVar5->DKMPMFFECBK).fields.fakeValueActive = bStack_68;
  (pAVar5->DKMPMFFECBK).fields.inited = bStack_67;
  *(undefined6 *)&(pAVar5->DKMPMFFECBK).fields.field_0x1a = uStack_66;
  (pAVar5->DKMPMFFECBK).fields.fakeValue = (int64_t)pAStack_70;
  (pAVar5->DKMPMFFECBK).fields.hiddenValue = iStack_78;
  (pAVar5->DKMPMFFECBK).fields.currentCryptoKey = (int64_t)local_80;
  __this_00 = pAVar2->static_fields->DEKLKEHGJEB;
  if (__this_00 != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_a0,
               (System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BattlePeriodic>_GetEnumerator__);
    local_60.fields._index = (undefined4)local_a0.fields.hiddenValue;
    local_60.fields._version = local_a0.fields.hiddenValue._4_4_;
    local_60.fields._list = (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey
    ;
    local_60.fields._current = (Il2CppObject *)local_a0.fields.fakeValue;
    bVar1 = false;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_MoveNext__);
      __this = local_60.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_Dispose__);
        if (!bVar1) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_3441/*"BattlePeriodic::initBattles WARNING - no duel fights found, repeatTime has not been set!"*/,(MethodInfo *)0x0);
        }
        return;
      }
      if ((BattlePeriodic_o *)local_60.fields._current == (BattlePeriodic_o *)0x0) break;
      BattlePeriodic__MEAECAEGGOD((BattlePeriodic_o *)local_60.fields._current,PIBELEMLEPN,method);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GameUtils_TypeInfo);
      }
      pMVar6 = GameUtils_TypeInfo->static_fields;
      if (pMVar6->JKJKPJHBFIO != false) {
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(GameUtils_TypeInfo);
          pMVar6 = GameUtils_TypeInfo->static_fields;
        }
        BattlePeriodic__CMNDDAHEGBG((BattlePeriodic_o *)__this,pMVar6->CIKPLHLKPKJ,method);
      }
      bVar3 = !bVar1;
      bVar1 = true;
      if ((bVar3) &&
         (bVar1 = false, (((BattlePeriodic_Fields *)((long)__this + 0x10))->super).KIHDFNGKPGN != 0)) {
        method = (((BattlePeriodic_c *)__this->klass)->vtable)._16_EPLGFIOJNDK.method;
        lVar4 = (*(((BattlePeriodic_c *)__this->klass)->vtable)._16_EPLGFIOJNDK.methodPtr)(__this,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                  (&local_a0,*(int64_t *)(lVar4 + 0x58),(MethodInfo *)0x0);
        iStack_78 = local_a0.fields.hiddenValue;
        local_80 = (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey;
        bStack_68 = local_a0.fields.fakeValueActive;
        bStack_67 = local_a0.fields.inited;
        uStack_66 = local_a0.fields._26_6_;
        pAStack_70 = (BattlePeriodic_o *)local_a0.fields.fakeValue;
        if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar5 = BattlePeriodic_TypeInfo->static_fields;
        (pAVar5->MKMJJANAAFD).fields.fakeValueActive = bStack_68;
        (pAVar5->MKMJJANAAFD).fields.inited = bStack_67;
        *(undefined6 *)&(pAVar5->MKMJJANAAFD).fields.field_0x1a = uStack_66;
        (pAVar5->MKMJJANAAFD).fields.fakeValue = (int64_t)pAStack_70;
        (pAVar5->MKMJJANAAFD).fields.hiddenValue = iStack_78;
        (pAVar5->MKMJJANAAFD).fields.currentCryptoKey = (int64_t)local_80;
        bVar1 = true;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void NCENBOMEPBN(long CJNHFNHJHPE)  [RVA 0x30FE468]
// BattlePeriodic$$NCENBOMEPBN @ RVA 0x30FE468

void BattlePeriodic__NCENBOMEPBN(BattlePeriodic_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  BattlePeriodic_StaticFields *pAVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_d0;
  int64_t local_b0;
  int64_t iStack_a8;
  int64_t iStack_a0;
  bool_conflict bStack_98;
  bool_conflict bStack_97;
  undefined6 uStack_96;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045664aa & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    DAT_045664aa = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = BattlePeriodic_TypeInfo->static_fields;
  local_70.fields.fakeValueActive = (pAVar3->DKMPMFFECBK).fields.fakeValueActive;
  local_70.fields.inited = (pAVar3->DKMPMFFECBK).fields.inited;
  local_70.fields._26_6_ = *(undefined6 *)&(pAVar3->DKMPMFFECBK).fields.field_0x1a;
  local_70.fields.fakeValue = (pAVar3->DKMPMFFECBK).fields.fakeValue;
  local_70.fields.hiddenValue = (pAVar3->DKMPMFFECBK).fields.hiddenValue;
  local_70.fields.currentCryptoKey = (pAVar3->DKMPMFFECBK).fields.currentCryptoKey;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,(MethodInfo *)0x0);
  if (iVar2 < 1) {
    iVar2 = -1;
  }
  else {
    if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = BattlePeriodic_TypeInfo->static_fields;
    local_90.fields.fakeValueActive = (pAVar3->DKMPMFFECBK).fields.fakeValueActive;
    local_90.fields.inited = (pAVar3->DKMPMFFECBK).fields.inited;
    local_90.fields._26_6_ = *(undefined6 *)&(pAVar3->DKMPMFFECBK).fields.field_0x1a;
    local_90.fields.fakeValue = (pAVar3->DKMPMFFECBK).fields.fakeValue;
    local_90.fields.hiddenValue = (pAVar3->DKMPMFFECBK).fields.hiddenValue;
    local_90.fields.currentCryptoKey = (pAVar3->DKMPMFFECBK).fields.currentCryptoKey;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_90,(MethodInfo *)0x0)
    ;
    iVar2 = CJNHFNHJHPE - iVar2;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_d0,iVar2,(MethodInfo *)0x0);
  iStack_a8 = local_d0.fields.hiddenValue;
  local_b0 = local_d0.fields.currentCryptoKey;
  bStack_98 = local_d0.fields.fakeValueActive;
  bStack_97 = local_d0.fields.inited;
  uStack_96 = local_d0.fields._26_6_;
  iStack_a0 = local_d0.fields.fakeValue;
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = BattlePeriodic_TypeInfo->static_fields;
  (pAVar3->GKGHELAOIBG).fields.fakeValueActive = bStack_98;
  (pAVar3->GKGHELAOIBG).fields.inited = bStack_97;
  *(undefined6 *)&(pAVar3->GKGHELAOIBG).fields.field_0x1a = uStack_96;
  (pAVar3->GKGHELAOIBG).fields.fakeValue = iStack_a0;
  (pAVar3->GKGHELAOIBG).fields.hiddenValue = iStack_a8;
  (pAVar3->GKGHELAOIBG).fields.currentCryptoKey = local_b0;
  __this_00 = (__this->fields).super.HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
        return;
      }
      if ((FightList_o *)local_48.fields._current == (FightList_o *)0x0) break;
      FightList__NCENBOMEPBN
                ((FightList_o *)local_48.fields._current,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void CNNNGNLGHHJ(bool EMJBGFAHADK = True)  [RVA 0x30FE674]
// BattlePeriodic$$CNNNGNLGHHJ @ RVA 0x30FE674

void BattlePeriodic__CNNNGNLGHHJ(BattlePeriodic_o *__this,bool EMJBGFAHADK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *pSVar2;
  int64_t CJNHFNHJHPE;
  Roster_o *__this_00;
  Il2CppClass *pIVar3;
  int64_t val2;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045664ab & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045664ab = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).super.HDDNEKLMLMF;
  if (pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    CJNHFNHJHPE = 0;
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__
                             ), bVar1) {
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar3 = local_80.fields._current[2].klass;
      *(undefined4 *)((long)&local_80.fields._current[6].klass + 4) = 2;
      if ((pIVar3 != (Il2CppClass *)0x0) && (EMJBGFAHADK)) {
        val2 = *(int64_t *)&(pIVar3->_1).byval_arg.bits;
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CJNHFNHJHPE = System_Math__Max(CJNHFNHJHPE,val2,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    pSVar2 = (__this->fields).super.HDDNEKLMLMF;
    if (pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__
                               ), bVar1) {
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar3 = local_80.fields._current[2].klass;
        if (pIVar3 != (Il2CppClass *)0x0) {
          PAMEPBLOLPB__DKLPJPMNILO((PAMEPBLOLPB_o *)pIVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
          PAMEPBLOLPB__HHCDIDGFNHI((PAMEPBLOLPB_o *)pIVar3,0,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__)
      ;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (Roster_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DGLJCGNHLIG(bool EMJBGFAHADK = True)  [RVA 0x30FE980]
// BattlePeriodic$$DGLJCGNHLIG @ RVA 0x30FE980

void BattlePeriodic__DGLJCGNHLIG(bool EMJBGFAHADK,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  long lVar3;
  Nekki_SF2_GUI_Map_InfoBattle_o *pNVar4;
  System_Collections_Generic_List_AGILEPNENOH__o *__this;
  Nekki_Utils_GlobalTimer_o *__this_00;
  int64_t iVar5;
  Roster_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  BattlePeriodic_c *pAVar6;
  UnityEngine_Object_o *pUVar7;
  OOMHDDBCBJP_o *BANHBMINMMP;
  undefined1 auVar8 [16];
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045664ac & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_get_Current__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePeriodic>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045664ac = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  auVar8._8_8_ = method;
  auVar8._0_8_ = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    auVar8 = FUN_01b81620(lVar3,method);
  }
  lVar3 = *(long *)(*(long *)(auVar8._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3,auVar8._8_8_);
  }
  pUVar7 = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  BANHBMINMMP = (OOMHDDBCBJP_o *)0x0;
  if (bVar2) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((**(long **)(lVar3 + 0xb8) == 0) ||
       (pNVar4 = *(Nekki_SF2_GUI_Map_InfoBattle_o **)(**(long **)(lVar3 + 0xb8) + 0xd0),
       pNVar4 == (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0)) goto LAB_031fecd8;
    BANHBMINMMP = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(pNVar4,(MethodInfo *)0x0);
  }
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = BattlePeriodic_TypeInfo->static_fields->DEKLKEHGJEB;
  if (__this != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<BattlePeriodic>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_MoveNext__);
      pIVar1 = local_70.fields._current;
      if (!bVar2) break;
      if ((BattlePeriodic_o *)local_70.fields._current == (BattlePeriodic_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      BattlePeriodic__CNNNGNLGHHJ((BattlePeriodic_o *)local_70.fields._current,EMJBGFAHADK,method_00);
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
      if (__this_00 == (Nekki_Utils_GlobalTimer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar5 = Nekki_Utils_GlobalTimer__GetTime(__this_00,(MethodInfo *)0x0);
      pAVar6 = (BattlePeriodic_c *)pIVar1->klass;
      method_00 = (pAVar6->vtable)._18_NCENBOMEPBN.method;
      (*(pAVar6->vtable)._18_NCENBOMEPBN.methodPtr)(pIVar1,iVar5);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<BattlePeriodic>_Dispose__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_01 != (Roster_o *)0x0) {
      Roster__EFMHMBBCBGM(__this_01,0,(MethodInfo *)0x0);
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      pUVar7 = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        if ((**(long **)(lVar3 + 0xb8) == 0) ||
           (pNVar4 = *(Nekki_SF2_GUI_Map_InfoBattle_o **)(**(long **)(lVar3 + 0xb8) + 0xd0),
           pNVar4 == (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0)) goto LAB_031fecd8;
        Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(pNVar4,BANHBMINMMP,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_031fecd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNDIAFHOEJF(FightList FBFPLEFCDOK, bool IPGNPJLADGH)  [RVA 0x30FED54]
// BattlePeriodic$$HNDIAFHOEJF @ RVA 0x30FED54

void BattlePeriodic__HNDIAFHOEJF
               (BattlePeriodic_o *__this,FightList_o *FBFPLEFCDOK,bool IPGNPJLADGH,MethodInfo *method
               )

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_045664ad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_3433/*"BattleDaily::setRosterFight ERROR - no fightList found in _fights"*/);
    DAT_045664ad = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).super.HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_3433/*"BattleDaily::setRosterFight ERROR - no fightList found in _fights"*/,(MethodInfo *)0x0);
        return;
      }
    } while ((FightList_o *)local_58.fields._current != FBFPLEFCDOK);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CJNHFNHJHPE = NLPJLHOEAOE__KNHMOFPKOAM(FBFPLEFCDOK,IPGNPJLADGH,(MethodInfo *)0x0);
    if (FBFPLEFCDOK != (FightList_o *)0x0) {
      FightList__HKBKHKMMBFG(FBFPLEFCDOK,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CDEMANBJMGK(long CJNHFNHJHPE)  [RVA 0x30FEF30]
// BattlePeriodic$$CDEMANBJMGK @ RVA 0x30FEF30

void BattlePeriodic__CDEMANBJMGK(int64_t CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_AGILEPNENOH__o *__this_00;
  
  if ((DAT_045664ae & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&System_Action<BattlePeriodic>_TypeInfo);
    FUN_01bab630(&Method_AGILEPNENOH_JMFABHCADII_ADKAPHALAMC__);
    FUN_01bab630(&BattlePeriodic_JMFABHCADII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePeriodic>_ForEach__);
    DAT_045664ae = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(BattlePeriodic_JMFABHCADII_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)CJNHFNHJHPE;
    if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = BattlePeriodic_TypeInfo->static_fields->DEKLKEHGJEB;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<BattlePeriodic>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,action,
                 Method_System_Collections_Generic_List<BattlePeriodic>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void MEAECAEGGOD(long LFJGFLNMBMC)  [RVA 0x30FDE1C]
// BattlePeriodic$$MEAECAEGGOD @ RVA 0x30FDE1C

void BattlePeriodic__MEAECAEGGOD(BattlePeriodic_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  Roster_o *pAVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  FightList_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  undefined1 auVar2 [16];
  
  if ((DAT_045664af & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045664af = 1;
  }
  auVar2 = (*(__this->klass->vtable)._12_FKALJBOIAHP.methodPtr)
                     (__this,(__this->klass->vtable)._12_FKALJBOIAHP.method);
  method_00 = auVar2._8_8_;
  __this_01 = auVar2._0_8_;
  if (__this_01 == (FightList_o *)0x0) {
    if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1;
    }
    BattlePeriodic__DGLJCGNHLIG(true,method_00);
    __this_00 = (__this->fields).super.HDDNEKLMLMF;
    if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) goto LAB_031fdfe8;
    if (((__this_00->fields)._size < 1) ||
       (__this_01 = (FightList_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,0,
                               Method_System_Collections_Generic_List<FightList>_get_Item__),
       __this_01 == (FightList_o *)0x0)) {
      return;
    }
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 == (FightList_o *)0x0) goto LAB_031fdfe8;
  CJNHFNHJHPE = (__this_01->fields).JPBIBBBMCCD;
  if (CJNHFNHJHPE == (PAMEPBLOLPB_o *)0x0) {
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 == (Roster_o *)0x0) goto LAB_031fdfe8;
    CJNHFNHJHPE = Roster__CNEIEMLJKNB(pAVar1,(__this_01->fields).KOILJHHCIEE,(MethodInfo *)0x0)
    ;
    FightList__HKBKHKMMBFG(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (CJNHFNHJHPE == (PAMEPBLOLPB_o *)0x0) goto LAB_031fdfe8;
  }
  PAMEPBLOLPB__DKLPJPMNILO(CJNHFNHJHPE,LFJGFLNMBMC,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (Roster_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
    return;
  }
LAB_031fdfe8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NDNPGAKJLHM()  [RVA 0x30FF038]
// BattlePeriodic$$NDNPGAKJLHM @ RVA 0x30FF038

void BattlePeriodic__NDNPGAKJLHM(MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_AGILEPNENOH__o *pSVar1;
  BattlePeriodic_StaticFields *pAVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60 [2];
  
  if ((DAT_045664b0 & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePeriodic>_Clear__);
    DAT_045664b0 = 1;
  }
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = BattlePeriodic_TypeInfo->static_fields->DEKLKEHGJEB;
  if (pSVar1 != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(local_60,0,(MethodInfo *)0x0);
    pAVar2 = BattlePeriodic_TypeInfo->static_fields;
    (pAVar2->GKGHELAOIBG).fields.fakeValueActive = local_60[0].fields.fakeValueActive;
    (pAVar2->GKGHELAOIBG).fields.inited = local_60[0].fields.inited;
    *(undefined6 *)&(pAVar2->GKGHELAOIBG).fields.field_0x1a = local_60[0].fields._26_6_;
    (pAVar2->GKGHELAOIBG).fields.fakeValue = local_60[0].fields.fakeValue;
    (pAVar2->GKGHELAOIBG).fields.hiddenValue = local_60[0].fields.hiddenValue;
    (pAVar2->GKGHELAOIBG).fields.currentCryptoKey = local_60[0].fields.currentCryptoKey;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x30FF0F8]
// BattlePeriodic$$.cctor @ RVA 0x30FF0F8

void BattlePeriodic___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_AGILEPNENOH__o *__this;
  BattlePeriodic_StaticFields *pAVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_50;
  int64_t iStack_48;
  int64_t iStack_40;
  bool_conflict bStack_38;
  bool_conflict bStack_37;
  undefined6 uStack_36;
  
  if ((DAT_045664b1 & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePeriodic>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BattlePeriodic>_TypeInfo);
    DAT_045664b1 = 1;
  }
  __this = (System_Collections_Generic_List_AGILEPNENOH__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<BattlePeriodic>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<BattlePeriodic>__ctor__);
  BattlePeriodic_TypeInfo->static_fields->DEKLKEHGJEB = __this;
  thunk_FUN_01c20e04(BattlePeriodic_TypeInfo->static_fields,__this);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,0,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  pAVar1 = BattlePeriodic_TypeInfo->static_fields;
  (pAVar1->GKGHELAOIBG).fields.fakeValueActive = local_70.fields.fakeValueActive;
  (pAVar1->GKGHELAOIBG).fields.inited = local_70.fields.inited;
  *(undefined6 *)&(pAVar1->GKGHELAOIBG).fields.field_0x1a = local_70.fields._26_6_;
  (pAVar1->GKGHELAOIBG).fields.fakeValue = local_70.fields.fakeValue;
  (pAVar1->GKGHELAOIBG).fields.hiddenValue = local_70.fields.hiddenValue;
  (pAVar1->GKGHELAOIBG).fields.currentCryptoKey = local_70.fields.currentCryptoKey;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_90,0,(MethodInfo *)0x0);
  pAVar1 = BattlePeriodic_TypeInfo->static_fields;
  (pAVar1->MKMJJANAAFD).fields.fakeValueActive = local_90.fields.fakeValueActive;
  (pAVar1->MKMJJANAAFD).fields.inited = local_90.fields.inited;
  *(undefined6 *)&(pAVar1->MKMJJANAAFD).fields.field_0x1a = local_90.fields._26_6_;
  (pAVar1->MKMJJANAAFD).fields.fakeValue = local_90.fields.fakeValue;
  (pAVar1->MKMJJANAAFD).fields.hiddenValue = local_90.fields.hiddenValue;
  (pAVar1->MKMJJANAAFD).fields.currentCryptoKey = local_90.fields.currentCryptoKey;
  return;
}


// ===== protected void CMNDDAHEGBG(long LFJGFLNMBMC)  [RVA 0x30FE2D8]
// BattlePeriodic$$CMNDDAHEGBG @ RVA 0x30FE2D8

void BattlePeriodic__CMNDDAHEGBG(BattlePeriodic_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  BattlePeriodic_StaticFields *pAVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  int64_t local_70;
  int64_t iStack_68;
  int64_t iStack_60;
  bool_conflict bStack_58;
  bool_conflict bStack_57;
  undefined6 uStack_56;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045664b2 & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    DAT_045664b2 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_90,LFJGFLNMBMC,(MethodInfo *)0x0);
  iStack_68 = local_90.fields.hiddenValue;
  local_70 = local_90.fields.currentCryptoKey;
  bStack_58 = local_90.fields.fakeValueActive;
  bStack_57 = local_90.fields.inited;
  uStack_56 = local_90.fields._26_6_;
  iStack_60 = local_90.fields.fakeValue;
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = BattlePeriodic_TypeInfo->static_fields;
  (pAVar2->MKMJJANAAFD).fields.fakeValueActive = bStack_58;
  (pAVar2->MKMJJANAAFD).fields.inited = bStack_57;
  *(undefined6 *)&(pAVar2->MKMJJANAAFD).fields.field_0x1a = uStack_56;
  (pAVar2->MKMJJANAAFD).fields.fakeValue = iStack_60;
  (pAVar2->MKMJJANAAFD).fields.hiddenValue = iStack_68;
  (pAVar2->MKMJJANAAFD).fields.currentCryptoKey = local_70;
  __this_00 = (__this->fields).super.HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      local_48.fields._current[5].monitor = (void *)LFJGFLNMBMC;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static long HCIGNMBPBOP()  [RVA 0x30FF1EC]
// BattlePeriodic$$HCIGNMBPBOP @ RVA 0x30FF1EC

int64_t BattlePeriodic__HCIGNMBPBOP(MethodInfo *method)

{
  int64_t iVar1;
  BattlePeriodic_StaticFields *pAVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  if ((DAT_045664b3 & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    DAT_045664b3 = 1;
  }
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = BattlePeriodic_TypeInfo->static_fields;
  local_40.fields.fakeValueActive = (pAVar2->MKMJJANAAFD).fields.fakeValueActive;
  local_40.fields.inited = (pAVar2->MKMJJANAAFD).fields.inited;
  local_40.fields._26_6_ = *(undefined6 *)&(pAVar2->MKMJJANAAFD).fields.field_0x1a;
  local_40.fields.fakeValue = (pAVar2->MKMJJANAAFD).fields.fakeValue;
  local_40.fields.hiddenValue = (pAVar2->MKMJJANAAFD).fields.hiddenValue;
  local_40.fields.currentCryptoKey = (pAVar2->MKMJJANAAFD).fields.currentCryptoKey;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_40,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public static long IMAKPJNJIJF()  [RVA 0x30FF260]
// BattlePeriodic$$IMAKPJNJIJF @ RVA 0x30FF260

int64_t BattlePeriodic__IMAKPJNJIJF(MethodInfo *method)

{
  int64_t iVar1;
  BattlePeriodic_StaticFields *pAVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  if ((DAT_045664b4 & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
                    /* try { // try from 031ff28c to 032ff4b7 has its CatchHandler @ 031ff28c
                       catch() { ... } // from try @ 031ff28c with catch @ 031ff28c
                       catch() { ... } // from try @ 031ffa40 with catch @ 031ff28c
                       catch() { ... } // from try @ 031ffaf8 with catch @ 031ff28c
                       catch() { ... } // from try @ 031ffb00 with catch @ 031ff28c
                       catch() { ... } // from try @ 031ffc54 with catch @ 031ff28c */
    DAT_045664b4 = 1;
  }
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = BattlePeriodic_TypeInfo->static_fields;
  local_40.fields.fakeValueActive = (pAVar2->GKGHELAOIBG).fields.fakeValueActive;
  local_40.fields.inited = (pAVar2->GKGHELAOIBG).fields.inited;
  local_40.fields._26_6_ = *(undefined6 *)&(pAVar2->GKGHELAOIBG).fields.field_0x1a;
  local_40.fields.fakeValue = (pAVar2->GKGHELAOIBG).fields.fakeValue;
  local_40.fields.hiddenValue = (pAVar2->GKGHELAOIBG).fields.hiddenValue;
  local_40.fields.currentCryptoKey = (pAVar2->GKGHELAOIBG).fields.currentCryptoKey;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_40,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public void .ctor(string ACCIHBHMFPN, Vector2 BLEOKMIDGIK, string KGLJICLJHEL, string NEJHIEOHMCF, string FNLBOLFNLPP, string ONLOEDAIEOJ, ushort JDIHKNKFJMK, ushort EHEFEIEKHJO, string JCLPIKHEKBB, string JEHFOBHMGJM, string LBKOHHHPNIP, string FNLFDPAJACB, string OAJJFDIDFKC, string JOPFAAGCIOI, bool MENLMNJNMMO)  [RVA 0x30FF2D4]
// BattlePeriodic$$.ctor @ RVA 0x30FF2D4

void BattlePeriodic___ctor(BattlePeriodic_o *__this,System_String_o *ACCIHBHMFPN,
                       UnityEngine_Vector2_o BLEOKMIDGIK,System_String_o *KGLJICLJHEL,
                       System_String_o *NEJHIEOHMCF,System_String_o *FNLBOLFNLPP,
                       System_String_o *ONLOEDAIEOJ,uint16_t JDIHKNKFJMK,uint16_t EHEFEIEKHJO,
                       System_String_o *JCLPIKHEKBB,System_String_o *JEHFOBHMGJM,
                       System_String_o *LBKOHHHPNIP,System_String_o *FNLFDPAJACB,
                       System_String_o *OAJJFDIDFKC,System_String_o *JOPFAAGCIOI,bool MENLMNJNMMO,
                       MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_AGILEPNENOH__o *__this_00;
  BattlePeriodic_array *pAVar3;
  
  if ((DAT_045664b5 & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePeriodic>_Add__);
    DAT_045664b5 = 1;
  }
  OOMHDDBCBJP___ctor((OOMHDDBCBJP_o *)__this,ACCIHBHMFPN,BLEOKMIDGIK,KGLJICLJHEL,NEJHIEOHMCF,
                     FNLBOLFNLPP,ONLOEDAIEOJ,JDIHKNKFJMK,EHEFEIEKHJO,JCLPIKHEKBB,JEHFOBHMGJM,
                     LBKOHHHPNIP,FNLFDPAJACB,OAJJFDIDFKC,JOPFAAGCIOI,MENLMNJNMMO,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<BattlePeriodic>_Add__;
  __this_00 = BattlePeriodic_TypeInfo->static_fields->DEKLKEHGJEB;
  if (__this_00 != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
    pAVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pAVar3 != (BattlePeriodic_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pAVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pAVar3->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pAVar3->m_Items + (int)uVar1,__this);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x30FF474]
// BattlePeriodic$$RandomizeObscuredVars @ RVA 0x30FF474

void BattlePeriodic__RandomizeObscuredVars(BattlePeriodic_o *__this,MethodInfo *method)

{
  if ((DAT_045664b6 & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    DAT_045664b6 = 1;
  }
  OOMHDDBCBJP__RandomizeObscuredVars((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031ff4b8 to 032ff4df has its CatchHandler @ 031ffba0 */
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&BattlePeriodic_TypeInfo->static_fields->GKGHELAOIBG,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&BattlePeriodic_TypeInfo->static_fields->MKMJJANAAFD,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&BattlePeriodic_TypeInfo->static_fields->DKMPMFFECBK,(MethodInfo *)0x0);
  return;
}

