// Nekki.SF2.GUI.Fight.EndFightContent$$IOOPGJBHPKK @ RVA 0x309A6D8

void Nekki_SF2_GUI_Fight_EndFightContent__IOOPGJBHPKK
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  int32_t index;
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  VirtualInvokeData *pVVar11;
  Il2CppClass *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566111 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_CCNAMPDODEA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_DIFPFEEGGAB__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__);
    FUN_01bab630(&MCNGELCOMNG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566111 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar8 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
  if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
    index = (__this->fields).BGINDOKLEKD;
    iVar1 = (pSVar8->fields)._size;
    if (index < iVar1) {
      pIVar9 = System_Collections_Generic_List<object>__get_Item
                         (pSVar8,index,
                          Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__);
      uVar10 = thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pIVar9 == (Il2CppObject *)0x0) goto LAB_0319aac8;
      pIVar12 = pIVar9->klass;
      uVar2._0_1_ = (pIVar12->_2).rank;
      uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
        piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
            pVVar11 = pIVar12->vtable + (*piVar14 + 2);
            goto LAB_0319a8d0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,2);
LAB_0319a8d0:
      (*pVVar11->methodPtr)(pIVar9,uVar10,pVVar11->method);
      pIVar12 = pIVar9->klass;
      uVar4._0_1_ = (pIVar12->_2).rank;
      uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar4;
      if (uVar13 != 0) {
        piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
            pVVar11 = pIVar12->vtable + *piVar14;
            goto LAB_0319a92c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,0);
LAB_0319a92c:
      (*pVVar11->methodPtr)(pIVar9,pVVar11->method);
    }
    else {
      if ((0 < iVar1) &&
         (pIVar9 = System_Collections_Generic_List<object>__get_Item
                             (pSVar8,iVar1 + -1,
                              Method_System_Collections_Generic_List<MCNGELCOMNG>_get_Item__),
         pIVar9 != (Il2CppObject *)0x0)) {
        uVar10 = thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        pIVar12 = pIVar9->klass;
        uVar3._0_1_ = (pIVar12->_2).rank;
        uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
        uVar13 = (ulong)uVar3;
        if (uVar13 != 0) {
          piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
              pVVar11 = pIVar12->vtable + (*piVar14 + 2);
              goto LAB_0319a94c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,2);
LAB_0319a94c:
        (*pVVar11->methodPtr)(pIVar9,uVar10,pVVar11->method);
      }
      pSVar8 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319aac8;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,pSVar8,
                 Method_System_Collections_Generic_List<MCNGELCOMNG>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_MoveNext__
                               ), pIVar9 = local_60.fields._current, bVar7) {
        uVar10 = thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar12 = pIVar9->klass;
        uVar5._0_1_ = (pIVar12->_2).rank;
        uVar5._1_1_ = (pIVar12->_2).minimumAlignment;
        uVar13 = (ulong)uVar5;
        if (uVar13 != 0) {
          piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
              pVVar11 = pIVar12->vtable + (*piVar14 + 3);
              goto LAB_0319aa2c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,3);
LAB_0319aa2c:
        (*pVVar11->methodPtr)(pIVar9,uVar10,pVVar11->method);
        pIVar12 = pIVar9->klass;
        uVar6._0_1_ = (pIVar12->_2).rank;
        uVar6._1_1_ = (pIVar12->_2).minimumAlignment;
        uVar13 = (ulong)uVar6;
        if (uVar13 != 0) {
          piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
              pVVar11 = pIVar12->vtable + *piVar14;
              goto LAB_0319aa88;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar9,MCNGELCOMNG_TypeInfo,0);
LAB_0319aa88:
        (*pVVar11->methodPtr)(pIVar9,pVVar11->method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__)
      ;
    }
    return;
  }
LAB_0319aac8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

