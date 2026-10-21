// MGNPHCAAEIO.OPCJEEFOCFB$$.ctor @ RVA 0x34107F0

void MGNPHCAAEIO_OPCJEEFOCFB___ctor
               (MGNPHCAAEIO_OPCJEEFOCFB_o *__this,JMDPBFOCHHP_ENBCJNLAHAC_o *NPOAPJKIIOF,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04568080 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10876);
    DAT_04568080 = 1;
  }
  if (NPOAPJKIIOF != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    (__this->fields).JIJLBFGKNJK = (NPOAPJKIIOF->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04(__this);
    (__this->fields).KPDPJONADPJ = (NPOAPJKIIOF->fields).KPDPJONADPJ;
    thunk_FUN_01c20e04();
    (__this->fields).ADCKCMDHIHM = 0;
    ppSVar1 = &(__this->fields).GPOEEHGGIII;
    *ppSVar1 = StringLiteral_10876;
    thunk_FUN_01c20e04(ppSVar1);
    (__this->fields).OAPLLNNEONM = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

