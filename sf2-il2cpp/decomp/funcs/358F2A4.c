// KBECBDOOHCO$$.ctor @ RVA 0x358F2A4

void KBECBDOOHCO___ctor(KBECBDOOHCO_o *__this,CNDPAJOLKFN_o *ECGAPLEDNNE,MethodInfo *method)

{
  int32_t iVar1;
  CNDPAJOLKFN_o *pCVar2;
  UnityEngine_GameObject_o *__this_00;
  CNDPAJOLKFN_o **ppCVar3;
  float fVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368f1e0 with catch @ 0368f2a4
                        */
                    /* try { // try from 0368f2bc to 0378f2bf has its CatchHandler @ 0368f2e8 */
                    /* try { // try from 0368f2c0 to 0378f2f7 has its CatchHandler @ 0368efe8 */
  if ((DAT_04568d67 & 1) == 0) {
                    /* catch() { ... } // from try @ 0368f2bc with catch @ 0368f2e8 */
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
                    /* try { // try from 0368f2f8 to 0378f2ff has its CatchHandler @ 0368f314 */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 0368f300 to 0378f30b has its CatchHandler @ 0368efe8 */
    FUN_01bab630(&StringLiteral_3519);
                    /* try { // try from 0368f30c to 0378f313 has its CatchHandler @ 0368f314 */
    DAT_04568d67 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368f28c with catch @ 0368f314
                       catch(type#2 @ 00000000) { ... } // from try @ 0368f2f8 with catch @ 0368f314
                       catch(type#2 @ 00000000) { ... } // from try @ 0368f30c with catch @ 0368f314
                        */
  pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).PCGIENAHMFK;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_3519,(MethodInfo *)0x0);
  (__this->fields).LDAKOINICNJ = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  if (ECGAPLEDNNE != (CNDPAJOLKFN_o *)0x0) {
    pCVar2 = *ppCVar3;
    fVar4 = (ECGAPLEDNNE->fields).super.OHHDBINAJCB;
    iVar1 = UnityEngine_Random__Range(-0x28,0x28,(MethodInfo *)0x0);
    if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
      (pCVar2->fields).super.OHHDBINAJCB = fVar4 / 200.0 + (float)iVar1 / 10.0;
      pCVar2 = *ppCVar3;
      fVar4 = (ECGAPLEDNNE->fields).super.JOLEIODMLFL;
      iVar1 = UnityEngine_Random__Range(-0x3c,0x14,(MethodInfo *)0x0);
      if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
        (pCVar2->fields).super.JOLEIODMLFL = fVar4 / 200.0 + (float)iVar1 / 10.0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

