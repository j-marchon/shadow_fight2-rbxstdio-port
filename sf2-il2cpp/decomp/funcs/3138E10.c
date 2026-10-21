// NJNCPNBIPCD$$KJLAJDIONCH @ RVA 0x3138E10

void NJNCPNBIPCD__KJLAJDIONCH
               (int32_t BBKHDEKBBKJ,int32_t HDFIOEIMGED,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  int32_t local_28;
  int32_t iStack_24;
  
  local_28 = HDFIOEIMGED;
  iStack_24 = BBKHDEKBBKJ;
  if ((DAT_0456671d & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_209);
    FUN_01bab630(&StringLiteral_2088);
    FUN_01bab630(&StringLiteral_10934);
    FUN_01bab630(&StringLiteral_215);
    DAT_0456671d = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_10934;
      thunk_FUN_01c20e04();
      if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) goto LAB_0323902c;
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_2088;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_215;
              thunk_FUN_01c20e04(values->m_Items + 4);
              pSVar1 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                thunk_FUN_01c20e04(values->m_Items + 5,pSVar1);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = StringLiteral_209;
                  thunk_FUN_01c20e04(values->m_Items + 6);
                  pSVar1 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar1;
                    thunk_FUN_01c20e04();
                    pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                    BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                                  FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
                    if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0)
                    goto LAB_0323902c;
                    if ((int)BBBLOLJAMJP->max_length != 0) {
                      BBBLOLJAMJP->m_Items[0] = 8;
                      Nekki_Utils_DetailedLog__Warning(pSVar1,BBBLOLJAMJP,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0323902c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

