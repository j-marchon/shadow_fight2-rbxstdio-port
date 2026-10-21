// MMDDDDFHOLG$$CFEOMJALMBB @ RVA 0x3363370

bool MMDDDDFHOLG__CFEOMJALMBB
               (MMDDDDFHOLG_o *__this,OLKKAIFGGAK_o *IGMNBGIAGGK,int32_t ACCIHBHMFPN,
               bool IIFELBPPMPM,NJPBBPOABKP_o *AEDJMMHJIEH,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_String_o *pSVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  EHCCNKFIPPA_o *__this_01;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_02;
  NKPJLEMPIKD_GBBCKIANDCN_o *pNVar7;
  OLKKAIFGGAK_o **ppOVar8;
  NJPBBPOABKP_o *AEDJMMHJIEH_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  System_Collections_Generic_Dictionary_string__object__o *pSVar9;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *pMVar10;
  MethodInfo *in_x6;
  int index;
  int index_00;
  
  pMVar10 = (MethodInfo *)(ulong)IIFELBPPMPM;
  if ((DAT_04567a97 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_get_Item__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9345);
    DAT_04567a97 = 1;
  }
  MMDDDDFHOLG__HAGJCFHKIKM(__this,IGMNBGIAGGK,ACCIHBHMFPN,pMVar10);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KECADJKAJNG;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar5,StringLiteral_9345,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar4) {
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).KECADJKAJNG;
      if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_034635ec;
      pSVar6 = (System_String_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar5,StringLiteral_9345,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      pMVar10 = extraout_x1_00;
    }
    else {
      pSVar6 = (System_String_o *)0x0;
      pMVar10 = extraout_x1;
    }
    __this_00 = (__this->fields).PNGAKAPODKB;
    if (__this_00 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 < 1) {
LAB_034635f0:
        if (AEDJMMHJIEH == (NJPBBPOABKP_o *)0x0) {
          MMDDDDFHOLG__NKLGCNHLBAF(__this,pMVar10);
        }
        return true;
      }
      index = 0;
      do {
        __this_01 = (EHCCNKFIPPA_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<EHCCNKFIPPA>_get_Item__);
        if (__this_01 == (EHCCNKFIPPA_o *)0x0) break;
        if (AEDJMMHJIEH == (NJPBBPOABKP_o *)0x0) {
          __this_02 = EHCCNKFIPPA__ALDNBOODDKG(__this_01,ACCIHBHMFPN,(MethodInfo *)0x0);
          pMVar10 = extraout_x1_03;
          if (__this_02 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
            pNVar7 = (__this->fields).CGDFGAMKHLE;
            if (pNVar7 == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) break;
            (pNVar7->fields).BGHFADDGPAD = ACCIHBHMFPN;
            if (IIFELBPPMPM) {
              pSVar9 = (__this->fields).KECADJKAJNG;
            }
            else {
              pSVar9 = (System_Collections_Generic_Dictionary_string__object__o *)0x0;
            }
            (pNVar7->fields).IGMDDJFPIJL = (Il2CppObject *)pSVar9;
            thunk_FUN_01c20e04();
            pNVar7 = (__this->fields).CGDFGAMKHLE;
            if (pNVar7 == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) break;
            (pNVar7->fields).LHNJNJMBLJM = (__this_01->fields)._HKPEJNKNEGG_k__BackingField;
            thunk_FUN_01c20e04();
            pNVar7 = (__this->fields).CGDFGAMKHLE;
            if (pNVar7 == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) break;
            ppOVar8 = &(pNVar7->fields).EMCFCMFGPME;
            *ppOVar8 = IGMNBGIAGGK;
            thunk_FUN_01c20e04(ppOVar8,IGMNBGIAGGK);
            pNVar7 = (__this->fields).CGDFGAMKHLE;
            if (pSVar6 == (System_String_o *)0x0) {
              pSVar3 = string_TypeInfo->static_fields->Empty;
            }
            else {
              pSVar3 = pSVar6;
              if (pSVar6->klass != string_TypeInfo) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pSVar6,string_TypeInfo);
              }
            }
            if (pNVar7 == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) break;
            (pNVar7->fields).BFBIEPIDBON = pSVar3;
            thunk_FUN_01c20e04();
            iVar2 = (__this_02->fields)._size;
            pMVar10 = extraout_x1_04;
            if (0 < iVar2) {
              index_00 = 0;
              do {
                pNVar7 = (__this->fields).CGDFGAMKHLE;
                AEDJMMHJIEH_00 =
                     (NJPBBPOABKP_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index_00,
                                Method_System_Collections_Generic_List<NJPBBPOABKP>_get_Item__);
                MMDDDDFHOLG__ELNCLIIJFDB
                          (__this,__this_01,IGMNBGIAGGK,pNVar7,AEDJMMHJIEH_00,false,in_x6);
                index_00 = index_00 + 1;
                pMVar10 = extraout_x1_05;
              } while (iVar2 != index_00);
            }
          }
        }
        else {
          pMVar10 = extraout_x1_01;
          if ((__this_01->fields)._HKPEJNKNEGG_k__BackingField == IGMNBGIAGGK) {
            MMDDDDFHOLG__ELNCLIIJFDB
                      (__this,__this_01,IGMNBGIAGGK,(NKPJLEMPIKD_GBBCKIANDCN_o *)0x0,AEDJMMHJIEH,
                       true,in_x6);
            pMVar10 = extraout_x1_02;
          }
        }
        index = index + 1;
        if (index == iVar1) goto LAB_034635f0;
        __this_00 = (__this->fields).PNGAKAPODKB;
      } while (__this_00 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0);
    }
  }
LAB_034635ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

