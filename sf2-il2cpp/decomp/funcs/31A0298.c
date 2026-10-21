// LDHBHPILNMA$$CADFKPKODCI @ RVA 0x31A0298

void LDHBHPILNMA__CADFKPKODCI
               (System_String_o *KGLJICLJHEL,
               System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Il2CppObject *pIVar4;
  
  if ((DAT_04566ae6 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<ECENNHNBAME>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    DAT_04566ae6 = 1;
  }
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           LDHBHPILNMA_TypeInfo->static_fields->ICLBNEKDHIO;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__
                      );
    if (!bVar2) {
      return;
    }
    if (KENFFDHLNDA != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      iVar1 = (KENFFDHLNDA->fields)._size;
      if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               LDHBHPILNMA_TypeInfo->static_fields->ICLBNEKDHIO;
      if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                              Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__
                             ), pIVar4 != (Il2CppObject *)0x0)) {
        if (iVar1 != 0) {
          DJNBJHPDKDP__OFNFOGHFDML<object>
                    ((System_Collections_Generic_List_T__o *)KENFFDHLNDA,pIVar4[1].monitor,
                     Method_DJNBJHPDKDP_OFNFOGHFDML<ECENNHNBAME>__);
          return;
        }
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                   (System_Collections_Generic_IEnumerable_T__o *)pIVar4[1].monitor,
                   Method_System_Collections_Generic_List<ECENNHNBAME>_AddRange__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

