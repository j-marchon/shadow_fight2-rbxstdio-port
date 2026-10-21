// MatchingDialog$$BCINOFNDIAB @ RVA 0x342C148

void MatchingDialog__BCINOFNDIAB(MatchingDialog_o *__this,MethodInfo *method)

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
    FUN_01bab630(&StringLiteral_14094);
    DAT_04568146 = 1;
  }
  ppSVar6 = &(__this->fields).AOGMHFBMOLC;
  bVar2 = System_String__op_Equality(*ppSVar6,StringLiteral_14094,(MethodInfo *)0x0);
  puVar1 = &StringLiteral_14095;
  if (!bVar2) {
    puVar1 = &StringLiteral_14094;
  }
  *ppSVar6 = (System_String_o *)*puVar1;
  thunk_FUN_01c20e04(ppSVar6);
  bVar2 = System_String__op_Equality(*ppSVar6,StringLiteral_14094,(MethodInfo *)0x0);
  pCVar5 = (__this->fields)._hourGlassEffect;
  fVar7 = 0.08;
  if (!bVar2) {
    fVar7 = 0.04;
  }
  (__this->fields).KAAABFPMLCH = fVar7;
  if (pCVar5 != (CocosAnimation_o *)0x0) {
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

