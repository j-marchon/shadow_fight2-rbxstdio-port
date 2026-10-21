// OBCMNBDBNFO$$.ctor @ RVA 0x3502D84

void OBCMNBDBNFO___ctor(OBCMNBDBNFO_o *__this,OBCMNBDBNFO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_0456886a & 1) == 0) {
                    /* try { // try from 03602da4 to 03702dab has its CatchHandler @ 03602f74 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Clone__);
    DAT_0456886a = 1;
    method_00 = extraout_x1;
  }
  OBCMNBDBNFO___ctor(__this,method_00);
  if (IBKIPBJJCPG != (OBCMNBDBNFO_o *)0x0) {
                    /* try { // try from 03602dc0 to 03702dc3 has its CatchHandler @ 03602f60 */
    iVar1 = (IBKIPBJJCPG->fields).GCELGJPAMAA;
    iVar2 = (IBKIPBJJCPG->fields).HHNJEEMAEIH;
    iVar3 = (IBKIPBJJCPG->fields).MGFICIOBKAI;
                    /* try { // try from 03602dc4 to 03702dcb has its CatchHandler @ 03602f70 */
    (__this->fields).AKBMEEECABK = (IBKIPBJJCPG->fields).AKBMEEECABK;
    (__this->fields).GCELGJPAMAA = iVar1;
    (__this->fields).HHNJEEMAEIH = iVar2;
    (__this->fields).MGFICIOBKAI = iVar3;
    iVar1 = (IBKIPBJJCPG->fields).OKHEECOKPBF;
    (__this->fields).JEAFOMDCLHD = (IBKIPBJJCPG->fields).JEAFOMDCLHD;
    (__this->fields).OKHEECOKPBF = iVar1;
    pGVar4 = (IBKIPBJJCPG->fields).CFIKNGMJBLI;
    if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
                    /* try { // try from 03602de4 to 03702def has its CatchHandler @ 03602f6c */
      pGVar4 = (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                          Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Clone__);
      (__this->fields).CFIKNGMJBLI = pGVar4;
      thunk_FUN_01c20e04();
      pGVar5 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 03602e04 to 03702e0f has its CatchHandler @ 03602f68 */
      (__this->fields).CKFPENBPNML = pGVar5;
                    /* try { // try from 03602e10 to 03702f57 has its CatchHandler @ 036029bc */
      thunk_FUN_01c20e04(&__this->fields,pGVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

