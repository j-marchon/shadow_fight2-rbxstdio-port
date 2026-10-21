// JCHNBADDBGO$$.cctor @ RVA 0x32FEBFC

void JCHNBADDBGO___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if ((DAT_0456770b & 1) == 0) {
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9537);
    FUN_01bab630(&StringLiteral_3529);
    FUN_01bab630(&StringLiteral_7045);
    FUN_01bab630(&StringLiteral_9540);
    FUN_01bab630(&StringLiteral_9541);
    FUN_01bab630(&StringLiteral_6489);
    DAT_0456770b = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_3529;
      thunk_FUN_01c20e04(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = StringLiteral_7045;
        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = StringLiteral_6489;
          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = StringLiteral_9541;
            thunk_FUN_01c20e04(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = StringLiteral_9537;
              thunk_FUN_01c20e04(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = StringLiteral_9540;
                thunk_FUN_01c20e04();
                JCHNBADDBGO_TypeInfo->static_fields->AMAMBMDFBOF = pSVar1;
                thunk_FUN_01c20e04(JCHNBADDBGO_TypeInfo->static_fields,pSVar1);
                return;
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

