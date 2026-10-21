// ACHLOMELAJE$$AIIJFJLLIDB @ RVA 0x305BBFC

bool ACHLOMELAJE__AIIJFJLLIDB(ACHLOMELAJE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t CJNHFNHJHPE_00;
  int iVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  if (CJNHFNHJHPE != 0) {
    method_00 = (MethodInfo *)0x0;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).GMCNKDKMHII.fields,(MethodInfo *)0x0);
    iVar1 = (__this->fields).BNDNKEHPKEO;
    CJNHFNHJHPE_00 = iVar2 + CJNHFNHJHPE;
    if (iVar1 <= iVar2 + CJNHFNHJHPE) {
      CJNHFNHJHPE_00 = iVar1;
    }
    if (CJNHFNHJHPE_00 < 0) {
      return false;
    }
    ACHLOMELAJE__KBKGBCEGIJF(__this,CJNHFNHJHPE_00,method_00);
  }
  return true;
}

