// IFEDMCHPFIM$$.cctor @ RVA 0x34BA78C

void IFEDMCHPFIM___cctor(MethodInfo *method)

{
  System_Char_array *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  Il2CppObject *pIVar2;
  System_Collections_Generic_IReadOnlyDictionary_IFEDMCHPFIM_FOPNKJCFBLG__Action_ICollection_string____o
  **ppSVar3;
  
  if ((DAT_045685c4 & 1) == 0) {
    FUN_01bab630(&System_Action<ICollection<string>>_TypeInfo);
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_TypeInfo
                );
    FUN_01bab630(&IFEDMCHPFIM_TypeInfo);
    FUN_01bab630(&Method_IFEDMCHPFIM_<>c_COEDHDEEGHE__);
    FUN_01bab630(&Method_IFEDMCHPFIM_<>c_CPGGMOIBOEH__);
    FUN_01bab630(&IFEDMCHPFIM_<>c_TypeInfo);
    DAT_045685c4 = 1;
  }
  pSVar1 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (pSVar1 != (System_Char_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = 0x7c;
    IFEDMCHPFIM_TypeInfo->static_fields->JAEIAFPCHFF = pSVar1;
    thunk_FUN_01c20e04(IFEDMCHPFIM_TypeInfo->static_fields);
    __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             thunk_FUN_01bda818(
                               System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_TypeInfo
                               );
    System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
              (__this,
               Method_System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>__ctor__
              );
    if ((IFEDMCHPFIM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(System_Action<ICollection<string>>_TypeInfo);
    System_Action<object>___ctor();
    if (__this != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                (__this,0,pIVar2,
                 Method_System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_Add__
                );
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(System_Action<ICollection<string>>_TypeInfo);
      System_Action<object>___ctor();
      System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                (__this,1,pIVar2,
                 Method_System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_Add__
                );
      ppSVar3 = &IFEDMCHPFIM_TypeInfo->static_fields->IAIFLHDGLGG;
      *ppSVar3 = (System_Collections_Generic_IReadOnlyDictionary_IFEDMCHPFIM_FOPNKJCFBLG__Action_ICollection_string____o
                  *)__this;
      thunk_FUN_01c20e04(ppSVar3,__this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

