// GALHNMPIEHA$$CDGDOLDEIBD @ RVA 0x3166EE0

/* WARNING: Type propagation algorithm not settling */

void GALHNMPIEHA__CDGDOLDEIBD(GALHNMPIEHA_o *__this,BPBGAAHBFKH_o *CHGANLEMEGJ,MethodInfo *method)

{
  int32_t length;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *pGVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  BDMABHJEEGD_o *CNNEPEHMINA;
  CFMDGLMCNIL_o *__this_00;
  FCAPJDHLLAP_o *__this_01;
  BPBGAAHBFKH_o *pBVar4;
  System_Action_o *pSVar5;
  System_Collections_Generic_List_BDMABHJEEGD__o *pSVar6;
  BPBGAAHBFKH_o **ppBVar7;
  int CJNHFNHJHPE;
  int iVar8;
  int iVar9;
  
  if ((DAT_045668c3 & 1) == 0) {
    FUN_01bab630(&FCAPJDHLLAP_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    DAT_045668c3 = 1;
  }
  ppBVar7 = &(__this->fields)._MBJGPIOFAEE_k__BackingField;
  if (*ppBVar7 != (BPBGAAHBFKH_o *)0x0) {
    if ((CHGANLEMEGJ != (BPBGAAHBFKH_o *)0x0) &&
       (pGVar1 = (CHGANLEMEGJ->fields).IGPJEDLPAGI,
       pGVar1 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0)) {
      iVar8 = 0;
      CJNHFNHJHPE = 0;
      while( true ) {
        iVar9 = (pGVar1->fields).count;
        if (iVar9 <= iVar8) {
          if (iVar9 < 1) goto LAB_03267040;
          iVar8 = 0;
          goto LAB_03267010;
        }
        method = Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__;
        pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,iVar8,
                            (MethodInfo_295F6AC *)
                            Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                           );
        pBVar4 = *ppBVar7;
        if (pBVar4 == (BPBGAAHBFKH_o *)0x0) break;
        iVar9 = 0;
        while( true ) {
          pGVar1 = (pBVar4->fields).IGPJEDLPAGI;
          if (pGVar1 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0)
          goto LAB_03267160;
          if ((pGVar1->fields).count <= iVar9) break;
          method = Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__;
          pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,iVar9,
                              (MethodInfo_295F6AC *)
                              Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                             );
          if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar3 == (Il2CppObject *)0x0)) goto LAB_03267160;
          if (*(int *)&pIVar2[1].monitor == *(int *)&pIVar3[1].monitor) goto LAB_03266ff4;
          pBVar4 = *ppBVar7;
          iVar9 = iVar9 + 1;
          if (pBVar4 == (BPBGAAHBFKH_o *)0x0) goto LAB_03267160;
        }
        CJNHFNHJHPE = CJNHFNHJHPE + 1;
LAB_03266ff4:
        pGVar1 = (CHGANLEMEGJ->fields).IGPJEDLPAGI;
        iVar8 = iVar8 + 1;
        if (pGVar1 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) break;
      }
    }
    goto LAB_03267160;
  }
  *ppBVar7 = CHGANLEMEGJ;
  thunk_FUN_01c20e04(ppBVar7,CHGANLEMEGJ);
  goto LAB_03267078;
  while (iVar8 = iVar8 + 1, iVar8 < (pGVar1->fields).count) {
LAB_03267010:
    method = Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__;
    CNNEPEHMINA = (BDMABHJEEGD_o *)
                  Google_Protobuf_Collections_RepeatedField<object>__get_Item
                            ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,iVar8,
                             (MethodInfo_295F6AC *)
                             Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                            );
    GALHNMPIEHA__IDLJMOJKHKF(__this,CNNEPEHMINA,method);
    pGVar1 = (CHGANLEMEGJ->fields).IGPJEDLPAGI;
    if (pGVar1 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0)
    goto LAB_03267160;
  }
LAB_03267040:
  *ppBVar7 = CHGANLEMEGJ;
  thunk_FUN_01c20e04(ppBVar7,CHGANLEMEGJ);
  if (0 < CJNHFNHJHPE) {
    GALHNMPIEHA__HOPNFIPNLHB(__this,CJNHFNHJHPE,method);
  }
LAB_03267078:
  pSVar5 = (__this->fields).IFNPPPGCCKO;
  if (pSVar5 != (System_Action_o *)0x0) {
    (*(code *)(pSVar5->fields).super.super.invoke_impl)
              ((pSVar5->fields).super.super.method_code,(pSVar5->fields).super.super.method);
    pSVar6 = (__this->fields).MBGDIKJNDMJ;
    if (pSVar6 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
      if ((pSVar6->fields)._size < 1) {
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
      pSVar6 = (__this->fields).MBGDIKJNDMJ;
      __this_01 = (FCAPJDHLLAP_o *)thunk_FUN_01bda818(FCAPJDHLLAP_TypeInfo);
      FCAPJDHLLAP___ctor(__this_01,pSVar6,(MethodInfo *)0x0);
      if (__this_00 != (CFMDGLMCNIL_o *)0x0) {
        CFMDGLMCNIL__MPFFOIIBAKO(__this_00,(OHPOFOPJIMB_o *)__this_01,false,(MethodInfo *)0x0);
        pSVar6 = (__this->fields).MBGDIKJNDMJ;
        if (pSVar6 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
                    /* try { // try from 03267110 to 033671bf has its CatchHandler @ 03267110
                       catch() { ... } // from try @ 03267110 with catch @ 03267110
                       catch() { ... } // from try @ 032671e8 with catch @ 03267110
                       catch() { ... } // from try @ 032672a4 with catch @ 03267110
                       catch() { ... } // from try @ 032672d0 with catch @ 03267110
                       catch() { ... } // from try @ 03267310 with catch @ 03267110 */
          length = (pSVar6->fields)._size;
          (pSVar6->fields)._size = 0;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (length < 1) {
            return;
          }
          System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03267160:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

