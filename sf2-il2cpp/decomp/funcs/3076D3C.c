// KKCBGIBKOCP$$.cctor @ RVA 0x3076D3C

void KKCBGIBKOCP___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if ((DAT_04565fae & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_20323);
    FUN_01bab630(&StringLiteral_20635);
    FUN_01bab630(&StringLiteral_18405);
    FUN_01bab630(&StringLiteral_19271);
    FUN_01bab630(&StringLiteral_16803);
    FUN_01bab630(&StringLiteral_18341);
    FUN_01bab630(&StringLiteral_21614);
    FUN_01bab630(&StringLiteral_19207);
    FUN_01bab630(&StringLiteral_21868);
    FUN_01bab630(&StringLiteral_21145);
    FUN_01bab630(&StringLiteral_16995);
    FUN_01bab630(&StringLiteral_19324);
    DAT_04565fae = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,0xc);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_21868;
      thunk_FUN_01c20e04(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = StringLiteral_16803;
        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = StringLiteral_16995;
          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = StringLiteral_18341;
            thunk_FUN_01c20e04(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = StringLiteral_18405;
              thunk_FUN_01c20e04(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = StringLiteral_20635;
                thunk_FUN_01c20e04(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = StringLiteral_19207;
                  thunk_FUN_01c20e04(pSVar1->m_Items + 6);
                  if (7 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[7] = StringLiteral_19271;
                    thunk_FUN_01c20e04(pSVar1->m_Items + 7);
                    if (8 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[8] = StringLiteral_19324;
                      thunk_FUN_01c20e04(pSVar1->m_Items + 8);
                      if (9 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[9] = StringLiteral_21614;
                        thunk_FUN_01c20e04(pSVar1->m_Items + 9);
                        if (10 < (uint)pSVar1->max_length) {
                          pSVar1->m_Items[10] = StringLiteral_21145;
                          thunk_FUN_01c20e04(pSVar1->m_Items + 10);
                          if (0xb < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[0xb] = StringLiteral_20323;
                            thunk_FUN_01c20e04();
                            KKCBGIBKOCP_TypeInfo->static_fields->CMGCKPCHDHP = pSVar1;
                            thunk_FUN_01c20e04(KKCBGIBKOCP_TypeInfo->static_fields,pSVar1);
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

