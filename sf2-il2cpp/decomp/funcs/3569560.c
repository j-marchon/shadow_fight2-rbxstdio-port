// FDEACCCEBFA$$AJJLBBCJAAL @ RVA 0x3569560

System_String_o *
FDEACCCEBFA__AJJLBBCJAAL(FDEACCCEBFA_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_o *BLMFLPJJMPF;
  GOLIJCLCCBA_o *__this_01;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *str2;
  Il2CppClass *pIVar3;
  char *pcVar4;
  System_String_o *pSVar5;
  System_String_o *str1;
  Il2CppObject *pIVar6;
  
  if ((DAT_04568c17 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6466);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6467);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6468);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6469);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&GOLIJCLCCBA_TypeInfo);
    FUN_01bab630(&Method_FDEACCCEBFA_MIHPFCOCNFF_IMEDHACBLGP__);
    FUN_01bab630(&FDEACCCEBFA_MIHPFCOCNFF_TypeInfo);
    DAT_04568c17 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FDEACCCEBFA_MIHPFCOCNFF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    pIVar6 = __this_00 + 1;
    pIVar6->klass = (Il2CppClass *)OPAEPDIIOEB;
    thunk_FUN_01c20e04(pIVar6,OPAEPDIIOEB);
    pIVar3 = pIVar6->klass;
    if (pIVar3 != (Il2CppClass *)0x0) {
      pcVar4 = (pIVar3->_1).namespaze;
      if (pcVar4 == (char *)0x0) {
        pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
        return pSVar5;
      }
      if ((int)pcVar4 != 0) {
        pSVar5 = (pIVar3->_1).byval_arg.data;
        BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        __this_01 = (GOLIJCLCCBA_o *)thunk_FUN_01bda818(GOLIJCLCCBA_TypeInfo);
        GOLIJCLCCBA___ctor(__this_01,pSVar5,BLMFLPJJMPF,
                           (System_Collections_Generic_IList_string__o *)0x0,true,(MethodInfo *)0x0)
        ;
        JJPNLEPEAFM__ONJPOCDFDGK(__this_01,(MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6466,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6467,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pIVar3 = __this_00[1].klass;
        if (pIVar3 == (Il2CppClass *)0x0) goto LAB_036697b8;
        if (*(int *)&(pIVar3->_1).namespaze != 0) {
          str1 = (pIVar3->_1).byval_arg.data;
          pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar1,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6468,
                     (MethodInfo *)0x0);
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6469,
                     (MethodInfo *)0x0);
          str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat(pSVar5,str1,str2,(MethodInfo *)0x0);
          return pSVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_036697b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

