// TypeDefIndex 1908
// Namespace: 
// public static class ILNFICAMFCI
// Fields:
//   public static readonly Dictionary<string, MAHLPIPJBFB> OOKCNDCNADD; // 0x0
//   private static bool DHKAODBNGNJ; // 0x8
//   private static string DDFEPOFGHGF; // 0x10
//   private static List<MGNDHCBAPEN<Canvas, bool>> JHMLNHOBABK; // 0x18
//   private static ILNFICAMFCI.HPFOFGOGDOI BNDFDNCBEFI; // 0x20

// ===== public static void GIENGNEGHPJ()  [RVA 0x325B70C]
// ILNFICAMFCI$$GIENGNEGHPJ @ RVA 0x325B70C

void ILNFICAMFCI__GIENGNEGHPJ(MethodInfo *method)

{
  bool bVar1;
  ILNFICAMFCI_c *method_00;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this;
  System_Action_KeyCode__o *CJNHFNHJHPE;
  System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o **ppSVar2;
  ILNFICAMFCI_StaticFields *pIVar3;
  
  if ((DAT_04567189 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    FUN_01bab630(&Method_ILNFICAMFCI_AEKEGMAOOHO__);
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_TypeInfo);
    DAT_04567189 = 1;
  }
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar3 = ILNFICAMFCI_TypeInfo->static_fields;
  if (pIVar3->DHKAODBNGNJ == false) {
    method_00 = ILNFICAMFCI_TypeInfo;
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (ILNFICAMFCI_c *)thunk_FUN_01ba7564();
      pIVar3 = ILNFICAMFCI_TypeInfo->static_fields;
    }
    pIVar3->DHKAODBNGNJ = true;
    bVar1 = ILNFICAMFCI__ABHJLMEPMBF((MethodInfo *)method_00);
    if (bVar1) {
      __this = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_KeyCode__o *)thunk_FUN_01bda818(System_Action<KeyCode>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (__this == (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_Core_InputControllers_KeyboardController__add_OnKeyDown
                (__this,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_TypeInfo
                                  );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>__ctor__);
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar2 = &ILNFICAMFCI_TypeInfo->static_fields->JHMLNHOBABK;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    ILNFICAMFCI_TypeInfo->static_fields->BNDFDNCBEFI = 1;
  }
  return;
}


// ===== private static void PEOFPPDIEEF()  [RVA 0x325B930]
// ILNFICAMFCI$$PEOFPPDIEEF @ RVA 0x325B930

void ILNFICAMFCI__PEOFPPDIEEF(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *pSVar5;
  System_Object_array *pSVar6;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar7;
  MGNDHCBAPEN_Canvas__bool__o *__this_00;
  ulong uVar8;
  ILNFICAMFCI_StaticFields *pIVar9;
  MGNDHCBAPEN_Canvas__bool__array *pMVar10;
  void *pvVar11;
  int32_t iVar12;
  Il2CppClass *pIVar13;
  UnityEngine_Component_o *__this_01;
  uint uVar14;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456718a & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<Canvas,_bool>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<Canvas,_bool>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<Canvas,_bool>>_get_Current__
                );
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_MGNDHCBAPEN<Canvas,_bool>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<Canvas,_bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_FindObjectsOfType<Canvas>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_17638/*"debug"*/);
    FUN_01bab630(&StringLiteral_17717/*"dialog"*/);
    FUN_01bab630(&StringLiteral_21617/*"tutorial"*/);
    DAT_0456718a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar9 = ILNFICAMFCI_TypeInfo->static_fields;
  if (pIVar9->JHMLNHOBABK == (System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *)0x0) {
    return;
  }
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pIVar9 = ILNFICAMFCI_TypeInfo->static_fields;
    iVar12 = pIVar9->BNDFDNCBEFI;
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pIVar9 = ILNFICAMFCI_TypeInfo->static_fields;
    }
  }
  else {
    iVar12 = pIVar9->BNDFDNCBEFI;
  }
  pSVar5 = pIVar9->JHMLNHOBABK;
  if (pSVar5 == (System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *)0x0) {
LAB_0335bda4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (iVar12 == 0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar5,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<Canvas,_bool>>_MoveNext__
                             ), pIVar3 = local_80.fields._current, bVar4) {
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar13 = local_80.fields._current[1].klass;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar13,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar4) {
        pIVar13 = pIVar3[1].klass;
        if (pIVar13 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pvVar11 = (pIVar13->_1).image;
        uVar8 = (**(code **)((long)pvVar11 + 0x138))
                          (pIVar13,0,*(undefined8 *)((long)pvVar11 + 0x140));
        if ((uVar8 & 1) == 0) {
          if (pIVar3[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)pIVar3[1].klass,*(bool *)&pIVar3[1].monitor,
                     (MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<Canvas,_bool>>_Dispose__
              );
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar9 = ILNFICAMFCI_TypeInfo->static_fields;
    pSVar5 = pIVar9->JHMLNHOBABK;
    if (pSVar5 == (System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *)0x0)
    goto LAB_0335bda4;
    iVar12 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (iVar12 < 1) {
      iVar12 = 1;
      goto LAB_0335bd78;
    }
    System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar12,(MethodInfo *)0x0);
    iVar12 = 1;
  }
  else {
    iVar12 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < iVar12) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar12,(MethodInfo *)0x0);
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = UnityEngine_Object__FindObjectsOfType<object>
                       (Method_UnityEngine_Object_FindObjectsOfType<Canvas>__);
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_0335bda4;
    uVar1 = (uint)pSVar6->max_length;
    if (0 < (int)uVar1) {
      uVar14 = 0;
      do {
        if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        __this_01 = (UnityEngine_Component_o *)pSVar6->m_Items[(int)uVar14];
        if ((((__this_01 == (UnityEngine_Component_o *)0x0) ||
             (__this = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0),
             __this == (UnityEngine_Object_o *)0x0)) ||
            (pSVar7 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0),
            pSVar7 == (System_String_o *)0x0)) ||
           (pSVar7 = System_String__ToLower(pSVar7,(MethodInfo *)0x0),
           pSVar7 == (System_String_o *)0x0)) goto LAB_0335bda4;
        bVar4 = System_String__Contains(pSVar7,StringLiteral_17638/*"debug"*/,(MethodInfo *)0x0);
        if (((!bVar4) &&
            (bVar4 = System_String__Contains(pSVar7,StringLiteral_17717/*"dialog"*/,(MethodInfo *)0x0), !bVar4))
           && (bVar4 = System_String__Contains(pSVar7,StringLiteral_21617/*"tutorial"*/,(MethodInfo *)0x0), !bVar4
              )) {
          if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar5 = ILNFICAMFCI_TypeInfo->static_fields->JHMLNHOBABK;
          bVar4 = UnityEngine_Behaviour__get_enabled
                            ((UnityEngine_Behaviour_o *)__this_01,(MethodInfo *)0x0);
          __this_00 = (MGNDHCBAPEN_Canvas__bool__o *)
                      thunk_FUN_01bda818(MGNDHCBAPEN<Canvas,_bool>_TypeInfo);
          MGNDHCBAPEN<object,_bool>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)__this_00,(Il2CppObject *)__this_01,bVar4,
                     Method_MGNDHCBAPEN<Canvas,_bool>__ctor__);
          lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_Add__;
          if (pSVar5 == (System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *)0x0)
          goto LAB_0335bda4;
          pMVar10 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pMVar10 == (MGNDHCBAPEN_Canvas__bool__array *)0x0) goto LAB_0335bda4;
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pMVar10->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pMVar10->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pMVar10->m_Items + (int)uVar1,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)__this_01,false,(MethodInfo *)0x0);
        }
        uVar1 = (uint)pSVar6->max_length;
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar1);
    }
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar12 = 0;
  }
  pIVar9 = ILNFICAMFCI_TypeInfo->static_fields;
