// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B01E8

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,HFNLANEMDFI_o *OJFLMDHCPPI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_00;
  HBNENINHPGF_o *IJONCLJPNDO;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *pSVar7;
  BNKBGIIJNLF_o *__this_01;
  IGPDCHBJAPD_AKGCHFPLJEC_o *__this_02;
  Il2CppClass *pIVar8;
  IGPDCHBJAPD_AKGCHFPLJEC_array *pIVar9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CVar10;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566b7c & 1) == 0) {
    FUN_01bab630(&IGPDCHBJAPD_AKGCHFPLJEC_TypeInfo);
    FUN_01bab630(&BNKBGIIJNLF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566b7c = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (OJFLMDHCPPI != (HFNLANEMDFI_o *)0x0) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
    if (__this_00 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) {
LAB_032b047c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IJONCLJPNDO = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
                            (__this_00,(OJFLMDHCPPI->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (IJONCLJPNDO != (HBNENINHPGF_o *)0x0) {
      pSVar7 = (__this->fields).GMCEHJAIFBJ;
      if (pSVar7 == (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0)
      goto LAB_032b047c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar7,
                 Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                          );
        pIVar3 = local_50.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__
                    );
          iVar5 = HFNLANEMDFI__ELLKHHEENBP(OJFLMDHCPPI,(MethodInfo *)0x0);
          if (iVar5 < 1) {
            return;
          }
          __this_01 = (BNKBGIIJNLF_o *)thunk_FUN_01bda818(BNKBGIIJNLF_TypeInfo);
          BNKBGIIJNLF___ctor(__this_01,IJONCLJPNDO,iVar5,(MethodInfo *)0x0);
          __this_02 = (IGPDCHBJAPD_AKGCHFPLJEC_o *)
                      thunk_FUN_01bda818(IGPDCHBJAPD_AKGCHFPLJEC_TypeInfo);
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          if (__this_02 != (IGPDCHBJAPD_AKGCHFPLJEC_o *)0x0) {
            (__this_02->fields).MPNDFIPPOPA = __this_01;
            thunk_FUN_01c20e04(&__this_02->fields,__this_01);
            (__this_02->fields).EDCFFINCGFA = (OJFLMDHCPPI->fields).super.EDCFFINCGFA;
            lVar2 = Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_Add__;
            pSVar7 = (__this->fields).GMCEHJAIFBJ;
            if (pSVar7 != (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
              pIVar9 = (pSVar7->fields)._items;
              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
              if (pIVar9 != (IGPDCHBJAPD_AKGCHFPLJEC_array *)0x0) {
                uVar1 = (pSVar7->fields)._size;
                if (uVar1 < (uint)pIVar9->max_length) {
                  (pSVar7->fields)._size = uVar1 + 1;
                  pIVar9->m_Items[(int)uVar1] = __this_02;
                  thunk_FUN_01c20e04(pIVar9->m_Items + (int)uVar1,__this_02);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
          goto LAB_032b047c;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar8 = local_50.fields._current[1].klass;
        if (pIVar8 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while ((HBNENINHPGF_o *)(pIVar8->_1).name != IJONCLJPNDO);
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                          &(pIVar8->_1).namespaze,(MethodInfo *)0x0);
      iVar6 = HFNLANEMDFI__ELLKHHEENBP(OJFLMDHCPPI,(MethodInfo *)0x0);
      pIVar8 = pIVar3[1].klass;
      CVar10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         (iVar6 + iVar5,(MethodInfo *)0x0);
      if (pIVar8 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)&(pIVar8->_1).namespaze =
           CVar10.fields;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__
                );
    }
  }
  return;
}

