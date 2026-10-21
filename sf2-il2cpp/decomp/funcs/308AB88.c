// LabelButton$$.cctor @ RVA 0x308AB88

void LabelButton___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if ((DAT_0456604e & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_4524);
    FUN_01bab630(&StringLiteral_4525);
    FUN_01bab630(&StringLiteral_4526);
    FUN_01bab630(&StringLiteral_4528);
    FUN_01bab630(&StringLiteral_4523);
    FUN_01bab630(&StringLiteral_4529);
    FUN_01bab630(&StringLiteral_4527);
    DAT_0456604e = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_4523;
      thunk_FUN_01c20e04(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = StringLiteral_4526;
        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = StringLiteral_4525;
          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = StringLiteral_4529;
            thunk_FUN_01c20e04(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = StringLiteral_4527;
              thunk_FUN_01c20e04(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = StringLiteral_4528;
                thunk_FUN_01c20e04(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = StringLiteral_4524;
                  thunk_FUN_01c20e04();
                  LabelButton_TypeInfo->static_fields->JMKEDHMEOAJ = pSVar1;
                  thunk_FUN_01c20e04(LabelButton_TypeInfo->static_fields,pSVar1);
                  return;
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

