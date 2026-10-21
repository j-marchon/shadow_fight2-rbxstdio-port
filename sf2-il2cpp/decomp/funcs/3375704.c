// IOIKBGAJIGO$$PIPGAPGKBLM @ RVA 0x3375704

System_String_o *
IOIKBGAJIGO__PIPGAPGKBLM
          (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,
          System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *message;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  void *pvVar4;
  
  if ((DAT_04567b4f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_15862);
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_21899);
    FUN_01bab630(&StringLiteral_185);
    FUN_01bab630(&StringLiteral_1461);
    DAT_04567b4f = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,9);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
  }
  pSVar2 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  if (pSVar1 == (System_String_array *)0x0) goto LAB_03475aec;
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = pSVar2;
    thunk_FUN_01c20e04(pSVar1->m_Items,pSVar2);
    if (1 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[1] = StringLiteral_1492;
      thunk_FUN_01c20e04();
      method_00 = extraout_x1;
      if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      pSVar2 = IOIKBGAJIGO__KELDIALFCDL(LKLBFFJPPOO,method_00);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = pSVar2;
        thunk_FUN_01c20e04(pSVar1->m_Items + 2,pSVar2);
                    /* try { // try from 0347587c to 035758a3 has its CatchHandler @ 034759ac */
        if (3 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[3] = StringLiteral_1492;
          thunk_FUN_01c20e04();
          if (IIDPDAKKFFN == (System_String_o *)0x0) goto LAB_03475aec;
          pSVar2 = System_String__ToLower(IIDPDAKKFFN,(MethodInfo *)0x0);
          if (4 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[4] = pSVar2;
            thunk_FUN_01c20e04(pSVar1->m_Items + 4,pSVar2);
            if (5 < (uint)pSVar1->max_length) {
                    /* try { // try from 034758d8 to 03575903 has its CatchHandler @ 034759a8 */
              pSVar1->m_Items[5] = StringLiteral_15862;
              thunk_FUN_01c20e04();
              if (DDGBMJNBFPF == (System_String_o *)0x0) goto LAB_03475aec;
              pSVar2 = System_String__ToLower(DDGBMJNBFPF,(MethodInfo *)0x0);
              if (6 < (uint)pSVar1->max_length) {
                    /* try { // try from 03475904 to 0357590b has its CatchHandler @ 034759a4 */
                pSVar1->m_Items[6] = pSVar2;
                    /* try { // try from 0347590c to 03575993 has its CatchHandler @ 03475644 */
                thunk_FUN_01c20e04(pSVar1->m_Items + 6,pSVar2);
                pSVar2 = IOIKBGAJIGO__LGDAPGDDLEI(LKLBFFJPPOO,method_01);
                if (7 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[7] = pSVar2;
                  thunk_FUN_01c20e04(pSVar1->m_Items + 7,pSVar2);
                  if (8 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[8] = StringLiteral_1461;
                    thunk_FUN_01c20e04();
                    pSVar2 = System_String__Concat(pSVar1,(MethodInfo *)0x0);
                    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03475994 to 03575997 has its CatchHandler @ 034759a0 */
                      thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
                    }
                    /* try { // try from 03475998 to 035759c3 has its CatchHandler @ 03475644 */
                    pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                                       (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03475994 with catch @ 034759a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03475904 with catch @ 034759a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034758d8 with catch @ 034759a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0347587c with catch @ 034759ac
                        */
                    if (((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[9].klass != (Il2CppClass *)0x0))
                       && (pvVar4 = ((pIVar3[9].klass)->_1).this_arg.data, pvVar4 != (void *)0x0)) {
                      if (*(char *)((long)pvVar4 + 0x11) == '\0') {
                        return pSVar2;
                      }
                    /* try { // try from 034759c4 to 035759c7 has its CatchHandler @ 034759d4 */
                      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
                      if (pSVar1 != (System_String_array *)0x0) {
                    /* catch() { ... } // from try @ 034759c4 with catch @ 034759d4 */
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = StringLiteral_21899;
                          thunk_FUN_01c20e04(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = pSVar2;
                            thunk_FUN_01c20e04(pSVar1->m_Items + 1,pSVar2);
                    /* try { // try from 03475a14 to 03575a3b has its CatchHandler @ 03475a50 */
                            if (2 < (uint)pSVar1->max_length) {
                              pSVar1->m_Items[2] = StringLiteral_185;
                              thunk_FUN_01c20e04(pSVar1->m_Items + 2);
                    /* try { // try from 03475a3c to 03575a47 has its CatchHandler @ 03475644 */
                              if (3 < (uint)pSVar1->max_length) {
                    /* try { // try from 03475a48 to 03575a4f has its CatchHandler @ 03475a50 */
                                pSVar1->m_Items[3] = IIDPDAKKFFN;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03475a14 with catch @ 03475a50
                       catch(type#2 @ 00000000) { ... } // from try @ 03475a48 with catch @ 03475a50
                        */
                                thunk_FUN_01c20e04(pSVar1->m_Items + 3,IIDPDAKKFFN);
                                if (4 < (uint)pSVar1->max_length) {
                                  pSVar1->m_Items[4] = StringLiteral_15862;
                                  thunk_FUN_01c20e04(pSVar1->m_Items + 4);
                                  if (5 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[5] = DDGBMJNBFPF;
                                    thunk_FUN_01c20e04(pSVar1->m_Items + 5,DDGBMJNBFPF);
                                    message = System_String__Concat(pSVar1,(MethodInfo *)0x0);
                                    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                                      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                                    }
                                    UnityEngine_Debug__Log
                                              ((Il2CppObject *)message,(MethodInfo *)0x0);
                                    return pSVar2;
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_03475ae8;
                      }
                    }
LAB_03475aec:
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03475ae8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

