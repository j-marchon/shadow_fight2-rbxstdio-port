// TypeDefIndex 3348
// Namespace: 
// public static class JJPNLEPEAFM
// Fields:

// ===== public static bool OCJEIOMBDKP()  [RVA 0x353117C]
// JJPNLEPEAFM$$OCJEIOMBDKP @ RVA 0x353117C

bool JJPNLEPEAFM__OCJEIOMBDKP(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  System_Action_object__o **ppSVar4;
  System_Action_object__o *IELDNEAAPBE;
  
  if ((DAT_04568a5f & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_JJPNLEPEAFM_<>c_AHKHKIMNEPA__);
    FUN_01bab630(&JJPNLEPEAFM_<>c_TypeInfo);
    DAT_04568a5f = 1;
  }
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
    iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
    if (iVar2 == 5) {
      JJPNLEPEAFM__NHCDPFPNBEF((MethodInfo *)0x5);
      bVar1 = true;
    }
    else {
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(JJPNLEPEAFM_<>c_TypeInfo);
      }
      IELDNEAAPBE = JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__25_0;
      if (IELDNEAAPBE == (System_Action_object__o *)0x0) {
        if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(JJPNLEPEAFM_<>c_TypeInfo);
        }
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar4 = &JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__25_0;
        *ppSVar4 = IELDNEAAPBE;
        thunk_FUN_01c20e04(ppSVar4,IELDNEAAPBE);
      }
      if (pNVar3 == (NDPMLPGANCI_o *)0x0) goto LAB_036312b4;
      bVar1 = NDPMLPGANCI__EKPAFDJIAGI
                        (pNVar3,5,(Il2CppObject *)0x0,IELDNEAAPBE,false,(MethodInfo *)0x0);
      bVar1 = !bVar1;
    }
    return bVar1;
  }
LAB_036312b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void IJDLKDGICCE(OJEHKJHEBID PBNPKBJKFHE, NLIPDAGCACO DMEEPJJNEAB)  [RVA 0x35314B4]
// JJPNLEPEAFM$$IJDLKDGICCE @ RVA 0x35314B4

