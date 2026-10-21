// IIHMKHNLJKD$$DBOONMCPOIF @ RVA 0x31D1F3C

void IIHMKHNLJKD__DBOONMCPOIF
               (IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,int64_t OOGPLJBADCD,
               bool KLIHNEDCGEP,MethodInfo *method)

{
  IIHMKHNLJKD_MGNPEFBKION_o *pIVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_50;
  int64_t iStack_48;
  int64_t iStack_40;
  bool_conflict bStack_38;
  bool_conflict bStack_37;
  undefined6 uStack_36;
  
  method_00 = (MethodInfo *)OOGPLJBADCD;
  if ((DAT_04566cb1 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566cb1 = 1;
  }
  pIVar1 = IIHMKHNLJKD__FFKFEHOIJCG(__this,KKJPPDNKGAI,method_00);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_70,OOGPLJBADCD,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  if (pIVar1 != (IIHMKHNLJKD_MGNPEFBKION_o *)0x0) {
    (pIVar1->fields).IGLJEOFJJHE.fields.hiddenValue = local_70.fields.hiddenValue;
    (pIVar1->fields).IGLJEOFJJHE.fields.currentCryptoKey = local_70.fields.currentCryptoKey;
    (pIVar1->fields).IGLJEOFJJHE.fields.fakeValueActive = local_70.fields.fakeValueActive;
    (pIVar1->fields).IGLJEOFJJHE.fields.inited = local_70.fields.inited;
    *(undefined6 *)&(pIVar1->fields).IGLJEOFJJHE.fields.field_0x1a = local_70.fields._26_6_;
    (pIVar1->fields).IGLJEOFJJHE.fields.fakeValue = local_70.fields.fakeValue;
    if (KLIHNEDCGEP) {
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
      if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_032d202c;
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,true,(MethodInfo *)0x0);
    }
    return;
  }
LAB_032d202c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

