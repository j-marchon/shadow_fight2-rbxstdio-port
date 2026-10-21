// EPFMFHDGMCE$$AIFILIDDBMG @ RVA 0x3537924

void EPFMFHDGMCE__AIFILIDDBMG
               (EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  EANNACPOJFA_o *__this_00;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_01;
  JLGNBOILFLN_o *__this_02;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar3;
  EANNACPOJFA_array *pEVar4;
  JLGNBOILFLN_array *pJVar5;
  
  if ((DAT_04568a9d & 1) == 0) {
    FUN_01bab630(&EANNACPOJFA_TypeInfo);
    FUN_01bab630(&JLGNBOILFLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__);
    DAT_04568a9d = 1;
  }
  __this_00 = (EANNACPOJFA_o *)thunk_FUN_01bda818(EANNACPOJFA_TypeInfo);
  EANNACPOJFA___ctor(__this_00,JLAFGLDIFOC,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<EANNACPOJFA>_Add__;
  __this_01 = (__this->fields).JMPJKOKFJMN;
  if (__this_01 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    pEVar4 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pEVar4 != (EANNACPOJFA_array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pEVar4->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pEVar4->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pEVar4->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if (0 < DFIBGGDJPLM) {
        do {
          __this_02 = (JLGNBOILFLN_o *)thunk_FUN_01bda818(JLGNBOILFLN_TypeInfo);
          JLGNBOILFLN___ctor(__this_02,(HEFOANCOHDC_o *)0x0,JLAFGLDIFOC,3,0,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
          pSVar3 = (__this->fields).GCHAMOPMNHF;
          if (pSVar3 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) goto LAB_03637b34;
          pJVar5 = (pSVar3->fields)._items;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (pJVar5 == (JLGNBOILFLN_array *)0x0) goto LAB_03637b34;
          uVar1 = (pSVar3->fields)._size;
          if (uVar1 < (uint)pJVar5->max_length) {
            (pSVar3->fields)._size = uVar1 + 1;
            pJVar5->m_Items[(int)uVar1] = __this_02;
            thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar1,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_02
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          lVar2 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
          if ((__this_00 == (EANNACPOJFA_o *)0x0) ||
             (pSVar3 = (__this_00->fields).GJBLBEALOBO,
             pSVar3 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) goto LAB_03637b34;
          pJVar5 = (pSVar3->fields)._items;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (pJVar5 == (JLGNBOILFLN_array *)0x0) goto LAB_03637b34;
          uVar1 = (pSVar3->fields)._size;
          if (uVar1 < (uint)pJVar5->max_length) {
            (pSVar3->fields)._size = uVar1 + 1;
            pJVar5->m_Items[(int)uVar1] = __this_02;
            thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar1,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_02
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          DFIBGGDJPLM = DFIBGGDJPLM + -1;
        } while (DFIBGGDJPLM != 0);
      }
      return;
    }
  }
LAB_03637b34:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