void JJPNLEPEAFM__IJDLKDGICCE(OJEHKJHEBID_o *PBNPKBJKFHE,int32_t DMEEPJJNEAB,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar2;
  BCDCMCKBKEN_o *__this_01;
  undefined8 uVar3;
  UnityEngine_Object_c *pUVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568a60 & 1) == 0) {
    FUN_01bab630(&BCDCMCKBKEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_get_Current__);
    FUN_01bab630(&Method_GCIFMNHADDF_JCELKAOGMDO<MainClanDialog>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainClanDialog>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainClanDialog>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainClanDialog>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a60 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((__this != (GCIFMNHADDF_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  GCIFMNHADDF__JCELKAOGMDO<object>
                            (__this,Method_GCIFMNHADDF_JCELKAOGMDO<MainClanDialog>__),
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    if ((__this_00->fields)._size == 1) {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         (__this_00,0,
                          Method_System_Collections_Generic_List<MainClanDialog>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_036316c0;
      if (*(char *)&pIVar2[0x13].monitor != '\0') {
        return;
      }
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,__this_00,
               Method_System_Collections_Generic_List<MainClanDialog>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_MoveNext__
                             ), pIVar2 = local_60.fields._current, bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if ((UnityEngine_Object_o *)pIVar2 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (*(char *)&((UnityEngine_Object_o *)((long)pIVar2 + 0x138))->klass != '\0') {
          pUVar4 = (UnityEngine_Object_c *)pIVar2->klass;
          uVar3._0_4_ = pUVar4[1]._2.static_fields_size;
          uVar3._4_4_ = pUVar4[1]._2.thread_static_fields_size;
          (**(code **)&pUVar4[1]._2.element_size)(pIVar2,uVar3);
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_Dispose__
              );
    __this_01 = (BCDCMCKBKEN_o *)thunk_FUN_01bda818(BCDCMCKBKEN_TypeInfo);
    BCDCMCKBKEN___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (BCDCMCKBKEN_o *)0x0) {
      (__this_01->fields).EBLGDAMBFOF = PBNPKBJKFHE;
      thunk_FUN_01c20e04(&__this_01->fields,PBNPKBJKFHE);
      (__this_01->fields).EOCOOHCNAAG = DMEEPJJNEAB;
      (__this_01->fields).DLAJBOCIHDP = true;
      GCIFMNHADDF__ACDDKABEBAP(0x82,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036316c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog LJMGKILCNBI()  [RVA 0x353173C]
// JJPNLEPEAFM$$LJMGKILCNBI @ RVA 0x353173C

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__LJMGKILCNBI(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if ((DAT_04568a61 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17780/*"dlgDuelLockedMessage"*/);
    FUN_01bab630(&StringLiteral_17781/*"dlgDuelLockedTitle"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a61 = 1;
  }
  pNVar1 = JJPNLEPEAFM__OJEGBDGIKGH
                     (0x154,StringLiteral_17781/*"dlgDuelLockedTitle"*/,StringLiteral_17780/*"dlgDuelLockedMessage"*/,StringLiteral_9679/*"OK"*/,
                      StringLiteral_1/*""*/,(System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/
                      ,true,true,true,true,in_stack_ffffffffffffffc8);
  return pNVar1;
}


// ===== public static BaseDialog EFLNJLIDLEF(MAEAAOFOANA DKMMBMBMJBO)  [RVA 0x3531890]
// JJPNLEPEAFM$$EFLNJLIDLEF @ RVA 0x3531890

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__EFLNJLIDLEF(MAEAAOFOANA_o *DKMMBMBMJBO,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0xe6,(Il2CppObject *)DKMMBMBMJBO,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static void PPDAJIKOKBE(bool COEGCLJJOBM = True)  [RVA 0x35318A0]
// JJPNLEPEAFM$$PPDAJIKOKBE @ RVA 0x35318A0

void JJPNLEPEAFM__PPDAJIKOKBE(bool COEGCLJJOBM,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar3;
  GCIFMNHADDF_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  long *plVar8;
  System_String_o *a;
  long lVar9;
  Il2CppClass *pIVar10;
  void *pvVar11;
  ulong uVar12;
  int32_t *piVar13;
  undefined8 uVar14;
  MethodInfo *in_stack_ffffffffffffff68;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568a62 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_get_Current__);
    FUN_01bab630(&Method_GCIFMNHADDF_JCELKAOGMDO<SimpleDialog>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SimpleDialog>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SimpleDialog>_get_Count__);
    FUN_01bab630(&StringLiteral_17809/*"dlgNowLeader"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a62 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (COEGCLJJOBM) {
    pNVar3 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
    if (pNVar3 == (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) goto LAB_03631c18;
    if (((pNVar3->fields).BDDIHIFJADE != false) && ((pNVar3->fields).JDNKKGPNHPB == 1)) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__CloseNotifications((MethodInfo *)0x0);
    }
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((__this != (GCIFMNHADDF_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  GCIFMNHADDF__JCELKAOGMDO<object>
                            (__this,Method_GCIFMNHADDF_JCELKAOGMDO<SimpleDialog>__),
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    if ((__this_00->fields)._size < 1) {
LAB_03631b98:
      JJPNLEPEAFM__OJEGBDGIKGH
                (0x154,StringLiteral_17850/*"dlgWarning"*/,StringLiteral_17809/*"dlgNowLeader"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                 (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
                 in_stack_ffffffffffffff68);
    }
    else {
      pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar5 = Method_System_Array_Empty<string>__;
      lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar9 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar9 = *(long *)(lVar5 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01b81620();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      pSVar7 = StringLiteral_17809/*"dlgNowLeader"*/;
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03631c18;
      pIVar10 = pIVar4->klass;
      uVar14 = **(undefined8 **)(lVar5 + 0xb8);
      uVar1._0_1_ = (pIVar10->_2).rank;
      uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pIVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar10->vtable + (*piVar13 + 0xc);
            goto LAB_03631ab4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03631ab4:
      pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,pSVar7,uVar14,pVVar6->method);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,__this_00,
                 Method_System_Collections_Generic_List<SimpleDialog>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      do {
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_70,
                             Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_MoveNext__
                            );
          pIVar4 = local_70.fields._current;
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_Dispose__);
            goto LAB_03631b98;
          }
          if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (local_70.fields._current[5].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Equality
                            ((System_String_o *)
                             (local_70.fields._current[5].klass)->vtable[10].method,
                             StringLiteral_17850/*"dlgWarning"*/,(MethodInfo *)0x0);
        } while (!bVar2);
        pvVar11 = pIVar4[0xc].monitor;
        if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__op_Equality
                          (*(System_String_o **)((long)pvVar11 + 0x1e0),StringLiteral_17809/*"dlgNowLeader"*/,
                           (MethodInfo *)0x0);
        if (bVar2) break;
        plVar8 = pIVar4[0xc].monitor;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        a = (System_String_o *)
            (**(code **)(*plVar8 + 0x5d8))(plVar8,*(undefined8 *)(*plVar8 + 0x5e0));
        bVar2 = System_String__op_Equality(a,pSVar7,(MethodInfo *)0x0);
      } while (!bVar2);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_Dispose__
                );
    }
    return;
  }
LAB_03631c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AHMKGMGJMLO(EOLFEKNCPLM IMMNELPBGIF)  [RVA 0x3531CB0]
// JJPNLEPEAFM$$AHMKGMGJMLO @ RVA 0x3531CB0

void JJPNLEPEAFM__AHMKGMGJMLO(EOLFEKNCPLM_o *IMMNELPBGIF,MethodInfo *method)

{
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this;
  
  __this = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Show(__this,IMMNELPBGIF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog JONJOBEJBNO()  [RVA 0x3531CD8]
// JJPNLEPEAFM$$JONJOBEJBNO @ RVA 0x3531CD8

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__JONJOBEJBNO(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0x136,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static BaseDialog AGMHOCPINKD()  [RVA 0x3531CE8]
// JJPNLEPEAFM$$AGMHOCPINKD @ RVA 0x3531CE8

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__AGMHOCPINKD(MethodInfo *method)

{
  System_String_o *NDNGGHKKMEJ;
  System_String_o *AOJIIDGCBEC;
  System_Action_o **ppSVar1;
  ONDBPECEKAJ_o *__this;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  System_Action_o *CGLKNMPIAJF;
  
  if ((DAT_04568a63 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&ONDBPECEKAJ_TypeInfo);
    FUN_01bab630(&Method_JJPNLEPEAFM_<>c_AIDODMPPAEO__);
    FUN_01bab630(&JJPNLEPEAFM_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_17790/*"dlgExitMessage"*/);
    FUN_01bab630(&StringLiteral_6041/*"Exit_title"*/);
    DAT_04568a63 = 1;
  }
  if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AOJIIDGCBEC = StringLiteral_17790/*"dlgExitMessage"*/;
  NDNGGHKKMEJ = StringLiteral_6041/*"Exit_title"*/;
  CGLKNMPIAJF = JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__19_0;
  if (CGLKNMPIAJF == (System_Action_o *)0x0) {
    if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CGLKNMPIAJF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__19_0;
    *ppSVar1 = CGLKNMPIAJF;
    thunk_FUN_01c20e04(ppSVar1,CGLKNMPIAJF);
  }
  __this = (ONDBPECEKAJ_o *)thunk_FUN_01bda818(ONDBPECEKAJ_TypeInfo);
  ONDBPECEKAJ___ctor(__this,NDNGGHKKMEJ,AOJIIDGCBEC,true,CGLKNMPIAJF,-1,(MethodInfo *)0x0);
  pNVar2 = GCIFMNHADDF__ACDDKABEBAP(0x28,(Il2CppObject *)__this,(MethodInfo *)0x0);
  return pNVar2;
}


// ===== public static BaseDialog GPPIJOMGJPL()  [RVA 0x3531E3C]
// JJPNLEPEAFM$$GPPIJOMGJPL @ RVA 0x3531E3C

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__GPPIJOMGJPL(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0x140,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static BaseDialog OOOIOMHJONP(string PCPECHHMLEC, string EHNFGMGKCHO, string KCFLBKINDFM, string KHPLLCKLJKO = "", Action<object> IELDNEAAPBE, LabelButton.MANJLBPDELA ACLFJCOLFMD = 1, LabelButton.MANJLBPDELA LGJADIDEGHK = 0, bool HAGFOOEGNPJ = False, bool CKHKIMELDAI = False, string IDGIFNHOBPI = "", bool HEMMOCPADNA = True, bool MDOBBHMPIHP = True, bool GFLIJBOMEKO = True)  [RVA 0x3531E4C]
// JJPNLEPEAFM$$OOOIOMHJONP @ RVA 0x3531E4C

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__OOOIOMHJONP
          (System_String_o *PCPECHHMLEC,System_String_o *EHNFGMGKCHO,System_String_o *KCFLBKINDFM,
          System_String_o *KHPLLCKLJKO,System_Action_object__o *IELDNEAAPBE,int32_t ACLFJCOLFMD,
          int32_t LGJADIDEGHK,bool HAGFOOEGNPJ,bool CKHKIMELDAI,System_String_o *IDGIFNHOBPI,
          bool HEMMOCPADNA,bool MDOBBHMPIHP,bool GFLIJBOMEKO,MethodInfo *method)

{
  bool bVar1;
  HKHDJBFKNBP_o *__this;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_00;
  int32_t DNBBBGEENMM;
  
  if ((DAT_04568a64 & 1) == 0) {
    FUN_01bab630(&HKHDJBFKNBP_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a64 = 1;
  }
  bVar1 = System_String__op_Equality(KCFLBKINDFM,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  if ((bVar1) ||
     (bVar1 = System_String__op_Equality(KHPLLCKLJKO,StringLiteral_1/*""*/,(MethodInfo *)0x0), bVar1)) {
    bVar1 = System_String__op_Inequality(KCFLBKINDFM,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (bVar1) {
      DNBBBGEENMM = 1;
    }
    else {
      bVar1 = System_String__op_Inequality(KHPLLCKLJKO,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      DNBBBGEENMM = 2;
      if (!bVar1) {
        DNBBBGEENMM = 0;
      }
    }
  }
  else {
    DNBBBGEENMM = 3;
  }
  __this = (HKHDJBFKNBP_o *)thunk_FUN_01bda818(HKHDJBFKNBP_TypeInfo);
  HKHDJBFKNBP___ctor(__this,PCPECHHMLEC,EHNFGMGKCHO,DNBBBGEENMM,KCFLBKINDFM,KHPLLCKLJKO,ACLFJCOLFMD,
                     LGJADIDEGHK,HAGFOOEGNPJ,CKHKIMELDAI,IDGIFNHOBPI,IELDNEAAPBE,(MethodInfo *)0x0);
  if (__this == (HKHDJBFKNBP_o *)0x0) {
LAB_03632008:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this->fields).super.DMGKDKHHFCE = MDOBBHMPIHP;
  (__this->fields).super.CHKHLNEMKJC = GFLIJBOMEKO;
  (__this->fields).super.DFMACEOAJOC = HEMMOCPADNA;
  __this_00 = GCIFMNHADDF__ACDDKABEBAP(0xaa,(Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IELDNEAAPBE != (System_Action_object__o *)0x0) {
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03632008;
    Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,0,
               (System_Action_T__o *)IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
  }
  return __this_00;
}


// ===== private static void MHEOEKBDLKN(object IMMNELPBGIF)  [RVA 0x353200C]
// JJPNLEPEAFM$$MHEOEKBDLKN @ RVA 0x353200C

void JJPNLEPEAFM__MHEOEKBDLKN(Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_String_o *CJNHFNHJHPE;
  PBAKFOBIHEG_o *pPVar4;
  undefined8 uVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_04568a65 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_JJPNLEPEAFM_JHLIJCCIKHF__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568a65 = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar3 != (Il2CppObject *)0x0) {
    CJNHFNHJHPE = Core_Configs_Models_BuildSettingsExtension__GetRateUrl
                            (pIVar3[9].monitor,(MethodInfo *)0x0);
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Application__OpenURL(CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
      pPVar7 = pPVar4->klass;
      uVar1._0_1_ = (pPVar7->_2).rank;
      uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar6 = pPVar7->vtable + (*piVar9 + 2);
            goto LAB_03632174;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,2);
LAB_03632174:
                    /* WARNING: Could not recover jumptable at 0x03632190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar6->methodPtr)(0x3e4ccccd,pPVar4,uVar5,pVVar6->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void EJHGILFOFBE()  [RVA 0x3532198]
// JJPNLEPEAFM$$EJHGILFOFBE @ RVA 0x3532198

void JJPNLEPEAFM__EJHGILFOFBE(MethodInfo *method)

{
  GCIFMNHADDF__ACDDKABEBAP(400,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== public static BaseDialog OFBBGLDBEOK()  [RVA 0x35321A8]
// JJPNLEPEAFM$$OFBBGLDBEOK @ RVA 0x35321A8

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__OFBBGLDBEOK(MethodInfo *method)

{
  System_Action_o *CGLKNMPIAJF;
  ONDBPECEKAJ_o *__this;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  if ((DAT_04568a66 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_MGNPHCAAEIO_FNMMEMACMAM__);
    FUN_01bab630(&ONDBPECEKAJ_TypeInfo);
    FUN_01bab630(&StringLiteral_17790/*"dlgExitMessage"*/);
    FUN_01bab630(&StringLiteral_17791/*"dlgExitTitle"*/);
    DAT_04568a66 = 1;
  }
  CGLKNMPIAJF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  __this = (ONDBPECEKAJ_o *)thunk_FUN_01bda818(ONDBPECEKAJ_TypeInfo);
  ONDBPECEKAJ___ctor(__this,StringLiteral_17791/*"dlgExitTitle"*/,StringLiteral_17790/*"dlgExitMessage"*/,true,CGLKNMPIAJF,-1,
                     (MethodInfo *)0x0);
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0x28,(Il2CppObject *)__this,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static RaidSeasonFinishDialog BAPCFKAPNEK(NLBPJNEGNNM OIALBIGPFFA)  [RVA 0x3532294]
// JJPNLEPEAFM$$BAPCFKAPNEK @ RVA 0x3532294

Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *
JJPNLEPEAFM__BAPCFKAPNEK(NLBPJNEGNNM_o *OIALBIGPFFA,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this;
  
  if ((DAT_04568a67 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_TypeInfo);
    DAT_04568a67 = 1;
  }
  __this = (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *)
           GCIFMNHADDF__ACDDKABEBAP(200,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_TypeInfo)) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__Init(__this,OIALBIGPFFA,(MethodInfo *)0x0)
      ;
      return __this;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog NMHCCGPELBE(ADDCOJMHMHE BHHMMBFKGGN)  [RVA 0x3532338]
// JJPNLEPEAFM$$NMHCCGPELBE @ RVA 0x3532338

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__NMHCCGPELBE(ADDCOJMHMHE_o *BHHMMBFKGGN,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  MethodInfo *method_00;
  ADDCOJMHMHE_o AStack_a0;
  
  method_00 = (MethodInfo *)0x90;
  memcpy(&AStack_a0,BHHMMBFKGGN,0x90);
  pNVar1 = JJPNLEPEAFM__BAPFMKGFGHG(&AStack_a0,0x122,method_00);
  return pNVar1;
}


// ===== public static BaseDialog FIEOHKDCIHM(NCJBDBGIPNF DKMMBMBMJBO)  [RVA 0x353251C]
// JJPNLEPEAFM$$FIEOHKDCIHM @ RVA 0x353251C

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__FIEOHKDCIHM(NCJBDBGIPNF_o *DKMMBMBMJBO,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(100,(Il2CppObject *)DKMMBMBMJBO,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static BaseDialog OOECKIHBGOA(Action<object> PCMJHKBMNAI)  [RVA 0x353252C]
// JJPNLEPEAFM$$OOECKIHBGOA @ RVA 0x353252C

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__OOECKIHBGOA(System_Action_object__o *PCMJHKBMNAI,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if ((DAT_04568a68 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17807/*"dlgNotNetworkMessage"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_17808/*"dlgNotNetworkTitle"*/);
    DAT_04568a68 = 1;
  }
  pNVar1 = JJPNLEPEAFM__OJEGBDGIKGH
                     (0x154,StringLiteral_17808/*"dlgNotNetworkTitle"*/,StringLiteral_17807/*"dlgNotNetworkMessage"*/,StringLiteral_9679/*"OK"*/,
                      StringLiteral_1/*""*/,PCMJHKBMNAI,1,0,false,false,StringLiteral_1/*""*/,true,true,true,
                      true,in_stack_ffffffffffffffb8);
  return pNVar1;
}


// ===== public static void FGGGLJNFDLF(int BPCMPECIOLF)  [RVA 0x3532604]
// JJPNLEPEAFM$$FGGGLJNFDLF @ RVA 0x3532604

void JJPNLEPEAFM__FGGGLJNFDLF(int32_t BPCMPECIOLF,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this;
  
  if ((DAT_04568a69 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_TypeInfo);
    DAT_04568a69 = 1;
  }
  __this = (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *)
           GCIFMNHADDF__ACDDKABEBAP(0x19a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_TypeInfo)) {
      Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__InitData(__this,BPCMPECIOLF,(MethodInfo *)0x0)
      ;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog CMMCCNHIIOP(HEFOANCOHDC EIKFGOCCOIE)  [RVA 0x3532694]
// JJPNLEPEAFM$$CMMCCNHIIOP @ RVA 0x3532694

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__CMMCCNHIIOP(HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  HHKELHDGPDO_o *IMMNELPBGIF;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  MethodInfo *in_x2;
  
  IMMNELPBGIF = JJPNLEPEAFM__IIAPLAPOCGL((PLCCJCFAFKA_o *)0x0,EIKFGOCCOIE,in_x2);
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0x50,(Il2CppObject *)IMMNELPBGIF,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static BaseDialog FONHJEMPEEC(FCBPECGCJLN DKMMBMBMJBO)  [RVA 0x3532C74]
// JJPNLEPEAFM$$FONHJEMPEEC @ RVA 0x3532C74

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__FONHJEMPEEC(FCBPECGCJLN_o *DKMMBMBMJBO,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0xd2,(Il2CppObject *)DKMMBMBMJBO,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static bool HMBOKGADCGK()  [RVA 0x3532C84]
// JJPNLEPEAFM$$HMBOKGADCGK @ RVA 0x3532C84

bool JJPNLEPEAFM__HMBOKGADCGK(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this;
  
  bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive((MethodInfo *)0x0);
  if (bVar1) {
    __this = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
    if (__this == (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__OnBackKeyClicked
              (__this,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  }
  return bVar1;
}


// ===== public static BaseDialog HOILBJHCLJG()  [RVA 0x3532CC0]
// JJPNLEPEAFM$$HOILBJHCLJG @ RVA 0x3532CC0

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__HOILBJHCLJG(MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *exists;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  undefined8 uVar3;
  UnityEngine_Object_c *pUVar4;
  
  if ((DAT_04568a6a & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<CreateClanDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a6a = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    exists = (UnityEngine_Object_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<CreateClanDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if (bVar1) {
      if (exists == (UnityEngine_Object_o *)0x0) goto LAB_03632d68;
      pUVar4 = exists->klass;
      uVar3._0_4_ = pUVar4[1]._2.static_fields_size;
      uVar3._4_4_ = pUVar4[1]._2.thread_static_fields_size;
      (**(code **)&pUVar4[1]._2.element_size)(exists,uVar3);
    }
    pNVar2 = GCIFMNHADDF__ACDDKABEBAP(0x14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    return pNVar2;
  }
LAB_03632d68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void PCKFMMLICGD()  [RVA 0x3532D6C]
// JJPNLEPEAFM$$PCKFMMLICGD @ RVA 0x3532D6C

void JJPNLEPEAFM__PCKFMMLICGD(MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if ((DAT_04568a6b & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_9623/*"NotEnoughRubies"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a6b = 1;
  }
  JJPNLEPEAFM__OJEGBDGIKGH
            (0x154,StringLiteral_17850/*"dlgWarning"*/,StringLiteral_9623/*"NotEnoughRubies"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
             (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
             in_stack_ffffffffffffffc8);
  return;
}


// ===== private static void NHCDPFPNBEF()  [RVA 0x35312B8]
// JJPNLEPEAFM$$NHCDPFPNBEF @ RVA 0x35312B8

void JJPNLEPEAFM__NHCDPFPNBEF(MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *pCVar2;
  long lVar3;
  LJNJDFEAIOH_o *__this;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar4;
  UnityEngine_Object_o *x;
  LJNJDFEAIOH_o **ppLVar5;
  AADKBCFCLKK_o *DKMMBMBMJBO;
  
  if ((DAT_04568a6c & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LJNJDFEAIOH_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04568a6c = 1;
  }
  if (DAT_045660f3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
    DAT_045660f3 = '\x01';
  }
  pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) goto LAB_036314b0;
    if ((pNVar4->fields).Controller != (LJNJDFEAIOH_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
        CHDGOFBHAFI__MCGAMEJDDNG(pCVar2,(pNVar4->fields).Controller,(MethodInfo *)0x0);
        return;
      }
      goto LAB_036314b0;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Close(pNVar4,(MethodInfo *)0x0);
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Instantiate((MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
    DKMMBMBMJBO = (pCVar2->fields).AABMLCNHHPN;
    __this = (LJNJDFEAIOH_o *)thunk_FUN_01bda818(LJNJDFEAIOH_TypeInfo);
    LJNJDFEAIOH___ctor(__this,pNVar4,DKMMBMBMJBO,(MethodInfo *)0x0);
    pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if ((pCVar2 != (CHDGOFBHAFI_o *)0x0) &&
       (CHDGOFBHAFI__MCGAMEJDDNG(pCVar2,__this,(MethodInfo *)0x0),
       pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0)) {
      ppLVar5 = &(pNVar4->fields).Controller;
      *ppLVar5 = __this;
      thunk_FUN_01c20e04(ppLVar5,__this);
      return;
    }
  }
LAB_036314b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog GIOKKFDPGNI(string PCPECHHMLEC, List<NBLEEDEAPHB> FCOIPKFOGMM, string KCFLBKINDFM, string KHPLLCKLJKO, Action<object> IELDNEAAPBE, LabelButton.MANJLBPDELA ACLFJCOLFMD, LabelButton.MANJLBPDELA LGJADIDEGHK, bool EBCJGGKJBMO = False, bool NHLOHJKADOM = False, string IDGIFNHOBPI, string DPPMHBHNMGI, bool MAHLDLFKEGB = False, bool MDOBBHMPIHP = True, bool GFLIJBOMEKO = True, bool PFIAGDGJCJG = True)  [RVA 0x3532E38]
// JJPNLEPEAFM$$GIOKKFDPGNI @ RVA 0x3532E38

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__GIOKKFDPGNI
          (System_String_o *PCPECHHMLEC,System_Collections_Generic_List_NBLEEDEAPHB__o *FCOIPKFOGMM,
          System_String_o *KCFLBKINDFM,System_String_o *KHPLLCKLJKO,
          System_Action_object__o *IELDNEAAPBE,int32_t ACLFJCOLFMD,int32_t LGJADIDEGHK,
          bool EBCJGGKJBMO,bool NHLOHJKADOM,System_String_o *IDGIFNHOBPI,
          System_String_o *DPPMHBHNMGI,bool MAHLDLFKEGB,bool MDOBBHMPIHP,bool GFLIJBOMEKO,
          bool PFIAGDGJCJG,MethodInfo *method)

{
  bool bVar1;
  DOKAKKCAHHO_o *__this;
  System_String_o **ppSVar2;
  System_String_o *message;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_00;
  int32_t iVar3;
  
  if ((DAT_04568a6d & 1) == 0) {
    FUN_01bab630(&DOKAKKCAHHO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_5696/*"EnableOnChecked"*/);
    FUN_01bab630(&StringLiteral_5697/*"EnableOnUnchecked"*/);
    FUN_01bab630(&StringLiteral_5356/*"DialogsOpener::OpenMultiLineScrollDialog: Unknown mode: "*/);
    DAT_04568a6d = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KCFLBKINDFM,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KHPLLCKLJKO,(MethodInfo *)0x0), bVar1)) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KCFLBKINDFM,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KHPLLCKLJKO,(MethodInfo *)0x0);
      iVar3 = 0;
      if (!bVar1) {
        iVar3 = 2;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 3;
  }
  __this = (DOKAKKCAHHO_o *)thunk_FUN_01bda818(DOKAKKCAHHO_TypeInfo);
  DOKAKKCAHHO___ctor(__this,(MethodInfo *)0x0);
  if (__this == (DOKAKKCAHHO_o *)0x0) goto LAB_036330ec;
  ppSVar2 = &(__this->fields).JACHHEFFPGD;
  *ppSVar2 = PCPECHHMLEC;
  thunk_FUN_01c20e04(ppSVar2,PCPECHHMLEC);
  (__this->fields).FCOIPKFOGMM = FCOIPKFOGMM;
  thunk_FUN_01c20e04();
  (__this->fields).LKMIFPMMFCO = iVar3;
  ppSVar2 = &(__this->fields).FFBFCDFHOAJ;
  *ppSVar2 = KCFLBKINDFM;
  thunk_FUN_01c20e04(ppSVar2,KCFLBKINDFM);
  ppSVar2 = &(__this->fields).JBOFCJGLMAL;
  *ppSVar2 = KHPLLCKLJKO;
  thunk_FUN_01c20e04(ppSVar2,KHPLLCKLJKO);
  ppSVar2 = &(__this->fields).CKCIODFPKDI;
  *ppSVar2 = IDGIFNHOBPI;
  (__this->fields).OENNHCIHICN = ACLFJCOLFMD;
  (__this->fields).LGBEBCFPBJK = LGJADIDEGHK;
  (__this->fields).DMGKDKHHFCE = MDOBBHMPIHP;
  (__this->fields).CHKHLNEMKJC = GFLIJBOMEKO;
  (__this->fields).CKMCCGLPKJB = PFIAGDGJCJG;
  thunk_FUN_01c20e04(ppSVar2,IDGIFNHOBPI);
  (__this->fields).OLKPCEAEJOA = ~(uint)NHLOHJKADOM & 1;
  (__this->fields).JCFBHKDDDJG = MAHLDLFKEGB;
  if (EBCJGGKJBMO) {
    bVar1 = System_String__op_Equality(DPPMHBHNMGI,StringLiteral_5696/*"EnableOnChecked"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar3 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(DPPMHBHNMGI,StringLiteral_5697/*"EnableOnUnchecked"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        message = System_String__Concat(StringLiteral_5356/*"DialogsOpener::OpenMultiLineScrollDialog: Unknown mode: "*/,DPPMHBHNMGI,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
        goto LAB_03633090;
      }
      iVar3 = 1;
    }
    (__this->fields).HPLBEKNOLEG = iVar3;
  }
  else {
    (__this->fields).HPLBEKNOLEG = 0;
  }
LAB_03633090:
  __this_00 = GCIFMNHADDF__ACDDKABEBAP(0x8c,(Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IELDNEAAPBE != (System_Action_object__o *)0x0) {
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
LAB_036330ec:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,0,
               (System_Action_T__o *)IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
  }
  return __this_00;
}


// ===== public static BaseDialog FOCOCNHNGMI()  [RVA 0x35330F0]
// JJPNLEPEAFM$$FOCOCNHNGMI @ RVA 0x35330F0

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__FOCOCNHNGMI(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  EEGDOGKBLNG_o *pEVar3;
  System_String_o *pSVar4;
  NBLEEDEAPHB_o *__this;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  EEOMEMBBGNA_o *pEVar5;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar6;
  NBLEEDEAPHB_array *pNVar7;
  OJEHKJHEBID_o *PBNPKBJKFHE;
  System_String_o **ppSVar8;
  
  if ((DAT_04568a6e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_17795/*"dlgGetRole{"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a6e = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
    pSVar4 = IDGOGBNEGAM__ONLBMMFEPOI((pEVar3->fields).LPMFKCDDEIA,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(StringLiteral_17795/*"dlgGetRole{"*/,pSVar4,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0)
    ;
    __this = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
    NBLEEDEAPHB___ctor(__this,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,0,-1,
                       (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                       (MethodInfo *)0x0);
    if (__this != (NBLEEDEAPHB_o *)0x0) {
      ppSVar8 = &(__this->fields).ABCHAOKFLGL;
      *ppSVar8 = pSVar4;
      thunk_FUN_01c20e04(ppSVar8,pSVar4);
      (__this->fields).ALFDOLMJLKI = 0x3c;
      IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                 Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
      lVar2 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
      if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
        pNVar7 = (IJIPABLCAKE->fields)._items;
        (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
        if (pNVar7 != (NBLEEDEAPHB_array *)0x0) {
          uVar1 = (IJIPABLCAKE->fields)._size;
          if (uVar1 < (uint)pNVar7->max_length) {
            (IJIPABLCAKE->fields)._size = uVar1 + 1;
            pNVar7->m_Items[(int)uVar1] = __this;
            thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1,__this);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                       (Il2CppObject *)__this,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pEVar5 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
          if (pEVar5 != (EEOMEMBBGNA_o *)0x0) {
            PBNPKBJKFHE = (pEVar5->fields).MICFEIBNOLM;
            pNVar6 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
            if (pNVar6 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                        (pNVar6,StringLiteral_1/*""*/,IJIPABLCAKE,(System_Action_object__o *)0x0,
                         StringLiteral_1/*""*/,4,0.0,1,false,true,1.0,(System_String_o *)0x0,
                         (MethodInfo *)0x0);
              pNVar6 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
              if (pNVar6 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                Nekki_SF2_GUI_Dialogs_NotificationsGame__CreateClanLogoImage
                          (pNVar6,PBNPKBJKFHE,false,3.0,(MethodInfo *)0x0);
                return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static LotteryDialog IPLAAIJEPOM(LPGLKMNHELJ DKMMBMBMJBO)  [RVA 0x353335C]
// JJPNLEPEAFM$$IPLAAIJEPOM @ RVA 0x353335C

Nekki_SF2_GUI_Dialogs_LotteryDialog_o *
JJPNLEPEAFM__IPLAAIJEPOM(LPGLKMNHELJ_o *DKMMBMBMJBO,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o *pNVar2;
  
  if ((DAT_04568a6f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo);
    DAT_04568a6f = 1;
  }
  pNVar2 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)
           GCIFMNHADDF__ACDDKABEBAP(0x5a,(Il2CppObject *)DKMMBMBMJBO,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->_2).naturalAligment;
    if ((pNVar2->klass->_2).naturalAligment < bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0;
    }
    else if ((pNVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
             (Il2CppClass *)Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo) {
      pNVar2 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0;
    }
  }
  return pNVar2;
}


// ===== public static BaseDialog KLBIPGNFIFM()  [RVA 0x35333E4]
// JJPNLEPEAFM$$KLBIPGNFIFM @ RVA 0x35333E4

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__KLBIPGNFIFM(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0x32,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static BaseDialog IALCPMFBLHK(AFFHKININGD FBFPLEFCDOK, string JEHFOBHMGJM, string NJLKBEHCEKD, bool EGHMKECHFME, Action<int> BLMFLPJJMPF)  [RVA 0x35333F4]
// JJPNLEPEAFM$$IALCPMFBLHK @ RVA 0x35333F4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__IALCPMFBLHK
          (AFFHKININGD_o *FBFPLEFCDOK,System_String_o *JEHFOBHMGJM,System_String_o *NJLKBEHCEKD,
          bool EGHMKECHFME,System_Action_int__o *BLMFLPJJMPF,MethodInfo *method)

{
  MPMBFKHOAKB_o *__this;
  System_String_o **ppSVar1;
  System_Action_int__o **ppSVar2;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  
  if ((DAT_04568a70 & 1) == 0) {
    FUN_01bab630(&MPMBFKHOAKB_TypeInfo);
    DAT_04568a70 = 1;
  }
  __this = (MPMBFKHOAKB_o *)thunk_FUN_01bda818(MPMBFKHOAKB_TypeInfo);
  MPMBFKHOAKB___ctor(__this,(MethodInfo *)0x0);
  if (__this != (MPMBFKHOAKB_o *)0x0) {
    (__this->fields).FAMILKPGDOC = FBFPLEFCDOK;
    thunk_FUN_01c20e04(&__this->fields,FBFPLEFCDOK);
    ppSVar1 = &(__this->fields).IKIINEOIIAK;
    *ppSVar1 = JEHFOBHMGJM;
    thunk_FUN_01c20e04(ppSVar1,JEHFOBHMGJM);
    ppSVar1 = &(__this->fields).JMMIJNFKAAN;
    *ppSVar1 = NJLKBEHCEKD;
    thunk_FUN_01c20e04(ppSVar1,NJLKBEHCEKD);
    (__this->fields).MIMPBIMAAHL = EGHMKECHFME;
    ppSVar2 = &(__this->fields).MIMKJIKCPGP;
    *ppSVar2 = BLMFLPJJMPF;
    thunk_FUN_01c20e04(ppSVar2,BLMFLPJJMPF);
    pNVar3 = GCIFMNHADDF__ACDDKABEBAP(10,(Il2CppObject *)__this,(MethodInfo *)0x0);
    return pNVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog HCGCOEJDPKI(PLCCJCFAFKA HFGJCIPEMPO, Action<object> BLMFLPJJMPF)  [RVA 0x35334C4]
// JJPNLEPEAFM$$HCGCOEJDPKI @ RVA 0x35334C4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__HCGCOEJDPKI
          (PLCCJCFAFKA_o *HFGJCIPEMPO,System_Action_object__o *BLMFLPJJMPF,MethodInfo *method)

{
  HHKELHDGPDO_o *IMMNELPBGIF;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this;
  
  if ((DAT_04568a71 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_04568a71 = 1;
  }
  IMMNELPBGIF = JJPNLEPEAFM__IIAPLAPOCGL(HFGJCIPEMPO,(HEFOANCOHDC_o *)0x0,method);
  if (IMMNELPBGIF != (HHKELHDGPDO_o *)0x0) {
    (IMMNELPBGIF->fields).EJGIHLJGJKC = false;
    __this = GCIFMNHADDF__ACDDKABEBAP(0x50,(Il2CppObject *)IMMNELPBGIF,(MethodInfo *)0x0);
    if (BLMFLPJJMPF != (System_Action_object__o *)0x0) {
      if (__this == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03633550;
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,
                 (System_Action_T__o *)BLMFLPJJMPF,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    }
    return __this;
  }
LAB_03633550:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog BNBALDFMAML(JDCLNBHKHJC BHHMMBFKGGN)  [RVA 0x3533554]
// JJPNLEPEAFM$$BNBALDFMAML @ RVA 0x3533554

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__BNBALDFMAML(JDCLNBHKHJC_o *BHHMMBFKGGN,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0x172,(Il2CppObject *)BHHMMBFKGGN,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static BaseDialog AFLGOFPHICD(string PCPECHHMLEC, string EHNFGMGKCHO, string KCFLBKINDFM, string KHPLLCKLJKO = "", Action<object> IELDNEAAPBE, LabelButton.MANJLBPDELA ACLFJCOLFMD = 1, LabelButton.MANJLBPDELA LGJADIDEGHK = 0, bool AJJPMOMMIGJ = False, bool NNKNJCADLGF = False, string IDGIFNHOBPI = "", bool HEMMOCPADNA = True, bool MDOBBHMPIHP = True, bool GFLIJBOMEKO = True, bool PFIAGDGJCJG = True, bool KNDPCBNAHPN = True)  [RVA 0x3533564]
// JJPNLEPEAFM$$AFLGOFPHICD @ RVA 0x3533564

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__AFLGOFPHICD
          (System_String_o *PCPECHHMLEC,System_String_o *EHNFGMGKCHO,System_String_o *KCFLBKINDFM,
          System_String_o *KHPLLCKLJKO,System_Action_object__o *IELDNEAAPBE,int32_t ACLFJCOLFMD,
          int32_t LGJADIDEGHK,bool AJJPMOMMIGJ,bool NNKNJCADLGF,System_String_o *IDGIFNHOBPI,
          bool HEMMOCPADNA,bool MDOBBHMPIHP,bool GFLIJBOMEKO,bool PFIAGDGJCJG,bool KNDPCBNAHPN,
          MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  MethodInfo *in_stack_ffffffffffffff78;
  
  if ((DAT_04568a72 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_TypeInfo);
    DAT_04568a72 = 1;
  }
  pNVar2 = JJPNLEPEAFM__OJEGBDGIKGH
                     (0x10e,PCPECHHMLEC,EHNFGMGKCHO,KCFLBKINDFM,KHPLLCKLJKO,IELDNEAAPBE,ACLFJCOLFMD,
                      LGJADIDEGHK,AJJPMOMMIGJ,NNKNJCADLGF,IDGIFNHOBPI,HEMMOCPADNA,MDOBBHMPIHP,
                      GFLIJBOMEKO,PFIAGDGJCJG,in_stack_ffffffffffffff78);
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pNVar2->klass->_2).naturalAligment) &&
       ((pNVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_TypeInfo)) {
      *(bool *)&pNVar2[1].fields.DMNJBHNNEKI = KNDPCBNAHPN;
      return pNVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void FOJKGPOJNBJ(OJEHKJHEBID PBNPKBJKFHE, NLIPDAGCACO DMEEPJJNEAB)  [RVA 0x3533858]
// JJPNLEPEAFM$$FOJKGPOJNBJ @ RVA 0x3533858

void JJPNLEPEAFM__FOJKGPOJNBJ(OJEHKJHEBID_o *PBNPKBJKFHE,int32_t DMEEPJJNEAB,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  GCIFMNHADDF_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  BCDCMCKBKEN_o *__this_01;
  undefined8 uVar2;
  UnityEngine_Object_c *pUVar3;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568a73 & 1) == 0) {
    FUN_01bab630(&BCDCMCKBKEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_get_Current__);
    FUN_01bab630(&Method_GCIFMNHADDF_JCELKAOGMDO<MainClanDialog>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainClanDialog>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a73 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((__this != (GCIFMNHADDF_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  GCIFMNHADDF__JCELKAOGMDO<object>
                            (__this,Method_GCIFMNHADDF_JCELKAOGMDO<MainClanDialog>__),
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,__this_00,
               Method_System_Collections_Generic_List<MainClanDialog>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_MoveNext__
                             ), x = local_60.fields._current, bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (*(char *)&((UnityEngine_Object_o *)((long)x + 0x138))->klass == '\0') {
          pUVar3 = (UnityEngine_Object_c *)x->klass;
          uVar2._0_4_ = pUVar3[1]._2.static_fields_size;
          uVar2._4_4_ = pUVar3[1]._2.thread_static_fields_size;
          (**(code **)&pUVar3[1]._2.element_size)(x,uVar2);
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<MainClanDialog>_Dispose__
              );
    __this_01 = (BCDCMCKBKEN_o *)thunk_FUN_01bda818(BCDCMCKBKEN_TypeInfo);
    BCDCMCKBKEN___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (BCDCMCKBKEN_o *)0x0) {
      (__this_01->fields).EBLGDAMBFOF = PBNPKBJKFHE;
      thunk_FUN_01c20e04(&__this_01->fields,PBNPKBJKFHE);
      (__this_01->fields).EOCOOHCNAAG = DMEEPJJNEAB;
      (__this_01->fields).DLAJBOCIHDP = false;
      GCIFMNHADDF__ACDDKABEBAP(0x82,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog JNDPLPKDPCP(string PCPECHHMLEC, string EHNFGMGKCHO, string KCFLBKINDFM, string KHPLLCKLJKO = "", Action<object> IELDNEAAPBE, LabelButton.MANJLBPDELA ACLFJCOLFMD = 1, LabelButton.MANJLBPDELA LGJADIDEGHK = 0, bool AJJPMOMMIGJ = False, bool NNKNJCADLGF = False, string IDGIFNHOBPI = "", bool HEMMOCPADNA = True, bool MDOBBHMPIHP = True, bool GFLIJBOMEKO = True, bool PFIAGDGJCJG = True)  [RVA 0x3531808]
// JJPNLEPEAFM$$JNDPLPKDPCP @ RVA 0x3531808

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__JNDPLPKDPCP
          (System_String_o *PCPECHHMLEC,System_String_o *EHNFGMGKCHO,System_String_o *KCFLBKINDFM,
          System_String_o *KHPLLCKLJKO,System_Action_object__o *IELDNEAAPBE,int32_t ACLFJCOLFMD,
          int32_t LGJADIDEGHK,bool AJJPMOMMIGJ,bool NNKNJCADLGF,System_String_o *IDGIFNHOBPI,
          bool HEMMOCPADNA,bool MDOBBHMPIHP,bool GFLIJBOMEKO,bool PFIAGDGJCJG,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  pNVar1 = JJPNLEPEAFM__OJEGBDGIKGH
                     (0x154,PCPECHHMLEC,EHNFGMGKCHO,KCFLBKINDFM,KHPLLCKLJKO,IELDNEAAPBE,ACLFJCOLFMD,
                      LGJADIDEGHK,AJJPMOMMIGJ,NNKNJCADLGF,IDGIFNHOBPI,HEMMOCPADNA,MDOBBHMPIHP,
                      GFLIJBOMEKO,PFIAGDGJCJG,in_stack_ffffffffffffffe8);
  return pNVar1;
}


// ===== public static void CFOHCDKCGOG(BFBONKPKBNL GMCFOKPADCA, EnchantDialog.JGHKLHIICBH JEAJGNNOONA, Action<object> CGLKNMPIAJF)  [RVA 0x3533A8C]
// JJPNLEPEAFM$$CFOHCDKCGOG @ RVA 0x3533A8C

void JJPNLEPEAFM__CFOHCDKCGOG
               (BFBONKPKBNL_o *GMCFOKPADCA,int32_t JEAJGNNOONA,System_Action_object__o *CGLKNMPIAJF,
               MethodInfo *method)

{
  KHEFDKCCDJL_o *__this;
  
  if ((DAT_04568a74 & 1) == 0) {
    FUN_01bab630(&KHEFDKCCDJL_TypeInfo);
    DAT_04568a74 = 1;
  }
  __this = (KHEFDKCCDJL_o *)thunk_FUN_01bda818(KHEFDKCCDJL_TypeInfo);
  KHEFDKCCDJL___ctor(__this,GMCFOKPADCA,JEAJGNNOONA,CGLKNMPIAJF,(MethodInfo *)0x0);
  GCIFMNHADDF__ACDDKABEBAP(0x1e,(Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static void DAKAIKCCOKD()  [RVA 0x3533B08]
// JJPNLEPEAFM$$DAKAIKCCOKD @ RVA 0x3533B08

void JJPNLEPEAFM__DAKAIKCCOKD(MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *x;
  undefined8 uVar2;
  UnityEngine_Object_c *pUVar3;
  
  if ((DAT_04568a75 & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a75 = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    x = (UnityEngine_Object_o *)
        GCIFMNHADDF__BFJGHKKGOJC<object>
                  (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      pUVar3 = x->klass;
      uVar2._0_4_ = pUVar3[1]._2.static_fields_size;
      uVar2._4_4_ = pUVar3[1]._2.thread_static_fields_size;
                    /* WARNING: Could not recover jumptable at 0x03633ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)&pUVar3[1]._2.element_size)(x,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog GDLBIEGHILK(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x3533BB0]
// JJPNLEPEAFM$$GDLBIEGHILK @ RVA 0x3533BB0

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__GDLBIEGHILK(OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0xfa,(Il2CppObject *)PBNPKBJKFHE,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static BaseDialog GKCFJGLKNII()  [RVA 0x3533BC0]
// JJPNLEPEAFM$$GKCFJGLKNII @ RVA 0x3533BC0

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__GKCFJGLKNII(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0x14a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static InputDialog DHEOJOJFOAJ()  [RVA 0x3533BD0]
// JJPNLEPEAFM$$DHEOJOJFOAJ @ RVA 0x3533BD0

Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o * JJPNLEPEAFM__DHEOJOJFOAJ(MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  NCJBDBGIPNF_o *__this;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *pNVar8;
  long lVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_String_o **ppSVar13;
  System_Collections_Generic_Dictionary_object__object__o *pSVar14;
  undefined8 uVar15;
  
  if ((DAT_04568a76 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_set_Item__
                );
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_IONAICHLBOO_EECFAJEJAFF__);
    FUN_01bab630(&Method_IONAICHLBOO_FCBNILJFGIH__);
    FUN_01bab630(&Method_IONAICHLBOO_MFKLLLKLILP__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo);
    FUN_01bab630(&NCJBDBGIPNF_TypeInfo);
    FUN_01bab630(&StringLiteral_20422/*"raid_text_limits"*/);
    FUN_01bab630(&StringLiteral_20424/*"raid_warningtext_latin"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_20421/*"raid_text_input"*/);
    FUN_01bab630(&StringLiteral_17797/*"dlgLoginButton"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a76 = 1;
  }
  __this = (NCJBDBGIPNF_o *)thunk_FUN_01bda818(NCJBDBGIPNF_TypeInfo);
  NCJBDBGIPNF___ctor(__this,(MethodInfo *)0x0);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar9 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar9 = *(long *)(lVar5 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01b81620();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  uVar3 = StringLiteral_20421/*"raid_text_input"*/;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar10 = pIVar4->klass;
    uVar15 = **(undefined8 **)(lVar5 + 0xb8);
    uVar2._0_1_ = (pIVar10->_2).rank;
    uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar6 = pIVar10->vtable + (*piVar12 + 0xc);
          goto LAB_03633da4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03633da4:
    pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar3,uVar15,pVVar6->method);
    if (__this != (NCJBDBGIPNF_o *)0x0) {
      (__this->fields).FDLJAOACNIP = pSVar7;
      thunk_FUN_01c20e04();
      (__this->fields).EEABODJFJMN = StringLiteral_17797/*"dlgLoginButton"*/;
      thunk_FUN_01c20e04();
      (__this->fields).PJKGDJHIDFA = StringLiteral_3640/*"CANCEL"*/;
      thunk_FUN_01c20e04();
      ppSVar13 = &(__this->fields).JBHBKEOFPPA;
      *ppSVar13 = StringLiteral_1/*""*/;
      thunk_FUN_01c20e04(ppSVar13);
      pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).GCDPLFELIBF;
      pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      if (pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (pSVar14,pIVar4,StringLiteral_20424/*"raid_warningtext_latin"*/,
                   Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_set_Item__
                  );
        pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).MLPDIICEKIO;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        if (pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object,_object>__set_Item
                    (pSVar14,pIVar4,StringLiteral_20424/*"raid_warningtext_latin"*/,
                     Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_set_Item__
                    );
          pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields).MLPDIICEKIO;
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
          System_Func<object,_bool>___ctor();
          if (pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (pSVar14,pIVar4,StringLiteral_20422/*"raid_text_limits"*/,
                       Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_set_Item__
                      );
            pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).MLPDIICEKIO;
            pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
            System_Func<object,_bool>___ctor();
            if (pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar14,pIVar4,StringLiteral_20422/*"raid_text_limits"*/,
                         Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_set_Item__
                        );
              pNVar8 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)
                       GCIFMNHADDF__ACDDKABEBAP(0x46,(Il2CppObject *)__this,(MethodInfo *)0x0);
              if (pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0) {
                bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo->_2).naturalAligment;
                if ((pNVar8->klass->_2).naturalAligment < bVar1) {
                  pNVar8 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
                }
                else if ((pNVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                         (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo) {
                  pNVar8 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
                }
              }
              return pNVar8;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog FNJFGJPELJK()  [RVA 0x3533F98]
// JJPNLEPEAFM$$FNJFGJPELJK @ RVA 0x3533F98

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__FNJFGJPELJK(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  if ((DAT_04568a77 & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_ENOBJGKJMFC<RaidLeaguesDialog>__);
    DAT_04568a77 = 1;
  }
  GCIFMNHADDF__ENOBJGKJMFC<object>(Method_GCIFMNHADDF_ENOBJGKJMFC<RaidLeaguesDialog>__);
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0xb4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static void ONJPOCDFDGK(GOLIJCLCCBA BHHMMBFKGGN)  [RVA 0x3533FE8]
// JJPNLEPEAFM$$ONJPOCDFDGK @ RVA 0x3533FE8

void JJPNLEPEAFM__ONJPOCDFDGK(GOLIJCLCCBA_o *BHHMMBFKGGN,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *exists;
  undefined8 uVar2;
  UnityEngine_Object_c *pUVar3;
  
  if ((DAT_04568a78 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<WebViewDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_13934/*"Try to open WebViewDialog while other is opened! Close existing dialog..."*/);
    DAT_04568a78 = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    exists = (UnityEngine_Object_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<WebViewDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_13934/*"Try to open WebViewDialog while other is opened! Close existing dialog..."*/,(MethodInfo *)0x0);
      if (exists == (UnityEngine_Object_o *)0x0) goto LAB_036340e0;
      pUVar3 = exists->klass;
      uVar2._0_4_ = pUVar3[1]._2.static_fields_size;
      uVar2._4_4_ = pUVar3[1]._2.thread_static_fields_size;
      (**(code **)&pUVar3[1]._2.element_size)(exists,uVar2);
    }
    GCIFMNHADDF__ACDDKABEBAP(0x186,(Il2CppObject *)BHHMMBFKGGN,(MethodInfo *)0x0);
    return;
  }
LAB_036340e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog KDKDACICNNM()  [RVA 0x35340E4]
// JJPNLEPEAFM$$KDKDACICNNM @ RVA 0x35340E4

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__KDKDACICNNM(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0x6e,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== private static BaseDialog OJEGBDGIKGH(HKMLPEALIII ACCIHBHMFPN, string PCPECHHMLEC, string EHNFGMGKCHO, string KCFLBKINDFM, string KHPLLCKLJKO, Action<object> IELDNEAAPBE, LabelButton.MANJLBPDELA ACLFJCOLFMD, LabelButton.MANJLBPDELA LGJADIDEGHK, bool AJJPMOMMIGJ, bool NNKNJCADLGF, string IDGIFNHOBPI, bool HEMMOCPADNA, bool MDOBBHMPIHP, bool GFLIJBOMEKO, bool PFIAGDGJCJG)  [RVA 0x35336B0]
// JJPNLEPEAFM$$OJEGBDGIKGH @ RVA 0x35336B0

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__OJEGBDGIKGH
          (int32_t ACCIHBHMFPN,System_String_o *PCPECHHMLEC,System_String_o *EHNFGMGKCHO,
          System_String_o *KCFLBKINDFM,System_String_o *KHPLLCKLJKO,
          System_Action_object__o *IELDNEAAPBE,int32_t ACLFJCOLFMD,int32_t LGJADIDEGHK,
          bool AJJPMOMMIGJ,bool NNKNJCADLGF,System_String_o *IDGIFNHOBPI,bool HEMMOCPADNA,
          bool MDOBBHMPIHP,bool GFLIJBOMEKO,bool PFIAGDGJCJG,MethodInfo *method)

{
  bool bVar1;
  LKEEMMPKJKK_o *__this;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_00;
  int32_t DNBBBGEENMM;
  
  if ((DAT_04568a79 & 1) == 0) {
    FUN_01bab630(&LKEEMMPKJKK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_04568a79 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KCFLBKINDFM,(MethodInfo *)0x0);
  if ((bVar1) || (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KHPLLCKLJKO,(MethodInfo *)0x0), bVar1)) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KCFLBKINDFM,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KHPLLCKLJKO,(MethodInfo *)0x0);
      DNBBBGEENMM = 0;
      if (!bVar1) {
        DNBBBGEENMM = 2;
      }
    }
    else {
      DNBBBGEENMM = 1;
    }
  }
  else {
    DNBBBGEENMM = 3;
  }
  __this = (LKEEMMPKJKK_o *)thunk_FUN_01bda818(LKEEMMPKJKK_TypeInfo);
  LKEEMMPKJKK___ctor(__this,PCPECHHMLEC,EHNFGMGKCHO,DNBBBGEENMM,KCFLBKINDFM,KHPLLCKLJKO,ACLFJCOLFMD,
                     LGJADIDEGHK,AJJPMOMMIGJ,NNKNJCADLGF,IDGIFNHOBPI,IELDNEAAPBE,(MethodInfo *)0x0);
  if (__this == (LKEEMMPKJKK_o *)0x0) {
LAB_03633854:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this->fields).DFMACEOAJOC = HEMMOCPADNA;
  (__this->fields).DMGKDKHHFCE = MDOBBHMPIHP;
  (__this->fields).CHKHLNEMKJC = GFLIJBOMEKO;
  (__this->fields).CKMCCGLPKJB = PFIAGDGJCJG;
  __this_00 = GCIFMNHADDF__ACDDKABEBAP(ACCIHBHMFPN,(Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IELDNEAAPBE != (System_Action_object__o *)0x0) {
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03633854;
    Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,0,
               (System_Action_T__o *)IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
  }
  return __this_00;
}


// ===== public static BaseDialog EGDMDPJIGPO(Action CGLKNMPIAJF, int JAAOHJPCHMO = -1)  [RVA 0x35340F4]
// JJPNLEPEAFM$$EGDMDPJIGPO @ RVA 0x35340F4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__EGDMDPJIGPO(System_Action_o *CGLKNMPIAJF,int32_t JAAOHJPCHMO,MethodInfo *method)

{
  ONDBPECEKAJ_o *__this;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  if ((DAT_04568a7a & 1) == 0) {
    FUN_01bab630(&ONDBPECEKAJ_TypeInfo);
    FUN_01bab630(&StringLiteral_17789/*"dlgExitFightTitle"*/);
    FUN_01bab630(&StringLiteral_17788/*"dlgExitFightMessage"*/);
    DAT_04568a7a = 1;
  }
  __this = (ONDBPECEKAJ_o *)thunk_FUN_01bda818(ONDBPECEKAJ_TypeInfo);
                    /* try { // try from 03634164 to 0373434b has its CatchHandler @ 03634164
                       catch() { ... } // from try @ 03634164 with catch @ 03634164
                       catch() { ... } // from try @ 03634450 with catch @ 03634164
                       catch() { ... } // from try @ 036344e0 with catch @ 03634164
                       catch() { ... } // from try @ 036344e8 with catch @ 03634164
                       catch() { ... } // from try @ 036345a0 with catch @ 03634164 */
  ONDBPECEKAJ___ctor(__this,StringLiteral_17789/*"dlgExitFightTitle"*/,StringLiteral_17788/*"dlgExitFightMessage"*/,false,CGLKNMPIAJF,JAAOHJPCHMO,
                     (MethodInfo *)0x0);
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0x28,(Il2CppObject *)__this,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static BaseDialog PPOADIDOBLD(ADDCOJMHMHE BHHMMBFKGGN)  [RVA 0x35341A4]
// JJPNLEPEAFM$$PPOADIDOBLD @ RVA 0x35341A4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__PPOADIDOBLD(ADDCOJMHMHE_o *BHHMMBFKGGN,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  MethodInfo *method_00;
  ADDCOJMHMHE_o AStack_a0;
  
  method_00 = (MethodInfo *)0x90;
  memcpy(&AStack_a0,BHHMMBFKGGN,0x90);
  pNVar1 = JJPNLEPEAFM__BAPFMKGFGHG(&AStack_a0,0x17c,method_00);
  return pNVar1;
}


// ===== public static void JHMPDKFFLPN(TradeDialog.KEHKALMFNHN CPECAEHDDDB, CAKCKIAJAFO CJNHFNHJHPE, long FMAMNKBINOG, Action<object> IELDNEAAPBE, long OHLGEMOFODG = 0, string LFKENPEPPAL, bool AJJPMOMMIGJ = False)  [RVA 0x35341D4]
// JJPNLEPEAFM$$JHMPDKFFLPN @ RVA 0x35341D4

void JJPNLEPEAFM__JHMPDKFFLPN
               (int32_t CPECAEHDDDB,int32_t CJNHFNHJHPE,int64_t FMAMNKBINOG,
               System_Action_object__o *IELDNEAAPBE,int64_t OHLGEMOFODG,System_String_o *LFKENPEPPAL
               ,bool AJJPMOMMIGJ,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *x;
  System_String_o *message;
  KIDHEMFNDEK_o *__this_00;
  
  if ((DAT_04568a7b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<TradeDialog>__);
    FUN_01bab630(&KIDHEMFNDEK_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_StackTraceUtility_TypeInfo);
    FUN_01bab630(&StringLiteral_13933/*"Try to open TradeDialog duplicate"*/);
    DAT_04568a7b = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this == (GCIFMNHADDF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  x = (UnityEngine_Object_o *)
      GCIFMNHADDF__BFJGHKKGOJC<object>(__this,Method_GCIFMNHADDF_BFJGHKKGOJC<TradeDialog>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_13933/*"Try to open TradeDialog duplicate"*/,(MethodInfo *)0x0);
    if ((UnityEngine_StackTraceUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    message = UnityEngine_StackTraceUtility__ExtractStackTrace((MethodInfo *)0x0);
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0363434c to 03734373 has its CatchHandler @ 03634504 */
    MGNPHCAAEIO__EBPPLEEDNPD(false,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (KIDHEMFNDEK_o *)thunk_FUN_01bda818(KIDHEMFNDEK_TypeInfo);
                    /* try { // try from 03634384 to 03734393 has its CatchHandler @ 0363450c */
  KIDHEMFNDEK___ctor(__this_00,CPECAEHDDDB,CJNHFNHJHPE,FMAMNKBINOG,IELDNEAAPBE,OHLGEMOFODG,
                     LFKENPEPPAL,AJJPMOMMIGJ,(MethodInfo *)0x0);
                    /* try { // try from 036343a0 to 037343a7 has its CatchHandler @ 03634500 */
  GCIFMNHADDF__ACDDKABEBAP(0x15e,(Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// ===== public static BaseDialog FOMGGGJEKEA(JMDPBFOCHHP.ENBCJNLAHAC LMMIEAICFHL, JMDPBFOCHHP.ENBCJNLAHAC EAFJFDILLHK, Action<object> IELDNEAAPBE, string IJBAFPCLAGN = "", string NBEADFFAJCJ = "", bool KBIPPAEJHLH = False, int GOGLDMHCGHD = 1, int LDMAENFPGHA = 2, string GJOBHDLPEHH, string IDLCEMOBHIB, LabelButton.MANJLBPDELA HDBFCOGLJII = 1, LabelButton.MANJLBPDELA IHHLPNCOEOB = 1, bool OCBFFECAJFG = False)  [RVA 0x35343B4]
// JJPNLEPEAFM$$FOMGGGJEKEA @ RVA 0x35343B4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__FOMGGGJEKEA
          (JMDPBFOCHHP_ENBCJNLAHAC_o *LMMIEAICFHL,JMDPBFOCHHP_ENBCJNLAHAC_o *EAFJFDILLHK,
          System_Action_object__o *IELDNEAAPBE,System_String_o *IJBAFPCLAGN,
          System_String_o *NBEADFFAJCJ,bool KBIPPAEJHLH,int32_t GOGLDMHCGHD,int32_t LDMAENFPGHA,
          System_String_o *GJOBHDLPEHH,System_String_o *IDLCEMOBHIB,int32_t HDBFCOGLJII,
          int32_t IHHLPNCOEOB,bool OCBFFECAJFG,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  FKLIOKJBFCI_o *__this;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  System_String_o *message;
  
                    /* try { // try from 036343d8 to 0373440f has its CatchHandler @ 03634510 */
  if ((DAT_04568a7c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03634418 to 0373442f has its CatchHandler @ 03634508 */
    FUN_01bab630(&FKLIOKJBFCI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03634430 to 0373443f has its CatchHandler @ 036344fc */
    FUN_01bab630(&StringLiteral_15428/*"[BaseDialog.OpenProbabilityDialog] RaidItemPack '"*/);
    FUN_01bab630(&StringLiteral_840/*"' not found, return null"*/);
                    /* try { // try from 03634448 to 0373444f has its CatchHandler @ 036344f8 */
    DAT_04568a7c = 1;
  }
  if (LMMIEAICFHL == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036343d8 with catch @ 03634510
                        */
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IJBAFPCLAGN,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 03634528 to 0373452b has its CatchHandler @ 03634538 */
                    /* catch() { ... } // from try @ 03634528 with catch @ 03634538 */
      return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IJBAFPCLAGN,(MethodInfo *)0x0);
    LMMIEAICFHL = (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0;
    if (!bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    /* try { // try from 03634578 to 0373459f has its CatchHandler @ 036345b4 */
      if (pJVar2 == (JMDPBFOCHHP_o *)0x0) goto LAB_036345e8;
      LMMIEAICFHL = JMDPBFOCHHP__DIFLKMKBENA(pJVar2,IJBAFPCLAGN,false,(MethodInfo *)0x0);
      if (LMMIEAICFHL == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* try { // try from 036345a0 to 037345ab has its CatchHandler @ 03634164 */
                    /* try { // try from 036345ac to 037345b3 has its CatchHandler @ 036345b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03634578 with catch @ 036345b4
                       catch(type#2 @ 00000000) { ... } // from try @ 036345ac with catch @ 036345b4
                        */
        message = System_String__Concat
                            (StringLiteral_15428/*"[BaseDialog.OpenProbabilityDialog] RaidItemPack '"*/,IJBAFPCLAGN,StringLiteral_840/*"' not found, return null"*/,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
        return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
  }
                    /* try { // try from 03634450 to 037344db has its CatchHandler @ 03634164 */
  if ((EAFJFDILLHK == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) &&
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(NBEADFFAJCJ,(MethodInfo *)0x0), !bVar1)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar2 == (JMDPBFOCHHP_o *)0x0) {
LAB_036345e8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    EAFJFDILLHK = JMDPBFOCHHP__DIFLKMKBENA(pJVar2,NBEADFFAJCJ,false,(MethodInfo *)0x0);
  }
  __this = (FKLIOKJBFCI_o *)thunk_FUN_01bda818(FKLIOKJBFCI_TypeInfo);
                    /* try { // try from 036344dc to 037344df has its CatchHandler @ 036344f4 */
                    /* try { // try from 036344e0 to 037344e3 has its CatchHandler @ 03634164 */
  FKLIOKJBFCI___ctor(__this,LMMIEAICFHL,EAFJFDILLHK,IELDNEAAPBE,KBIPPAEJHLH,GOGLDMHCGHD,LDMAENFPGHA,
                     GJOBHDLPEHH,IDLCEMOBHIB,HDBFCOGLJII,IHHLPNCOEOB,OCBFFECAJFG,(MethodInfo *)0x0);
                    /* try { // try from 036344e4 to 037344e7 has its CatchHandler @ 036344f0 */
                    /* try { // try from 036344e8 to 03734527 has its CatchHandler @ 03634164 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036344e4 with catch @ 036344f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036344dc with catch @ 036344f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03634448 with catch @ 036344f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03634430 with catch @ 036344fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036343a0 with catch @ 03634500
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363434c with catch @ 03634504
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03634418 with catch @ 03634508
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03634384 with catch @ 0363450c
                        */
  pNVar3 = GCIFMNHADDF__ACDDKABEBAP(0xa0,(Il2CppObject *)__this,(MethodInfo *)0x0);
  return pNVar3;
}


// ===== public static BaseDialog OCOOMCMIGJL(object HBHPFKJMGCK)  [RVA 0x35345EC]
// JJPNLEPEAFM$$OCOOMCMIGJL @ RVA 0x35345EC

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__OCOOMCMIGJL(Il2CppObject *HBHPFKJMGCK,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *exists;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  undefined8 uVar3;
  UnityEngine_Object_c *pUVar4;
  
  if ((DAT_04568a7d & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<CreateClanRaidDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a7d = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    exists = (UnityEngine_Object_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<CreateClanRaidDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if (bVar1) {
      if (exists == (UnityEngine_Object_o *)0x0) goto LAB_036346b8;
      pUVar4 = exists->klass;
      uVar3._0_4_ = pUVar4[1]._2.static_fields_size;
      uVar3._4_4_ = pUVar4[1]._2.thread_static_fields_size;
      (**(code **)&pUVar4[1]._2.element_size)(exists,uVar3);
    }
    pNVar2 = GCIFMNHADDF__ACDDKABEBAP(0xf0,HBHPFKJMGCK,(MethodInfo *)0x0);
    KFCFGKEHPNK__EECLBEHBHFI(4,(MethodInfo *)0x0);
    return pNVar2;
  }
LAB_036346b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog LKDGKEJFPLL(NLFLMJPNOLF NLOFDAJCIML)  [RVA 0x35346BC]
// JJPNLEPEAFM$$LKDGKEJFPLL @ RVA 0x35346BC

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__LKDGKEJFPLL(NLFLMJPNOLF_o *NLOFDAJCIML,MethodInfo *method)

{
  int32_t iVar1;
  NDPMLPGANCI_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  
  pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar2 != (NDPMLPGANCI_o *)0x0) {
    iVar1 = NDPMLPGANCI__FFIOCEOHPEM(pNVar2,(MethodInfo *)0x0);
    if (iVar1 != 5) {
      pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar2 == (NDPMLPGANCI_o *)0x0) goto LAB_03634718;
      NDPMLPGANCI__EKPAFDJIAGI
                (pNVar2,5,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,(MethodInfo *)0x0)
      ;
    }
    pNVar3 = GCIFMNHADDF__ACDDKABEBAP(0x104,(Il2CppObject *)NLOFDAJCIML,(MethodInfo *)0x0);
    return pNVar3;
  }
LAB_03634718:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DOEMOKNGHNI()  [RVA 0x353471C]
// JJPNLEPEAFM$$DOEMOKNGHNI @ RVA 0x353471C

void JJPNLEPEAFM__DOEMOKNGHNI(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  ACHLOMELAJE_o *pAVar3;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  NBLEEDEAPHB_o *__this;
  System_Action_object__o **ppSVar5;
  NBLEEDEAPHB_array *pNVar6;
  System_String_o *NJLKBEHCEKD;
  System_String_o *JEHFOBHMGJM;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if ((DAT_04568a7e & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_JJPNLEPEAFM_<>c_MHJDNNHFNAK__);
    FUN_01bab630(&JJPNLEPEAFM_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_15922/*"_Avatar_Assistant_1"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_16043/*"_Title_Assistant"*/);
    FUN_01bab630(&StringLiteral_17766/*"dlgBuyButton"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_17806/*"dlgNotEnoughRubyMessage"*/);
    DAT_04568a7e = 1;
  }
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
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
     (pMVar4 = ACHLOMELAJE__HKIEGNBOFCD(pAVar3,StringLiteral_15922/*"_Avatar_Assistant_1"*/,0,(MethodInfo *)0x0),
     pMVar4 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0)) {
    NJLKBEHCEKD = (pMVar4->fields).JAICMIMBIOA;
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
       (pMVar4 = ACHLOMELAJE__HKIEGNBOFCD(pAVar3,StringLiteral_16043/*"_Title_Assistant"*/,0,(MethodInfo *)0x0),
       pMVar4 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0)) {
      JEHFOBHMGJM = (pMVar4->fields).JAICMIMBIOA;
      IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                 Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
      __this = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
      NBLEEDEAPHB___ctor(__this,StringLiteral_17806/*"dlgNotEnoughRubyMessage"*/,StringLiteral_17766/*"dlgBuyButton"*/,StringLiteral_1/*""*/,
                         StringLiteral_1/*""*/,0,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,
                         (AMJMGFCCAKN_o *)0x0,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
      if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
        pNVar6 = (IJIPABLCAKE->fields)._items;
        (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
        if (pNVar6 != (NBLEEDEAPHB_array *)0x0) {
          uVar1 = (IJIPABLCAKE->fields)._size;
          if (uVar1 < (uint)pNVar6->max_length) {
            (IJIPABLCAKE->fields)._size = uVar1 + 1;
            pNVar6->m_Items[(int)uVar1] = __this;
            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,__this);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                       (Il2CppObject *)__this,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          IELDNEAAPBE = JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__61_0;
          if (IELDNEAAPBE == (System_Action_object__o *)0x0) {
            if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            IELDNEAAPBE = (System_Action_object__o *)
                          thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar5 = &JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__61_0;
            *ppSVar5 = IELDNEAAPBE;
            thunk_FUN_01c20e04(ppSVar5,IELDNEAAPBE);
          }
          JJPNLEPEAFM__NBABCABBABL
                    (NJLKBEHCEKD,JEHFOBHMGJM,IJIPABLCAKE,(IGNEHHMICKB_o *)0x0,IELDNEAAPBE,
                     StringLiteral_3640/*"CANCEL"*/,true,StringLiteral_1/*""*/,2,0,true,false,0.0,
                     in_stack_ffffffffffffffa0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void HMCOHIKNIJP()  [RVA 0x3534CB8]
// JJPNLEPEAFM$$HMCOHIKNIJP @ RVA 0x3534CB8

void JJPNLEPEAFM__HMCOHIKNIJP(MethodInfo *method)

{
  bool_conflict bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  Il2CppObject *item;
  bool bVar5;
  bool bVar6;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *x;
  GCPFDLNAFDF_o *pGVar7;
  Il2CppMethodPointer *ppIVar8;
  long lVar9;
  System_Collections_Generic_List_BCGLDKLKKDA__o *GGBBGNMJIEI;
  int64_t iVar10;
  NLPJLHOEAOE_o *__this_00;
  JOAIBHHONIM_o *__this_01;
  GCPFDLNAFDF_c *pGVar11;
  BCGLDKLKKDA_array *pBVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568a7f & 1) == 0) {
    FUN_01bab630(&Method_DOCLKKFHECI<BCGLDKLKKDA>_DOOBINMKNBI__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_get_Current__);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<NewsDialog>__);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&JOAIBHHONIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a7f = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (MGNPHCAAEIO_TypeInfo->static_fields->CMLIPHOGOFB == false) {
    return;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    x = (UnityEngine_Object_o *)
        GCIFMNHADDF__BFJGHKKGOJC<object>(__this,Method_GCIFMNHADDF_BFJGHKKGOJC<NewsDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      return;
    }
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar7 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
    if (pGVar7 != (GCPFDLNAFDF_o *)0x0) {
      pGVar11 = pGVar7->klass;
      uVar2._0_1_ = (pGVar11->_2).rank;
      uVar2._1_1_ = (pGVar11->_2).minimumAlignment;
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
        piVar14 = &((pGVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
            ppIVar8 = &pGVar11->vtable[*piVar14 + 3].methodPtr;
            goto LAB_03634ea4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      ppIVar8 = (Il2CppMethodPointer *)FUN_01b81914(pGVar7,HFHIKPAKJFG_TypeInfo,3);
LAB_03634ea4:
      lVar9 = (**ppIVar8)(pGVar7,(MethodInfo *)ppIVar8[1]);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x30) != 0)) {
        if (*(int *)(*(long *)(lVar9 + 0x30) + 0x18) == 0) {
          return;
        }
        GGBBGNMJIEI = (System_Collections_Generic_List_BCGLDKLKKDA__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)GGBBGNMJIEI,
                   Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pGVar7 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
        if (pGVar7 != (GCPFDLNAFDF_o *)0x0) {
          pGVar11 = pGVar7->klass;
          uVar3._0_1_ = (pGVar11->_2).rank;
          uVar3._1_1_ = (pGVar11->_2).minimumAlignment;
          uVar13 = (ulong)uVar3;
          if (uVar13 != 0) {
            piVar14 = &((pGVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                  (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
                ppIVar8 = &pGVar11->vtable[*piVar14 + 3].methodPtr;
                goto LAB_03634f58;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          ppIVar8 = (Il2CppMethodPointer *)FUN_01b81914(pGVar7,HFHIKPAKJFG_TypeInfo,3);
LAB_03634f58:
          lVar9 = (**ppIVar8)(pGVar7,(MethodInfo *)ppIVar8[1]);
          if ((lVar9 != 0) &&
             (*(System_Collections_Generic_List_object__o **)(lVar9 + 0x30) !=
              (System_Collections_Generic_List_object__o *)0x0)) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,*(System_Collections_Generic_List_object__o **)(lVar9 + 0x30),
                       Method_System_Collections_Generic_List<BCGLDKLKKDA>_GetEnumerator__);
            local_70.fields._index = local_88.fields._index;
            local_70.fields._version = local_88.fields._version;
            local_70.fields._list = local_88.fields._list;
            local_70.fields._current = local_88.fields._current;
            while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_70,
                                      Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_MoveNext__
                                     ), item = local_70.fields._current, bVar5) {
              if ((BCGLDKLKKDA_o *)local_70.fields._current == (BCGLDKLKKDA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              lVar9 = ((BCGLDKLKKDA_Fields *)((long)local_70.fields._current + 0x10))->
                      _IFCCMDEDADL_k__BackingField;
              if (lVar9 < 0) {
                bVar5 = true;
              }
              else {
                if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                iVar10 = MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
                bVar5 = iVar10 < lVar9;
              }
              bVar1 = ((BCGLDKLKKDA_Fields *)((long)item + 0x10))->_ANIPFJHPNNA_k__BackingField;
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
              if (__this_00 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar6 = NLPJLHOEAOE__DGKCKLENNLI
                                (__this_00,
                                 ((BCGLDKLKKDA_Fields *)((long)item + 0x10))->
                                 _FJCAMFHOJBB_k__BackingField,(MethodInfo *)0x0);
              if ((bVar6 & bVar5 & (bVar1 ^ 0xffU) &
                  (((BCGLDKLKKDA_Fields *)((long)item + 0x10))->super).GCEEKJNKHLE) != 0) {
                ((BCGLDKLKKDA_Fields *)((long)item + 0x10))->_ANIPFJHPNNA_k__BackingField = true;
                lVar9 = Method_System_Collections_Generic_List<BCGLDKLKKDA>_Add__;
                if (GGBBGNMJIEI == (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pBVar12 = (GGBBGNMJIEI->fields)._items;
                (GGBBGNMJIEI->fields)._version = (GGBBGNMJIEI->fields)._version + 1;
                if (pBVar12 == (BCGLDKLKKDA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar4 = (GGBBGNMJIEI->fields)._size;
                if (uVar4 < (uint)pBVar12->max_length) {
                  (GGBBGNMJIEI->fields)._size = uVar4 + 1;
                  pBVar12->m_Items[(int)uVar4] = (BCGLDKLKKDA_o *)item;
                  thunk_FUN_01c20e04(pBVar12->m_Items + (int)uVar4,item);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)GGBBGNMJIEI,item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_Dispose__);
            if (GGBBGNMJIEI != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
              if ((GGBBGNMJIEI->fields)._size == 0) {
                return;
              }
              __this_01 = (JOAIBHHONIM_o *)thunk_FUN_01bda818(JOAIBHHONIM_TypeInfo);
              JOAIBHHONIM___ctor(__this_01,GGBBGNMJIEI,(MethodInfo *)0x0);
              GCIFMNHADDF__ACDDKABEBAP(0x96,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
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


// ===== public static BaseDialog NBABCABBABL(string NJLKBEHCEKD, string JEHFOBHMGJM, List<NBLEEDEAPHB> IJIPABLCAKE, IGNEHHMICKB EFGJLFEICDO, Action<object> IELDNEAAPBE, string JFFIPGDMEHA = "CANCEL", bool LNKNCDCHHPE = False, string GBCJJKIDHGI = "", LabelButton.MANJLBPDELA KFPEGGLEHFO = 1, LabelButton.MANJLBPDELA IPNMMMGEAOA = 0, bool PCKPENDCPGA = True, bool KONDEAJMKCK = False, float INEHHHBAHGP = 0)  [RVA 0x3534A90]
// JJPNLEPEAFM$$NBABCABBABL @ RVA 0x3534A90

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__NBABCABBABL
          (System_String_o *NJLKBEHCEKD,System_String_o *JEHFOBHMGJM,
          System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE,IGNEHHMICKB_o *EFGJLFEICDO,
          System_Action_object__o *IELDNEAAPBE,System_String_o *JFFIPGDMEHA,bool LNKNCDCHHPE,
          System_String_o *GBCJJKIDHGI,int32_t KFPEGGLEHFO,int32_t IPNMMMGEAOA,bool PCKPENDCPGA,
          bool KONDEAJMKCK,float INEHHHBAHGP,MethodInfo *method)

{
  NBLEEDEAPHB_o *__this;
  Il2CppObject *pIVar1;
  KNJPDILMPDG_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  undefined8 uVar3;
  int iVar4;
  int index;
  undefined4 local_64;
  
  if ((DAT_04568a80 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&KNJPDILMPDG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    DAT_04568a80 = 1;
  }
  if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    iVar4 = (IJIPABLCAKE->fields)._size;
    if (0 < iVar4) {
      index = 0;
      do {
        __this = (NBLEEDEAPHB_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,index,
                            Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
        if (__this == (NBLEEDEAPHB_o *)0x0) goto LAB_03634cb4;
        NBLEEDEAPHB__ONNMMOCEJNN(__this,(MethodInfo *)0x0);
        iVar4 = (IJIPABLCAKE->fields)._size;
        index = index + 1;
      } while (index < iVar4);
    }
    if (0 < iVar4) {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,0,
                          Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
      if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03634cb4;
      if (*(char *)&pIVar1[6].klass != '\0') {
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,0,
                            Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
        if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03634cb4;
        if ((long)pIVar1[5].monitor < 1) {
          if (IELDNEAAPBE != (System_Action_object__o *)0x0) {
            pIVar1 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,0,
                                Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
            if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03634cb4;
            local_64 = *(undefined4 *)&pIVar1[5].klass;
            uVar3 = thunk_FUN_01bda448(int_TypeInfo,&local_64);
            (*(code *)(IELDNEAAPBE->fields).super.super.invoke_impl)
                      ((IELDNEAAPBE->fields).super.super.method_code,uVar3,
                       (IELDNEAAPBE->fields).super.super.method);
          }
          return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
        }
      }
    }
    __this_00 = (KNJPDILMPDG_o *)thunk_FUN_01bda818(KNJPDILMPDG_TypeInfo);
    KNJPDILMPDG___ctor(__this_00,NJLKBEHCEKD,JEHFOBHMGJM,IJIPABLCAKE,EFGJLFEICDO,IELDNEAAPBE,
                       GBCJJKIDHGI,JFFIPGDMEHA,LNKNCDCHHPE,KFPEGGLEHFO,IPNMMMGEAOA,PCKPENDCPGA,
                       KONDEAJMKCK,840.0,INEHHHBAHGP,(MethodInfo *)0x0);
    pNVar2 = GCIFMNHADDF__ACDDKABEBAP(0x118,(Il2CppObject *)__this_00,(MethodInfo *)0x0);
    return pNVar2;
  }
LAB_03634cb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog NFKLNBFKKLF(OHDDKGHEEPA AOMBONOOJFP)  [RVA 0x35351C8]
// JJPNLEPEAFM$$NFKLNBFKKLF @ RVA 0x35351C8

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__NFKLNBFKKLF(OHDDKGHEEPA_o *AOMBONOOJFP,MethodInfo *method)

{
  bool bVar1;
  int32_t OILECKFDMDB;
  CNLGMNIEGFG_o *pCVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  AJOGJBFNELI_o *__this;
  IKJOGLIBGJF_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar4;
  DNELIPCHKLK_o *pDVar5;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_04568a81 & 1) == 0) {
    FUN_01bab630(&IKJOGLIBGJF_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a81 = 1;
  }
  if (AOMBONOOJFP != (OHDDKGHEEPA_o *)0x0) {
    OILECKFDMDB = OHDDKGHEEPA__DCAKAGILMOF(AOMBONOOJFP,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    pCVar2 = MGNPHCAAEIO__MJDCGINJMOP(OILECKFDMDB,false,(MethodInfo *)0x0);
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (((pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
        (pPVar6 = (pNVar3->fields).QuestParameters, pPVar6 != (PKHMIGFEJCL_o *)0x0)) &&
       ((pPVar6->fields).OILECKFDMDB = OILECKFDMDB, pCVar2 != (CNLGMNIEGFG_o *)0x0)) {
      (pPVar6->fields).NMHCLFFOMJH = (pCVar2->fields).super.KOILJHHCIEE;
      thunk_FUN_01c20e04();
      pDVar5 = (pCVar2->fields).super.KOILJHHCIEE;
      if (pDVar5 != (DNELIPCHKLK_o *)0x0) {
        ppSVar7 = &(pPVar6->fields).EICOIEGEFAF;
        *ppSVar7 = (pDVar5->fields).GJFJPLHCBKJ;
        thunk_FUN_01c20e04(ppSVar7);
        pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar3,0x48,(MethodInfo *)0x0)
          ;
          if (bVar1) {
            pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
              Nekki_SF2_Core_Quests_QuestsManager__RunQuests(pNVar3,(MethodInfo *)0x0);
              return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
            }
          }
          else {
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
            if (__this != (AJOGJBFNELI_o *)0x0) {
              AJOGJBFNELI__ILNDICIHADK(__this,(MethodInfo *)0x0);
              __this_00 = (IKJOGLIBGJF_o *)thunk_FUN_01bda818(IKJOGLIBGJF_TypeInfo);
              IKJOGLIBGJF___ctor(__this_00,AOMBONOOJFP,(MethodInfo *)0x0);
              pNVar4 = GCIFMNHADDF__ACDDKABEBAP(0x78,(Il2CppObject *)__this_00,(MethodInfo *)0x0);
              return pNVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool PIAIOODGOCG()  [RVA 0x3535354]
// JJPNLEPEAFM$$PIAIOODGOCG @ RVA 0x3535354

bool JJPNLEPEAFM__PIAIOODGOCG(MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *exists;
  
  if ((DAT_04568a82 & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a82 = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    exists = (UnityEngine_Object_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog IOIEGGPLDMF(long ANGBPBINHBL, string BKJJFPJOCGP)  [RVA 0x35353D4]
// JJPNLEPEAFM$$IOIEGGPLDMF @ RVA 0x35353D4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__IOIEGGPLDMF(int64_t ANGBPBINHBL,System_String_o *BKJJFPJOCGP,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *EHNFGMGKCHO;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar6;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if ((DAT_04568a83 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_17796/*"dlgKicked"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a83 = 1;
  }
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = FUN_01bab718(string___TypeInfo,1);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(undefined8 *)(lVar4 + 0x20) = BKJJFPJOCGP;
    thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x20),BKJJFPJOCGP);
    uVar2 = StringLiteral_17796/*"dlgKicked"*/;
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar8 = pIVar3->klass;
      uVar1._0_1_ = (pIVar8->_2).rank;
      uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = pIVar8->vtable + (*piVar10 + 0xc);
            goto LAB_03635504;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03635504:
      EHNFGMGKCHO = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar2,lVar4,pVVar5->method);
      pNVar6 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
      if (pNVar6 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
        if (((pNVar6->fields).BDDIHIFJADE != false) && ((pNVar6->fields).JDNKKGPNHPB == 1)) {
          Nekki_SF2_GUI_Dialogs_NotificationsGame__CloseNotifications((MethodInfo *)0x0);
        }
        pNVar7 = JJPNLEPEAFM__OJEGBDGIKGH
                           (0x154,StringLiteral_17850/*"dlgWarning"*/,EHNFGMGKCHO,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/
                            ,(System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,false,
                            true,true,true,in_stack_ffffffffffffffc8);
        return pNVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void JHLIJCCIKHF()  [RVA 0x35355BC]
// JJPNLEPEAFM$$JHLIJCCIKHF @ RVA 0x35355BC

void JJPNLEPEAFM__JHLIJCCIKHF(MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if ((DAT_04568a84 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_JJPNLEPEAFM_MHEOEKBDLKN__);
    FUN_01bab630(&StringLiteral_19858/*"newVersionTitle"*/);
    FUN_01bab630(&StringLiteral_21953/*"versionCheckDialog"*/);
    FUN_01bab630(&StringLiteral_19859/*"newVersionUpdate"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a84 = 1;
  }
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  JJPNLEPEAFM__OJEGBDGIKGH
            (0x154,StringLiteral_19858/*"newVersionTitle"*/,StringLiteral_21953/*"versionCheckDialog"*/,StringLiteral_19859/*"newVersionUpdate"*/,StringLiteral_1/*""*/,
             IELDNEAAPBE,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
             in_stack_ffffffffffffffb8);
  return;
}


// ===== public static BaseDialog HMCOHIKNIJP(JOAIBHHONIM DKMMBMBMJBO)  [RVA 0x35351B8]
// JJPNLEPEAFM$$HMCOHIKNIJP @ RVA 0x35351B8

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__HMCOHIKNIJP(JOAIBHHONIM_o *DKMMBMBMJBO,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  
  pNVar1 = GCIFMNHADDF__ACDDKABEBAP(0x96,(Il2CppObject *)DKMMBMBMJBO,(MethodInfo *)0x0);
  return pNVar1;
}


// ===== public static BaseDialog NADELNKAKAL(ADDCOJMHMHE BHHMMBFKGGN)  [RVA 0x35356D4]
// JJPNLEPEAFM$$NADELNKAKAL @ RVA 0x35356D4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__NADELNKAKAL(ADDCOJMHMHE_o *BHHMMBFKGGN,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  MethodInfo *method_00;
  ADDCOJMHMHE_o AStack_a0;
  
  method_00 = (MethodInfo *)0x90;
  memcpy(&AStack_a0,BHHMMBFKGGN,0x90);
  pNVar1 = JJPNLEPEAFM__BAPFMKGFGHG(&AStack_a0,300,method_00);
  return pNVar1;
}


// ===== public static HHKELHDGPDO IIAPLAPOCGL(PLCCJCFAFKA HFGJCIPEMPO, HEFOANCOHDC EIKFGOCCOIE)  [RVA 0x35326B8]
// JJPNLEPEAFM$$IIAPLAPOCGL @ RVA 0x35326B8

HHKELHDGPDO_o *
JJPNLEPEAFM__IIAPLAPOCGL(PLCCJCFAFKA_o *HFGJCIPEMPO,HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  HOOAAGABMBL_o **ppHVar1;
  HOOAAGABMBL_o **ppHVar2;
  HOOAAGABMBL_o **ppHVar3;
  HOOAAGABMBL_o **ppHVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  int32_t iVar8;
  HHKELHDGPDO_o *__this;
  KBCOFHAJOCK_o *__this_00;
  FOKJBDHLIMG_o *__this_01;
  System_String_o *pSVar9;
  System_Collections_Generic_List_LGABIPDBOEP__o *pSVar10;
  Il2CppClass *pIVar11;
  DOPEEDABNEK_o *pDVar12;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568a85 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_get_Current__);
    FUN_01bab630(&HHKELHDGPDO_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGABIPDBOEP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGABIPDBOEP>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_04568a85 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = (HHKELHDGPDO_o *)thunk_FUN_01bda818(HHKELHDGPDO_TypeInfo);
  HHKELHDGPDO___ctor(__this,(MethodInfo *)0x0);
  if ((HFGJCIPEMPO == (PLCCJCFAFKA_o *)0x0) && (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0)) {
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
    pDVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if ((pDVar12 == (DOPEEDABNEK_o *)0x0) ||
       (__this_00 = (pDVar12->fields)._GMODBKFPHPN_k__BackingField,
       __this_00 == (KBCOFHAJOCK_o *)0x0)) goto LAB_03632b98;
    HFGJCIPEMPO = KBCOFHAJOCK__JHDDCDEENAK
                            (__this_00,(EIKFGOCCOIE->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
LAB_03632894:
    if (HFGJCIPEMPO == (PLCCJCFAFKA_o *)0x0) {
      return __this;
    }
  }
  else {
    if ((HFGJCIPEMPO == (PLCCJCFAFKA_o *)0x0) || (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0))
    goto LAB_03632894;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
    if (__this_01 == (FOKJBDHLIMG_o *)0x0) goto LAB_03632b98;
    EIKFGOCCOIE = FOKJBDHLIMG__JMMDGEOBMOC
                            (__this_01,(HFGJCIPEMPO->fields).HMIMGDGJDIC,(MethodInfo *)0x0);
  }
  if (EIKFGOCCOIE == (HEFOANCOHDC_o *)0x0) {
    return __this;
  }
  if (__this != (HHKELHDGPDO_o *)0x0) {
    (__this->fields).JIJLBFGKNJK = (HFGJCIPEMPO->fields).IKIINEOIIAK;
    thunk_FUN_01c20e04();
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar7 = MGNPHCAAEIO__DODJBGHCIHD(EIKFGOCCOIE,(MethodInfo *)0x0);
    lVar5 = 0x28;
    if (!bVar7) {
      lVar5 = 0x20;
    }
    (__this->fields).BPCADJLKKGA = *(System_String_o **)((long)&HFGJCIPEMPO->klass + lVar5);
    thunk_FUN_01c20e04();
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar9 = KKCBGIBKOCP__LFEHBAMJCMH(EIKFGOCCOIE,(MethodInfo *)0x0);
    (__this->fields).DHODPAHPFKN = pSVar9;
    thunk_FUN_01c20e04();
    (__this->fields).CKPABMMCGGJ = (EIKFGOCCOIE->fields).JMGIACHBIKG;
    thunk_FUN_01c20e04();
    pSVar10 = (HFGJCIPEMPO->fields).GFBNJPMOEKD;
    if (pSVar10 != (System_Collections_Generic_List_LGABIPDBOEP__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar10,
                 Method_System_Collections_Generic_List<LGABIPDBOEP>_GetEnumerator__);
      ppHVar1 = &(__this->fields).DLDBBBCMJOC;
      ppHVar2 = &(__this->fields).CFJEFNDGHIP;
      ppHVar3 = &(__this->fields).EIFDIMKJDMN;
      ppHVar4 = &(__this->fields).GNCBIPJFEGB;
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_MoveNext__
                               ), pIVar6 = local_80.fields._current, bVar7) {
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_80.fields._current[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar7 = System_String__op_Equality
                          (((local_80.fields._current[3].klass)->_1).this_arg.data,
                           StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
        pIVar11 = pIVar6[3].klass;
        if (bVar7) {
          *ppHVar4 = (HOOAAGABMBL_o *)pIVar11;
          thunk_FUN_01c20e04(ppHVar4);
          (__this->fields).AAKCIMHACFK = *(float *)&pIVar6[1].monitor;
        }
        else {
          if (pIVar11 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar7 = System_String__op_Equality
                            ((pIVar11->_1).this_arg.data,StringLiteral_3076/*"Armor"*/,(MethodInfo *)0x0);
          pIVar11 = pIVar6[3].klass;
          if (bVar7) {
            *ppHVar3 = (HOOAAGABMBL_o *)pIVar11;
            thunk_FUN_01c20e04(ppHVar3);
            (__this->fields).PJBDNBPBCGN = *(float *)&pIVar6[1].monitor;
          }
          else {
            if (pIVar11 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar7 = System_String__op_Equality
                              ((pIVar11->_1).this_arg.data,StringLiteral_7066/*"Helm"*/,(MethodInfo *)0x0);
            pIVar11 = pIVar6[3].klass;
            if (bVar7) {
              *ppHVar2 = (HOOAAGABMBL_o *)pIVar11;
              thunk_FUN_01c20e04(ppHVar2);
              (__this->fields).OLHBGKCMDNM = *(float *)&pIVar6[1].monitor;
            }
            else {
              if (pIVar11 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar7 = System_String__op_Equality
                                ((pIVar11->_1).this_arg.data,StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0);
              pIVar11 = pIVar6[3].klass;
              if (bVar7) {
                *ppHVar1 = (HOOAAGABMBL_o *)pIVar11;
                thunk_FUN_01c20e04(ppHVar1);
                (__this->fields).KGIBFODAFEG = *(float *)&pIVar6[1].monitor;
              }
              else {
                if (pIVar11 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar7 = System_String__op_Equality
                                  ((pIVar11->_1).this_arg.data,StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0)
                ;
                pIVar11 = pIVar6[3].klass;
                if (bVar7) {
                  (__this->fields).OGOPJDCOPDF = (HOOAAGABMBL_o *)pIVar11;
                  thunk_FUN_01c20e04();
                  (__this->fields).HAPHNIMNDLG = *(float *)&pIVar6[1].monitor;
                }
                else {
                  if (pIVar11 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  bVar7 = System_String__op_Equality
                                    ((pIVar11->_1).this_arg.data,StringLiteral_10823/*"RaidConsumable"*/,
                                     (MethodInfo *)0x0);
                  if (bVar7) {
                    if (pIVar6[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    bVar7 = System_String__op_Equality
                                      (*(System_String_o **)&((pIVar6[3].klass)->_1).this_arg.bits,
                                       StringLiteral_10806/*"RaidCharge"*/,(MethodInfo *)0x0);
                    if (bVar7) {
                      (__this->fields).LDOIPNNOLMG = (HOOAAGABMBL_o *)pIVar6[3].klass;
                      thunk_FUN_01c20e04();
                      (__this->fields).GIKMLNHLGFN = *(float *)&pIVar6[1].monitor;
                    }
                  }
                }
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<LGABIPDBOEP>_Dispose__)
      ;
      pSVar10 = (HFGJCIPEMPO->fields).GFBNJPMOEKD;
      if (pSVar10 != (System_Collections_Generic_List_LGABIPDBOEP__o *)0x0) {
        (__this->fields).ICMILHJGAAC = (pSVar10->fields)._size;
        iVar8 = PLCCJCFAFKA__NHIFHMJGBCP(HFGJCIPEMPO,(MethodInfo *)0x0);
        (__this->fields).OJHKNOGKBDF = iVar8;
        return __this;
      }
    }
  }
LAB_03632b98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog DDOCEEFBIGC(object HBHPFKJMGCK)  [RVA 0x3535704]
// JJPNLEPEAFM$$DDOCEEFBIGC @ RVA 0x3535704

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__DDOCEEFBIGC(Il2CppObject *HBHPFKJMGCK,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *exists;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  undefined8 uVar3;
  UnityEngine_Object_c *pUVar4;
  
  if ((DAT_04568a86 & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<FindClanDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a86 = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    exists = (UnityEngine_Object_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<FindClanDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
                    /* try { // try from 03635784 to 0373586f has its CatchHandler @ 03635784
                       catch() { ... } // from try @ 03635784 with catch @ 03635784
                       catch() { ... } // from try @ 036358cc with catch @ 03635784
                       catch() { ... } // from try @ 036358fc with catch @ 03635784
                       catch() { ... } // from try @ 03635904 with catch @ 03635784
                       catch() { ... } // from try @ 03635934 with catch @ 03635784
                       catch() { ... } // from try @ 03635974 with catch @ 03635784 */
    if (bVar1) {
      if (exists == (UnityEngine_Object_o *)0x0) goto LAB_036357b8;
      pUVar4 = exists->klass;
      uVar3._0_4_ = pUVar4[1]._2.static_fields_size;
      uVar3._4_4_ = pUVar4[1]._2.thread_static_fields_size;
      (**(code **)&pUVar4[1]._2.element_size)(exists,uVar3);
    }
    pNVar2 = GCIFMNHADDF__ACDDKABEBAP(0x3c,HBHPFKJMGCK,(MethodInfo *)0x0);
    return pNVar2;
  }
LAB_036357b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static BaseDialog BAPFMKGFGHG(ADDCOJMHMHE BHHMMBFKGGN, HKMLPEALIII CMPFDDMPDGN)  [RVA 0x3532368]
// JJPNLEPEAFM$$BAPFMKGFGHG @ RVA 0x3532368

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__BAPFMKGFGHG(ADDCOJMHMHE_o *BHHMMBFKGGN,int32_t CMPFDDMPDGN,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar3;
  NBLEEDEAPHB_o *__this;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar5;
  undefined8 uVar6;
  System_Action_object__o *pSVar7;
  int index;
  byte bVar8;
  undefined4 local_c0 [36];
  
  if ((DAT_04568a87 & 1) == 0) {
    FUN_01bab630(&ADDCOJMHMHE_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    DAT_04568a87 = 1;
  }
  pSVar3 = (BHHMMBFKGGN->fields).ACMGAPIMMJI;
  if (pSVar3 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    index = 0;
    bVar8 = 1;
    do {
      iVar1 = (pSVar3->fields)._size;
      if (iVar1 <= index) {
        if (iVar1 < 1) {
LAB_0363245c:
          if (bVar8 != 0 || ((BHHMMBFKGGN->fields).EFMOMJEJENC & 1U) == 0) {
            memcpy(local_c0,BHHMMBFKGGN,0x90);
            pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(ADDCOJMHMHE_TypeInfo,local_c0);
            pNVar5 = GCIFMNHADDF__ACDDKABEBAP(CMPFDDMPDGN,pIVar4,(MethodInfo *)0x0);
            return pNVar5;
          }
        }
        else {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,0,
                              Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) break;
          if (*(char *)&pIVar4[6].klass == '\0') goto LAB_0363245c;
          pSVar3 = (BHHMMBFKGGN->fields).ACMGAPIMMJI;
          if ((pSVar3 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) ||
             (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,0,
                                  Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__),
             pIVar4 == (Il2CppObject *)0x0)) break;
          if (0 < (long)pIVar4[5].monitor) goto LAB_0363245c;
        }
        if ((BHHMMBFKGGN->fields).LAALDDOEANK != (System_Action_object__o *)0x0) {
          pSVar3 = (BHHMMBFKGGN->fields).ACMGAPIMMJI;
          if ((pSVar3 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) ||
             (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,0,
                                  Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__),
             pIVar4 == (Il2CppObject *)0x0)) break;
          local_c0[0] = *(undefined4 *)&pIVar4[5].klass;
          pSVar7 = (BHHMMBFKGGN->fields).LAALDDOEANK;
          uVar6 = thunk_FUN_01bda448(int_TypeInfo,local_c0);
          if (pSVar7 == (System_Action_object__o *)0x0) break;
          (*(code *)(pSVar7->fields).super.super.invoke_impl)
                    ((pSVar7->fields).super.super.method_code,uVar6,
                     (pSVar7->fields).super.super.method);
        }
        return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
      __this = (NBLEEDEAPHB_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
      if (__this == (NBLEEDEAPHB_o *)0x0) break;
      bVar2 = NBLEEDEAPHB__ONNMMOCEJNN(__this,(MethodInfo *)0x0);
      pSVar3 = (BHHMMBFKGGN->fields).ACMGAPIMMJI;
      bVar8 = bVar8 & bVar2;
      index = index + 1;
    } while (pSVar3 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static RaidTopHundredDialog OHIKPLPOJBK()  [RVA 0x35357BC]
// JJPNLEPEAFM$$OHIKPLPOJBK @ RVA 0x35357BC

Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o * JJPNLEPEAFM__OHIKPLPOJBK(MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *pNVar2;
  
  if ((DAT_04568a88 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo);
    DAT_04568a88 = 1;
  }
  JJPNLEPEAFM__DAKAIKCCOKD(method);
  pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)
           GCIFMNHADDF__ACDDKABEBAP(0xbe,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo->_2).naturalAligment;
    if (((pNVar2->klass->_2).naturalAligment < bVar1) ||
       ((pNVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
  }
  return pNVar2;
}


// ===== public static void OMGIOGLBKCH(Action<object> CGLKNMPIAJF)  [RVA 0x3535838]
// JJPNLEPEAFM$$OMGIOGLBKCH @ RVA 0x3535838

void JJPNLEPEAFM__OMGIOGLBKCH(System_Action_object__o *CGLKNMPIAJF,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffb8;
  
                    /* try { // try from 03635870 to 03735877 has its CatchHandler @ 03635918 */
  if ((DAT_04568a89 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
                    /* try { // try from 03635888 to 03735893 has its CatchHandler @ 03635910 */
    FUN_01bab630(&StringLiteral_4600/*"ConnectionError"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 036358a4 to 037358af has its CatchHandler @ 0363590c */
    FUN_01bab630(&StringLiteral_17808/*"dlgNotNetworkTitle"*/);
    DAT_04568a89 = 1;
  }
                    /* try { // try from 036358bc to 037358cb has its CatchHandler @ 03635904 */
                    /* try { // try from 036358cc to 037358f3 has its CatchHandler @ 03635784 */
                    /* try { // try from 036358f4 to 037358f7 has its CatchHandler @ 03635914 */
  JJPNLEPEAFM__OJEGBDGIKGH
            (0x154,StringLiteral_17808/*"dlgNotNetworkTitle"*/,StringLiteral_4600/*"ConnectionError"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
             CGLKNMPIAJF,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
             in_stack_ffffffffffffffb8);
                    /* try { // try from 036358f8 to 037358fb has its CatchHandler @ 03635908 */
                    /* try { // try from 036358fc to 037358ff has its CatchHandler @ 03635784 */
                    /* try { // try from 03635900 to 03735903 has its CatchHandler @ 03635904 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036358bc with catch @ 03635904
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03635900 with catch @ 03635904
                       try { // try from 03635904 to 0373592f has its CatchHandler @ 03635784 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036358f8 with catch @ 03635908
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036358a4 with catch @ 0363590c
                        */
  return;
}


// ===== public static BaseDialog CPPNOJDGBOK()  [RVA 0x3535910]
// JJPNLEPEAFM$$CPPNOJDGBOK @ RVA 0x3535910

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__CPPNOJDGBOK(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  MethodInfo *in_stack_ffffffffffffffc8;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03635888 with catch @ 03635910
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036358f4 with catch @ 03635914
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03635870 with catch @ 03635918
                        */
                    /* try { // try from 03635930 to 03735933 has its CatchHandler @ 0363595c */
                    /* try { // try from 03635934 to 0373596b has its CatchHandler @ 03635784 */
  if ((DAT_04568a8a & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
                    /* catch() { ... } // from try @ 03635930 with catch @ 0363595c */
    FUN_01bab630(&StringLiteral_17805/*"dlgNotAvaliableTitle"*/);
                    /* try { // try from 0363596c to 03735973 has its CatchHandler @ 03635988 */
    FUN_01bab630(&StringLiteral_17804/*"dlgNotAvaliableMessage"*/);
                    /* try { // try from 03635974 to 0373597f has its CatchHandler @ 03635784 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 03635980 to 03735987 has its CatchHandler @ 03635988 */
    DAT_04568a8a = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0363596c with catch @ 03635988
                       catch(type#2 @ 00000000) { ... } // from try @ 03635980 with catch @ 03635988
                        */
  pNVar1 = JJPNLEPEAFM__OJEGBDGIKGH
                     (0x154,StringLiteral_17805/*"dlgNotAvaliableTitle"*/,StringLiteral_17804/*"dlgNotAvaliableMessage"*/,StringLiteral_9679/*"OK"*/,
                      StringLiteral_1/*""*/,(System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/
                      ,true,true,true,true,in_stack_ffffffffffffffc8);
  return pNVar1;
}


// ===== public static BaseDialog ENALHJGHEEN()  [RVA 0x35359DC]
// JJPNLEPEAFM$$ENALHJGHEEN @ RVA 0x35359DC

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__ENALHJGHEEN(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  
  if ((DAT_04568a8b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a8b = 1;
  }
  x = GCIFMNHADDF__ACDDKABEBAP(0xdc,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this,0x29,(MethodInfo *)0x0);
  }
  return x;
}

