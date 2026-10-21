// FPPKHNNABAD$$FDBCKDLEGEH @ RVA 0x321ECC8

MEMHEPBAJJA_HIAEDCDJJDJ_o *
FPPKHNNABAD__FDBCKDLEGEH(FPPKHNNABAD_o *__this,System_String_o *FDHGPAPAPDF,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar3;
  
  if ((DAT_04566f20 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Item__
                );
    DAT_04566f20 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KCIMMPDKPME;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)FDHGPAPAPDF,
                       Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                      );
    if (!bVar1) {
      return (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KCIMMPDKPME
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar3 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)FDHGPAPAPDF,
                          Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Item__
                         );
      return pMVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

