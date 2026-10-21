// KFCFGKEHPNK$$LEIGOOFFFPE @ RVA 0x30832AC

ClanLogoImage_o *
KFCFGKEHPNK__LEIGOOFFFPE
          (UnityEngine_Transform_o *ODNJEHJPBGA,OJEHKJHEBID_o *PBNPKBJKFHE,bool KLJCGIAILPD,
          float JKOJPEKLBCI,MethodInfo *method)

{
  ClanLogoImage_o *pCVar1;
  int32_t OHLDDIANEPE;
  
  if ((DAT_04566008 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04566008 = 1;
  }
  if (PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) {
    if (KLJCGIAILPD) {
      OHLDDIANEPE = (PBNPKBJKFHE->fields).GPDALMOAKGG;
    }
    else {
      OHLDDIANEPE = 0;
    }
    pCVar1 = KFCFGKEHPNK__LEIGOOFFFPE
                       (ODNJEHJPBGA,(PBNPKBJKFHE->fields).MMIHELOLFPP,OHLDDIANEPE,JKOJPEKLBCI,method
                       );
    return pCVar1;
  }
  pCVar1 = KFCFGKEHPNK__LEIGOOFFFPE(ODNJEHJPBGA,StringLiteral_1,0,1.0,method);
  return pCVar1;
}

