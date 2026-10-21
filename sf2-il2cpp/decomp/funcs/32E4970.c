// DOPEEDABNEK$$HIALOHNIDEO @ RVA 0x32E4970

void DOPEEDABNEK__HIALOHNIDEO(DOPEEDABNEK_o *__this,KHODJHFHCDE_o *EKHNABFCAMM,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  VirtualInvokeData *pVVar3;
  System_Func_PackSettings__string__o **ppSVar4;
  System_Collections_Generic_IEnumerable_TResult__o *JMIMCKCKFND;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  System_Collections_Generic_IReadOnlyList_PackSettings__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_IReadOnlyList_PackSettings__o *pSVar9;
  System_Func_PackSettings__string__o *selector;
  
  if ((DAT_045675fe & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
    FUN_01bab630(&System_Func<PackSettings,_string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<PackSettings>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_EKNLBFNCJOL__);
    FUN_01bab630(&DOPEEDABNEK_<>c_TypeInfo);
    DAT_045675fe = 1;
  }
  if (EKHNABFCAMM != (KHODJHFHCDE_o *)0x0) {
    if ((EKHNABFCAMM->fields)._NJFBLJHECFH_k__BackingField == false) {
      return;
    }
    pSVar9 = (EKHNABFCAMM->fields)._JOFOHDAGJIN_k__BackingField;
    if (pSVar9 != (System_Collections_Generic_IReadOnlyList_PackSettings__o *)0x0) {
      pSVar6 = pSVar9->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<PackSettings>_TypeInfo)
          {
            pVVar3 = pSVar6->vtable + *piVar8;
            goto LAB_033e4a48;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar3 = (VirtualInvokeData *)
               FUN_01b81914(pSVar9,
                            System_Collections_Generic_IReadOnlyCollection<PackSettings>_TypeInfo,0)
      ;
LAB_033e4a48:
      iVar2 = (*pVVar3->methodPtr)(pSVar9,pVVar3->method);
      if (iVar2 == 0) {
        pMVar5 = extraout_x1;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar5 = extraout_x1_01;
        }
        if (DAT_04566e5a == '\0') {
          FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
          DAT_04566e5a = '\x01';
          pMVar5 = extraout_x1_02;
        }
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar5 = extraout_x1_03;
        }
        if (MGNPHCAAEIO_TypeInfo->static_fields->_CANIKCKLKBL_k__BackingField != false) {
          return;
        }
        DOPEEDABNEK__MFBFMIONFMA(__this,pMVar5);
        pMVar5 = extraout_x1_04;
      }
      else {
        source = (System_Collections_Generic_IEnumerable_TSource__o *)
                 (EKHNABFCAMM->fields)._JOFOHDAGJIN_k__BackingField;
        if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        selector = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__48_5;
        if (selector == (System_Func_PackSettings__string__o *)0x0) {
          if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          selector = (System_Func_PackSettings__string__o *)
                     thunk_FUN_01bda818(System_Func<PackSettings,_string>_TypeInfo);
          System_Func<object,_object>___ctor();
          ppSVar4 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__48_5;
          *ppSVar4 = selector;
          thunk_FUN_01c20e04(ppSVar4,selector);
        }
        pMVar5 = Method_System_Linq_Enumerable_Select<PackSettings,_string>__;
        JMIMCKCKFND = System_Linq_Enumerable__Select<object,_object>
                                (source,(System_Func_TSource__TResult__o *)selector,
                                 (MethodInfo_1EA6FC0 *)
                                 Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
        if (__this == (DOPEEDABNEK_o *)0x0) goto LAB_033e4b8c;
        DOPEEDABNEK__FBNGJNMKBNM
                  (__this,(System_Collections_Generic_IEnumerable_string__o *)JMIMCKCKFND,pMVar5);
        pMVar5 = extraout_x1_00;
      }
      DOPEEDABNEK__BPCBMLIGOFF(__this,pMVar5);
      return;
    }
  }
LAB_033e4b8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

