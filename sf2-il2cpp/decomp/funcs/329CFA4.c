// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$DLOKPLFDEJA @ RVA 0x329CFA4

/* WARNING: Removing unreachable block (ram,0x0339d1a8) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__DLOKPLFDEJA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  OJEHKJHEBID_o *pOVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_045673a7 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
    DAT_045673a7 = 1;
  }
  if ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField == false) {
    pOVar7 = (__this->fields).FBILHKCKHEJ;
    if ((pOVar7 == (OJEHKJHEBID_o *)0x0) ||
       (__this_00 = (pOVar7->fields).MABPCBMOECE,
       __this_00 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                        Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__
                       );
    if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar8 = pSVar4->klass;
      uVar1._0_1_ = (pSVar8->_2).rank;
      uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_0339d088;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0339d088:
      uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar9 & 1) == 0) goto LAB_0339d11c;
      pSVar8 = pSVar4->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_0339d0e4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,0);
LAB_0339d0e4:
      auVar11 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      lVar6 = auVar11._0_8_;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (KGCNBJOCNHC == (MGDJPGGPDJI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (*(long *)(lVar6 + 0x18) != (KGCNBJOCNHC->fields).ANAJGHJEEOC);
    *(int32_t *)(lVar6 + 0x28) = (KGCNBJOCNHC->fields).BDPMJNBHKIJ;
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__LBDDPJHLKPG(__this,auVar11._8_8_);
LAB_0339d11c:
    if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
      pSVar8 = pSVar4->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_0339d178;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_0339d178:
      (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    }
  }
  return;
}

