// ALOGBMGGBEP$$MergeFrom @ RVA 0x3492364

void ALOGBMGGBEP__MergeFrom(ALOGBMGGBEP_o *__this,ALOGBMGGBEP_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  System_String_o *pSVar2;
  ALOGBMGGBEP_Fields *pAVar3;
  
  if (IBKIPBJJCPG == (ALOGBMGGBEP_o *)0x0) {
    return;
  }
  pSVar2 = (IBKIPBJJCPG->fields).KBNAEBFHCKD;
  if (pSVar2 != (System_String_o *)0x0) {
    if ((pSVar2->fields)._stringLength != 0) {
      ALOGBMGGBEP__CNILLEFMALH(__this,pSVar2,method);
    }
    pSVar2 = (IBKIPBJJCPG->fields).FICPNGIAKEH;
    if (pSVar2 != (System_String_o *)0x0) {
      if ((pSVar2->fields)._stringLength != 0) {
        ALOGBMGGBEP__BKDOEIHJFAP(__this,pSVar2,method);
      }
      pAVar3 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pAVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pAVar3->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pAVar3,pGVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

