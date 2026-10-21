// MKFPGMBBGIA$$.cctor @ RVA 0x31D7730

void MKFPGMBBGIA___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *pSVar1;
  System_Text_RegularExpressions_Regex_o **ppSVar2;
  System_String_array *pSVar3;
  System_String_array **ppSVar4;
  
  if ((DAT_04566cf4 & 1) == 0) {
    FUN_01bab630(&MKFPGMBBGIA_TypeInfo);
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22487);
    FUN_01bab630(&StringLiteral_2281);
    FUN_01bab630(&StringLiteral_15705);
    FUN_01bab630(&StringLiteral_15704);
    FUN_01bab630(&StringLiteral_2184);
    FUN_01bab630(&StringLiteral_2282);
    FUN_01bab630(&StringLiteral_15703);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_18000);
    DAT_04566cf4 = 1;
  }
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_15703,0x10,(MethodInfo *)0x0);
  MKFPGMBBGIA_TypeInfo->static_fields->OIEIABCHBEC = pSVar1;
  thunk_FUN_01c20e04(MKFPGMBBGIA_TypeInfo->static_fields,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_15703,0,(MethodInfo *)0x0);
  ppSVar2 = &MKFPGMBBGIA_TypeInfo->static_fields->JBOODDDDOOE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_2184,0,(MethodInfo *)0x0);
  ppSVar2 = &MKFPGMBBGIA_TypeInfo->static_fields->BODCLNFOCMC;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_2184,0x10,(MethodInfo *)0x0);
  ppSVar2 = &MKFPGMBBGIA_TypeInfo->static_fields->NANAECLMLNA;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_15704,0x10,(MethodInfo *)0x0);
  ppSVar2 = &MKFPGMBBGIA_TypeInfo->static_fields->FBOADMKLNOO;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_15705,0x10,(MethodInfo *)0x0);
  ppSVar2 = &MKFPGMBBGIA_TypeInfo->static_fields->BMIBLAGHDLD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar3 = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = StringLiteral_1;
      thunk_FUN_01c20e04(pSVar3->m_Items);
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = StringLiteral_18000;
        thunk_FUN_01c20e04(pSVar3->m_Items + 1);
        if (2 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[2] = StringLiteral_2282;
          thunk_FUN_01c20e04(pSVar3->m_Items + 2);
          if (3 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[3] = StringLiteral_22487;
            thunk_FUN_01c20e04(pSVar3->m_Items + 3);
            if (4 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[4] = StringLiteral_2281;
              thunk_FUN_01c20e04();
              ppSVar4 = &MKFPGMBBGIA_TypeInfo->static_fields->CJBDOFDHLOJ;
              *ppSVar4 = pSVar3;
              thunk_FUN_01c20e04(ppSVar4,pSVar3);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