LAB_0335bd78:
  pIVar9->BNDFDNCBEFI = iVar12;
  return;
}


// ===== public static void CLNAOMIIBLH()  [RVA 0x325BE48]
// ILNFICAMFCI$$CLNAOMIIBLH @ RVA 0x325BE48

void ILNFICAMFCI__CLNAOMIIBLH(MethodInfo *method)

{
  bool bVar1;
  ILNFICAMFCI_c *method_00;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this;
  System_Action_KeyCode__o *CJNHFNHJHPE;
  
  if ((DAT_0456718b & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    FUN_01bab630(&Method_ILNFICAMFCI_AEKEGMAOOHO__);
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    DAT_0456718b = 1;
  }
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (ILNFICAMFCI_TypeInfo->static_fields->DHKAODBNGNJ != false) {
    method_00 = ILNFICAMFCI_TypeInfo;
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (ILNFICAMFCI_c *)thunk_FUN_01ba7564();
    }
    bVar1 = ILNFICAMFCI__ABHJLMEPMBF((MethodInfo *)method_00);
    if ((bVar1) &&
       (bVar1 = Nekki_SF2_Core_InputControllers_KeyboardController__get_IsInited((MethodInfo *)0x0),
       bVar1)) {
      __this = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_KeyCode__o *)thunk_FUN_01bda818(System_Action<KeyCode>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (__this == (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_Core_InputControllers_KeyboardController__remove_OnKeyDown
                (__this,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ILNFICAMFCI_TypeInfo->static_fields->DHKAODBNGNJ = false;
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x325BF4C]
// ILNFICAMFCI$$.cctor @ RVA 0x325BF4C

void ILNFICAMFCI___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__MAHLPIPJBFB__o *__this;
  
  if ((DAT_0456718c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_TypeInfo);
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    FUN_01bab630(&StringLiteral_16766/*"botgodmode"*/);
    FUN_01bab630(&StringLiteral_19571/*"magic"*/);
    FUN_01bab630(&StringLiteral_17995/*"emagic"*/);
    FUN_01bab630(&StringLiteral_16925/*"canvas"*/);
    FUN_01bab630(&StringLiteral_19521/*"loseround"*/);
    FUN_01bab630(&StringLiteral_20229/*"playergodmode"*/);
    DAT_0456718c = 1;
  }
  __this = (System_Collections_Generic_Dictionary_string__MAHLPIPJBFB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_Int32Enum>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>__ctor__);
  if (__this != (System_Collections_Generic_Dictionary_string__MAHLPIPJBFB__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_19571/*"magic"*/,
               0x12,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_19521/*"loseround"*/,6
               ,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_20229/*"playergodmode"*/,
               0x17,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_16766/*"botgodmode"*/,
               0x18,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_16925/*"canvas"*/,
               0x19,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,StringLiteral_17995/*"emagic"*/,
               0x13,Method_System_Collections_Generic_Dictionary<string,_MAHLPIPJBFB>_Add__);
    ILNFICAMFCI_TypeInfo->static_fields->OOKCNDCNADD = __this;
    thunk_FUN_01c20e04(ILNFICAMFCI_TypeInfo->static_fields,__this);
    ILNFICAMFCI_TypeInfo->static_fields->BNDFDNCBEFI = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool DLBGAPAPJHA(MAHLPIPJBFB KIJGFOBMEMN)  [RVA 0x325C114]
// ILNFICAMFCI$$DLBGAPAPJHA @ RVA 0x325C114

bool ILNFICAMFCI__DLBGAPAPJHA(int32_t KIJGFOBMEMN,MethodInfo *method)

{
  bool bVar1;
  ILNFICAMFCI_c *pIVar2;
  System_String_o **ppSVar3;
  Camera_o *__this;
  MovesInFightVariables_o *__this_00;
  MethodInfo *extraout_x1;
  bool CLKNKKAIMLF;
  ModelAi_o *pNVar4;
  Tactic_o *pCVar5;
  Model_o *pOVar6;
  ModelParameters_o *pPVar7;
  Fight_o *__this_01;
  System_String_o *pSVar8;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar9;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar10;
  Nekki_SF2_GUI_Fight_ScreenModel_o *__this_02;
  
  if ((DAT_0456718d & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_12871/*"Test"*/);
    DAT_0456718d = 1;
    method = extraout_x1;
  }
  pIVar2 = ILNFICAMFCI_TypeInfo;
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    pIVar2 = (ILNFICAMFCI_c *)thunk_FUN_01ba7564(ILNFICAMFCI_TypeInfo,method);
  }
  bVar1 = ILNFICAMFCI__ABHJLMEPMBF((MethodInfo *)pIVar2);
  if (!bVar1) {
    return false;
  }
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (ILNFICAMFCI_TypeInfo->static_fields->DHKAODBNGNJ == false) {
    return false;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_01 == (Fight_o *)0x0) goto LAB_0335c5a4;
  if (((KIJGFOBMEMN & 0xfffffffdU) != 1) && ((__this_01->fields).PEELENPNLHJ != 2)) {
    if (KIJGFOBMEMN != 0x19) {
      return false;
    }
switchD_0335c284_caseD_19:
    pIVar2 = ILNFICAMFCI_TypeInfo;
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      pIVar2 = (ILNFICAMFCI_c *)thunk_FUN_01ba7564();
    }
    ILNFICAMFCI__PEOFPPDIEEF((MethodInfo *)pIVar2);
    return true;
  }
  switch(KIJGFOBMEMN) {
  case 1:
    (__this_01->fields).MDJMIPGAJLL = (bool_conflict)((__this_01->fields).MDJMIPGAJLL ^ 1);
    break;
  case 2:
    (__this_01->fields).IIOMDDLGPIK = (bool_conflict)((__this_01->fields).IIOMDDLGPIK ^ 1);
    break;
  case 3:
    if ((__this_01->fields).MDJMIPGAJLL != false) {
      Fight__BDHAMOEKNNK(__this_01,(MethodInfo *)0x0);
    }
    break;
  case 4:
    Fight__GLOJOHKGALF(__this_01,false,false,(MethodInfo *)0x0);
    break;
  case 5:
    CLKNKKAIMLF = true;
    bVar1 = false;
    goto LAB_0335c310;
  case 6:
    bVar1 = true;
    CLKNKKAIMLF = false;
    goto LAB_0335c310;
  case 7:
    bVar1 = true;
    CLKNKKAIMLF = true;
LAB_0335c310:
    Fight__GLOJOHKGALF(__this_01,bVar1,CLKNKKAIMLF,(MethodInfo *)0x0);
    return true;
  case 9:
    Fight__MHKENGKHDKD(__this_01,(System_Nullable_float__o)0x0,(MethodInfo *)0x0);
    break;
  case 10:
    Fight__GHJKEOGGFBM(__this_01,(MethodInfo *)0x0);
    break;
  case 0xc:
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (ILNFICAMFCI_TypeInfo->static_fields->DDFEPOFGHGF,(MethodInfo *)0x0);
    pOVar6 = (__this_01->fields).CLEKIBBCAOJ;
    if (bVar1) {
      if (((pOVar6 != (Model_o *)0x0) &&
          (pNVar4 = (pOVar6->fields).ADGFKAPOIFN, pNVar4 != (ModelAi_o *)0x0)) &&
         (pCVar5 = (pNVar4->fields)._MPABEMCEHCL_k__BackingField, pCVar5 != (Tactic_o *)0x0)) {
        pSVar8 = (pCVar5->fields).DEKCPPOJFEH;
        if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        ppSVar3 = &ILNFICAMFCI_TypeInfo->static_fields->DDFEPOFGHGF;
        *ppSVar3 = pSVar8;
        thunk_FUN_01c20e04(ppSVar3,pSVar8);
        pOVar6 = (__this_01->fields).CLEKIBBCAOJ;
        if (pOVar6 != (Model_o *)0x0) {
          Model__CIBLINMCKDK(pOVar6,StringLiteral_12871/*"Test"*/,(MethodInfo *)0x0);
          return true;
        }
      }
    }
    else {
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pOVar6 != (Model_o *)0x0) {
                    /* try { // try from 0335c574 to 0345c763 has its CatchHandler @ 0335c574
                       catch() { ... } // from try @ 0335c574 with catch @ 0335c574
                       catch() { ... } // from try @ 0335c89c with catch @ 0335c574
                       catch() { ... } // from try @ 0335c940 with catch @ 0335c574
                       catch() { ... } // from try @ 0335c948 with catch @ 0335c574
                       catch() { ... } // from try @ 0335c9f8 with catch @ 0335c574 */
        Model__CIBLINMCKDK
                  (pOVar6,ILNFICAMFCI_TypeInfo->static_fields->DDFEPOFGHGF,(MethodInfo *)0x0);
        ILNFICAMFCI_TypeInfo->static_fields->DDFEPOFGHGF = string_TypeInfo->static_fields->Empty;
        thunk_FUN_01c20e04();
        return true;
      }
    }
    goto LAB_0335c5a4;
  case 0xd:
    Fight__MLPOHGPKKJJ(__this_01,(__this_01->fields).GDAKDNGDIKJ == false,(MethodInfo *)0x0);
    break;
  case 0xe:
    __this = (__this_01->fields).FAJCMHDLBEJ;
    if (__this == (Camera_o *)0x0) goto LAB_0335c5a4;
    Camera__EDOKJKEOIGD(__this,(MethodInfo *)0x0);
    break;
  case 0x12:
    pOVar6 = (__this_01->fields).LAMENNMGPBN;
    if (pOVar6 != (Model_o *)0x0) {
      Model__EHHDKBLFKAE(pOVar6,1,(MethodInfo *)0x0);
      pOVar6 = (__this_01->fields).LAMENNMGPBN;
      if (pOVar6 != (Model_o *)0x0) {
        Model__JPFGODGJKNP(pOVar6,(MethodInfo *)0x0);
        __this_00 = (__this_01->fields).POEGCOJFMDB;
        if (__this_00 != (MovesInFightVariables_o *)0x0) {
          MovesInFightVariables__CFEOMJALMBB
                    (__this_00,(__this_01->fields).LAMENNMGPBN,8,true,(NJPBBPOABKP_o *)0x0,
                     (MethodInfo *)0x0);
          return true;
        }
      }
    }
    goto LAB_0335c5a4;
  case 0x14:
    pOVar6 = (__this_01->fields).LAMENNMGPBN;
    if (pOVar6 == (Model_o *)0x0) goto LAB_0335c5a4;
    Model__HONGCGHLNDJ(pOVar6,(MethodInfo *)0x0);
    break;
  case 0x15:
    pNVar9 = (__this_01->fields).HIBPKNAIPLH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar9 = (__this_01->fields).HIBPKNAIPLH;
      if (pNVar9 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_0335c5a4;
      pNVar10 = (pNVar9->fields).FLKPJPEAJAJ;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      __this_02 = (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0;
      if (bVar1) {
        pNVar9 = (__this_01->fields).HIBPKNAIPLH;
        if ((pNVar9 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) ||
           (pNVar10 = (pNVar9->fields).FLKPJPEAJAJ,
           pNVar10 == (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0)) goto LAB_0335c5a4;
        __this_02 = (pNVar10->fields).leftModel;
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if (__this_02 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_0335c5a4;
        Nekki_SF2_GUI_Fight_ScreenModel__IncreaseStyleByValue(__this_02,1.0,(MethodInfo *)0x0);
      }
    }
    break;
  case 0x16:
    pOVar6 = (__this_01->fields).CLEKIBBCAOJ;
    if (pOVar6 == (Model_o *)0x0) goto LAB_0335c5a4;
    (pOVar6->fields)._DDFDFOGDLAL_k__BackingField =
         (bool_conflict)((pOVar6->fields)._DDFDFOGDLAL_k__BackingField ^ 1);
    break;
  case 0x17:
    pOVar6 = (__this_01->fields).LAMENNMGPBN;
    goto joined_r0x0335c534;
  case 0x18:
    pOVar6 = (__this_01->fields).CLEKIBBCAOJ;
joined_r0x0335c534:
    if ((pOVar6 == (Model_o *)0x0) ||
       (pPVar7 = (pOVar6->fields).FAPMJJBOFEF, pPVar7 == (ModelParameters_o *)0x0)) {
LAB_0335c5a4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pPVar7->fields).HMDADENHOFD = (bool_conflict)((pPVar7->fields).HMDADENHOFD ^ 1);
    break;
  case 0x19:
    goto switchD_0335c284_caseD_19;
  }
  return true;
}


// ===== public static bool AAENFELBKDD()  [RVA 0x325C5A8]
// ILNFICAMFCI$$AAENFELBKDD @ RVA 0x325C5A8

bool ILNFICAMFCI__AAENFELBKDD(MethodInfo *method)

{
  if ((DAT_0456718e & 1) == 0) {
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    DAT_0456718e = 1;
  }
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return ILNFICAMFCI_TypeInfo->static_fields->DHKAODBNGNJ;
}


// ===== private static void AEKEGMAOOHO(KeyCode IKKKILCDMMB)  [RVA 0x325C600]
// ILNFICAMFCI$$AEKEGMAOOHO @ RVA 0x325C600

void ILNFICAMFCI__AEKEGMAOOHO(int32_t IKKKILCDMMB,MethodInfo *method)

{
  bool bVar1;
  int32_t KIJGFOBMEMN;
  ILNFICAMFCI_c *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *extraout_x1_08;
  MethodInfo *extraout_x1_09;
  MethodInfo *extraout_x1_10;
  MethodInfo *extraout_x1_11;
  MethodInfo *extraout_x1_12;
  MethodInfo *extraout_x1_13;
  MethodInfo *extraout_x1_14;
  MethodInfo *extraout_x1_15;
  MethodInfo *pMVar2;
  MethodInfo *extraout_x1_16;
  MethodInfo *extraout_x1_17;
  MethodInfo *extraout_x1_18;
  MethodInfo *extraout_x1_19;
  MethodInfo *extraout_x1_20;
  MethodInfo *extraout_x1_21;
  MethodInfo *extraout_x1_22;
  MethodInfo *extraout_x1_23;
  MethodInfo *extraout_x1_24;
  
  if ((DAT_0456718f & 1) == 0) {
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    DAT_0456718f = 1;
    method = extraout_x1;
  }
  method_00 = ILNFICAMFCI_TypeInfo;
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ILNFICAMFCI_c *)thunk_FUN_01ba7564(ILNFICAMFCI_TypeInfo,method);
  }
  bVar1 = ILNFICAMFCI__MEFMNHFAFGE((MethodInfo *)method_00);
  if (!bVar1) {
    return;
  }
  pMVar2 = extraout_x1_00;
  if (0x62 < IKKKILCDMMB) {
    switch(IKKKILCDMMB) {
    case 0x100:
switchD_0335c674_caseD_100:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_03;
      }
      KIJGFOBMEMN = 0x16;
      break;
    case 0x101:
switchD_0335c674_caseD_101:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_04;
      }
      KIJGFOBMEMN = 4;
      break;
    case 0x102:
switchD_0335c674_caseD_102:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_05;
      }
      KIJGFOBMEMN = 5;
      break;
    case 0x103:
switchD_0335c674_caseD_103:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_06;
      }
      KIJGFOBMEMN = 9;
      break;
    case 0x104:
switchD_0335c674_caseD_104:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_07;
      }
      KIJGFOBMEMN = 10;
      break;
    case 0x105:
switchD_0335c674_caseD_105:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_08;
      }
      KIJGFOBMEMN = 6;
      break;
    case 0x106:
switchD_0335c674_caseD_106:
                    /* try { // try from 0335c764 to 0345c78b has its CatchHandler @ 0335c95c */
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_09;
      }
      KIJGFOBMEMN = 7;
      break;
    case 0x107:
