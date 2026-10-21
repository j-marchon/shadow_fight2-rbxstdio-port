// FPIPKMIODLH.FLANEOMPKLB$$CDFFNDLGBEE @ RVA 0x31171BC

bool FPIPKMIODLH_FLANEOMPKLB__CDFFNDLGBEE
               (FPIPKMIODLH_FLANEOMPKLB_o *__this,IEFEBEDLHNN_o *n,MethodInfo *method)

{
  bool bVar1;
  FPIPKMIODLH_o *pFVar2;
  CNDPAJOLKFN_o *pCVar3;
  float fVar4;
  
  if (((n != (IEFEBEDLHNN_o *)0x0) &&
      (pCVar3 = (n->fields).CNMHHKAMGPI, pCVar3 != (CNDPAJOLKFN_o *)0x0)) &&
     (pFVar2 = (__this->fields).__4__this, pFVar2 != (FPIPKMIODLH_o *)0x0)) {
    fVar4 = (pCVar3->fields).super.OHHDBINAJCB;
    if ((pFVar2->fields)._FLIJNAGNIMB_k__BackingField <= fVar4) {
      bVar1 = fVar4 <= (pFVar2->fields)._OHGCPINODPO_k__BackingField;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

