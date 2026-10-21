// MGNPHCAAEIO$$HLMADHKMCHN @ RVA 0x3409290

uint32_t MGNPHCAAEIO__HLMADHKMCHN(AFFHKININGD_o *FBFPLEFCDOK,bool IPGNPJLADGH,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  IGPDCHBJAPD_o *__this;
  JBCGDIEHOHH_o *NNMBHKHJNGF;
  IGPDCHBJAPD_JMPAGIGEFME_o *pIVar4;
  
  if ((DAT_0456802e & 1) == 0) {
    FUN_01bab630(&IGPDCHBJAPD_TypeInfo);
    DAT_0456802e = 1;
  }
  __this = (IGPDCHBJAPD_o *)thunk_FUN_01bda818(IGPDCHBJAPD_TypeInfo);
  IGPDCHBJAPD___ctor(__this,(MethodInfo *)0x0);
  if ((FBFPLEFCDOK != (AFFHKININGD_o *)0x0) && (__this != (IGPDCHBJAPD_o *)0x0)) {
    (__this->fields).ACCIHBHMFPN = (FBFPLEFCDOK->fields).JDNKKGPNHPB;
    (__this->fields).DBIAAJNKHLH = (FBFPLEFCDOK->fields).KOILJHHCIEE;
    thunk_FUN_01c20e04();
    iVar2 = (FBFPLEFCDOK->fields).GNBEPMLNKLA;
    bVar3 = AFFHKININGD__IJKNNMOKCKL(FBFPLEFCDOK,(MethodInfo *)0x0);
    iVar1 = 0;
    if (!bVar3) {
      iVar1 = iVar2;
    }
    NNMBHKHJNGF = AFFHKININGD__CILPNDAAJGF(FBFPLEFCDOK,iVar1 + (uint)IPGNPJLADGH,(MethodInfo *)0x0);
    IGPDCHBJAPD__FPPCNGDMGJL
              (__this,NNMBHKHJNGF,(GOJLGHMMDBO_o *)0x0,(GOJLGHMMDBO_o *)0x0,FBFPLEFCDOK,
               (MethodInfo *)0x0);
    pIVar4 = (__this->fields).GIIFANGGEHM;
    if (pIVar4 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0) {
      return (pIVar4->fields).COAIOPFEFHM;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

