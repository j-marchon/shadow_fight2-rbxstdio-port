// BPBGAAHBFKH$$MergeFrom @ RVA 0x35CFD20

void BPBGAAHBFKH__MergeFrom(BPBGAAHBFKH_o *__this,BPBGAAHBFKH_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  BPBGAAHBFKH_Fields *pBVar3;
  
  if ((DAT_04568fd5 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_Add__);
    DAT_04568fd5 = 1;
  }
  if (IBKIPBJJCPG == (BPBGAAHBFKH_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).PDOMCPONBNB;
  if (iVar1 != 0) {
    (__this->fields).PDOMCPONBNB = iVar1;
  }
  __this_00 = (__this->fields).IGPJEDLPAGI;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).IGPJEDLPAGI,
               Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_Add__);
    pBVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pBVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pBVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pBVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

