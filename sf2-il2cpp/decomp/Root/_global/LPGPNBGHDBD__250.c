// TypeDefIndex 250
// Namespace: 
// public static class LPGPNBGHDBD
// Fields:
//   public static int FPAFPJONEFP; // 0x0
//   public static string EOIFAIKIGON; // 0x8
//   public static string BIKDEJPBDGK; // 0x10
//   public static string AEAHMDCHEJO; // 0x18

// ===== public static int IILILGFMCPJ(string GJFGFNAGPEO)  [RVA 0x3228DB4]
// LPGPNBGHDBD$$IILILGFMCPJ @ RVA 0x3228DB4

int32_t LPGPNBGHDBD__IILILGFMCPJ(System_String_o *GJFGFNAGPEO,MethodInfo *method)

{
  int32_t GKBCJOEFFCP;
  int32_t iVar1;
  MGNDHCBAPEN_int__int__o *pMVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04566f89 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_04566f89 = 1;
    method = extraout_x1;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  pMVar2 = LPGPNBGHDBD__BLPHGLNELMC(GJFGFNAGPEO,method);
  if (pMVar2 != (MGNDHCBAPEN_int__int__o *)0x0) {
    iVar1 = (pMVar2->fields).PHPELPFMOII;
    GKBCJOEFFCP = (pMVar2->fields).DOKHHBGJICA;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    iVar1 = LIIFLGALGNK__HLMBDJOGONJ(iVar1,GKBCJOEFFCP,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


// ===== private static void LGCPLHMKOKA(ref string HPACPFLKHPK, string IEPECMCLKJB, int MEGOOCKNJOH, int MKOINMONMKL, string LHGFCIEDHJI)  [RVA 0x3228FEC]
// LPGPNBGHDBD$$LGCPLHMKOKA @ RVA 0x3228FEC

void LPGPNBGHDBD__LGCPLHMKOKA
               (System_String_o **HPACPFLKHPK,System_String_o *IEPECMCLKJB,int32_t MEGOOCKNJOH,
               int32_t MKOINMONMKL,System_String_o *LHGFCIEDHJI,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Object_array *args;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  System_String_o *str0;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_04566f8a & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_2447/*"<quad name={0} min={1} max={2}  /> {3}  "*/);
    DAT_04566f8a = 1;
  }
  pSVar1 = OFFIONDOEPM__AMJCJJALAJH(IEPECMCLKJB,(MethodInfo *)0x0);
  str0 = *HPACPFLKHPK;
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pSVar1 != (System_String_o *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(pSVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_033291d0:
    uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar4,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar1;
    thunk_FUN_01c20e04(args->m_Items,pSVar1);
    local_44 = MEGOOCKNJOH;
    pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0))
    goto LAB_033291d0;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar3;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar3);
      local_48 = MKOINMONMKL;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_033291d0;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar3;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar3);
        if ((LHGFCIEDHJI != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(LHGFCIEDHJI,(((args->obj).klass)->_1).element_class),
           lVar2 == 0)) goto LAB_033291d0;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)LHGFCIEDHJI;
          thunk_FUN_01c20e04(args->m_Items + 3,LHGFCIEDHJI);
          pSVar1 = System_String__Format(StringLiteral_2447/*"<quad name={0} min={1} max={2}  /> {3}  "*/,args,(MethodInfo *)0x0);
          pSVar1 = System_String__Concat(str0,pSVar1,(MethodInfo *)0x0);
          *HPACPFLKHPK = pSVar1;
          thunk_FUN_01c20e04(HPACPFLKHPK,pSVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public static string DMBEBNELNNC(string GJFGFNAGPEO)  [RVA 0x32291E0]
// LPGPNBGHDBD$$DMBEBNELNNC @ RVA 0x32291E0

System_String_o * LPGPNBGHDBD__DMBEBNELNNC(System_String_o *GJFGFNAGPEO,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  MGNDHCBAPEN_int__int__o *pMVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  int32_t *piVar5;
  
  if ((DAT_04566f8b & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&StringLiteral_235/*" - "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566f8b = 1;
    method = extraout_x1;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  pMVar3 = LPGPNBGHDBD__BLPHGLNELMC(GJFGFNAGPEO,method);
  pSVar4 = StringLiteral_1/*""*/;
  if (pMVar3 != (MGNDHCBAPEN_int__int__o *)0x0) {
    iVar1 = (pMVar3->fields).PHPELPFMOII;
    piVar5 = &(pMVar3->fields).DOKHHBGJICA;
    iVar2 = *piVar5;
    pSVar4 = System_Int32__ToString((int32_t)&pMVar3->fields,(MethodInfo *)0x0);
    if (iVar1 != iVar2) {
      str2 = System_Int32__ToString((int32_t)piVar5,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(pSVar4,StringLiteral_235/*" - "*/,str2,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  return pSVar4;
}


// ===== public static JMDPBFOCHHP.ENBCJNLAHAC OICLMNIHIJJ()  [RVA 0x32292B4]
// LPGPNBGHDBD$$OICLMNIHIJJ @ RVA 0x32292B4

JMDPBFOCHHP_ENBCJNLAHAC_o * LPGPNBGHDBD__OICLMNIHIJJ(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  JMDPBFOCHHP_o *pJVar3;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar4;
  ACHLOMELAJE_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566f8c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566f8c = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar3 != (JMDPBFOCHHP_o *)0x0) {
    if ((pJVar3->fields).OFMMMBIIDAE != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (((pJVar3 == (JMDPBFOCHHP_o *)0x0) ||
            (pJVar4 = (pJVar3->fields).OFMMMBIIDAE, pJVar4 == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0)) ||
           (__this = (pJVar4->fields).NPGALOBDIHL,
           __this == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0))
        goto LAB_03329474;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_38,(System_Collections_Generic_List_object__o *)__this,
                   Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_38,
                                  Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                                 ), pIVar1 = local_38.fields._current, bVar2) {
          if ((JMDPBFOCHHP_ENBCJNLAHAC_o *)local_38.fields._current ==
              (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                            (((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)
                             ((long)local_38.fields._current + 0x10))->ICECFDIHPHN,(MethodInfo *)0x0
                            );
          if ((!bVar2) &&
             (bVar2 = ACHLOMELAJE__NIEKNLDMABC
                                (__this_00,
                                 ((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)((long)pIVar1 + 0x10))->
                                 FPMPKOCHBEB,(MethodInfo *)0x0), !bVar2)) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                      );
            return (JMDPBFOCHHP_ENBCJNLAHAC_o *)pIVar1;
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                  );
      }
    }
    return (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0;
  }
LAB_03329474:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static List<JMDPBFOCHHP.ENBCJNLAHAC> JDEHAMOGEGF()  [RVA 0x32294F8]
// LPGPNBGHDBD$$JDEHAMOGEGF @ RVA 0x32294F8

System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *
LPGPNBGHDBD__JDEHAMOGEGF(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  JMDPBFOCHHP_o *pJVar4;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar5;
  JMDPBFOCHHP_ENBCJNLAHAC_array *pJVar6;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566f8d & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<JMDPBFOCHHP_ENBCJNLAHAC>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
    DAT_04566f8d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((pJVar4 != (JMDPBFOCHHP_o *)0x0) &&
     (pJVar5 = (pJVar4->fields).OFMMMBIIDAE, pJVar5 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0)) {
    __this_00 = (pJVar5->fields).NPGALOBDIHL;
    __this = (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>__ctor__);
    bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)__this_00,
                       Method_DJNBJHPDKDP_OBECCOPBADO<JMDPBFOCHHP_ENBCJNLAHAC>__);
    if (!bVar3) {
      if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0)
      goto LAB_033296fc;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                          );
        item = local_50.fields._current;
        if (!bVar3) break;
        if ((JMDPBFOCHHP_ENBCJNLAHAC_o *)local_50.fields._current ==
            (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                          (((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)
                           ((long)local_50.fields._current + 0x10))->ICECFDIHPHN,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_Add__;
        if (!bVar3) {
          if (__this == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pJVar6 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pJVar6 == (JMDPBFOCHHP_ENBCJNLAHAC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pJVar6->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pJVar6->m_Items[(int)uVar1] = (JMDPBFOCHHP_ENBCJNLAHAC_o *)item;
            thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar1,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                );
    }
    return __this;
  }
LAB_033296fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string ELADHNOAPBC(BIBLCFCAMHG ACCIHBHMFPN)  [RVA 0x3229784]
// LPGPNBGHDBD$$ELADHNOAPBC @ RVA 0x3229784

System_String_o * LPGPNBGHDBD__ELADHNOAPBC(int32_t ACCIHBHMFPN,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  long lVar1;
  
  if ((DAT_04566f8e & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_04566f8e = 1;
    method = extraout_x1;
  }
  if (ACCIHBHMFPN == 3) {
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
    }
    lVar1 = 0x18;
  }
  else if (ACCIHBHMFPN == 2) {
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
    }
    lVar1 = 0x10;
  }
  else {
    if (ACCIHBHMFPN != 1) {
      return (System_String_o *)0x0;
    }
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
    }
    lVar1 = 8;
  }
  return *(System_String_o **)((long)&LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP + lVar1);
}


// ===== private static void .cctor()  [RVA 0x322984C]
// LPGPNBGHDBD$$.cctor @ RVA 0x322984C

void LPGPNBGHDBD___cctor(MethodInfo *method)

{
  LPGPNBGHDBD_StaticFields *pLVar1;
  
  if ((DAT_04566f8f & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&StringLiteral_10976/*"RaidTop100Dialog.roll_frame_gold"*/);
    FUN_01bab630(&StringLiteral_10977/*"RaidTop100Dialog.roll_frame_silver"*/);
    FUN_01bab630(&StringLiteral_10975/*"RaidTop100Dialog.roll_frame_bronze"*/);
    DAT_04566f8f = 1;
  }
  pLVar1 = LPGPNBGHDBD_TypeInfo->static_fields;
  pLVar1->FPAFPJONEFP = 0x400;
  pLVar1->EOIFAIKIGON = StringLiteral_10976/*"RaidTop100Dialog.roll_frame_gold"*/;
  thunk_FUN_01c20e04();
  LPGPNBGHDBD_TypeInfo->static_fields->BIKDEJPBDGK = StringLiteral_10977/*"RaidTop100Dialog.roll_frame_silver"*/;
  thunk_FUN_01c20e04();
  LPGPNBGHDBD_TypeInfo->static_fields->AEAHMDCHEJO = StringLiteral_10975/*"RaidTop100Dialog.roll_frame_bronze"*/;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static void CEOEIJFKMOG(AFFHKININGD AGONJKOMAAA, Action<BKKPAKHJDKB> CPECAEHDDDB)  [RVA 0x322990C]
// LPGPNBGHDBD$$CEOEIJFKMOG @ RVA 0x322990C

void LPGPNBGHDBD__CEOEIJFKMOG
               (AFFHKININGD_o *AGONJKOMAAA,System_Action_BKKPAKHJDKB__o *CPECAEHDDDB,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *pIVar3;
  ADJEBFOPFFF_o *__this_00;
  
  if ((DAT_04566f90 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<NIAFDKHDBMA>__);
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    DAT_04566f90 = 1;
  }
  if (AGONJKOMAAA != (AFFHKININGD_o *)0x0) {
    __this = (System_Collections_Generic_List_object__o *)
             (*(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                       (AGONJKOMAAA,(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.method);
    bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)__this,
                       Method_DJNBJHPDKDP_OBECCOPBADO<NIAFDKHDBMA>__);
    if (!bVar2) {
      if (__this == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03329a34:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         (__this,0,Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
      if (pIVar3 != (Il2CppObject *)0x0) {
        bVar1 = (FPLOLKHJIAF_TypeInfo->_2).naturalAligment;
        if ((bVar1 <= (pIVar3->klass->_2).naturalAligment) &&
           ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)FPLOLKHJIAF_TypeInfo)) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
          if ((pIVar3 != (Il2CppObject *)0x0) && (__this_00 != (ADJEBFOPFFF_o *)0x0)) {
            ADJEBFOPFFF__EFGGOJMGCLK(__this_00,pIVar3[6].monitor,CPECAEHDDDB,true,(MethodInfo *)0x0)
            ;
            return;
          }
          goto LAB_03329a34;
        }
      }
    }
  }
  return;
}


// ===== public static string NLJJHFHHKMF(BECIPDJBAOG KJADEEFANAL, int MEGOOCKNJOH = 150, int MKOINMONMKL = 300)  [RVA 0x3229A38]
// LPGPNBGHDBD$$NLJJHFHHKMF @ RVA 0x3229A38

System_String_o *
LPGPNBGHDBD__NLJJHFHHKMF
          (BECIPDJBAOG_o *KJADEEFANAL,int32_t MEGOOCKNJOH,int32_t MKOINMONMKL,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  System_String_o *pSVar7;
  JMDPBFOCHHP_ODJJOAOCFKO_o *pJVar8;
  VirtualInvokeData *pVVar9;
  long lVar10;
  JMDPBFOCHHP_o *pJVar11;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar12;
  DOPEEDABNEK_o *__this;
  HOOAAGABMBL_o *pHVar13;
  System_Object_array *args;
  Il2CppObject *pIVar14;
  undefined8 uVar15;
  MethodInfo *in_x5;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__c *pGVar16;
  ulong uVar17;
  int32_t *piVar18;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar19;
  uint uVar20;
  System_String_o *pSVar21;
  int32_t local_74;
  int32_t local_70;
  int32_t local_6c;
  System_String_o *local_68;
  
  if ((DAT_04566f91 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5562/*"EQUIPMENT"*/);
    FUN_01bab630(&StringLiteral_10929/*"RaidMisc.rating_icon "*/);
    FUN_01bab630(&StringLiteral_9095/*"MiscSprites.ruby"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_2448/*"<quad name={0} min={1} max={2} />  {3}"*/);
    DAT_04566f91 = 1;
  }
  local_68 = StringLiteral_1/*""*/;
  local_6c = 0;
  if (KJADEEFANAL != (BECIPDJBAOG_o *)0x0) {
    bVar5 = BECIPDJBAOG__HMCAGKEIIGO(KJADEEFANAL,(MethodInfo *)0x0);
    if (bVar5) {
      local_6c = (KJADEEFANAL->fields).NLLKMEMKBAF;
      pSVar7 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
      if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
      }
      LPGPNBGHDBD__LGCPLHMKOKA(&local_68,StringLiteral_10929/*"RaidMisc.rating_icon "*/,MEGOOCKNJOH,MKOINMONMKL,pSVar7,in_x5);
    }
    bVar5 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_IList_T__o *)(KJADEEFANAL->fields).LEJBLHJFJHP,
                       Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
    if (bVar5) {
LAB_03329ba8:
      bVar5 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_IList_T__o *)(KJADEEFANAL->fields).AKFPFIHIHOC,
                         Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
      if (bVar5) {
LAB_03329bbc:
        bVar5 = BECIPDJBAOG__BODMFFONFKC(KJADEEFANAL,(MethodInfo *)0x0);
        if (bVar5) {
          local_6c = (KJADEEFANAL->fields).EMOLIBOCKJK;
          pSVar7 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
          if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
          }
          LPGPNBGHDBD__LGCPLHMKOKA
                    (&local_68,StringLiteral_9095/*"MiscSprites.ruby"*/,MEGOOCKNJOH,MKOINMONMKL,pSVar7,in_x5);
        }
        return local_68;
      }
      pGVar19 = (KJADEEFANAL->fields).AKFPFIHIHOC;
      if (pGVar19 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        uVar20 = 0;
        do {
          pGVar16 = pGVar19->klass;
          uVar3._0_1_ = (pGVar16->_2).rank;
          uVar3._1_1_ = (pGVar16->_2).minimumAlignment;
          uVar17 = (ulong)uVar3;
          if (uVar17 != 0) {
            piVar18 = &((pGVar16->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo) {
                pVVar9 = &(pGVar16->vtable)._0_Equals + *piVar18;
                goto LAB_03329e40;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          pVVar9 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar19,System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo
                                ,0);
LAB_03329e40:
          iVar6 = (*pVVar9->methodPtr)(pGVar19,pVVar9->method);
          if (iVar6 <= (int)uVar20) goto LAB_03329bbc;
          pGVar16 = pGVar19->klass;
          uVar4._0_1_ = (pGVar16->_2).rank;
          uVar4._1_1_ = (pGVar16->_2).minimumAlignment;
          uVar17 = (ulong)uVar4;
          if (uVar17 != 0) {
            piVar18 = &((pGVar16->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo) {
                pVVar9 = &(pGVar16->vtable)._0_Equals + *piVar18;
                goto LAB_03329ea0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          pVVar9 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar19,System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo,0);
LAB_03329ea0:
          lVar10 = (*pVVar9->methodPtr)(pGVar19,(ulong)uVar20,pVVar9->method);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
          }
          pJVar11 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (((lVar10 == 0) || (pJVar11 == (JMDPBFOCHHP_o *)0x0)) ||
             (pJVar12 = JMDPBFOCHHP__FPPDGOEOJCH
                                  (pJVar11,*(System_String_o **)(lVar10 + 0x18),(MethodInfo *)0x0),
             pJVar12 == (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0)) break;
          bVar5 = System_String__op_Inequality
                            ((pJVar12->fields).BGHFADDGPAD,StringLiteral_5562/*"EQUIPMENT"*/,(MethodInfo *)0x0);
          if (bVar5) {
            local_6c = *(int32_t *)(lVar10 + 0x20);
            pSVar21 = (pJVar12->fields).super.APBICPEOMOM;
            pSVar7 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
            if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
            }
            LPGPNBGHDBD__LGCPLHMKOKA(&local_68,pSVar21,MEGOOCKNJOH,MKOINMONMKL,pSVar7,in_x5);
          }
          else {
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
            if ((__this == (DOPEEDABNEK_o *)0x0) ||
               (pHVar13 = DOPEEDABNEK__CKKIPBAIEMN
                                    (__this,*(System_String_o **)(lVar10 + 0x18),(MethodInfo *)0x0),
               pHVar13 == (HOOAAGABMBL_o *)0x0)) break;
            bVar5 = PCOEHCPGBBG__BDLEIEHBFAD
                              ((pHVar13->fields)._EFJILFLLDLG_k__BackingField,(MethodInfo *)0x0);
            if (!bVar5) {
              args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
              pSVar7 = OFFIONDOEPM__AMJCJJALAJH
                                 ((pHVar13->fields)._EFJILFLLDLG_k__BackingField,(MethodInfo *)0x0);
              if (args == (System_Object_array *)0x0) break;
              if ((pSVar7 != (System_String_o *)0x0) &&
                 (lVar10 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class),
                 lVar10 == 0)) {
LAB_0332a12c:
                uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar15,0);
              }
              if ((int)args->max_length == 0) {
LAB_0332a128:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              args->m_Items[0] = (Il2CppObject *)pSVar7;
              thunk_FUN_01c20e04(args->m_Items,pSVar7);
              local_70 = MEGOOCKNJOH;
              pIVar14 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_70);
              if ((pIVar14 != (Il2CppObject *)0x0) &&
                 (lVar10 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class),
                 lVar10 == 0)) goto LAB_0332a12c;
              if ((uint)args->max_length < 2) goto LAB_0332a128;
              args->m_Items[1] = pIVar14;
              thunk_FUN_01c20e04(args->m_Items + 1,pIVar14);
              local_74 = MKOINMONMKL;
              pIVar14 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_74);
              if ((pIVar14 != (Il2CppObject *)0x0) &&
                 (lVar10 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class),
                 lVar10 == 0)) goto LAB_0332a12c;
              if ((uint)args->max_length < 3) goto LAB_0332a128;
              args->m_Items[2] = pIVar14;
              thunk_FUN_01c20e04(args->m_Items + 2,pIVar14);
              pSVar7 = local_68;
              if ((local_68 != (System_String_o *)0x0) &&
                 (lVar10 = thunk_FUN_01bda71c(local_68,(((args->obj).klass)->_1).element_class),
                 lVar10 == 0)) goto LAB_0332a12c;
              if ((uint)args->max_length < 4) goto LAB_0332a128;
              args->m_Items[3] = (Il2CppObject *)pSVar7;
              thunk_FUN_01c20e04(args->m_Items + 3,pSVar7);
              local_68 = System_String__Format(StringLiteral_2448/*"<quad name={0} min={1} max={2} />  {3}"*/,args,(MethodInfo *)0x0);
            }
          }
          uVar20 = uVar20 + 1;
        } while( true );
      }
    }
    else {
      pGVar19 = (KJADEEFANAL->fields).LEJBLHJFJHP;
      if (pGVar19 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        uVar20 = 0;
        do {
          pGVar16 = pGVar19->klass;
          uVar1._0_1_ = (pGVar16->_2).rank;
          uVar1._1_1_ = (pGVar16->_2).minimumAlignment;
          uVar17 = (ulong)uVar1;
          if (uVar17 != 0) {
            piVar18 = &((pGVar16->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo) {
                pVVar9 = &(pGVar16->vtable)._0_Equals + *piVar18;
                goto LAB_03329cc4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          pVVar9 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar19,System_Collections_Generic_ICollection<PIADCKMDDAK>_TypeInfo
                                ,0);
LAB_03329cc4:
          iVar6 = (*pVVar9->methodPtr)(pGVar19,pVVar9->method);
          if (iVar6 <= (int)uVar20) goto LAB_03329ba8;
          pGVar16 = pGVar19->klass;
          uVar2._0_1_ = (pGVar16->_2).rank;
          uVar2._1_1_ = (pGVar16->_2).minimumAlignment;
          uVar17 = (ulong)uVar2;
          if (uVar17 != 0) {
            piVar18 = &((pGVar16->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo) {
                pVVar9 = &(pGVar16->vtable)._0_Equals + *piVar18;
                goto LAB_03329d24;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          pVVar9 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar19,System_Collections_Generic_IList<PIADCKMDDAK>_TypeInfo,0);
LAB_03329d24:
          lVar10 = (*pVVar9->methodPtr)(pGVar19,(ulong)uVar20,pVVar9->method);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
          }
          pJVar11 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (((lVar10 == 0) || (pJVar11 == (JMDPBFOCHHP_o *)0x0)) ||
             (pJVar8 = JMDPBFOCHHP__DOKLIOAMCCO
                                 (pJVar11,*(System_String_o **)(lVar10 + 0x18),(MethodInfo *)0x0),
             pJVar8 == (JMDPBFOCHHP_ODJJOAOCFKO_o *)0x0)) break;
          local_6c = *(int32_t *)(lVar10 + 0x20);
          pSVar21 = (pJVar8->fields).APBICPEOMOM;
          pSVar7 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
          if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
          }
          LPGPNBGHDBD__LGCPLHMKOKA(&local_68,pSVar21,MEGOOCKNJOH,MKOINMONMKL,pSVar7,in_x5);
          uVar20 = uVar20 + 1;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BIBLCFCAMHG CJPODFGPDFI(BIBLCFCAMHG DPJIDNBJIBG)  [RVA 0x322A138]
// LPGPNBGHDBD$$CJPODFGPDFI @ RVA 0x322A138

int32_t LPGPNBGHDBD__CJPODFGPDFI(int32_t DPJIDNBJIBG,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = 0;
  if (DPJIDNBJIBG - 1U < 3) {
    iVar1 = DPJIDNBJIBG;
  }
  return iVar1;
}


// ===== public static string LLOLNNDDPFM(int OJDBABKBAFA)  [RVA 0x322A148]
// LPGPNBGHDBD$$LLOLNNDDPFM @ RVA 0x322A148

System_String_o * LPGPNBGHDBD__LLOLNNDDPFM(int32_t OJDBABKBAFA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *str0;
  System_String_o *str2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  long lVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_String_o *pSVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint CJNHFNHJHPE;
  uint local_28;
  uint local_24;
  
  if ((DAT_04566f92 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_16715/*"blnShort"*/);
    FUN_01bab630(&StringLiteral_19716/*"mlnShort"*/);
    FUN_01bab630(&StringLiteral_1585/*"00"*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_04566f92 = 1;
  }
  local_24 = 0;
  if (OJDBABKBAFA < 1000000) {
    pSVar11 = (System_String_o *)0x0;
    CJNHFNHJHPE = OJDBABKBAFA;
    local_28 = OJDBABKBAFA;
    goto LAB_0332a3dc;
  }
  if (OJDBABKBAFA < 1000000000) {
    CJNHFNHJHPE = (uint)OJDBABKBAFA / 1000000;
    local_24 = ((uint)OJDBABKBAFA % 1000000) / 10000;
    local_28 = CJNHFNHJHPE;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = Method_System_Array_Empty<string>__;
    lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar7 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar7 = *(long *)(lVar5 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01b81620();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
LAB_0332a468:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar8 = pIVar4->klass;
    uVar12 = **(undefined8 **)(lVar5 + 0xb8);
    uVar1._0_1_ = (pIVar8->_2).rank;
    uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    uVar13 = StringLiteral_19716/*"mlnShort"*/;
    if (uVar9 != 0) {
      piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0332a3b0;
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
  }
  else {
    CJNHFNHJHPE = (uint)OJDBABKBAFA / 1000000000;
    local_24 = ((uint)OJDBABKBAFA % 1000000000) / 10000000;
    local_28 = CJNHFNHJHPE;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = Method_System_Array_Empty<string>__;
    lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar7 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar7 = *(long *)(lVar5 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01b81620();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0332a468;
    pIVar8 = pIVar4->klass;
    uVar12 = **(undefined8 **)(lVar5 + 0xb8);
    uVar2._0_1_ = (pIVar8->_2).rank;
    uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    uVar13 = StringLiteral_16715/*"blnShort"*/;
    if (uVar9 != 0) {
      piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        uVar13 = StringLiteral_16715/*"blnShort"*/;
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0332a3b0;
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
        uVar13 = StringLiteral_16715/*"blnShort"*/;
      } while (uVar9 != 0);
    }
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0332a3c0:
  pSVar11 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar13,uVar12,pVVar6->method);
LAB_0332a3dc:
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar11,(MethodInfo *)0x0);
  if (bVar3) {
    method_00 = extraout_x1;
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    pSVar11 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,method_00);
  }
  else {
    str0 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
    str2 = System_Int32__ToString((int32_t)&local_24,StringLiteral_1585/*"00"*/,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat(str0,StringLiteral_1377/*"."*/,str2,pSVar11,(MethodInfo *)0x0);
  }
  return pSVar11;
LAB_0332a3b0:
  pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
  goto LAB_0332a3c0;
}


// ===== public static void CFBCMMEBKHN()  [RVA 0x322A4EC]
// LPGPNBGHDBD$$CFBCMMEBKHN @ RVA 0x322A4EC

void LPGPNBGHDBD__CFBCMMEBKHN(MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *__this;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  
  if ((DAT_04566f93 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566f93 = 1;
  }
  if (DAT_045660f3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
    DAT_045660f3 = '\x01';
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this != (CHDGOFBHAFI_o *)0x0) {
    CHDGOFBHAFI__OJOMBBENIHM(__this,true,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Close(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static MGNDHCBAPEN<int, int> BLPHGLNELMC(string GJFGFNAGPEO)  [RVA 0x3228E54]
// LPGPNBGHDBD$$BLPHGLNELMC @ RVA 0x3228E54

MGNDHCBAPEN_int__int__o * LPGPNBGHDBD__BLPHGLNELMC(System_String_o *GJFGFNAGPEO,MethodInfo *method)

{
  int iVar1;
  JMDPBFOCHHP_o *__this;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar2;
  MGNDHCBAPEN_int__int__o *__this_00;
  int32_t NANHIJPKIAP;
  MethodInfo *extraout_x1;
  int32_t JGGJNLLANAE;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_04566f94 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_int>_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566f94 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this != (JMDPBFOCHHP_o *)0x0) {
    pJVar2 = JMDPBFOCHHP__FPPDGOEOJCH(__this,GJFGFNAGPEO,(MethodInfo *)0x0);
    __this_00 = (MGNDHCBAPEN_int__int__o *)0x0;
    if (pJVar2 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) {
      iVar1 = (pJVar2->fields).JPEIKHCEJBM;
      if (iVar1 < 1) {
        fVar3 = (pJVar2->fields).IJDAKGKCHLG;
        JGGJNLLANAE = -0x80000000;
        if (fVar3 != INFINITY) {
          JGGJNLLANAE = (int)fVar3;
        }
        __this_00 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
        NANHIJPKIAP = JGGJNLLANAE;
      }
      else {
        fVar4 = (pJVar2->fields).IJDAKGKCHLG;
        fVar5 = (float)iVar1 / 100.0;
        fVar3 = fVar4;
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          fVar3 = (pJVar2->fields).IJDAKGKCHLG;
        }
        fVar3 = (fVar5 + 1.0) * fVar3;
        fVar4 = (1.0 - fVar5) * fVar4;
        JGGJNLLANAE = -0x80000000;
        if ((float)(int)fVar3 != INFINITY) {
          JGGJNLLANAE = (int)fVar3;
        }
        __this_00 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
        NANHIJPKIAP = -0x80000000;
        if ((float)(int)fVar4 != INFINITY) {
          NANHIJPKIAP = (int)fVar4;
        }
      }
      MGNDHCBAPEN<int,_int>___ctor
                (__this_00,NANHIJPKIAP,JGGJNLLANAE,Method_MGNDHCBAPEN<int,_int>__ctor__);
    }
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NLJJHFHHKMF(LabelAlias HPACPFLKHPK, BECIPDJBAOG KJADEEFANAL, int NJBICBHLOMO, Color EFJKPCADGJH, int MEGOOCKNJOH = 150, int MKOINMONMKL = 300)  [RVA 0x322A5D8]
// LPGPNBGHDBD$$NLJJHFHHKMF @ RVA 0x322A5D8

void LPGPNBGHDBD__NLJJHFHHKMF
               (Nekki_SF2_GUI_LabelAlias_o *HPACPFLKHPK,BECIPDJBAOG_o *KJADEEFANAL,
               int32_t NJBICBHLOMO,UnityEngine_Color_o EFJKPCADGJH,int32_t MEGOOCKNJOH,
               int32_t MKOINMONMKL,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)MEGOOCKNJOH;
  if ((DAT_04566f95 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_04566f95 = 1;
  }
  if (NJBICBHLOMO < 1) {
    if (HPACPFLKHPK == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0332a6d4;
  }
  else {
    if (HPACPFLKHPK == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
LAB_0332a6d4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_UI_Text__set_fontSize
              ((UnityEngine_UI_Text_o *)HPACPFLKHPK,NJBICBHLOMO,(MethodInfo *)0x0);
  }
  (*(HPACPFLKHPK->klass->vtable)._23_set_color.methodPtr)
            (CONCAT44((int)((ulong)EFJKPCADGJH.fields._0_8_ >> 0x20),EFJKPCADGJH.fields.r),
             CONCAT44((int)((ulong)EFJKPCADGJH.fields._4_8_ >> 0x20),EFJKPCADGJH.fields.g),
             CONCAT44((int)((ulong)EFJKPCADGJH.fields._8_8_ >> 0x20),EFJKPCADGJH.fields.b),
             CONCAT44((int)((ulong)register0x00005060 >> 0x20),EFJKPCADGJH.fields.a),HPACPFLKHPK,
             (HPACPFLKHPK->klass->vtable)._23_set_color.method);
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = LPGPNBGHDBD__NLJJHFHHKMF(KJADEEFANAL,MEGOOCKNJOH,MKOINMONMKL,method_00);
                    /* WARNING: Could not recover jumptable at 0x0332a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(HPACPFLKHPK->klass->vtable)._75_set_text.methodPtr)
            (HPACPFLKHPK,pSVar1,(HPACPFLKHPK->klass->vtable)._75_set_text.method);
  return;
}

