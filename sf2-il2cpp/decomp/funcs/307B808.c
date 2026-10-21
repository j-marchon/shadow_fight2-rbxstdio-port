// CNDPAJOLKFN$$ToString @ RVA 0x307B808

System_String_o * CNDPAJOLKFN__ToString(CNDPAJOLKFN_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  float fVar2;
  
  if ((DAT_04565fd3 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_6144);
    FUN_01bab630(&StringLiteral_328);
    FUN_01bab630(&StringLiteral_15051);
    FUN_01bab630(&StringLiteral_327);
    DAT_04565fd3 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_15051;
      fVar2 = (float)thunk_FUN_01c20e04(values->m_Items);
      pSVar1 = System_Single__ToString(fVar2,(System_String_o *)&__this->fields,StringLiteral_6144);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_327;
          fVar2 = (float)thunk_FUN_01c20e04(values->m_Items + 2);
          pSVar1 = System_Single__ToString
                             (fVar2,(System_String_o *)&(__this->fields).super.JOLEIODMLFL,
                              StringLiteral_6144);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_328;
              fVar2 = (float)thunk_FUN_01c20e04(values->m_Items + 4);
              pSVar1 = System_Single__ToString
                                 (fVar2,(System_String_o *)&(__this->fields).PPOPAMHBMGG,
                                  StringLiteral_6144);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                thunk_FUN_01c20e04();
                pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                return pSVar1;
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

