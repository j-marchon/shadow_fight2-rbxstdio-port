// HPEENDCCJND$$PFHOGFBJGDE @ RVA 0x31583B4

System_String_o *
HPEENDCCJND__PFHOGFBJGDE(HPEENDCCJND_o *__this,int32_t DLEEGMFKGOO,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  uint16_t value;
  int iVar3;
  System_Text_StringBuilder_o *__this_00;
  System_Random_o *pSVar4;
  System_String_o *pSVar5;
  
  if ((DAT_04566853 & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_2609);
    DAT_04566853 = 1;
  }
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,DLEEGMFKGOO,(MethodInfo *)0x0);
  if (DLEEGMFKGOO < 1) {
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
LAB_03258498:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    do {
      pSVar4 = (__this->fields).NBAAKDGJIEI;
      if ((pSVar4 == (System_Random_o *)0x0) ||
         (iVar3 = (*(pSVar4->klass->vtable)._5_Next.methodPtr)
                            (pSVar4,(pSVar4->klass->vtable)._5_Next.method),
         StringLiteral_2609 == (System_String_o *)0x0)) goto LAB_03258498;
      iVar1 = (StringLiteral_2609->fields)._stringLength;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar3 / iVar1;
      }
      value = System_String__get_Chars(StringLiteral_2609,iVar3 - iVar2 * iVar1,(MethodInfo *)0x0);
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03258498;
      System_Text_StringBuilder__Append(__this_00,value,(MethodInfo *)0x0);
      DLEEGMFKGOO = DLEEGMFKGOO + -1;
    } while (DLEEGMFKGOO != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x03258494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar5 = (System_String_o *)
           (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  return pSVar5;
}

