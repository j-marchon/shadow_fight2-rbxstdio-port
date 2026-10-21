// OLKKAIFGGAK.IEMCMOPNPEA$$MFMDEIBOOEG @ RVA 0x34F7F98

OIGAJAKPPEO_o *
OLKKAIFGGAK_IEMCMOPNPEA__MFMDEIBOOEG
          (OLKKAIFGGAK_IEMCMOPNPEA_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *source;
  OIGAJAKPPEO_o *item;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if ((DAT_0456880a & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_get_Item__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_LastOrDefault<OIGAJAKPPEO>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_Remove__);
    DAT_0456880a = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EHJHKEEDKBE;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_ContainsKey__
                      );
    if (!bVar1) {
      return (OIGAJAKPPEO_o *)0x0;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EHJHKEEDKBE
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      source = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                          Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_get_Item__
                         );
      item = (OIGAJAKPPEO_o *)
             System_Linq_Enumerable__LastOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        Method_System_Linq_Enumerable_LastOrDefault<OIGAJAKPPEO>__);
      if (item == (OIGAJAKPPEO_o *)0x0) {
        return (OIGAJAKPPEO_o *)0x0;
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).EHJHKEEDKBE;
      if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_00 = (System_Collections_Generic_List_object__o *)
                      System_Collections_Generic_Dictionary<object,_object>__get_Item
                                (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_get_Item__
                                ), __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__Remove
                  (__this_00,(Il2CppObject *)item,
                   Method_System_Collections_Generic_List<OIGAJAKPPEO>_Remove__);
        __this_01 = (item->fields).super.LDAKOINICNJ;
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
          return item;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

