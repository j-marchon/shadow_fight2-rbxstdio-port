// OBCMNBDBNFO$$MergeFrom @ RVA 0x35022F8

void OBCMNBDBNFO__MergeFrom(OBCMNBDBNFO_o *__this,OBCMNBDBNFO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  OBCMNBDBNFO_Fields *pOVar3;
  
                    /* catch() { ... } // from try @ 036022e0 with catch @ 0360230c */
  if ((DAT_04568861 & 1) == 0) {
                    /* try { // try from 0360231c to 03702323 has its CatchHandler @ 03602338 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Add__);
                    /* try { // try from 03602324 to 0370232f has its CatchHandler @ 03602184 */
    DAT_04568861 = 1;
  }
  if (IBKIPBJJCPG == (OBCMNBDBNFO_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).HHNJEEMAEIH;
                    /* try { // try from 03602330 to 03702337 has its CatchHandler @ 03602338 */
  if (iVar1 != 0) {
    (__this->fields).HHNJEEMAEIH = iVar1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360231c with catch @ 03602338
                       catch(type#2 @ 00000000) { ... } // from try @ 03602330 with catch @ 03602338
                        */
  iVar1 = (IBKIPBJJCPG->fields).MGFICIOBKAI;
  if (iVar1 != 0) {
    (__this->fields).MGFICIOBKAI = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).AKBMEEECABK;
  if (iVar1 != 0) {
    (__this->fields).AKBMEEECABK = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).GCELGJPAMAA;
  if (iVar1 != 0) {
    (__this->fields).GCELGJPAMAA = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).JEAFOMDCLHD;
  if (iVar1 != 0) {
    (__this->fields).JEAFOMDCLHD = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).OKHEECOKPBF;
  if (iVar1 != 0) {
    (__this->fields).OKHEECOKPBF = iVar1;
  }
  __this_00 = (__this->fields).CFIKNGMJBLI;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).CFIKNGMJBLI,
               Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Add__);
    pOVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pOVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pOVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pOVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

