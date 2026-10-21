// CNOGDCKPLMJ$$BIPAMLPKNCP @ RVA 0x31C9ED8

System_Collections_Generic_List_FPPKHNNABAD__o *
CNOGDCKPLMJ__BIPAMLPKNCP(CNOGDCKPLMJ_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar3;
  Il2CppObject *local_38;
  
  if ((DAT_04566c5a & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<FPPKHNNABAD>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_TryGetValue__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    DAT_04566c5a = 1;
    method = extraout_x1;
  }
  local_38 = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).OJBDDPNIHAL;
  if (pSVar3 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    pSVar3 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo,method);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar3,iVar1 + 8,
               Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)(__this->fields).OJBDDPNIHAL,
                       Method_DJNBJHPDKDP_OBECCOPBADO<FPPKHNNABAD>__);
    if (!bVar2) {
      if (pSVar3 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_032ca04c;
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar3,
                 (System_Collections_Generic_IEnumerable_T__o *)(__this->fields).OJBDDPNIHAL,
                 Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
    }
    if (DAT_04566c75 == '\0') {
      FUN_01bab630(&PHLKGOCKIGP_TypeInfo);
      DAT_04566c75 = '\x01';
    }
    if (PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField != (System_String_o *)0x0)
    {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).AGOAABDLMOG;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_032ca04c;
      bVar2 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                        (__this_00,
                         (Il2CppObject *)
                         PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField,&local_38
                         ,
                         Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_TryGetValue__
                        );
      if (bVar2) {
        if (pSVar3 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_032ca04c;
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar3,
                   (System_Collections_Generic_IEnumerable_T__o *)local_38,
                   Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
      }
    }
    return pSVar3;
  }
LAB_032ca04c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

