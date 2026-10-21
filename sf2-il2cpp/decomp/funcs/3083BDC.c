// KFCFGKEHPNK$$CJFHNCGHAPF @ RVA 0x3083BDC

void KFCFGKEHPNK__CJFHNCGHAPF
               (ClanLogoImage_o *GPPDAEOOLLN,OJEHKJHEBID_o *PBNPKBJKFHE,bool KLJCGIAILPD,
               float JKOJPEKLBCI,MethodInfo *method)

{
  System_String_o *NEJHIEOHMCF;
  int32_t OHLDDIANEPE;
  EEHFEPPDBHL_o *pEVar1;
  
  if ((DAT_04566014 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04566014 = 1;
  }
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
    JKOJPEKLBCI = 1.0;
    OHLDDIANEPE = 0;
    NEJHIEOHMCF = StringLiteral_1;
  }
  else {
    pEVar1 = (PBNPKBJKFHE->fields).MMIHELOLFPP;
    if (pEVar1 == (EEHFEPPDBHL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    NEJHIEOHMCF = (pEVar1->fields).JAAACMPGMKJ;
    if (KLJCGIAILPD) {
      OHLDDIANEPE = (PBNPKBJKFHE->fields).GPDALMOAKGG;
    }
    else {
      OHLDDIANEPE = 0;
    }
  }
  KFCFGKEHPNK__CJFHNCGHAPF(GPPDAEOOLLN,NEJHIEOHMCF,OHLDDIANEPE,JKOJPEKLBCI,method);
  return;
}

