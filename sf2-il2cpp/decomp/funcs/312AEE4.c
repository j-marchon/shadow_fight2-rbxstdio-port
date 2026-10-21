// ABMPAOFAAEI$$NKLGCNHLBAF @ RVA 0x312AEE4

void ABMPAOFAAEI__NKLGCNHLBAF(ABMPAOFAAEI_o *__this,System_String_o *FILIAGHPABA,MethodInfo *method)

{
  int32_t iVar1;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  System_String_array *BPMHJKJEALH;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *pSVar2;
  MethodInfo *in_x3;
  ulong uVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_0456668d & 1) == 0) {
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1073);
    DAT_0456668d = 1;
  }
  __this_00 = (System_Text_RegularExpressions_Regex_o *)
              thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(__this_00,StringLiteral_1073,(MethodInfo *)0x0);
  if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (__this_01 = System_Text_RegularExpressions_Regex__Matches
                            (__this_00,FILIAGHPABA,(MethodInfo *)0x0),
     __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
    iVar1 = System_Text_RegularExpressions_MatchCollection__get_Count(__this_01,(MethodInfo *)0x0);
    BPMHJKJEALH = (System_String_array *)FUN_01bab718(string___TypeInfo,iVar1);
    if (BPMHJKJEALH != (System_String_array *)0x0) {
      if (0 < (int)BPMHJKJEALH->max_length) {
        uVar3 = 0;
        ppSVar4 = BPMHJKJEALH->m_Items;
        do {
          __this_02 = (System_Text_RegularExpressions_Capture_o *)
                      (*(__this_01->klass->vtable)._35_get_Item.methodPtr)
                                (__this_01,uVar3 & 0xffffffff,
                                 (__this_01->klass->vtable)._35_get_Item.method);
          if (__this_02 == (System_Text_RegularExpressions_Capture_o *)0x0) goto LAB_0322b02c;
          pSVar2 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          if ((uint)BPMHJKJEALH->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          *ppSVar4 = pSVar2;
          thunk_FUN_01c20e04(ppSVar4,pSVar2);
          uVar3 = uVar3 + 1;
          ppSVar4 = ppSVar4 + 1;
        } while ((long)uVar3 < (long)(int)BPMHJKJEALH->max_length);
      }
      ABMPAOFAAEI__DOLDFGHODHL(__this,BPMHJKJEALH,0,in_x3);
      return;
    }
  }
LAB_0322b02c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

