// MBDJMJLHFOO$$LOGLJOCPFCN @ RVA 0x34B1534

/* WARNING: Type propagation algorithm not settling */

void MBDJMJLHFOO__LOGLJOCPFCN
               (MBDJMJLHFOO_o *__this,int32_t PCKDEOGMDHH,int32_t DGNJLFEFJFD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  MBDJMJLHFOO_MJFFMMHJCNB_o *__this_00;
  System_Collections_Generic_List_CNDPAJOLKFN__o *pSVar3;
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *__this_01;
  CNDPAJOLKFN_o *__this_02;
  MBDJMJLHFOO_MJFFMMHJCNB_array *pMVar4;
  CNDPAJOLKFN_array *pCVar5;
  int iVar6;
  MBDJMJLHFOO_MJFFMMHJCNB_Fields *pMVar7;
  int iVar8;
  
  if ((DAT_04568560 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CNDPAJOLKFN>_TypeInfo);
    FUN_01bab630(&MBDJMJLHFOO_MJFFMMHJCNB_TypeInfo);
    DAT_04568560 = 1;
  }
  if (0 < PCKDEOGMDHH) {
    iVar8 = 0;
    do {
      __this_00 = (MBDJMJLHFOO_MJFFMMHJCNB_o *)thunk_FUN_01bda818(MBDJMJLHFOO_MJFFMMHJCNB_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      pSVar3 = (System_Collections_Generic_List_CNDPAJOLKFN__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<CNDPAJOLKFN>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar3,DGNJLFEFJFD,
                 Method_System_Collections_Generic_List<CNDPAJOLKFN>__ctor__);
      if (__this_00 == (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) {
LAB_035b1750:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar7 = &__this_00->fields;
      pMVar7->KOANCCDDBDA = pSVar3;
      thunk_FUN_01c20e04(pMVar7,pSVar3);
      lVar2 = Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_Add__;
      __this_01 = (__this->fields).DGPKPHAHOJP;
      if (__this_01 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0)
      goto LAB_035b1750;
      pMVar4 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pMVar4 == (MBDJMJLHFOO_MJFFMMHJCNB_array *)0x0) goto LAB_035b1750;
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pMVar4->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pMVar4->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pMVar4->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar6 = DGNJLFEFJFD;
      if (0 < DGNJLFEFJFD) {
        do {
          pSVar3 = pMVar7->KOANCCDDBDA;
          __this_02 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
          CNDPAJOLKFN___ctor(__this_02,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<CNDPAJOLKFN>_Add__;
          if (pSVar3 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) goto LAB_035b1750;
          pCVar5 = (pSVar3->fields)._items;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (pCVar5 == (CNDPAJOLKFN_array *)0x0) goto LAB_035b1750;
          uVar1 = (pSVar3->fields)._size;
          if (uVar1 < (uint)pCVar5->max_length) {
            (pSVar3->fields)._size = uVar1 + 1;
            pCVar5->m_Items[(int)uVar1] = __this_02;
            thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_02
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar8 = iVar8 + 1;
      (__this_00->fields).ONGLGHIKBJF = DGNJLFEFJFD;
    } while (iVar8 != PCKDEOGMDHH);
  }
  return;
}

