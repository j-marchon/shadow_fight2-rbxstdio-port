// BANPLPOPIGI$$GECPCINCJGC @ RVA 0x33C8B88

void BANPLPOPIGI__GECPCINCJGC(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_01;
  Il2CppObject *item;
  System_Collections_Generic_List_object__o *pSVar6;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  HCKCBFOGMMJ_o *__this_04;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF;
  Il2CppObject *CJNHFNHJHPE;
  MethodInfo *in_x2;
  JCFJFJCKLKG_o *pJVar7;
  System_Object_array *pSVar8;
  int index;
  
  if ((DAT_04567e06 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_BANPLPOPIGI_NKLNDGMMAAH__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Keys__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection<int,_List<ICPMLKOEANF>>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ICPMLKOEANF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ICPMLKOEANF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ICPMLKOEANF>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
    DAT_04567e06 = 1;
  }
  pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IBEGIIPEOAK;
  if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Clear
              (pSVar5,Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_Clear__);
    if ((__this->fields).FHPFEDKOMBA == (JCFJFJCKLKG_o *)0x0) {
      return;
    }
    __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
    IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
    pJVar7 = (__this->fields).FHPFEDKOMBA;
    if (pJVar7 != (JCFJFJCKLKG_o *)0x0) {
      index = 0;
      while (__this_01 = (pJVar7->fields).LFOCACIGEFK,
            __this_01 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
        if ((__this_01->fields).count <= index) {
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).IBEGIIPEOAK;
          if ((pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
             (__this_03 = System_Collections_Generic_Dictionary<int,_object>__get_Keys
                                    (pSVar5,
                                     Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Keys__
                                    ),
             __this_03 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0
             )) {
            iVar4 = System_Collections_Generic_Dictionary_KeyCollection<int,_object>__get_Count
                              (__this_03,
                               Method_System_Collections_Generic_Dictionary_KeyCollection<int,_List<ICPMLKOEANF>>_get_Count__
                              );
            if (iVar4 < 1) {
              BANPLPOPIGI__NKLNDGMMAAH(__this,CJNHFNHJHPE,in_x2);
              return;
            }
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_04 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
            BLMFLPJJMPF = (System_Action_LFELBGMCDHD__o *)
                          thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
            System_Action<object>___ctor();
            if (__this_04 != (HCKCBFOGMMJ_o *)0x0) {
              HCKCBFOGMMJ__EFCMPBGIEGJ(__this_04,__this_00,BLMFLPJJMPF,(MethodInfo *)0x0);
              return;
            }
          }
          break;
        }
        in_x2 = Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__;
        item = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,index,
                          (MethodInfo_295F6AC *)
                          Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
        if ((item != (Il2CppObject *)0x0) && (0 < *(int32_t *)&item[2].klass)) {
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).IBEGIIPEOAK;
          if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
          bVar3 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                            (pSVar5,*(int32_t *)&item[2].klass,
                             Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_ContainsKey__
                            );
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).IBEGIIPEOAK;
          iVar4 = *(int32_t *)&item[2].klass;
          if (bVar3) {
            if ((pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
               (pSVar6 = (System_Collections_Generic_List_object__o *)
                         System_Collections_Generic_Dictionary<int,_object>__get_Item
                                   (pSVar5,iVar4,
                                    Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Item__
                                   ),
               lVar2 = Method_System_Collections_Generic_List<ICPMLKOEANF>_Add__,
               pSVar6 == (System_Collections_Generic_List_object__o *)0x0)) break;
            pSVar8 = (pSVar6->fields)._items;
            (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar1 = (pSVar6->fields)._size;
            if (uVar1 < (uint)pSVar8->max_length) {
              (pSVar6->fields)._size = uVar1 + 1;
              pSVar8->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar1,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar6,item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          else {
            pSVar6 = (System_Collections_Generic_List_object__o *)
                     thunk_FUN_01bda818(System_Collections_Generic_List<ICPMLKOEANF>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      (pSVar6,Method_System_Collections_Generic_List<ICPMLKOEANF>__ctor__);
            lVar2 = Method_System_Collections_Generic_List<ICPMLKOEANF>_Add__;
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) break;
            pSVar8 = (pSVar6->fields)._items;
            (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar1 = (pSVar6->fields)._size;
            if (uVar1 < (uint)pSVar8->max_length) {
              (pSVar6->fields)._size = uVar1 + 1;
              pSVar8->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar1,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar6,item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
            System_Collections_Generic_Dictionary<int,_object>__Add
                      (pSVar5,iVar4,(Il2CppObject *)pSVar6,
                       Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_Add__);
          }
          if ((__this_00 == (IBMLPPNMDCI_o *)0x0) ||
             (__this_02 = (__this_00->fields).EHBNKDHKJNI,
             __this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
          in_x2 = Method_Google_Protobuf_Collections_RepeatedField<long>_Add__;
          Google_Protobuf_Collections_RepeatedField<long>__Add
                    (__this_02,(int64_t)item[1].monitor,
                     (MethodInfo_295C93C *)
                     Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
        }
        pJVar7 = (__this->fields).FHPFEDKOMBA;
        index = index + 1;
        if (pJVar7 == (JCFJFJCKLKG_o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

