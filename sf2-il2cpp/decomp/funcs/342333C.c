// GPEBLILEBPK$$AJJLBBCJAAL @ RVA 0x342333C

System_String_o *
GPEBLILEBPK__AJJLBBCJAAL(GPEBLILEBPK_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int32_t width;
  System_String_array *values;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_045680f3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5910);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5911);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5912);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5913);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5914);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5915);
    FUN_01bab630(&byte___TypeInfo);
    __this = (GPEBLILEBPK_o *)FUN_01bab630(&string___TypeInfo);
    DAT_045680f3 = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if ((int)OPAEPDIIOEB->max_length != 0) {
      width = System_Int32__Parse(OPAEPDIIOEB->m_Items[0],(MethodInfo *)0x0);
      local_34 = width;
      if (1 < (uint)OPAEPDIIOEB->max_length) {
        local_38 = System_Int32__Parse(OPAEPDIIOEB->m_Items[1],(MethodInfo *)0x0);
        UnityEngine_Screen__SetResolution(width,local_38,true,(MethodInfo *)0x0);
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5910,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5911,
                   (MethodInfo *)0x0);
        __this = (GPEBLILEBPK_o *)OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        if (values == (System_String_array *)0x0) goto LAB_03523618;
        if ((int)values->max_length != 0) {
          values->m_Items[0] = (System_String_o *)__this;
          thunk_FUN_01c20e04(values->m_Items,__this);
          pSVar3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar3;
            thunk_FUN_01c20e04(values->m_Items + 1,pSVar3);
            pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar1,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5912,
                       (MethodInfo *)0x0);
            pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar2,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5913,
                       (MethodInfo *)0x0);
            pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = pSVar3;
              thunk_FUN_01c20e04(values->m_Items + 2,pSVar3);
              pSVar3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar3;
                thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
                pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar1,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5914,
                           (MethodInfo *)0x0);
                pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar2,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5915,
                           (MethodInfo *)0x0);
                pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = pSVar3;
                  thunk_FUN_01c20e04();
                  pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                  return pSVar3;
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
LAB_03523618:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

