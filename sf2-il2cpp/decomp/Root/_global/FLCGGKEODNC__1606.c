// TypeDefIndex 1606
// Namespace: 
// public class FLCGGKEODNC
// Fields:
//   public string ABCHAOKFLGL; // 0x10
//   public LabelButton.MANJLBPDELA BANIDGFENDE; // 0x18
//   public string PHONOLEMBHN; // 0x20
//   public string DMMDLLBOHNP; // 0x28
//   public HPPDIEDAKEC HPPDIEDAKEC; // 0x30
//   public bool KMJPPCLIEDG; // 0x34
//   public FBBNEILNOKK ACNLHENNKAJ; // 0x38

// ===== public void .ctor()  [RVA 0x31B727C]
// FLCGGKEODNC$$.ctor @ RVA 0x31B727C

void FLCGGKEODNC___ctor(FLCGGKEODNC_o *__this,MethodInfo *method)

{
  if ((DAT_04566bbc & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566bbc = 1;
  }
  (__this->fields).ABCHAOKFLGL = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).BANIDGFENDE = 1;
  (__this->fields).PHONOLEMBHN = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).HPPDIEDAKEC = 6;
  (__this->fields).ACNLHENNKAJ = -1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool GJNNHMKDOBG()  [RVA 0x31B72FC]
// FLCGGKEODNC$$GJNNHMKDOBG @ RVA 0x31B72FC

bool FLCGGKEODNC__GJNNHMKDOBG(FLCGGKEODNC_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DMMDLLBOHNP,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = false;
  }
  else {
    bVar1 = (__this->fields).KMJPPCLIEDG == false;
  }
  return bVar1;
}


// ===== public void .ctor(FLCGGKEODNC HBHPFKJMGCK)  [RVA 0x31B7330]
// FLCGGKEODNC$$.ctor @ RVA 0x31B7330

void FLCGGKEODNC___ctor(FLCGGKEODNC_o *__this,FLCGGKEODNC_o *HBHPFKJMGCK,MethodInfo *method)

{
  FLCGGKEODNC_Fields *pFVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566bbd & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566bbd = 1;
  }
                    /* try { // try from 032b736c to 033b73f7 has its CatchHandler @ 032b736c
                       catch() { ... } // from try @ 032b736c with catch @ 032b736c
                       catch() { ... } // from try @ 032b7418 with catch @ 032b736c
                       catch() { ... } // from try @ 032b743c with catch @ 032b736c
                       catch() { ... } // from try @ 032b7464 with catch @ 032b736c
                       catch() { ... } // from try @ 032b74a4 with catch @ 032b736c */
  pFVar1 = &__this->fields;
  pFVar1->ABCHAOKFLGL = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pFVar1);
  (__this->fields).BANIDGFENDE = 1;
  ppSVar2 = &(__this->fields).PHONOLEMBHN;
  *ppSVar2 = StringLiteral_1/*""*/;
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


// ===== public void CBAGKAAEOAD(string OIJKLJBGOLH, string GMLKIEHIOIA)  [RVA 0x31B7418]
// FLCGGKEODNC$$CBAGKAAEOAD @ RVA 0x31B7418

void FLCGGKEODNC__CBAGKAAEOAD
               (FLCGGKEODNC_o *__this,System_String_o *OIJKLJBGOLH,System_String_o *GMLKIEHIOIA,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o **ppSVar3;
  
                    /* try { // try from 032b7418 to 033b7437 has its CatchHandler @ 032b736c */
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(GMLKIEHIOIA,(MethodInfo *)0x0);
                    /* try { // try from 032b7438 to 033b743b has its CatchHandler @ 032b7440 */
                    /* try { // try from 032b743c to 033b745f has its CatchHandler @ 032b736c */
  if (!bVar1) {
    OIJKLJBGOLH = GMLKIEHIOIA;
  }
  ppSVar3 = &(__this->fields).DMMDLLBOHNP;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b7438 with catch @ 032b7440
                        */
  *ppSVar3 = OIJKLJBGOLH;
  iVar2 = 6;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b7410 with catch @ 032b7444
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b73f8 with catch @ 032b7448
                        */
  if (!bVar1) {
    iVar2 = 8;
  }
  thunk_FUN_01c20e04(ppSVar3);
  (__this->fields).HPPDIEDAKEC = iVar2;
                    /* try { // try from 032b7460 to 033b7463 has its CatchHandler @ 032b748c */
                    /* try { // try from 032b7464 to 033b749b has its CatchHandler @ 032b736c */
  return;
}

