// FINCDDIHLGL$$MAHFCKJGBPP @ RVA 0x33339B0

void FINCDDIHLGL__MAHFCKJGBPP(FINCDDIHLGL_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *__this_00;
  Il2CppClass *pIVar1;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_List_TSource__o *__this_01;
  GCPFDLNAFDF_o *CKCAFBMLFHG;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  
  if ((DAT_04567932 & 1) == 0) {
    FUN_01bab630(&Method_FINCDDIHLGL_BOENBBNCMEF_MDFKDJPLEEF__);
    FUN_01bab630(&FINCDDIHLGL_BOENBBNCMEF_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<string>__);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567932 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FINCDDIHLGL_BOENBBNCMEF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pIVar1 = (Il2CppClass *)AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
LAB_03433b68:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00[1].klass = pIVar1;
  thunk_FUN_01c20e04();
  if (AAJBIMFNMBB == (PKHMIGFEJCL_o *)0x0) goto LAB_03433b68;
  pSVar2 = (System_Collections_Generic_IEnumerable_TSource__o *)
           (AAJBIMFNMBB->fields)._JOFOHDAGJIN_k__BackingField;
  if (pSVar2 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pSVar2 = System_Linq_Enumerable__Where<object>
                       (pSVar2,predicate,Method_System_Linq_Enumerable_Where<string>__);
    __this_01 = System_Linq_Enumerable__ToList<object>
                          (pSVar2,Method_System_Linq_Enumerable_ToList<string>__);
    if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_03433b1c;
  }
  __this_01 = (System_Collections_Generic_List_TSource__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<string>__ctor__);
LAB_03433b1c:
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CKCAFBMLFHG = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  PKHMIGFEJCL__DMBKEIPLELM
            (AAJBIMFNMBB,(System_Collections_Generic_IReadOnlyList_string__o *)__this_01,
             (HHMDFAMGHPB_o *)CKCAFBMLFHG,(MethodInfo *)0x0);
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

