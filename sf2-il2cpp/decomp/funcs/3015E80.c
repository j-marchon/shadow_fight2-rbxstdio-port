// ECENNHNBAME$$JAEKFDOJKGP @ RVA 0x3015E80

System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *
ECENNHNBAME__JAEKFDOJKGP(ECENNHNBAME_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *pSVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_LFBHPHJFCPO____string___o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MGNDHCBAPEN_LFBHPHJFCPO____string___array *pSVar4;
  ECENNHNBAME_Fields *pEVar5;
  int iVar6;
  
  if ((DAT_04565bd2 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>>_Add__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>>_TypeInfo
                );
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>_TypeInfo);
    DAT_04565bd2 = 1;
    method = extraout_x1;
  }
  pEVar5 = &__this->fields;
  pSVar3 = pEVar5->EADAGMIKLJN;
  if (pSVar3 == (System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *)0x0)
  {
    pSVar3 = (System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>>_TypeInfo
                                ,method);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>>__ctor__
              );
    pEVar5->EADAGMIKLJN = pSVar3;
    thunk_FUN_01c20e04(pEVar5,pSVar3);
    iVar6 = 3;
    do {
      pSVar3 = pEVar5->EADAGMIKLJN;
      __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_LFBHPHJFCPO____string___o *)
                  thunk_FUN_01bda818(
                                    System_Collections_Generic_List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>_TypeInfo
                                    );
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>__ctor__)
      ;
      lVar2 = Method_System_Collections_Generic_List<List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>>_Add__
      ;
      if (pSVar3 == (System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *)
                    0x0) {
LAB_03115fd4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = (pSVar3->fields)._items;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (pSVar4 == (System_Collections_Generic_List_MGNDHCBAPEN_LFBHPHJFCPO____string___array *)0x0
         ) goto LAB_03115fd4;
      uVar1 = (pSVar3->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (pSVar3->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    pSVar3 = pEVar5->EADAGMIKLJN;
  }
  return pSVar3;
}

