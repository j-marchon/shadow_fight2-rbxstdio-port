// GPGJPJNJMBP$$AJJLBBCJAAL @ RVA 0x30D5F24

System_String_o *
GPGJPJNJMBP__AJJLBBCJAAL(GPGJPJNJMBP_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  System_Nullable_bool__o SVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  System_String_o *pSVar8;
  Il2CppClass *pIVar9;
  
  if ((DAT_0456632f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5087);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5088);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5089);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5090);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    DAT_0456632f = 1;
  }
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_031d61b4;
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
  }
  else {
    if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar8 = OPAEPDIIOEB->m_Items[0];
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5087,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5088,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar8,pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar6 = IFAMAAGNCBJ__GPBMELHDADN<object>
                         (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* try { // try from 031d6078 to 032d622b has its CatchHandler @ 031d6078
                       catch() { ... } // from try @ 031d6078 with catch @ 031d6078
                       catch() { ... } // from try @ 031d6334 with catch @ 031d6078
                       catch() { ... } // from try @ 031d6410 with catch @ 031d6078
                       catch() { ... } // from try @ 031d6420 with catch @ 031d6078
                       catch() { ... } // from try @ 031d64e8 with catch @ 031d6078 */
      if ((pIVar6 != (Il2CppObject *)0x0) && (pIVar6[9].klass != (Il2CppClass *)0x0)) {
        pIVar9 = ((pIVar6[9].klass)->_1).element_class;
        SVar2 = AJAMDCEKAFE__FAEBPLENEGK(1,OPAEPDIIOEB,(MethodInfo *)0x0);
        if (((ushort)SVar2.fields & 0xff) == 0) {
          if ((pIVar6[9].klass == (Il2CppClass *)0x0) ||
             (pIVar7 = ((pIVar6[9].klass)->_1).element_class, pIVar7 == (Il2CppClass *)0x0))
          goto LAB_031d61b4;
          bVar1 = *(char *)&(pIVar7->_1).name == '\0';
        }
        else {
          bVar1 = ((ushort)SVar2.fields & 0xff00) != 0;
        }
        if (pIVar9 != (Il2CppClass *)0x0) {
          *(bool *)&(pIVar9->_1).name = bVar1;
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5089,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5090,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          if ((pIVar6[9].klass != (Il2CppClass *)0x0) &&
             (((pIVar6[9].klass)->_1).element_class != (Il2CppClass *)0x0)) {
            if ((bool_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar8 = System_Boolean__ToString(true,(MethodInfo *)0x0);
            pSVar5 = System_String__Concat(pSVar5,pSVar8,(MethodInfo *)0x0);
            return pSVar5;
          }
        }
      }
LAB_031d61b4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar5 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
  }
  return pSVar5;
}

