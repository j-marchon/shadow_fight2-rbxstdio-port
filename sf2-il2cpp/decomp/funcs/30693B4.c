// Nekki.SF2.Core.Fights.Controls.Stick$$EENKMFJAMNL @ RVA 0x30693B4

void Nekki_SF2_Core_Fights_Controls_Stick__EENKMFJAMNL
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  MGNDHCBAPEN_float__float__o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *pSVar4;
  MGNDHCBAPEN_float__float__array *pMVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float NANHIJPKIAP;
  
  if ((DAT_04565f22 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_get_Item__);
    FUN_01bab630(&Method_MGNDHCBAPEN<float,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<float,_float>_TypeInfo);
    DAT_04565f22 = 1;
  }
  pSVar4 = (__this->fields).FKAHNJIDACB;
  if (pSVar4 != (System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *)0x0) {
    fVar9 = (__this->fields).MAHPPCLAKLP;
    fVar7 = (__this->fields).PPNPFHAJCMF;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    uVar6 = 0;
    do {
      NANHIJPKIAP = fVar9 + fVar9 * 0.5 + fVar7;
      if (uVar6 == 0) {
LAB_031694ac:
        fVar8 = (__this->fields).PPNPFHAJCMF;
      }
      else {
        pSVar4 = (__this->fields).FKAHNJIDACB;
        if ((pSVar4 == (System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,uVar6 - 1,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_get_Item__
                               ), pIVar3 == (Il2CppObject *)0x0)) break;
        NANHIJPKIAP = *(float *)((long)&pIVar3[1].klass + 4);
        if ((uVar6 & 1) == 0) goto LAB_031694ac;
        fVar8 = (__this->fields).MAHPPCLAKLP;
      }
      __this_00 = (MGNDHCBAPEN_float__float__o *)
                  thunk_FUN_01bda818(MGNDHCBAPEN<float,_float>_TypeInfo);
      MGNDHCBAPEN<float,_float>___ctor
                (__this_00,NANHIJPKIAP,NANHIJPKIAP + fVar8,Method_MGNDHCBAPEN<float,_float>__ctor__)
      ;
      lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<float,_float>>_Add__;
      pSVar4 = (__this->fields).FKAHNJIDACB;
      if (pSVar4 == (System_Collections_Generic_List_MGNDHCBAPEN_float__float___o *)0x0) break;
      pMVar5 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pMVar5 == (MGNDHCBAPEN_float__float__array *)0x0) break;
      uVar1 = (pSVar4->fields)._size;
      if (uVar1 < (uint)pMVar5->max_length) {
        (pSVar4->fields)._size = uVar1 + 1;
        pMVar5->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pMVar5->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = uVar6 + 1;
      if (uVar6 == 8) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

