// HEOCHMFJJLH$$ToString @ RVA 0x30B2BF4

System_String_o * HEOCHMFJJLH__ToString(HEOCHMFJJLH_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  float __this_00;
  
  if ((DAT_045661ed & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_468);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_349);
    DAT_045661ed = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = (__this->fields).NBFOAEAPGIO;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = StringLiteral_2086;
        thunk_FUN_01c20e04(values->m_Items + 1);
        pSVar1 = System_Int32__ToString((int)__this + 0x18,(MethodInfo *)0x0);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar1;
          thunk_FUN_01c20e04(values->m_Items + 2,pSVar1);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = StringLiteral_468;
            __this_00 = (float)thunk_FUN_01c20e04(values->m_Items + 3);
            pSVar1 = System_Single__ToString(__this_00,(MethodInfo *)&(__this->fields).BKCFPHNEONL);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar1;
              thunk_FUN_01c20e04(values->m_Items + 4,pSVar1);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = StringLiteral_349;
                thunk_FUN_01c20e04(values->m_Items + 5);
                pSVar1 = System_Int32__ToString((int)__this + 0x20,(MethodInfo *)0x0);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = pSVar1;
                  thunk_FUN_01c20e04();
                  pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                  return pSVar1;
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