switchD_0335c674_caseD_107:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_10;
      }
      KIJGFOBMEMN = 0x12;
      break;
    case 0x108:
switchD_0335c674_caseD_108:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_11;
      }
      KIJGFOBMEMN = 0x14;
      break;
    case 0x109:
switchD_0335c674_caseD_109:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_12;
      }
      KIJGFOBMEMN = 0x15;
      break;
    case 0x10a:
    case 0x10b:
    case 0x10c:
    case 0x10d:
    case 0x10e:
    case 0x10f:
    case 0x110:
    case 0x111:
    case 0x112:
    case 0x114:
    case 0x115:
    case 0x117:
    case 0x118:
    case 0x119:
    case 0x11b:
    case 0x121:
    case 0x122:
switchD_0335c674_caseD_10a:
      return;
    case 0x113:
switchD_0335c674_caseD_113:
                    /* try { // try from 0335c7c0 to 0345c7eb has its CatchHandler @ 0335c958 */
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_13;
      }
      KIJGFOBMEMN = 3;
      break;
    case 0x116:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_01;
      }
      KIJGFOBMEMN = 0x19;
      break;
    case 0x11a:
                    /* try { // try from 0335c828 to 0345c89b has its CatchHandler @ 0335c964 */
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_16;
      }
      KIJGFOBMEMN = 0xd;
      break;
    case 0x11c:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_17;
      }
      KIJGFOBMEMN = 0xb;
      break;
    case 0x11d:
