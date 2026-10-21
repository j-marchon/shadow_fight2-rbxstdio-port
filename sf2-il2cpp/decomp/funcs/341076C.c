// MGNPHCAAEIO.OPCJEEFOCFB$$.ctor @ RVA 0x341076C

void MGNPHCAAEIO_OPCJEEFOCFB___ctor
               (MGNPHCAAEIO_OPCJEEFOCFB_o *__this,HBNENINHPGF_o *OAOLCGAIILM,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
                    /* catch() { ... } // from try @ 03510658 with catch @ 0351076c */
                    /* catch() { ... } // from try @ 03510734 with catch @ 03510770 */
                    /* catch() { ... } // from try @ 03510730 with catch @ 03510774 */
                    /* catch() { ... } // from try @ 03510644 with catch @ 03510778 */
                    /* catch() { ... } // from try @ 03510624 with catch @ 0351077c */
  if ((DAT_0456807f & 1) == 0) {
    FUN_01bab630(&StringLiteral_11073);
                    /* try { // try from 03510794 to 03610797 has its CatchHandler @ 035107b8 */
                    /* try { // try from 03510798 to 036107bf has its CatchHandler @ 035104ec */
    DAT_0456807f = 1;
  }
  if (OAOLCGAIILM != (HBNENINHPGF_o *)0x0) {
    (__this->fields).JIJLBFGKNJK = (OAOLCGAIILM->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(__this);
                    /* catch() { ... } // from try @ 03510794 with catch @ 035107b8 */
                    /* try { // try from 035107c0 to 036107c7 has its CatchHandler @ 035107dc */
    (__this->fields).KPDPJONADPJ = (OAOLCGAIILM->fields)._PGCEKJLODEJ_k__BackingField;
    thunk_FUN_01c20e04();
                    /* try { // try from 035107c8 to 036107d3 has its CatchHandler @ 035104ec */
    (__this->fields).ADCKCMDHIHM = 0;
    ppSVar1 = &(__this->fields).GPOEEHGGIII;
    *ppSVar1 = StringLiteral_11073;
                    /* try { // try from 035107d4 to 036107db has its CatchHandler @ 035107dc */
    thunk_FUN_01c20e04(ppSVar1);
                    /* catch() { ... } // from try @ 035107c0 with catch @ 035107dc
                       catch() { ... } // from try @ 035107d4 with catch @ 035107dc */
    (__this->fields).OAPLLNNEONM = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

