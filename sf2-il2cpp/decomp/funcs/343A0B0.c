// AADKBCFCLKK$$.ctor @ RVA 0x343A0B0

void AADKBCFCLKK___ctor(AADKBCFCLKK_o *__this,AADKBCFCLKK_o *IBKIPBJJCPG,MethodInfo *method)

{
  KDADMJGPAOM_o *pKVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PGICCMFLDPI_o **ppPVar5;
  
                    /* try { // try from 0353a0c0 to 0363a0cb has its CatchHandler @ 0353a0f4 */
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_045681c6 & 1) == 0) {
                    /* try { // try from 0353a0cc to 0363a10f has its CatchHandler @ 03539fd4 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_Clone__);
    DAT_045681c6 = 1;
    method_00 = extraout_x1;
  }
  AADKBCFCLKK___ctor(__this,method_00);
  if (IBKIPBJJCPG != (AADKBCFCLKK_o *)0x0) {
    (__this->fields).AMKHEHFFAKJ = (IBKIPBJJCPG->fields).AMKHEHFFAKJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353a0c0 with catch @ 0353a0f4
                        */
    pKVar1 = (IBKIPBJJCPG->fields).LHFLMBNKPHF;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353a09c with catch @ 0353a0f8
                        */
    if (pKVar1 == (KDADMJGPAOM_o *)0x0) {
      pKVar1 = (KDADMJGPAOM_o *)0x0;
    }
    else {
      pKVar1 = KDADMJGPAOM__Clone(pKVar1,(MethodInfo *)0x0);
    }
                    /* try { // try from 0353a110 to 0363a113 has its CatchHandler @ 0353a13c */
                    /* try { // try from 0353a114 to 0363a14b has its CatchHandler @ 03539fd4 */
    (__this->fields).LHFLMBNKPHF = pKVar1;
    thunk_FUN_01c20e04();
    pPVar2 = (IBKIPBJJCPG->fields).LBKLNIPHGMM;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
    }
    ppPVar5 = &(__this->fields).LBKLNIPHGMM;
                    /* catch() { ... } // from try @ 0353a110 with catch @ 0353a13c */
    *ppPVar5 = pPVar2;
    thunk_FUN_01c20e04(ppPVar5);
                    /* try { // try from 0353a14c to 0363a153 has its CatchHandler @ 0353a168 */
    (__this->fields).IKNCNGMNPPK = (IBKIPBJJCPG->fields).IKNCNGMNPPK;
                    /* try { // try from 0353a154 to 0363a15f has its CatchHandler @ 03539fd4 */
    (__this->fields).IOLELGMBJFL = (IBKIPBJJCPG->fields).IOLELGMBJFL;
    pGVar3 = (IBKIPBJJCPG->fields).MPAIPMANDEO;
    if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
                    /* try { // try from 0353a160 to 0363a167 has its CatchHandler @ 0353a168 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353a14c with catch @ 0353a168
                       catch(type#2 @ 00000000) { ... } // from try @ 0353a160 with catch @ 0353a168
                        */
      pGVar3 = (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,
                          Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_Clone__);
      (__this->fields).MPAIPMANDEO = pGVar3;
      thunk_FUN_01c20e04();
      pPVar2 = (IBKIPBJJCPG->fields).FAEDHKAJJNK;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
        pPVar2 = (PGICCMFLDPI_o *)0x0;
      }
      else {
        pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
      }
      (__this->fields).FAEDHKAJJNK = pPVar2;
      thunk_FUN_01c20e04();
      pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(&__this->fields,pGVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

