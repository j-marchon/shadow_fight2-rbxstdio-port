// MCCHIAKPFEL$$IIBJJJKBNLM @ RVA 0x318CD0C

void MCCHIAKPFEL__IIBJJJKBNLM(MCCHIAKPFEL_o *__this,int32_t GMALOFEKAHI,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  System_Collections_Generic_List_OIBMPFJDKGO__o *__this_00;
  JHBHHHKEFOO_o *pJVar3;
  Il2CppClass *pIVar4;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  System_Collections_Generic_List_T__o *local_a0;
  void *pvStack_98;
  Il2CppObject *pIStack_90;
  void *pvStack_88;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  Il2CppObject *local_50;
  
                    /* try { // try from 0328cd0c to 0338cd17 has its CatchHandler @ 0328cb64 */
                    /* try { // try from 0328cd18 to 0338cd1f has its CatchHandler @ 0328cd20 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0328cd04 with catch @ 0328cd20
                       catch(type#2 @ 00000000) { ... } // from try @ 0328cd18 with catch @ 0328cd20
                        */
  if ((DAT_04566a17 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566a17 = 1;
  }
  local_60 = (undefined1  [8])0x0;
  uStack_58._0_4_ = 0;
  uStack_58._4_4_ = 0;
  local_50 = (Il2CppObject *)0x0;
  pJVar3 = (__this->fields).LNONNMPONFN;
  if (pJVar3 != (JHBHHHKEFOO_o *)0x0) {
    local_80.fields.fakeValueActive = (pJVar3->fields).DCDLMCEEOCC.fields.fakeValueActive;
    local_80.fields.inited = (pJVar3->fields).DCDLMCEEOCC.fields.inited;
    local_80.fields._26_6_ = *(undefined6 *)&(pJVar3->fields).DCDLMCEEOCC.fields.field_0x1a;
    local_80.fields.fakeValue = (pJVar3->fields).DCDLMCEEOCC.fields.fakeValue;
    local_80.fields.hiddenValue = (pJVar3->fields).DCDLMCEEOCC.fields.hiddenValue;
    local_80.fields.currentCryptoKey = (pJVar3->fields).DCDLMCEEOCC.fields.currentCryptoKey;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_80,(MethodInfo *)0x0)
    ;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    iVar2 = MGNPHCAAEIO__ADEEECDDBPN(iVar2,GMALOFEKAHI,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_c0,iVar2,(MethodInfo *)0x0)
    ;
    pvStack_98 = (void *)local_c0._8_8_;
    local_a0 = (System_Collections_Generic_List_T__o *)local_c0._0_8_;
    pvStack_88 = (void *)local_c0._24_8_;
    pIStack_90 = (Il2CppObject *)local_c0._16_8_;
    (pJVar3->fields).DCDLMCEEOCC.fields.hiddenValue = local_c0._8_8_;
    (pJVar3->fields).DCDLMCEEOCC.fields.currentCryptoKey = local_c0._0_8_;
    (pJVar3->fields).DCDLMCEEOCC.fields.fakeValueActive = (bool_conflict)local_c0[0x18];
    (pJVar3->fields).DCDLMCEEOCC.fields.inited = (bool_conflict)local_c0[0x19];
    *(undefined6 *)&(pJVar3->fields).DCDLMCEEOCC.fields.field_0x1a = local_c0._26_6_;
    (pJVar3->fields).DCDLMCEEOCC.fields.fakeValue = local_c0._16_8_;
    __this_00 = (__this->fields).PADLGGFCCMI;
    if (__this_00 != (System_Collections_Generic_List_OIBMPFJDKGO__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OIBMPFJDKGO>_GetEnumerator__);
      uStack_58 = (void *)local_c0._8_8_;
      local_60 = (undefined1  [8])local_c0._0_8_;
      local_50 = (Il2CppObject *)local_c0._16_8_;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                           Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                     Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_Dispose__);
          return;
        }
        if (local_50 == (Il2CppObject *)0x0) break;
        pIVar4 = local_50[1].klass;
        if (pIVar4 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        local_e0._24_8_ = (pIVar4->_1).this_arg.data;
        local_e0._16_8_ = *(undefined8 *)&(pIVar4->_1).byval_arg.bits;
        local_e0._8_8_ = (pIVar4->_1).byval_arg.data;
        local_e0._0_8_ = (pIVar4->_1).namespaze;
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_e0,
                           (MethodInfo *)0x0);
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = MGNPHCAAEIO__ADEEECDDBPN(iVar2,GMALOFEKAHI,(MethodInfo *)0x0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_c0,iVar2,
                   (MethodInfo *)0x0);
        pvStack_98 = (void *)local_c0._8_8_;
        local_a0 = (System_Collections_Generic_List_T__o *)local_c0._0_8_;
        pvStack_88 = (void *)local_c0._24_8_;
        pIStack_90 = (Il2CppObject *)local_c0._16_8_;
        (pIVar4->_1).byval_arg.data = (void *)local_c0._8_8_;
        (pIVar4->_1).namespaze = (char *)local_c0._0_8_;
        (pIVar4->_1).this_arg.data = (void *)local_c0._24_8_;
        *(undefined8 *)&(pIVar4->_1).byval_arg.bits = local_c0._16_8_;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

