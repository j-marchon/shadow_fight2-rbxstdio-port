// IIHMKHNLJKD$$FOPHMMMLPBN @ RVA 0x31D1C70

void IIHMKHNLJKD__FOPHMMMLPBN
               (IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,int32_t OOGPLJBADCD,
               bool KLIHNEDCGEP,MethodInfo *method)

{
  IIHMKHNLJKD_MGNPEFBKION_o *pIVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  method_00 = (MethodInfo *)(ulong)(uint)OOGPLJBADCD;
  if ((DAT_04566cae & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566cae = 1;
  }
  pIVar1 = IIHMKHNLJKD__FFKFEHOIJCG(__this,KKJPPDNKGAI,method_00);
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(OOGPLJBADCD,(MethodInfo *)0x0);
  if (pIVar1 != (IIHMKHNLJKD_MGNPEFBKION_o *)0x0) {
    (pIVar1->fields).ADHFHEJFJPK.fields = CVar2;
    if (!KLIHNEDCGEP) {
      return;
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

