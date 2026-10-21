// ACHLOMELAJE$$KKAOKMLLBGL @ RVA 0x305B088

uint32_t ACHLOMELAJE__KKAOKMLLBGL(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  uint32_t uVar2;
  PJKHAJKEHEL_o *pPVar3;
  System_Collections_Generic_List_ObscuredUInt__o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o CJNHFNHJHPE;
  
  if ((DAT_04565e81 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredUInt>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredUInt>_get_Item__);
    DAT_04565e81 = 1;
  }
  pPVar3 = (__this->fields).MFLNIMCFPDK;
  if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar3->fields).EMHKAKPKLHI.fields,(MethodInfo *)0x0);
    __this_00 = (__this->fields).BPDLLDECMMN;
    if (__this_00 == (System_Collections_Generic_List_ObscuredUInt__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (iVar1 + -1 < (__this_00->fields)._size) {
      CJNHFNHJHPE = System_Collections_Generic_List<ObscuredUInt>__get_Item
                              (__this_00,iVar1 + -1,
                               Method_System_Collections_Generic_List<ObscuredUInt>_get_Item__);
      uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                        (CJNHFNHJHPE,(MethodInfo *)0x0);
      return uVar2;
    }
  }
  return 0x7fffffff;
}

