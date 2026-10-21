// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B0510

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,EFOFNLEFLNH_o *BPFGKPNFACP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  MGNPHCAAEIO_MACDOBFPDPP_o *__this_00;
  HGLELMDNMMA_o *GJFBMHMOMED;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *pSVar6;
  HOGPIBHKJDL_o *__this_01;
  IGPDCHBJAPD_DHAPBDACLMI_o *__this_02;
  Il2CppClass *pIVar7;
  IGPDCHBJAPD_DHAPBDACLMI_array *pIVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CVar9;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566b79 & 1) == 0) {
    FUN_01bab630(&IGPDCHBJAPD_DHAPBDACLMI_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_get_Current__
                );
    FUN_01bab630(&HOGPIBHKJDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566b79 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (BPFGKPNFACP != (EFOFNLEFLNH_o *)0x0) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->JIKLPLFKEDI;
    if (__this_00 == (MGNPHCAAEIO_MACDOBFPDPP_o *)0x0) {
LAB_032b078c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    GJFBMHMOMED = MGNPHCAAEIO_MACDOBFPDPP__HNCMGLINNDO
                            (__this_00,(BPFGKPNFACP->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (GJFBMHMOMED != (HGLELMDNMMA_o *)0x0) {
      pSVar6 = (__this->fields).OJFMFMHCPOA;
      if (pSVar6 == (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0)
      goto LAB_032b078c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar6,
                 Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_MoveNext__
                          );
        pIVar3 = local_50.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_Dispose__
                    );
          iVar5 = (BPFGKPNFACP->fields).JAICMIMBIOA;
          if (iVar5 < 1) {
            return;
          }
          __this_01 = (HOGPIBHKJDL_o *)thunk_FUN_01bda818(HOGPIBHKJDL_TypeInfo);
          HOGPIBHKJDL___ctor(__this_01,GJFBMHMOMED,iVar5,(MethodInfo *)0x0);
          __this_02 = (IGPDCHBJAPD_DHAPBDACLMI_o *)
                      thunk_FUN_01bda818(IGPDCHBJAPD_DHAPBDACLMI_TypeInfo);
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          if (__this_02 != (IGPDCHBJAPD_DHAPBDACLMI_o *)0x0) {
            (__this_02->fields).PAFJDADBMKC = __this_01;
            thunk_FUN_01c20e04(&__this_02->fields,__this_01);
            (__this_02->fields).EDCFFINCGFA = (BPFGKPNFACP->fields).super.EDCFFINCGFA;
            lVar2 = Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_Add__;
            pSVar6 = (__this->fields).OJFMFMHCPOA;
            if (pSVar6 != (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0) {
              pIVar8 = (pSVar6->fields)._items;
              (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
              if (pIVar8 != (IGPDCHBJAPD_DHAPBDACLMI_array *)0x0) {
                uVar1 = (pSVar6->fields)._size;
                if (uVar1 < (uint)pIVar8->max_length) {
                  (pSVar6->fields)._size = uVar1 + 1;
                  pIVar8->m_Items[(int)uVar1] = __this_02;
                  thunk_FUN_01c20e04(pIVar8->m_Items + (int)uVar1,__this_02);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
          goto LAB_032b078c;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar7 = local_50.fields._current[1].klass;
        if (pIVar7 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while ((HGLELMDNMMA_o *)(pIVar7->_1).name != GJFBMHMOMED);
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                          &(pIVar7->_1).namespaze,(MethodInfo *)0x0);
      pIVar7 = pIVar3[1].klass;
      CVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((BPFGKPNFACP->fields).JAICMIMBIOA + iVar5,(MethodInfo *)0x0);
      if (pIVar7 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)&(pIVar7->_1).namespaze =
           CVar9.fields;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_Dispose__
                );
    }
  }
  return;
}

