// CNOGDCKPLMJ$$KEKFJKEELBH @ RVA 0x31C9AD4

void CNOGDCKPLMJ__KEKFJKEELBH
               (CNOGDCKPLMJ_o *__this,FPPKHNNABAD_o *JOBNGBCPEGO,System_String_o *PMACBPAMPJA,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar5;
  FPPKHNNABAD_array *pFVar6;
  System_Collections_Generic_List_FPPKHNNABAD__o *local_28;
  
  if ((DAT_04566c58 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_TryGetValue__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    DAT_04566c58 = 1;
  }
  local_28 = (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0;
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(PMACBPAMPJA,(MethodInfo *)0x0);
  if (bVar3) {
    pSVar5 = (__this->fields).OJBDDPNIHAL;
    lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
  }
  else {
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AGOAABDLMOG
    ;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_032c9cb0;
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar4,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_TryGetValue__
                      );
    pSVar5 = local_28;
    lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
    if (!bVar3) {
      pSVar5 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
      lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
      if (pSVar5 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
        pFVar6 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pFVar6 != (FPPKHNNABAD_array *)0x0) {
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pFVar6->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pFVar6->m_Items[(int)uVar1] = JOBNGBCPEGO;
            thunk_FUN_01c20e04(pFVar6->m_Items + (int)uVar1,JOBNGBCPEGO);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,
                       (Il2CppObject *)JOBNGBCPEGO,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).AGOAABDLMOG;
          local_28 = pSVar5;
          if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (pSVar4,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)pSVar5,
                       Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_Add__
                      );
            return;
          }
        }
      }
      goto LAB_032c9cb0;
    }
  }
  Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__ = lVar2;
  if (pSVar5 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    pFVar6 = (pSVar5->fields)._items;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (pFVar6 != (FPPKHNNABAD_array *)0x0) {
      uVar1 = (pSVar5->fields)._size;
      if (uVar1 < (uint)pFVar6->max_length) {
        (pSVar5->fields)._size = uVar1 + 1;
        pFVar6->m_Items[(int)uVar1] = JOBNGBCPEGO;
        thunk_FUN_01c20e04(pFVar6->m_Items + (int)uVar1,JOBNGBCPEGO);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)JOBNGBCPEGO,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
LAB_032c9cb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

