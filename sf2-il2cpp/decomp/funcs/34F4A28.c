// OLKKAIFGGAK$$KFEOPCPBMJB @ RVA 0x34F4A28

void OLKKAIFGGAK__KFEOPCPBMJB(OLKKAIFGGAK_o *__this,GLCAPECMBLM_o *AHCMAIOOIKM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_GLCAPECMBLM__o *pSVar4;
  GLCAPECMBLM_array *pGVar5;
  
  if ((DAT_045687c8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_Contains__);
    DAT_045687c8 = 1;
  }
  pSVar4 = (__this->fields).LJOAELGLDNP;
  if (pSVar4 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (Il2CppObject *)AHCMAIOOIKM,
                       Method_System_Collections_Generic_List<GLCAPECMBLM>_Contains__);
    lVar2 = Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__;
    if (bVar3) {
      return;
    }
    pSVar4 = (__this->fields).LJOAELGLDNP;
    if (pSVar4 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
      pGVar5 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pGVar5 != (GLCAPECMBLM_array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pGVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pGVar5->m_Items[(int)uVar1] = AHCMAIOOIKM;
          thunk_FUN_01c20e04(pGVar5->m_Items + (int)uVar1,AHCMAIOOIKM);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)AHCMAIOOIKM,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

