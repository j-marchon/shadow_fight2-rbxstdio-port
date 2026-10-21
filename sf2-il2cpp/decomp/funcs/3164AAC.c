// NLHMCOFIBKF$$HIAILHACKBH @ RVA 0x3164AAC

System_String_o *
NLHMCOFIBKF__HIAILHACKBH(NLHMCOFIBKF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  
  if ((DAT_045668ac & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1377);
    DAT_045668ac = 1;
  }
  pSVar4 = (__this->fields).CNBNMBNHICL;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar4,(MethodInfo *)0x0);
  pSVar1 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,(__this->fields).NELHKLHDOIJ,(MethodInfo *)0x0);
  pSVar2 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,(__this->fields).NCACECOAKAA,(MethodInfo *)0x0);
  pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,(__this->fields).GCDAAJGEOIB,(MethodInfo *)0x0);
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items,pSVar4);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = StringLiteral_1377;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar1;
          thunk_FUN_01c20e04(values->m_Items + 2,pSVar1);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = StringLiteral_1377;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar2;
              thunk_FUN_01c20e04(values->m_Items + 4,pSVar2);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = StringLiteral_1377;
                thunk_FUN_01c20e04(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = pSVar3;
                  thunk_FUN_01c20e04(values->m_Items + 6,pSVar3);
                  pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                  return pSVar4;
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

