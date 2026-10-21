// BKFFOLFKECB$$AKPPNIPNKDH @ RVA 0x32D42CC

System_String_o * BKFFOLFKECB__AKPPNIPNKDH(BKFFOLFKECB_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  int32_t local_24;
  
  if ((DAT_04567573 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1222);
    FUN_01bab630(&StringLiteral_1143);
    FUN_01bab630(&StringLiteral_2502);
    DAT_04567573 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2502;
      thunk_FUN_01c20e04(values->m_Items);
      local_24 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
      pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_1222;
          thunk_FUN_01c20e04(values->m_Items + 2);
          local_24 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
          pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_1143;
              thunk_FUN_01c20e04();
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
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

