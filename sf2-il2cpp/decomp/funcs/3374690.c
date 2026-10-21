// IOIKBGAJIGO$$PIPGAPGKBLM @ RVA 0x3374690

System_String_o *
IOIKBGAJIGO__PIPGAPGKBLM
          (System_String_o *IFDOANCFKJD,System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,
          MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  System_String_o *message;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  void *pvVar3;
  
  if ((DAT_04567b41 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_184);
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_21899);
    FUN_01bab630(&StringLiteral_1461);
    DAT_04567b41 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  if (values == (System_String_array *)0x0) goto LAB_0347494c;
  if ((int)values->max_length != 0) {
    values->m_Items[0] = pSVar1;
    thunk_FUN_01c20e04(values->m_Items,pSVar1);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = StringLiteral_1492;
      thunk_FUN_01c20e04();
      method_00 = extraout_x1;
      if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      pSVar1 = IOIKBGAJIGO__KELDIALFCDL(LKLBFFJPPOO,method_00);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = pSVar1;
        thunk_FUN_01c20e04(values->m_Items + 2,pSVar1);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = StringLiteral_1492;
          thunk_FUN_01c20e04();
          if (IFDOANCFKJD == (System_String_o *)0x0) {
LAB_0347494c:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar1 = System_String__ToLower(IFDOANCFKJD,(MethodInfo *)0x0);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 4,pSVar1);
            pSVar1 = IOIKBGAJIGO__LGDAPGDDLEI(LKLBFFJPPOO,method_01);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = pSVar1;
              thunk_FUN_01c20e04(values->m_Items + 5,pSVar1);
              if (6 < (uint)values->max_length) {
                values->m_Items[6] = StringLiteral_1461;
                thunk_FUN_01c20e04();
                pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
                }
                pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>
                                   (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                if (((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[9].klass != (Il2CppClass *)0x0)) &&
                   (pvVar3 = ((pIVar2[9].klass)->_1).this_arg.data, pvVar3 != (void *)0x0)) {
                  if (*(char *)((long)pvVar3 + 0x11) != '\0') {
                    message = System_String__Concat
                                        (StringLiteral_21899,pSVar1,StringLiteral_184,IFDOANCFKJD,
                                         (MethodInfo *)0x0);
                    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
                  }
                  return pSVar1;
                }
                goto LAB_0347494c;
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

