// IKCANHIFLGJ$$.ctor @ RVA 0x35C0088

void IKCANHIFLGJ___ctor(IKCANHIFLGJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__string__o *__this_00;
  System_Collections_Generic_Dictionary_long__string__o **ppSVar1;
  System_String_array *pSVar2;
  System_String_array **ppSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f14 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<long,_string>_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22532);
    FUN_01bab630(&StringLiteral_14674);
    FUN_01bab630(&StringLiteral_1608);
    FUN_01bab630(&StringLiteral_14673);
    FUN_01bab630(&StringLiteral_14676);
    FUN_01bab630(&StringLiteral_14675);
    FUN_01bab630(&StringLiteral_14672);
    FUN_01bab630(&StringLiteral_21969);
    FUN_01bab630(&StringLiteral_1925);
    FUN_01bab630(&StringLiteral_22533);
    FUN_01bab630(&StringLiteral_21982);
    FUN_01bab630(&StringLiteral_1942);
    DAT_04568f14 = 1;
    method = extraout_x1;
  }
  (__this->fields).KOKABJPFGCA = 1;
  __this_00 = (System_Collections_Generic_Dictionary_long__string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<long,_string>_TypeInfo,method
                                );
  System_Collections_Generic_Dictionary<long,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<long,_string>__ctor__);
  ppSVar1 = &(__this->fields).AIOEOHCLJIL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pSVar2 = (System_String_array *)FUN_01bab718(string___TypeInfo,0xc);
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = StringLiteral_22533;
      thunk_FUN_01c20e04(pSVar2->m_Items);
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = StringLiteral_22532;
        thunk_FUN_01c20e04(pSVar2->m_Items + 1);
        if (2 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[2] = StringLiteral_1925;
          thunk_FUN_01c20e04(pSVar2->m_Items + 2);
          if (3 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[3] = StringLiteral_1942;
            thunk_FUN_01c20e04(pSVar2->m_Items + 3);
            if (4 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[4] = StringLiteral_1608;
              thunk_FUN_01c20e04(pSVar2->m_Items + 4);
              if (5 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[5] = StringLiteral_21969;
                thunk_FUN_01c20e04(pSVar2->m_Items + 5);
                if (6 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[6] = StringLiteral_14675;
                  thunk_FUN_01c20e04(pSVar2->m_Items + 6);
                  if (7 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[7] = StringLiteral_21982;
                    thunk_FUN_01c20e04(pSVar2->m_Items + 7);
                    if (8 < (uint)pSVar2->max_length) {
                      pSVar2->m_Items[8] = StringLiteral_14672;
                      thunk_FUN_01c20e04(pSVar2->m_Items + 8);
                      if (9 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[9] = StringLiteral_14673;
                        thunk_FUN_01c20e04(pSVar2->m_Items + 9);
                        if (10 < (uint)pSVar2->max_length) {
                          pSVar2->m_Items[10] = StringLiteral_14674;
                          thunk_FUN_01c20e04(pSVar2->m_Items + 10);
                          if (0xb < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[0xb] = StringLiteral_14676;
                            thunk_FUN_01c20e04();
                            ppSVar3 = &(__this->fields).IJAMBHAFPIE;
                            *ppSVar3 = pSVar2;
                            thunk_FUN_01c20e04(ppSVar3,pSVar2);
                            System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
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
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