switchD_0335c674_caseD_11d:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_02;
      }
      KIJGFOBMEMN = 1;
      break;
    case 0x11e:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_18;
      }
      KIJGFOBMEMN = 2;
      break;
    case 0x11f:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_19;
      }
      KIJGFOBMEMN = 0x17;
      break;
    case 0x120:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_20;
      }
      KIJGFOBMEMN = 0x18;
                    /* try { // try from 0335c89c to 0345c92f has its CatchHandler @ 0335c574 */
      break;
    case 0x123:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_21;
      }
      KIJGFOBMEMN = 0x11;
      break;
    case 0x124:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_22;
      }
      KIJGFOBMEMN = 0xe;
      break;
    case 0x125:
      if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_23;
      }
      KIJGFOBMEMN = 0xc;
      break;
    default:
      if (IKKKILCDMMB == 0x6d) {
        if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar2 = extraout_x1_24;
        }
        KIJGFOBMEMN = 8;
      }
      else {
        if (IKKKILCDMMB != 0x75) {
          return;
        }
        if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar2 = extraout_x1_15;
        }
        KIJGFOBMEMN = 0x10;
      }
    }
LAB_0335c8fc:
    ILNFICAMFCI__DLBGAPAPJHA(KIJGFOBMEMN,pMVar2);
    return;
  }
  switch(IKKKILCDMMB) {
  case 0x2d:
    goto switchD_0335c674_caseD_11d;
  case 0x2e:
  case 0x2f:
  case 0x3a:
  case 0x3b:
  case 0x3c:
    goto switchD_0335c674_caseD_10a;
  case 0x30:
    goto switchD_0335c674_caseD_100;
  case 0x31:
    goto switchD_0335c674_caseD_101;
  case 0x32:
    goto switchD_0335c674_caseD_102;
  case 0x33:
    goto switchD_0335c674_caseD_103;
  case 0x34:
    goto switchD_0335c674_caseD_104;
  case 0x35:
    goto switchD_0335c674_caseD_105;
  case 0x36:
    goto switchD_0335c674_caseD_106;
  case 0x37:
    goto switchD_0335c674_caseD_107;
  case 0x38:
    goto switchD_0335c674_caseD_108;
  case 0x39:
    goto switchD_0335c674_caseD_109;
  case 0x3d:
    goto switchD_0335c674_caseD_113;
  default:
    if (IKKKILCDMMB != 0x62) {
      return;
    }
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar2 = extraout_x1_14;
    }
    KIJGFOBMEMN = 0xf;
    goto LAB_0335c8fc;
  }
}


