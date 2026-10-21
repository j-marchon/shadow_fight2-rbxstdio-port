// OOMEDFCGKJB$$JHPIPNKFDNI @ RVA 0x32D2074

void OOMEDFCGKJB__JHPIPNKFDNI
               (OOMEDFCGKJB_o *__this,
               System_Collections_Generic_Dictionary_string__List_BCGLDKLKKDA___o *HBMOKPEMKDD,
               MethodInfo *method)

{
  Il2CppObject *GGBBGNMJIEI;
  bool bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  System_Action_o *BLMFLPJJMPF;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_04567565 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_DOCLKKFHECI<BCGLDKLKKDA>_LLNDKMCBHBI__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<BCGLDKLKKDA>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<BCGLDKLKKDA>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<BCGLDKLKKDA>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<BCGLDKLKKDA>>_get_Current__
                );
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<BCGLDKLKKDA>__);
    FUN_01bab630(&JBGPNJEDALF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_List<BCGLDKLKKDA>>_get_Value__
                );
    FUN_01bab630(&Method_OOMEDFCGKJB_OBJAEAABOHD_BCCFAGKEKIM__);
    FUN_01bab630(&OOMEDFCGKJB_OBJAEAABOHD_TypeInfo);
    DAT_04567565 = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  if (HBMOKPEMKDD == (System_Collections_Generic_Dictionary_string__List_BCGLDKLKKDA___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_Dictionary_object__object__o *)HBMOKPEMKDD,
             Method_System_Collections_Generic_Dictionary<string,_List<BCGLDKLKKDA>>_GetEnumerator__
            );
  local_90.fields._version = local_b8.fields._version;
  local_90.fields._index = local_b8.fields._index;
  local_90.fields._dictionary = local_b8.fields._dictionary;
  local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
  local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
  local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
  local_90.fields._36_4_ = local_b8.fields._36_4_;
  while( true ) {
    do {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<BCGLDKLKKDA>>_MoveNext__
                        );
      GGBBGNMJIEI = local_90.fields._current.fields.value;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_90,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<BCGLDKLKKDA>>_Dispose__
                  );
        return;
      }
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(OOMEDFCGKJB_OBJAEAABOHD_TypeInfo);
      System_Object___ctor(pIVar2,(MethodInfo *)0x0);
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar2[1].monitor = __this;
      thunk_FUN_01c20e04(&pIVar2[1].monitor,__this);
      bVar1 = IBLAPCINJBO__BDLEIEHBFAD<object>
                        ((System_Collections_Generic_List_T__o *)GGBBGNMJIEI,
                         Method_IBLAPCINJBO_BDLEIEHBFAD<BCGLDKLKKDA>__);
    } while (bVar1);
    pIVar3 = (Il2CppClass *)thunk_FUN_01bda818(JBGPNJEDALF_TypeInfo);
    JBGPNJEDALF___ctor((JBGPNJEDALF_o *)pIVar3,(MethodInfo *)0x0);
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = pIVar3;
    thunk_FUN_01c20e04(pIVar2,pIVar3);
    if (pIVar2->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    JBGPNJEDALF__OLGILMECDLP
              ((JBGPNJEDALF_o *)pIVar2->klass,
               (System_Collections_Generic_List_BCGLDKLKKDA__o *)GGBBGNMJIEI,(MethodInfo *)0x0);
    pIVar3 = pIVar2->klass;
    BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pIVar3 == (Il2CppClass *)0x0) break;
    DOCLKKFHECI<object>__LLNDKMCBHBI
              ((DOCLKKFHECI_T__o *)pIVar3,BLMFLPJJMPF,Method_DOCLKKFHECI<BCGLDKLKKDA>_LLNDKMCBHBI__)
    ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

