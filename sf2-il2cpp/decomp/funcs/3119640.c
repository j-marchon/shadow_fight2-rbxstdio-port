// NGFEKJBMGEB$$CDBGAPKFOMB @ RVA 0x3119640

System_String_o * NGFEKJBMGEB__CDBGAPKFOMB(DBNEEHGBCJD_o *NFDKMBAGHPD,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_045665d7 & 1) == 0) {
                    /* catch() { ... } // from try @ 03219634 with catch @ 03219660 */
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 03219670 to 03319677 has its CatchHandler @ 0321968c */
    FUN_01bab630(&StringLiteral_524);
                    /* try { // try from 03219678 to 03319683 has its CatchHandler @ 032194c8 */
    FUN_01bab630(&StringLiteral_17830);
                    /* try { // try from 03219684 to 0331968b has its CatchHandler @ 0321968c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03219670 with catch @ 0321968c
                       catch(type#2 @ 00000000) { ... } // from try @ 03219684 with catch @ 0321968c
                        */
    FUN_01bab630(&StringLiteral_22510);
    DAT_045665d7 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_17830;
      thunk_FUN_01c20e04();
      if (NFDKMBAGHPD == (DBNEEHGBCJD_o *)0x0) goto LAB_03219774;
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (NFDKMBAGHPD->fields)._HONAAKEIHJI_k__BackingField;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_22510;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (NFDKMBAGHPD->fields)._PIJHOBHDLLH_k__BackingField;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_524;
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
LAB_03219774:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

