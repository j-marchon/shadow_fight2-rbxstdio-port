// NGKBNOEJLPH$$MNIODEEIJFC @ RVA 0x3495D34

int32_t NGKBNOEJLPH__MNIODEEIJFC
                  (NGKBNOEJLPH_o *__this,OLKKAIFGGAK_o *IFCJAOGIPJE,MethodInfo *method)

{
  CAAJMGKIPIE_o *pCVar1;
  MethodInfo *in_x3;
  int32_t iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_04568448 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04568448 = 1;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar3 = LIIFLGALGNK__FDIGGDLGKOI((MethodInfo *)0x0);
  NGKBNOEJLPH__AFAHIDINMJA(__this,(__this->fields).AHDEKCDNHBH,IFCJAOGIPJE,in_x3);
  pCVar1 = (__this->fields)._MPABEMCEHCL_k__BackingField;
  if (pCVar1 != (CAAJMGKIPIE_o *)0x0) {
    fVar4 = CAAJMGKIPIE__FPHJFLLNCND(pCVar1,(__this->fields).AHDEKCDNHBH,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._MPABEMCEHCL_k__BackingField;
    (__this->fields).EBKPLCJLKMG = fVar4;
    if (pCVar1 != (CAAJMGKIPIE_o *)0x0) {
      fVar4 = CAAJMGKIPIE__DKFKPJPDMIA(pCVar1,(__this->fields).AHDEKCDNHBH,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._MPABEMCEHCL_k__BackingField;
      (__this->fields).KMKHEGOMOBM = fVar4;
      if (pCVar1 != (CAAJMGKIPIE_o *)0x0) {
        fVar4 = CAAJMGKIPIE__POMNKDEBKEM(pCVar1,(__this->fields).AHDEKCDNHBH,(MethodInfo *)0x0);
        fVar5 = (__this->fields).EBKPLCJLKMG;
        (__this->fields).BBOFDBPEOIM = fVar4;
        if (fVar3 < fVar5) {
          iVar2 = 2;
        }
        else {
          fVar5 = fVar5 + (__this->fields).KMKHEGOMOBM;
          if (fVar3 < fVar5) {
            iVar2 = 3;
          }
          else {
            iVar2 = 4;
            if (fVar4 + fVar5 <= fVar3) {
              iVar2 = 1;
            }
          }
        }
        return iVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

