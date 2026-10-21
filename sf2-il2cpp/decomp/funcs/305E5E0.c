// ACHLOMELAJE$$BKKOLINLMAC @ RVA 0x305E5E0

void ACHLOMELAJE__BKKOLINLMAC(ACHLOMELAJE_o *__this,int64_t ANDHBPGOCOM,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  long lVar4;
  long lVar5;
  
  method_00 = (MethodInfo *)0x0;
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).GMCNKDKMHII.fields,(MethodInfo *)0x0);
  if (iVar3 < (__this->fields).BNDNKEHPKEO) {
    lVar4 = (__this->fields).BIFGMBNPOPO;
    if (lVar4 == -1) {
      ACHLOMELAJE__PJIENOHJGNJ(__this,ANDHBPGOCOM,method_00);
    }
    else {
      lVar5 = (long)(__this->fields).JDKIOMFLCFD;
      lVar2 = ANDHBPGOCOM - lVar4;
      iVar1 = 0;
      if (lVar5 != 0) {
        iVar1 = (int)(lVar2 / lVar5);
      }
      if (ANDHBPGOCOM < lVar4) {
        ACHLOMELAJE__PJIENOHJGNJ(__this,ANDHBPGOCOM,method_00);
      }
      if (0 < iVar1) {
        lVar5 = (long)(__this->fields).JDKIOMFLCFD;
        lVar4 = 0;
        if (lVar5 != 0) {
          lVar4 = lVar2 / lVar5;
        }
        ACHLOMELAJE__PJIENOHJGNJ(__this,ANDHBPGOCOM + (lVar4 * lVar5 - lVar2),method_00);
        ACHLOMELAJE__KBKGBCEGIJF(__this,iVar3 + iVar1,method_00);
      }
    }
    ACHLOMELAJE__CLDKAFICAIE(__this,ANDHBPGOCOM,method_00);
    return;
  }
  return;
}

