// OICCPAIHLMK$$OFPHPMGMCAL @ RVA 0x332D434

System_String_o * OICCPAIHLMK__OFPHPMGMCAL(OICCPAIHLMK_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_045678e6 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    DAT_045678e6 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = (__this->fields).LAJBAKDJEKM;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = StringLiteral_167;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = (__this->fields).FBCLCJAHCHI;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = StringLiteral_167;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
                    /* try { // try from 0342d51c to 0352d5af has its CatchHandler @ 0342d51c
                       catch() { ... } // from try @ 0342d51c with catch @ 0342d51c
                       catch() { ... } // from try @ 0342d5d4 with catch @ 0342d51c
                       catch() { ... } // from try @ 0342d608 with catch @ 0342d51c
                       catch() { ... } // from try @ 0342d630 with catch @ 0342d51c
                       catch() { ... } // from try @ 0342d660 with catch @ 0342d51c */
              values->m_Items[4] = (__this->fields).OPONPIJGOKL;
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

