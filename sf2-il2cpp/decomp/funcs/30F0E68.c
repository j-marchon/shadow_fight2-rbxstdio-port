// HOOAAGABMBL$$AADEKPLBEEO @ RVA 0x30F0E68

void HOOAAGABMBL__AADEKPLBEEO(HOOAAGABMBL_o *__this,int32_t GMALOFEKAHI,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  Il2CppClass *pIVar3;
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  System_Collections_Generic_List_T__o *local_d0;
  int64_t iStack_c8;
  Il2CppObject *pIStack_c0;
  bool_conflict bStack_b8;
  bool_conflict bStack_b7;
  undefined6 uStack_b6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  method_00 = (MethodInfo *)(ulong)(uint)GMALOFEKAHI;
                    /* try { // try from 031f0e94 to 032f0e9f has its CatchHandler @ 031f07a4 */
  if ((DAT_04566423 & 1) == 0) {
                    /* try { // try from 031f0ea0 to 032f0ea7 has its CatchHandler @ 031f0ea8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
                    /* catch() { ... } // from try @ 031f0e24 with catch @ 031f0ea8
                       catch() { ... } // from try @ 031f0ea0 with catch @ 031f0ea8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566423 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields.fakeValueActive =
       (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValueActive;
  local_90.fields.inited = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.inited;
  local_90.fields._26_6_ =
       *(undefined6 *)&(__this->fields)._JIJJJBAGEFK_k__BackingField.fields.field_0x1a;
  local_90.fields.fakeValue = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValue;
  local_90.fields.hiddenValue = (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.hiddenValue;
  local_90.fields.currentCryptoKey =
       (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.currentCryptoKey;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_90,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  iVar2 = MGNPHCAAEIO__ADEEECDDBPN(iVar2,GMALOFEKAHI,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_b0,iVar2,(MethodInfo *)0x0);
  iStack_c8 = local_b0.fields.hiddenValue;
  local_d0 = (System_Collections_Generic_List_T__o *)local_b0.fields.currentCryptoKey;
  bStack_b8 = local_b0.fields.fakeValueActive;
  bStack_b7 = local_b0.fields.inited;
  uStack_b6 = local_b0.fields._26_6_;
  pIStack_c0 = (Il2CppObject *)local_b0.fields.fakeValue;
  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.hiddenValue = local_b0.fields.hiddenValue;
  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.currentCryptoKey =
       local_b0.fields.currentCryptoKey;
  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValueActive =
       local_b0.fields.fakeValueActive;
  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.inited = local_b0.fields.inited;
  *(undefined6 *)&(__this->fields)._JIJJJBAGEFK_k__BackingField.fields.field_0x1a =
       local_b0.fields._26_6_;
  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValue = local_b0.fields.fakeValue;
  HOOAAGABMBL__OFPDGIIFPLB(__this,(__this->fields).DLBFLPBOJNI,GMALOFEKAHI,in_x3);
  HOOAAGABMBL__OFPDGIIFPLB(__this,(__this->fields).LDIJKGOHMPG,GMALOFEKAHI,in_x3);
  HOOAAGABMBL__DJPOCLICKGO(__this,GMALOFEKAHI,method_00);
  __this_00 = (__this->fields)._PIKFJCELJID_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_b0,
               (System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    local_70.fields._index = (undefined4)local_b0.fields.hiddenValue;
    local_70.fields._version = local_b0.fields.hiddenValue._4_4_;
    local_70.fields._list = (System_Collections_Generic_List_T__o *)local_b0.fields.currentCryptoKey
    ;
    local_70.fields._current = (Il2CppObject *)local_b0.fields.fakeValue;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
        HOOAAGABMBL__NEDDLGPMIEB(__this,GMALOFEKAHI,method_00);
        return;
      }
      if (local_70.fields._current == (Il2CppObject *)0x0) break;
      pIVar3 = local_70.fields._current[1].klass;
      if (pIVar3 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_f0._24_8_ = (pIVar3->_1).interopData;
      local_f0._16_8_ = (pIVar3->_1).typeMetadataHandle;
      local_f0._8_8_ = (pIVar3->_1).generic_class;
      local_f0._0_8_ = (pIVar3->_1).parent;
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_f0,
                         (MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = (MethodInfo *)0x0;
      iVar2 = MGNPHCAAEIO__ADEEECDDBPN(iVar2,GMALOFEKAHI,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_110,iVar2,
                 (MethodInfo *)0x0);
      (pIVar3->_1).generic_class = (void *)local_110._8_8_;
      (pIVar3->_1).parent = (Il2CppClass *)local_110._0_8_;
      (pIVar3->_1).interopData = (void *)local_110._24_8_;
      (pIVar3->_1).typeMetadataHandle = (void *)local_110._16_8_;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

