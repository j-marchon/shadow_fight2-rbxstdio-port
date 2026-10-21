// NGKBNOEJLPH$$LGONLAEKJOE @ RVA 0x349D3D8

int32_t NGKBNOEJLPH__LGONLAEKJOE(NGKBNOEJLPH_o *__this,int32_t JKNHIGPHNBA,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_0456846c & 1) == 0) {
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_0456846c = 1;
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = OCMLPCKBHPN_TypeInfo->static_fields->BINJPMNNDEH;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = JKNHIGPHNBA / iVar1;
  }
  iVar2 = JKNHIGPHNBA - iVar2 * iVar1;
  if (iVar2 != 0) {
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      iVar1 = OCMLPCKBHPN_TypeInfo->static_fields->BINJPMNNDEH;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = JKNHIGPHNBA / iVar1;
      }
                    /* try { // try from 0359d450 to 0369d477 has its CatchHandler @ 0359d61c */
      iVar2 = JKNHIGPHNBA - iVar2 * iVar1;
    }
    if (JKNHIGPHNBA < 1) {
      iVar1 = 0;
    }
    JKNHIGPHNBA = (JKNHIGPHNBA - iVar2) + iVar1;
  }
  return JKNHIGPHNBA;
}

