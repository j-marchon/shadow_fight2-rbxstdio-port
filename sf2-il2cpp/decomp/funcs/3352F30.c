// PFOMHOLCODE$$OFPHPMGMCAL @ RVA 0x3352F30

System_String_o * PFOMHOLCODE__OFPHPMGMCAL(PFOMHOLCODE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04567a22 & 1) == 0) {
    FUN_01bab630(&StringLiteral_167);
    DAT_04567a22 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).ACCIHBHMFPN,(MethodInfo *)0x0);
  if ((bVar1) &&
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).JEHFOBHMGJM,(MethodInfo *)0x0), bVar1)) {
    pSVar2 = BOFEMGGNODC__OFPHPMGMCAL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = System_String__Concat
                     ((__this->fields).ACCIHBHMFPN,StringLiteral_167,(__this->fields).JEHFOBHMGJM,
                      (MethodInfo *)0x0);
  return pSVar2;
}

