// MLLHFIDIHPA$$MAHFCKJGBPP @ RVA 0x3118E80

void MLLHFIDIHPA__MAHFCKJGBPP(MLLHFIDIHPA_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  System_String_o *pSVar2;
  
  if ((DAT_045665d2 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
                    /* try { // try from 03218eb4 to 03318f6b has its CatchHandler @ 03218eb4
                       catch() { ... } // from try @ 03218eb4 with catch @ 03218eb4
                       catch() { ... } // from try @ 03218fb4 with catch @ 03218eb4
                       catch() { ... } // from try @ 03218ffc with catch @ 03218eb4
                       catch() { ... } // from try @ 03219030 with catch @ 03218eb4
                       catch() { ... } // from try @ 03219060 with catch @ 03218eb4 */
    DAT_045665d2 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).DPDEAEJBFKA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar2,(MethodInfo *)0x0);
  iVar1 = MMOGKBGEPGM__GFLCMDMEOBN(pSVar2,(MethodInfo *)0x0);
  iVar1 = HLHCKNLCOBM__OHCFIOGGNHO(iVar1,(MethodInfo *)0x0);
  (__this->fields).CFHOAJAHGBK = iVar1;
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,(__this->fields).MHDJAEILAJL,(MethodInfo *)0x0);
  (__this->fields).MLPKGJACOFA = pSVar2;
  thunk_FUN_01c20e04();
  MLLHFIDIHPA__FLDPNAOFBDP(__this,method_00);
  return;
}

