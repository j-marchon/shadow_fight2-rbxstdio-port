// Nekki.SF2.GUI.Fight.RewardPanel$$Init @ RVA 0x3320C04

/* WARNING: Removing unreachable block (ram,0x03420fb0) */
/* WARNING: Removing unreachable block (ram,0x03421008) */

void Nekki_SF2_GUI_Fight_RewardPanel__Init
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,
               System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *GMCEHJAIFBJ,
               float EAMGNFEIFKB,float PFIFJCMHGGB,int32_t ABMDLEIKNBO,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  System_Func_IGPDCHBJAPD_AKGCHFPLJEC__BNKBGIIJNLF__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  System_String_o *EHNFGMGKCHO;
  Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  System_Collections_Generic_IEnumerable_TResult__c *pSVar9;
  long lVar10;
  System_Collections_Generic_List_RewardPanelItem__o *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  System_Func_IGPDCHBJAPD_AKGCHFPLJEC__BNKBGIIJNLF__o *selector;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((DAT_04567848 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<IGPDCHBJAPD_AKGCHFPLJEC,_BNKBGIIJNLF>__);
    FUN_01bab630(&System_Func<IGPDCHBJAPD_AKGCHFPLJEC,_BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanel_<>c_HBJOIOKGNKP__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_10831);
    FUN_01bab630(&StringLiteral_9080);
    DAT_04567848 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  selector = Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__6_0;
  if (selector == (System_Func_IGPDCHBJAPD_AKGCHFPLJEC__BNKBGIIJNLF__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    selector = (System_Func_IGPDCHBJAPD_AKGCHFPLJEC__BNKBGIIJNLF__o *)
               thunk_FUN_01bda818(System_Func<IGPDCHBJAPD_AKGCHFPLJEC,_BNKBGIIJNLF>_TypeInfo);
    method = (MethodInfo *)0x0;
    System_Func<object,_object>___ctor();
    ppSVar3 = &Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__6_0;
    *ppSVar3 = selector;
    thunk_FUN_01c20e04(ppSVar3,selector);
  }
  pSVar4 = System_Linq_Enumerable__Select<object,_object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)GMCEHJAIFBJ,
                      (System_Func_TSource__TResult__o *)selector,
                      Method_System_Linq_Enumerable_Select<IGPDCHBJAPD_AKGCHFPLJEC,_BNKBGIIJNLF>__);
  if (pSVar4 != (System_Collections_Generic_IEnumerable_TResult__o *)0x0) {
    pSVar9 = pSVar4->klass;
    uVar1._0_1_ = (pSVar9->_2).rank;
    uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pSVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<BNKBGIIJNLF>_TypeInfo) {
          pVVar5 = pSVar9->vtable + *piVar13;
          goto LAB_03420dc8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerable<BNKBGIIJNLF>_TypeInfo,0);
LAB_03420dc8:
    plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03420e50;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03420e50:
      uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_03420fa4;
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_03420f7c;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_03420f64;
      }
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_BNKBGIIJNLF__c **)(piVar14 + -2) ==
              System_Collections_Generic_IEnumerator<BNKBGIIJNLF>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03420eac;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<BNKBGIIJNLF>_TypeInfo,0);
LAB_03420eac:
      lVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar8 = *(System_String_o **)(*(long *)(lVar10 + 0x10) + 0x20);
      if (pSVar8 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method_00 = StringLiteral_10831;
      pSVar8 = System_String__Replace
                         (pSVar8,StringLiteral_9080,(System_String_o *)StringLiteral_10831,
                          (MethodInfo *)0x0);
      uStack_78 = *(undefined8 *)(lVar10 + 0x20);
      local_80 = *(undefined8 *)(lVar10 + 0x18);
      __this_01.fields.fakeValue = 0;
      __this_01.fields.fakeValueActive = false;
      __this_01.fields.inited = false;
      __this_01.fields._14_2_ = 0;
      __this_01.fields._0_8_ = &local_80;
      EHNFGMGKCHO = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_01,method_00);
      method = (MethodInfo *)(ulong)(uint)ABMDLEIKNBO;
      __this_00 = Nekki_SF2_GUI_Fight_RewardPanel__GKJKNKCEMPN
                            (__this,pSVar8,EHNFGMGKCHO,PFIFJCMHGGB,ABMDLEIKNBO,in_x4);
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(lVar10 + 0x18),
                         (MethodInfo *)0x0);
      if (__this_00 == (Nekki_SF2_GUI_Fight_RewardPanelItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Fight_RewardPanelItem__SetTextLerpValue
                (__this_00,EAMGNFEIFKB,0.0,(float)iVar2,(MethodInfo *)0x0);
    } while( true );
  }
  goto LAB_03421000;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_03420f64:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03420f98;
    }
  }
LAB_03420f7c:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03420f98:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03420fa4:
  pSVar11 = (__this->fields).MAHKJDKCNPC;
  if (pSVar11 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0) {
    Nekki_SF2_GUI_Fight_RewardPanel__OPPKHGDPGDD(__this,(pSVar11->fields)._size,true,method);
    return;
  }
LAB_03421000:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