// ===== private static bool ABHJLMEPMBF()  [RVA 0x325B868]
// ILNFICAMFCI$$ABHJLMEPMBF @ RVA 0x325B868

bool ILNFICAMFCI__ABHJLMEPMBF(MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567190 & 1) == 0) {
    FUN_01bab630(&AHHELIMMIED_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04567190 = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = EOAOCPLIKOI__HKLIPCEAINH((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if ((AHHELIMMIED_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04567209 == '\0') {
      FUN_01bab630(&AHHELIMMIED_TypeInfo);
      DAT_04567209 = '\x01';
    }
    if ((AHHELIMMIED_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = AHHELIMMIED_TypeInfo->static_fields->_NKCCFJEBFAN_k__BackingField != false;
  }
  return bVar1;
}


// ===== private static bool MEFMNHFAFGE()  [RVA 0x325C908]
// ILNFICAMFCI$$MEFMNHFAFGE @ RVA 0x325C908

bool ILNFICAMFCI__MEFMNHFAFGE(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_o *pNVar2;
  
  if ((DAT_04567191 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
                    /* try { // try from 0335c930 to 0345c937 has its CatchHandler @ 0335c954 */
                    /* try { // try from 0335c938 to 0345c93f has its CatchHandler @ 0335c960 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0335c940 to 0345c943 has its CatchHandler @ 0335c574 */
    DAT_04567191 = 1;
  }
                    /* try { // try from 0335c944 to 0345c947 has its CatchHandler @ 0335c950 */
                    /* try { // try from 0335c948 to 0345c973 has its CatchHandler @ 0335c574 */
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c944 with catch @ 0335c950
                        */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c930 with catch @ 0335c954
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c7c0 with catch @ 0335c958
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c764 with catch @ 0335c95c
                        */
  if (DAT_0456720a == '\0') {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c938 with catch @ 0335c960
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335c828 with catch @ 0335c964
                        */
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_0456720a = '\x01';
  }
                    /* try { // try from 0335c974 to 0345c977 has its CatchHandler @ 0335c988 */
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0335c974 with catch @ 0335c988 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0335c990 to 0345c9f7 has its CatchHandler @ 0335ca0c */
  pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
           _JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_0456720a == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
      DAT_0456720a = '\x01';
    }
                    /* try { // try from 0335c9f8 to 0345ca03 has its CatchHandler @ 0335c574 */
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 0335ca04 to 0345ca0b has its CatchHandler @ 0335ca0c */
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0335c990 with catch @ 0335ca0c
                       catch(type#2 @ 00000000) { ... } // from try @ 0335ca04 with catch @ 0335ca0c
                        */
    pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
             _JPNBHEPPPNP_k__BackingField;
    if (pNVar2 == (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(pNVar2,(MethodInfo *)0x0);
    bVar1 = !bVar1;
  }
  return bVar1;
}

