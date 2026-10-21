// MGNPHCAAEIO.OPCJEEFOCFB$$.ctor @ RVA 0x3410878

void MGNPHCAAEIO_OPCJEEFOCFB___ctor
               (MGNPHCAAEIO_OPCJEEFOCFB_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04568081 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4617);
    DAT_04568081 = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    pSVar2 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
    ppSVar1 = &(__this->fields).KPDPJONADPJ;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    (__this->fields).JIJLBFGKNJK = pSVar2;
    thunk_FUN_01c20e04(__this,pSVar2);
    (__this->fields).ADCKCMDHIHM = 0;
    ppSVar1 = &(__this->fields).GPOEEHGGIII;
    *ppSVar1 = StringLiteral_4617;
    thunk_FUN_01c20e04(ppSVar1);
    (__this->fields).OAPLLNNEONM = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

