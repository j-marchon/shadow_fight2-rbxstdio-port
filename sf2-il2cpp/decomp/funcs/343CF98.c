// IHMIMECHIAN$$MergeFrom @ RVA 0x343CF98

void IHMIMECHIAN__MergeFrom(IHMIMECHIAN_o *__this,IHMIMECHIAN_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  IHMIMECHIAN_Fields *pIVar3;
  float fVar4;
  
                    /* try { // try from 0353cfb0 to 0363cfb3 has its CatchHandler @ 0353d0e0 */
  if ((DAT_045681e9 & 1) == 0) {
                    /* try { // try from 0353cfb4 to 0363cfbf has its CatchHandler @ 0353d0e4 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
    DAT_045681e9 = 1;
  }
  if (IBKIPBJJCPG == (IHMIMECHIAN_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).CHLCOKOBIHN;
                    /* try { // try from 0353cfd0 to 0363cfd3 has its CatchHandler @ 0353d0d8 */
  if (iVar1 != 0) {
                    /* try { // try from 0353cfd4 to 0363cfef has its CatchHandler @ 0353d0dc */
    (__this->fields).CHLCOKOBIHN = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).KFBIHGFDAOL;
  if (iVar1 != 0) {
    (__this->fields).KFBIHGFDAOL = iVar1;
  }
  if ((IBKIPBJJCPG->fields).POHDGAPDBGK != false) {
                    /* try { // try from 0353cff0 to 0363d0c7 has its CatchHandler @ 0353c70c */
    (__this->fields).POHDGAPDBGK = true;
  }
  if ((IBKIPBJJCPG->fields).PJMOADBJNKH != false) {
    (__this->fields).PJMOADBJNKH = true;
  }
  if ((IBKIPBJJCPG->fields).NNCLFDMPFHP != false) {
    (__this->fields).NNCLFDMPFHP = true;
  }
  if ((IBKIPBJJCPG->fields).HOFAHGOCDCE != false) {
    (__this->fields).HOFAHGOCDCE = true;
  }
  fVar4 = (IBKIPBJJCPG->fields).KLOGBBKOLFL;
  if (fVar4 != 0.0) {
    (__this->fields).KLOGBBKOLFL = fVar4;
  }
  __this_00 = (__this->fields).IKCCLDMOOKP;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<int>__Add
              (__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).IKCCLDMOOKP,
               Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
    iVar1 = (IBKIPBJJCPG->fields).LADINGEOKCK;
    if (iVar1 != 0) {
      (__this->fields).LADINGEOKCK = iVar1;
    }
    pIVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pIVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pIVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pIVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

