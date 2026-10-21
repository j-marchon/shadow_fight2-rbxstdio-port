// MatchingDialog$$EGDHNJGMPLM @ RVA 0x342C14C

void MatchingDialog__EGDHNJGMPLM(MatchingDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Exception_o *__this_00;
  undefined8 uVar4;
  MethodInfo *method_00;
  CocosAnimation_o *pCVar5;
  System_String_o *str1;
  System_String_o **ppSVar6;
  float fVar7;
  
  if ((DAT_04568146 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14095);
                    /* try { // try from 0352c184 to 0362c187 has its CatchHandler @ 0352c194 */
                    /* try { // try from 0352c188 to 0362c18b has its CatchHandler @ 0352c190 */
                    /* try { // try from 0352c18c to 0362c1af has its CatchHandler @ 0352c070 */
    FUN_01bab630(&StringLiteral_14094);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352c188 with catch @ 0352c190
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352c184 with catch @ 0352c194
                        */
    DAT_04568146 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352c108 with catch @ 0352c198
                        */
  ppSVar6 = &(__this->fields).AOGMHFBMOLC;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352c124 with catch @ 0352c19c
                        */
  bVar2 = System_String__op_Equality(*ppSVar6,StringLiteral_14094,(MethodInfo *)0x0);
  puVar1 = &StringLiteral_14095;
                    /* try { // try from 0352c1b0 to 0362c1b3 has its CatchHandler @ 0352c1d8 */
  if (!bVar2) {
    puVar1 = &StringLiteral_14094;
  }
                    /* try { // try from 0352c1b4 to 0362c1df has its CatchHandler @ 0352c070 */
  *ppSVar6 = (System_String_o *)*puVar1;
  thunk_FUN_01c20e04(ppSVar6);
  bVar2 = System_String__op_Equality(*ppSVar6,StringLiteral_14094,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0352c1b0 with catch @ 0352c1d8 */
                    /* try { // try from 0352c1e0 to 0362c1e7 has its CatchHandler @ 0352c200 */
  pCVar5 = (__this->fields)._hourGlassEffect;
  fVar7 = 0.08;
                    /* try { // try from 0352c1e8 to 0362c1f7 has its CatchHandler @ 0352c070 */
  if (!bVar2) {
    fVar7 = 0.04;
  }
  (__this->fields).KAAABFPMLCH = fVar7;
  if (pCVar5 != (CocosAnimation_o *)0x0) {
                    /* try { // try from 0352c1f8 to 0362c1ff has its CatchHandler @ 0352c200 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0352c1e0 with catch @ 0352c200
                       catch(type#2 @ 00000000) { ... } // from try @ 0352c1f8 with catch @ 0352c200
                        */
    bVar2 = CocosAnimation__Init(pCVar5,*ppSVar6,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      str1 = *ppSVar6;
      pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5958);
      pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
      System_Exception___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
      uVar4 = thunk_FUN_01bb9178(&Method_MatchingDialog_EGDHNJGMPLM__);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0352c2a8 to 0362c3d3 has its CatchHandler @ 0352c2a8
                       catch() { ... } // from try @ 0352c2a8 with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c534 with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c5b0 with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c614 with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c690 with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c6cc with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c6ec with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c71c with catch @ 0352c2a8 */
      FUN_01bab798(__this_00,uVar4);
    }
    pCVar5 = (__this->fields)._hourGlassEffect;
    if (pCVar5 != (CocosAnimation_o *)0x0) {
      CocosAnimation__SetFramesRange(pCVar5,0,-1,(MethodInfo *)0x0);
      pCVar5 = (__this->fields)._hourGlassEffect;
      if (pCVar5 != (CocosAnimation_o *)0x0) {
        (pCVar5->fields)._PPEGDOHGLJJ_k__BackingField = (__this->fields).KAAABFPMLCH;
        MatchingDialog__KOBMELKNNLE(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

