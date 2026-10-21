// AFBIGJEEPII$$DGCODECJJCC @ RVA 0x3312AA4

bool AFBIGJEEPII__DGCODECJJCC(AFBIGJEEPII_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  OLKKAIFGGAK_o *pOVar3;
  
  bVar1 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if ((bVar1) &&
     (bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0), !bVar2)) {
    if ((KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) ||
       (pOVar3 = (KDFMDHADHMD->fields).HEMGHNOOJPI, pOVar3 == (OLKKAIFGGAK_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      ((__this->fields).DEKCPPOJFEH,(pOVar3->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
    bVar1 = bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
  }
  return bVar1;
}

