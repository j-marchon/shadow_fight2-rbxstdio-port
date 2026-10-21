// TypeDefIndex 3291
// Namespace: 
// public static class JLEKKANADII
// Fields:
//   private static Action<int, string, ODLJFAIHELG> JCDGMAEDFIF; // 0x0
//   private static Dictionary<int, string> BJFJBJFACFM; // 0x8
//   private static List<InputDevice> HPIJFIJFOPH; // 0x10

// ===== private static void ICCLMLBDKHJ(InputDevice GIDJIIFPHJK)  [RVA 0x351CEDC]
// JLEKKANADII$$ICCLMLBDKHJ @ RVA 0x351CEDC

void JLEKKANADII__ICCLMLBDKHJ(InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  int32_t key;
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_String_o *a;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361cdf0 with catch @ 0361cedc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361ced0 with catch @ 0361cee0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361cddc with catch @ 0361cee4
                        */
  if ((DAT_0456899b & 1) == 0) {
                    /* try { // try from 0361cefc to 0371ceff has its CatchHandler @ 0361cf28 */
                    /* try { // try from 0361cf00 to 0371cf37 has its CatchHandler @ 0361cc80 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_get_Item__);
                    /* catch() { ... } // from try @ 0361cefc with catch @ 0361cf28 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
                    /* try { // try from 0361cf38 to 0371cf3f has its CatchHandler @ 0361cf54 */
    DAT_0456899b = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0361cf40 to 0371cf4b has its CatchHandler @ 0361cc80 */
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0361cf4c to 0371cf53 has its CatchHandler @ 0361cf54 */
    thunk_FUN_01ba7564(JLEKKANADII_TypeInfo,method);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0361cf38 with catch @ 0361cf54
                       catch(type#2 @ 00000000) { ... } // from try @ 0361cf4c with catch @ 0361cf54
                        */
  if ((GIDJIIFPHJK != (InControl_InputDevice_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               JLEKKANADII_TypeInfo->static_fields->BJFJBJFACFM,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,(GIDJIIFPHJK->fields).SortOrder,
                       Method_System_Collections_Generic_Dictionary<int,_string>_ContainsKey__);
    if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(JLEKKANADII_TypeInfo);
    }
    key = (GIDJIIFPHJK->fields).SortOrder;
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             JLEKKANADII_TypeInfo->static_fields->BJFJBJFACFM;
    if (bVar1) {
      if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        a = (System_String_o *)
            System_Collections_Generic_Dictionary<int,_object>__get_Item
                      (pSVar2,key,
                       Method_System_Collections_Generic_Dictionary<int,_string>_get_Item__);
        bVar1 = System_String__op_Inequality
                          (a,(GIDJIIFPHJK->fields)._Name_k__BackingField,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 JLEKKANADII_TypeInfo->static_fields->BJFJBJFACFM;
        if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary<int,_object>__set_Item
                    (pSVar2,(GIDJIIFPHJK->fields).SortOrder,
                     (Il2CppObject *)(GIDJIIFPHJK->fields)._Name_k__BackingField,
                     Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
          JLEKKANADII__HNJCEIGCIGM(GIDJIIFPHJK,method_00);
          return;
        }
      }
    }
    else if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      FUN_03f936b0(&PTR_StringLiteral_17724/*"didReceiveConversionDataWithError"*/_04208000,pSVar2,key,
                   (GIDJIIFPHJK->fields)._Name_k__BackingField);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void GDNHMIHKKEG()  [RVA 0x351D160]
// JLEKKANADII$$GDNHMIHKKEG @ RVA 0x351D160

void JLEKKANADII__GDNHMIHKKEG(MethodInfo *method)

{
  int32_t iVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t CGLFKKMBHCN;
  PBAKFOBIHEG_o *pPVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *in_x3;
  PBAKFOBIHEG_c *pPVar8;
  System_Collections_Generic_List_InputDevice__o *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_String_o *LOAHEPDBFAO;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456899c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDevice>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDevice>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDevice>_get_Current__);
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456899c = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
  if (pSVar9 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    if (0 < (pSVar9->fields)._size) {
      if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pSVar9 = JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
        if (pSVar9 == (System_Collections_Generic_List_InputDevice__o *)0x0) goto LAB_0361d3e4;
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)pSVar9,
                 Method_System_Collections_Generic_List<InputDevice>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_List_Enumerator<InputDevice>_MoveNext__
                               ), pIVar3 = local_70.fields._current, bVar4) {
        pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
        if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar1 = *(int32_t *)&pIVar3[1].klass;
        LOAHEPDBFAO = pIVar3[1].monitor;
        if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CGLFKKMBHCN = HintSchemeUtility__OFIKNKILDCH(LOAHEPDBFAO,(MethodInfo *)0x0);
        if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = JLEKKANADII__FHNMIDFEBOJ(iVar1,LOAHEPDBFAO,CGLFKKMBHCN,in_x3);
        if (pPVar5 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pPVar8 = pPVar5->klass;
        uVar2._0_1_ = (pPVar8->_2).rank;
        uVar2._1_1_ = (pPVar8->_2).minimumAlignment;
        uVar10 = (ulong)uVar2;
        if (uVar10 != 0) {
          piVar11 = &((pPVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar7 = pPVar8->vtable + *piVar11;
              goto LAB_0361d358;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,0);
LAB_0361d358:
        in_x3 = pVVar7->method;
        (*pVVar7->methodPtr)(pPVar5,pSVar6,1);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<InputDevice>_Dispose__)
      ;
      if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar9 = JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
      if (pSVar9 == (System_Collections_Generic_List_InputDevice__o *)0x0) goto LAB_0361d3e4;
      iVar1 = (pSVar9->fields)._size;
      (pSVar9->fields)._size = 0;
      (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
    }
    return;
  }
LAB_0361d3e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static IEnumerator FHNMIDFEBOJ(int BMPJIDHGCBN, string LOAHEPDBFAO, ODLJFAIHELG CGLFKKMBHCN)  [RVA 0x351D468]
// JLEKKANADII$$FHNMIDFEBOJ @ RVA 0x351D468

System_Collections_IEnumerator_o *
JLEKKANADII__FHNMIDFEBOJ
          (int32_t BMPJIDHGCBN,System_String_o *LOAHEPDBFAO,int32_t CGLFKKMBHCN,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_0456899d & 1) == 0) {
    FUN_01bab630(&JLEKKANADII_HFHJKBCIILG_TypeInfo);
    DAT_0456899d = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(JLEKKANADII_HFHJKBCIILG_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  *(int32_t *)&__this[2].klass = BMPJIDHGCBN;
  __this[2].monitor = LOAHEPDBFAO;
  thunk_FUN_01c20e04(&__this[2].monitor,LOAHEPDBFAO);
  *(int32_t *)&__this[3].klass = CGLFKKMBHCN;
  return (System_Collections_IEnumerator_o *)__this;
}


// ===== private static void FLOKKOHDLLG()  [RVA 0x351D514]
// JLEKKANADII$$FLOKKOHDLLG @ RVA 0x351D514

/* WARNING: Removing unreachable block (ram,0x0361d754) */

void JLEKKANADII__FLOKKOHDLLG(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar4;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this;
  System_Collections_Generic_IEnumerator_T__o *pSVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerator_T__c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_0456899e & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_GetEnumerator__
                );
    DAT_0456899e = 1;
  }
  pNVar4 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (pNVar4 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    if (DAT_0456647c == '\0') {
      FUN_01bab630(&InControl_InputManager_TypeInfo);
      DAT_0456647c = '\x01';
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = InControl_InputManager_TypeInfo->static_fields->Devices;
    if (__this != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
      pSVar5 = System_Collections_ObjectModel_ReadOnlyCollection<object>__GetEnumerator
                         ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this,
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_GetEnumerator__
                         );
      if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        pSVar7 = pSVar5->klass;
        uVar1._0_1_ = (pSVar7->_2).rank;
        uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar1;
        if (uVar8 != 0) {
          piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar6 = pSVar7->vtable + *piVar9;
              goto LAB_0361d64c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0)
        ;
LAB_0361d64c:
        uVar8 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
        if ((uVar8 & 1) == 0) goto LAB_0361d6d4;
        pSVar7 = pSVar5->klass;
        uVar2._0_1_ = (pSVar7->_2).rank;
        uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar2;
        if (uVar8 != 0) {
          piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo) {
              pVVar6 = pSVar7->vtable + *piVar9;
              goto LAB_0361d6a8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar6 = (VirtualInvokeData *)
                 FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo,0)
        ;
LAB_0361d6a8:
        auVar10 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
        method_00 = auVar10._8_8_;
        if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1;
        }
        JLEKKANADII__ICCLMLBDKHJ(auVar10._0_8_,method_00);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_0361d6d4:
  if (pSVar5 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
    pSVar7 = pSVar5->klass;
    uVar3._0_1_ = (pSVar7->_2).rank;
    uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar3;
    if (uVar8 != 0) {
      piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar6 = pSVar7->vtable + *piVar9;
          goto LAB_0361d728;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_IDisposable_TypeInfo,0);
LAB_0361d728:
    (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
  }
  return;
}


// ===== private static void HONKIIHKLOB(InputDevice GIDJIIFPHJK)  [RVA 0x351D800]
// JLEKKANADII$$HONKIIHKLOB @ RVA 0x351D800

void JLEKKANADII__HONKIIHKLOB(InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  JLEKKANADII_c *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456899f & 1) == 0) {
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_0456899f = 1;
    method = extraout_x1;
  }
  method_00 = JLEKKANADII_TypeInfo;
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (JLEKKANADII_c *)thunk_FUN_01ba7564(JLEKKANADII_TypeInfo,method);
  }
  JLEKKANADII__FLOKKOHDLLG((MethodInfo *)method_00);
  JLEKKANADII__GDNHMIHKKEG(method_01);
  return;
}


// ===== private static void .cctor()  [RVA 0x351D850]
// JLEKKANADII$$.cctor @ RVA 0x351D850

void JLEKKANADII___cctor(MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__o *pSVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_Dictionary_int__string__o **ppSVar2;
  System_Collections_Generic_List_InputDevice__o *__this_00;
  System_Collections_Generic_List_InputDevice__o **ppSVar3;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar4;
  COOJKPHHMCD_o *pCVar5;
  
  if ((DAT_045689a0 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
    FUN_01bab630(&Method_JLEKKANADII_HONKIIHKLOB__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InputDevice>_TypeInfo);
    FUN_01bab630(&Method_JLEKKANADII_<>c_AADKKMMKBMH__);
    FUN_01bab630(&JLEKKANADII_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_15488/*"[HintSchemeController]: inited!"*/);
    DAT_045689a0 = 1;
  }
  if ((JLEKKANADII_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Action_int__string__ODLJFAIHELG__o *)
           thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
  System_Action<int,_object,_Int32Enum>___ctor();
  JLEKKANADII_TypeInfo->static_fields->JCDGMAEDFIF = pSVar1;
  thunk_FUN_01c20e04(JLEKKANADII_TypeInfo->static_fields,pSVar1);
  __this = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
  ppSVar2 = &JLEKKANADII_TypeInfo->static_fields->BJFJBJFACFM;
  *ppSVar2 = (System_Collections_Generic_Dictionary_int__string__o *)__this;
  thunk_FUN_01c20e04(ppSVar2,__this);
  __this_00 = (System_Collections_Generic_List_InputDevice__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InputDevice>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InputDevice>__ctor__);
  ppSVar3 = &JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  pNVar4 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  pCVar5 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
  COOJKPHHMCD___ctor(pCVar5,(Il2CppObject *)0x0,Method_JLEKKANADII_HONKIIHKLOB__,(MethodInfo *)0x0);
  if (pNVar4 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceConnected
              (pNVar4,pCVar5,(MethodInfo *)0x0);
    pNVar4 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
    pCVar5 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
    COOJKPHHMCD___ctor(pCVar5,(Il2CppObject *)0x0,Method_JLEKKANADII_HONKIIHKLOB__,(MethodInfo *)0x0
                      );
    if (pNVar4 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
      Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceDisconnected
                (pNVar4,pCVar5,(MethodInfo *)0x0);
      pNVar4 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
      pCVar5 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
      COOJKPHHMCD___ctor(pCVar5,(Il2CppObject *)0x0,Method_JLEKKANADII_HONKIIHKLOB__,
                         (MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
        Nekki_SF2_Core_InputControllers_GamePadController__add_OnDevicePartDisconnected
                  (pNVar4,pCVar5,(MethodInfo *)0x0);
        pNVar4 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
        pCVar5 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
        COOJKPHHMCD___ctor(pCVar5,(Il2CppObject *)0x0,Method_JLEKKANADII_HONKIIHKLOB__,
                           (MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
          Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceStyleChanged
                    (pNVar4,pCVar5,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log(StringLiteral_15488/*"[HintSchemeController]: inited!"*/,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void HNJCEIGCIGM(InputDevice GIDJIIFPHJK)  [RVA 0x351D03C]
// JLEKKANADII$$HNJCEIGCIGM @ RVA 0x351D03C

void JLEKKANADII__HNJCEIGCIGM(InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_InputDevice__o *pSVar4;
  MethodInfo *extraout_x1;
  InControl_InputDevice_array *pIVar5;
  
  if ((DAT_045689a1 & 1) == 0) {
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Contains__);
    DAT_045689a1 = 1;
    method = extraout_x1;
  }
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JLEKKANADII_TypeInfo,method);
  }
  pSVar4 = JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
  if (pSVar4 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (Il2CppObject *)GIDJIIFPHJK,
                       Method_System_Collections_Generic_List<InputDevice>_Contains__);
    if (bVar3) {
      return;
    }
    if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = Method_System_Collections_Generic_List<InputDevice>_Add__;
    pSVar4 = JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
    if (pSVar4 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
      pIVar5 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pIVar5 != (InControl_InputDevice_array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pIVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pIVar5->m_Items[(int)uVar1] = GIDJIIFPHJK;
          thunk_FUN_01c20e04(pIVar5->m_Items + (int)uVar1,GIDJIIFPHJK);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GIDJIIFPHJK,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void HFKKKKBAMGE(Action<int, string, ODLJFAIHELG> CJNHFNHJHPE)  [RVA 0x3514C84]
// JLEKKANADII$$HFKKKKBAMGE @ RVA 0x3514C84

void JLEKKANADII__HFKKKKBAMGE
               (System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_int__string__ODLJFAIHELG__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_int__string__ODLJFAIHELG__o *a;
  
  if ((DAT_045689a2 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_045689a2 = 1;
    method = extraout_x1;
  }
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JLEKKANADII_TypeInfo,method);
  }
  a = JLEKKANADII_TypeInfo->static_fields->JCDGMAEDFIF;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<int,_string,_ODLJFAIHELG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_int__string__ODLJFAIHELG__o *)
             FUN_01c07368(JLEKKANADII_TypeInfo->static_fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void KJHIBNMCKKG(Action<int, string, ODLJFAIHELG> CJNHFNHJHPE)  [RVA 0x3515700]
// JLEKKANADII$$KJHIBNMCKKG @ RVA 0x3515700

void JLEKKANADII__KJHIBNMCKKG
               (System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_int__string__ODLJFAIHELG__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_int__string__ODLJFAIHELG__o *source;
  
  if ((DAT_045689a3 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_045689a3 = 1;
    method = extraout_x1;
  }
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JLEKKANADII_TypeInfo,method);
  }
  source = JLEKKANADII_TypeInfo->static_fields->JCDGMAEDFIF;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<int,_string,_ODLJFAIHELG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 036157a4 to 037157ab has its CatchHandler @ 03615950 */
    if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 036157c0 to 037157c3 has its CatchHandler @ 0361593c */
    pSVar5 = (System_Action_int__string__ODLJFAIHELG__o *)
             FUN_01c07368(JLEKKANADII_TypeInfo->static_fields,lVar4,source);
                    /* try { // try from 036157c4 to 037157cb has its CatchHandler @ 0361594c */
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* try { // try from 036157d8 to 037157df has its CatchHandler @ 03615940 */
  return;
}

