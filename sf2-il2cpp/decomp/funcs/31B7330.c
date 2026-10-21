// FLCGGKEODNC$$.ctor @ RVA 0x31B7330

void FLCGGKEODNC___ctor(FLCGGKEODNC_o *__this,FLCGGKEODNC_o *HBHPFKJMGCK,MethodInfo *method)

{
  FLCGGKEODNC_Fields *pFVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566bbd & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04566bbd = 1;
  }
                    /* try { // try from 032b736c to 033b73f7 has its CatchHandler @ 032b736c
                       catch() { ... } // from try @ 032b736c with catch @ 032b736c
                       catch() { ... } // from try @ 032b7418 with catch @ 032b736c
                       catch() { ... } // from try @ 032b743c with catch @ 032b736c
                       catch() { ... } // from try @ 032b7464 with catch @ 032b736c
                       catch() { ... } // from try @ 032b74a4 with catch @ 032b736c */
  pFVar1 = &__this->fields;
  pFVar1->ABCHAOKFLGL = StringLiteral_1;
  thunk_FUN_01c20e04(pFVar1);
  (__this->fields).BANIDGFENDE = 1;
  ppSVar2 = &(__this->fields).PHONOLEMBHN;
  *ppSVar2 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar2);
  (__this->fields).HPPDIEDAKEC = 6;
  (__this->fields).ACNLHENNKAJ = -1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (HBHPFKJMGCK != (FLCGGKEODNC_o *)0x0) {
    (__this->fields).ABCHAOKFLGL = (HBHPFKJMGCK->fields).ABCHAOKFLGL;
    thunk_FUN_01c20e04(pFVar1);
    (__this->fields).BANIDGFENDE = (HBHPFKJMGCK->fields).BANIDGFENDE;
    (__this->fields).PHONOLEMBHN = (HBHPFKJMGCK->fields).PHONOLEMBHN;
    thunk_FUN_01c20e04(ppSVar2);
    ppSVar2 = &(__this->fields).DMMDLLBOHNP;
    *ppSVar2 = (HBHPFKJMGCK->fields).DMMDLLBOHNP;
    thunk_FUN_01c20e04(ppSVar2);
                    /* try { // try from 032b73f8 to 033b73ff has its CatchHandler @ 032b7448 */
    (__this->fields).KMJPPCLIEDG = (HBHPFKJMGCK->fields).KMJPPCLIEDG;
    (__this->fields).ACNLHENNKAJ = (HBHPFKJMGCK->fields).ACNLHENNKAJ;
                    /* try { // try from 032b7410 to 033b7417 has its CatchHandler @ 032b7444 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

