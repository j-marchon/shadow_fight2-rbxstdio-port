// NJNCPNBIPCD$$AAPDAPFJOCB @ RVA 0x313A608

void NJNCPNBIPCD__AAPDAPFJOCB
               (NJNCPNBIPCD_o *__this,int32_t PAJIGEFDBOK,int32_t OBGCGDAGJBK,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *method_00;
  KKEKJDLEJIL_o *pKVar3;
  HOOAAGABMBL_o *pHVar4;
  int32_t *piVar5;
  int32_t local_28;
  int32_t iStack_24;
  
  method_00 = (MethodInfo *)(ulong)(uint)OBGCGDAGJBK;
  local_28 = OBGCGDAGJBK;
  iStack_24 = PAJIGEFDBOK;
  if ((DAT_04566724 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_11855);
    FUN_01bab630(&StringLiteral_90);
    FUN_01bab630(&StringLiteral_214);
    FUN_01bab630(&StringLiteral_213);
    FUN_01bab630(&StringLiteral_105);
    FUN_01bab630(&StringLiteral_86);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566724 = 1;
  }
  if (((PAJIGEFDBOK == OBGCGDAGJBK) || ((__this->fields).MFFEOOLICJE == (KKEKJDLEJIL_o *)0x0)) ||
     ((__this->fields).LEDBMKOBNDM == (KJNCNBJIJPC_o *)0x0)) {
    return;
  }
  piVar5 = &(__this->fields).LCJAAPPDFJJ;
  *piVar5 = *piVar5 + 1;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,0xc);
  if (values == (System_String_array *)0x0) goto LAB_0323a964;
  if ((int)values->max_length != 0) {
    values->m_Items[0] = StringLiteral_11855;
    thunk_FUN_01c20e04(values->m_Items);
    pSVar2 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = pSVar2;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar2);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = StringLiteral_213;
        thunk_FUN_01c20e04(values->m_Items + 2);
        pSVar2 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = pSVar2;
          thunk_FUN_01c20e04(values->m_Items + 3,pSVar2);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = StringLiteral_214;
            thunk_FUN_01c20e04(values->m_Items + 4);
            pSVar2 = System_Int32__ToString((int32_t)piVar5,(MethodInfo *)0x0);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = pSVar2;
              thunk_FUN_01c20e04(values->m_Items + 5,pSVar2);
              if (6 < (uint)values->max_length) {
                values->m_Items[6] = StringLiteral_105;
                thunk_FUN_01c20e04();
                pKVar3 = (__this->fields).MFFEOOLICJE;
                if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_0323a964;
                pHVar4 = (pKVar3->fields).PNAAPNFPCPI;
                ppSVar1 = (System_String_o **)&StringLiteral_1;
                if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
                  ppSVar1 = &(pHVar4->fields)._COIPKAKHDFP_k__BackingField;
                }
                if (7 < (uint)values->max_length) {
                  values->m_Items[7] = *ppSVar1;
                  thunk_FUN_01c20e04(values->m_Items + 7);
                  if (8 < (uint)values->max_length) {
                    values->m_Items[8] = StringLiteral_90;
                    thunk_FUN_01c20e04();
                    pKVar3 = (__this->fields).MFFEOOLICJE;
                    if (pKVar3 == (KKEKJDLEJIL_o *)0x0) goto LAB_0323a964;
                    pHVar4 = (pKVar3->fields).NBHGHLIPCAP;
                    ppSVar1 = (System_String_o **)&StringLiteral_1;
                    if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
                      ppSVar1 = &(pHVar4->fields)._COIPKAKHDFP_k__BackingField;
                    }
                    if (9 < (uint)values->max_length) {
                      values->m_Items[9] = *ppSVar1;
                      thunk_FUN_01c20e04(values->m_Items + 9);
                      if (10 < (uint)values->max_length) {
                        values->m_Items[10] = StringLiteral_86;
                        thunk_FUN_01c20e04();
                        pKVar3 = (__this->fields).MFFEOOLICJE;
                        if (pKVar3 == (KKEKJDLEJIL_o *)0x0) {
LAB_0323a964:
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        pHVar4 = (pKVar3->fields).AIDDHEHFBEG;
                        ppSVar1 = (System_String_o **)&StringLiteral_1;
                        if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
                          ppSVar1 = &(pHVar4->fields)._COIPKAKHDFP_k__BackingField;
                        }
                        if (0xb < (uint)values->max_length) {
                          values->m_Items[0xb] = *ppSVar1;
                          thunk_FUN_01c20e04();
                          pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                          pSVar2 = NJNCPNBIPCD__HJGHHJEKPKD(__this,pSVar2,method_00);
                          BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                                        FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,
                                                     1);
                          if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0)
                          goto LAB_0323a964;
                          if ((int)BBBLOLJAMJP->max_length != 0) {
                            BBBLOLJAMJP->m_Items[0] = 8;
                            Nekki_Utils_DetailedLog__Error(pSVar2,BBBLOLJAMJP,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

