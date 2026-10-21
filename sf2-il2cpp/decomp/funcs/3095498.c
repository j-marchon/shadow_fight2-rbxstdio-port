// HNBHALLLNAP$$CJOHHBMFAAG @ RVA 0x3095498

Il2CppObject * HNBHALLLNAP__CJOHHBMFAAG(HNBHALLLNAP_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_045660d1 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22230);
    FUN_01bab630(&StringLiteral_15920);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_22508);
    DAT_045660d1 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,9);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_22230;
      thunk_FUN_01c20e04(values->m_Items);
      pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_22508;
          thunk_FUN_01c20e04(values->m_Items + 2);
          pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar1;
              thunk_FUN_01c20e04(values->m_Items + 4,pSVar1);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = StringLiteral_15920;
                thunk_FUN_01c20e04(values->m_Items + 5);
                pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = pSVar1;
                  thunk_FUN_01c20e04(values->m_Items + 6,pSVar1);
                  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar1;
                    thunk_FUN_01c20e04(values->m_Items + 7,pSVar1);
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = StringLiteral_22500;
                      thunk_FUN_01c20e04();
                      pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                      return (Il2CppObject *)pSVar1;
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

