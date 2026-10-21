// MMDDDDFHOLG$$LPFBJJMANMJ @ RVA 0x336276C

void MMDDDDFHOLG__LPFBJJMANMJ(MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_T__o *DPMPNFJJENF;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar6;
  HJNEOLCKEMD_o *pHVar7;
  System_String_o *key;
  
  if ((DAT_04567a90 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<MMDDDDFHOLG_DOCBHLNBECF>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_get_Item__
                );
    FUN_01bab630(&LMJFCEPILNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_TypeInfo);
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    DAT_04567a90 = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar7 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar7 != (HJNEOLCKEMD_o *)0x0)) {
    if ((pHVar7->fields)._KPCCNJJEIAN_k__BackingField == false) {
      return;
    }
    bVar1 = (LMJFCEPILNI_TypeInfo->_2).naturalAligment;
    if (((pHVar7->klass->_2).naturalAligment < bVar1) ||
       ((pHVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)LMJFCEPILNI_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar7);
    }
    if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             MMDDDDFHOLG_TypeInfo->static_fields->NELMGPHMBAN;
    if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (pSVar5,(Il2CppObject *)(pHVar7->fields)._HFALHOCIDCH_k__BackingField,
                         Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_ContainsKey__
                        );
      if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MMDDDDFHOLG_TypeInfo);
      }
      key = (pHVar7->fields)._HFALHOCIDCH_k__BackingField;
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               MMDDDDFHOLG_TypeInfo->static_fields->NELMGPHMBAN;
      if (bVar4) {
        if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          DPMPNFJJENF = (System_Collections_Generic_List_T__o *)
                        System_Collections_Generic_Dictionary<object,_object>__get_Item
                                  (pSVar5,(Il2CppObject *)key,
                                   Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_get_Item__
                                  );
          DJNBJHPDKDP__OFNFOGHFDML<object>
                    (DPMPNFJJENF,(Il2CppObject *)CPECAEHDDDB,
                     Method_DJNBJHPDKDP_OFNFOGHFDML<MMDDDDFHOLG_DOCBHLNBECF>__);
          return;
        }
      }
      else {
        __this = (System_Collections_Generic_List_object__o *)
                 thunk_FUN_01bda818(
                                   System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_TypeInfo
                                   );
        System_Collections_Generic_List<object>___ctor
                  (__this,Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>__ctor__);
        lVar3 = Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Add__;
        if (__this != (System_Collections_Generic_List_object__o *)0x0) {
          pSVar6 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar6 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar6->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)CPECAEHDDDB;
              thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar2,CPECAEHDDDB);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)CPECAEHDDDB,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object,_object>__Add
                        (pSVar5,(Il2CppObject *)key,(Il2CppObject *)__this,
                         Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_Add__
                        );
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

