// PKIOGLDBKOI$$DGCODECJJCC @ RVA 0x343AA14

bool PKIOGLDBKOI__DGCODECJJCC(PKIOGLDBKOI_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  JADGCGOJLJB_o *__this_00;
  byte bVar4;
  
  if ((DAT_045681cb & 1) == 0) {
    FUN_01bab630(&Method_KJFPGDFNFCL_AOKIANMEBCH<JADGCGOJLJB>__);
    DAT_045681cb = 1;
  }
  bVar2 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if (bVar2) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (JADGCGOJLJB_o *)
                KJFPGDFNFCL__AOKIANMEBCH<object>
                          ((KDFMDHADHMD->fields).KOANCCDDBDA,(Il2CppObject *)0x0,
                           Method_KJFPGDFNFCL_AOKIANMEBCH<JADGCGOJLJB>__);
    if (__this_00 != (JADGCGOJLJB_o *)0x0) {
      iVar1 = (__this->fields).PHCPDFIBHGH;
      if (((iVar1 == 0) ||
          (iVar3 = JADGCGOJLJB__NHGGBEACKBD(__this_00,(MethodInfo *)0x0), iVar1 == iVar3)) &&
         ((bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).super.DHKOGAHJNMK,(MethodInfo *)0x0),
          bVar2 || (bVar2 = System_String__op_Equality
                                      ((__this->fields).super.DHKOGAHJNMK,
                                       (__this_00->fields).JIJLBFGKNJK,(MethodInfo *)0x0), bVar2))))
      {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
      return (bool)(bVar4 ^ (__this->fields).super.GBBHFPBFOPI != false);
    }
  }
  return false;
}

