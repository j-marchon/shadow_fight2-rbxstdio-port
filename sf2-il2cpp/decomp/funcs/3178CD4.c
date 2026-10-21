// LIEDABKCNJM$$.ctor @ RVA 0x3178CD4

void LIEDABKCNJM___ctor(LIEDABKCNJM_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  KALOJBMDHLA_o *pKVar3;
  
  if ((DAT_0456696e & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_10338);
    FUN_01bab630(&StringLiteral_10619);
    FUN_01bab630(&StringLiteral_10247);
    FUN_01bab630(&StringLiteral_11512);
    FUN_01bab630(&StringLiteral_16426);
    FUN_01bab630(&StringLiteral_10248);
    FUN_01bab630(&StringLiteral_5218);
    FUN_01bab630(&StringLiteral_10750);
    DAT_0456696e = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 03278dc0 to 03378e63 has its CatchHandler @ 03278dc0
                       catch() { ... } // from try @ 03278dc0 with catch @ 03278dc0
                       catch() { ... } // from try @ 03278e6c with catch @ 03278dc0
                       catch() { ... } // from try @ 03278ed4 with catch @ 03278dc0
                       catch() { ... } // from try @ 03278f04 with catch @ 03278dc0 */
      pSVar1->m_Items[0] = StringLiteral_16426;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).LNONGJEDIFI;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pKVar3 = KALOJBMDHLA__GEBNENADLLM
                         (StringLiteral_10248,StringLiteral_5218,StringLiteral_9679,
                          (MethodInfo *)0x0);
      (__this->fields).CHONKEHLFNF = pKVar3;
      thunk_FUN_01c20e04();
      pKVar3 = KALOJBMDHLA__AGEMKIGEALG
                         (StringLiteral_10247,StringLiteral_10338,StringLiteral_10750,
                          StringLiteral_10619,StringLiteral_11512,(MethodInfo *)0x0);
      (__this->fields).OLPFCBOJCHF = pKVar3;
      thunk_FUN_01c20e04();
                    /* try { // try from 03278e64 to 03378e6b has its CatchHandler @ 03278eb8 */
                    /* try { // try from 03278e6c to 03378ecf has its CatchHandler @ 03278dc0 */
      AGKAPHHMGKD___ctor((AGKAPHHMGKD_o *)__this,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

