// KGAGPHANJAO$$DGCODECJJCC @ RVA 0x351AA48

bool KGAGPHANJAO__DGCODECJJCC(KGAGPHANJAO_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int32_t iVar4;
  
  if ((DAT_04568976 & 1) == 0) {
    FUN_01bab630(&Method_KJFPGDFNFCL_AOKIANMEBCH<int>__);
    DAT_04568976 = 1;
  }
  bVar3 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if (bVar3) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar4 = KJFPGDFNFCL__AOKIANMEBCH<int>
                      ((KDFMDHADHMD->fields).KOANCCDDBDA,0,Method_KJFPGDFNFCL_AOKIANMEBCH<int>__);
    if (-1 < iVar4) {
      iVar1 = (__this->fields).CDPHMKOHKKH;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar4 / iVar1;
      }
      return (iVar4 == iVar2 * iVar1) != ((__this->fields).super.GBBHFPBFOPI != false);
    }
  }
  return false;
}

