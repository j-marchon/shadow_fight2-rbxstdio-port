// KAKGABBLHGP$$.ctor @ RVA 0x314A62C

void KAKGABBLHGP___ctor(KAKGABBLHGP_o *__this,bool GELBJEGLNNM,System_String_o *HPOCBHFNCKD,
                       Core_Configs_Models_PackType_array *LFADLKGPBHC,MethodInfo *method)

{
  bool bVar1;
  System_String_array *values;
  System_String_o *JLNPKGGFFDD;
  Core_Configs_Models_PackType_array *method_00;
  System_String_o **ppSVar2;
  
  method_00 = LFADLKGPBHC;
  if ((DAT_045667b0 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17871);
    FUN_01bab630(&StringLiteral_853);
    FUN_01bab630(&StringLiteral_814);
    FUN_01bab630(&StringLiteral_22468);
    DAT_045667b0 = 1;
  }
  KAKGABBLHGP___ctor(__this,GELBJEGLNNM,LFADLKGPBHC,(MethodInfo *)method_00);
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(HPOCBHFNCKD,(MethodInfo *)0x0);
  if (!bVar1) {
    if (HPOCBHFNCKD != (System_String_o *)0x0) {
      bVar1 = System_String__EndsWith(HPOCBHFNCKD,StringLiteral_22468,(MethodInfo *)0x0);
      if (bVar1) goto LAB_0324a7d4;
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = StringLiteral_17871;
          thunk_FUN_01c20e04(values->m_Items);
                    /* try { // try from 0324a71c to 0334a81f has its CatchHandler @ 0324a71c
                       catch() { ... } // from try @ 0324a71c with catch @ 0324a71c
                       catch() { ... } // from try @ 0324a85c with catch @ 0324a71c
                       catch() { ... } // from try @ 0324a890 with catch @ 0324a71c
                       catch() { ... } // from try @ 0324a8b8 with catch @ 0324a71c
                       catch() { ... } // from try @ 0324a8f8 with catch @ 0324a71c */
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = HPOCBHFNCKD;
            thunk_FUN_01c20e04(values->m_Items + 1,HPOCBHFNCKD);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = StringLiteral_814;
              thunk_FUN_01c20e04(values->m_Items + 2);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = HPOCBHFNCKD;
                thunk_FUN_01c20e04(values->m_Items + 3,HPOCBHFNCKD);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = StringLiteral_853;
                  thunk_FUN_01c20e04();
                  JLNPKGGFFDD = System_String__Concat(values,(MethodInfo *)0x0);
                  KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
                  HPOCBHFNCKD = System_String__Concat
                                          (HPOCBHFNCKD,StringLiteral_22468,(MethodInfo *)0x0);
                  goto LAB_0324a7d4;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0324a7d4:
  ppSVar2 = &(__this->fields).CLHEDDAKFHK;
  *ppSVar2 = HPOCBHFNCKD;
  thunk_FUN_01c20e04(ppSVar2,HPOCBHFNCKD);
  return;
}

