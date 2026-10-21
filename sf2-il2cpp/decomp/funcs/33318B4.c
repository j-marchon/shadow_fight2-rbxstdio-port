// JCFJFJCKLKG$$MergeFrom @ RVA 0x33318B4

void JCFJFJCKLKG__MergeFrom(JCFJFJCKLKG_o *__this,JCFJFJCKLKG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  JCFJFJCKLKG_Fields *pJVar3;
  
  if ((DAT_0456790e & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Add__);
    DAT_0456790e = 1;
  }
  if (IBKIPBJJCPG == (JCFJFJCKLKG_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).PDOMCPONBNB;
  if (iVar1 != 0) {
    (__this->fields).PDOMCPONBNB = iVar1;
  }
  __this_00 = (__this->fields).LFOCACIGEFK;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).LFOCACIGEFK,
               Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Add__);
    pJVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pJVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pJVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pJVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

