// Nekki.SF2.GUI.Shop.ShopScene$$HAIAOFHBGAP @ RVA 0x3434164

/* WARNING: Removing unreachable block (ram,0x035344e8) */

void Nekki_SF2_GUI_Shop_ShopScene__HAIAOFHBGAP
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,Nekki_SF2_GUI_Shop_PerksPanel_o *EODPHEMEFIP,
               bool MNPLAGPNGCO,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  Il2CppObject *__this_00;
  DG_Tweening_Sequence_o *pDVar2;
  undefined8 *puVar3;
  long *plVar4;
  Il2CppObject *pIVar5;
  DG_Tweening_TweenCallback_o *callback;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  Il2CppClass *pIVar10;
  
  if ((DAT_04568182 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_EMIGONDJCIG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<PerkUI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PerkUI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_LEPDJNAKHII_JGNLNAKOIBF__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_LEPDJNAKHII_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04568182 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ShopScene_EMIGONDJCIG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    pIVar5 = __this_00 + 1;
    pIVar5->klass = (Il2CppClass *)EODPHEMEFIP;
    thunk_FUN_01c20e04(pIVar5,EODPHEMEFIP);
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    ppDVar1 = &(__this->fields).OOIFAHNCKAO;
    (__this->fields).OOIFAHNCKAO = pDVar2;
    thunk_FUN_01c20e04(ppDVar1,pDVar2);
    if (MNPLAGPNGCO) {
      DG_Tweening_TweenSettingsExtensions__AppendInterval
                ((__this->fields).OOIFAHNCKAO,(__this->fields)._HintAnimationDelay,(MethodInfo *)0x0
                );
    }
    if ((pIVar5->klass != (Il2CppClass *)0x0) &&
       (pIVar10 = (pIVar5->klass->_1).element_class, pIVar10 != (Il2CppClass *)0x0)) {
      pvVar6 = (pIVar10->_1).image;
      uVar8 = (ulong)*(ushort *)((long)pvVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)((long)pvVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerable_PerkUI__c **)(piVar9 + -2) ==
              System_Collections_Generic_IEnumerable<PerkUI>_TypeInfo) {
            puVar3 = (undefined8 *)((long)pvVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_035342e8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01b81914(pIVar10,System_Collections_Generic_IEnumerable<PerkUI>_TypeInfo,0);
LAB_035342e8:
      plVar4 = (long *)(*(code *)*puVar3)(pIVar10,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03534368;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03534368:
        uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_03534494;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0353447c;
        }
        pIVar5 = (Il2CppObject *)
                 thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ShopScene_LEPDJNAKHII_TypeInfo);
        System_Object___ctor(pIVar5,(MethodInfo *)0x0);
        if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar5[1].monitor = __this_00;
        thunk_FUN_01c20e04(&pIVar5[1].monitor,__this_00);
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_PerkUI__c **)(piVar9 + -2) ==
                System_Collections_Generic_IEnumerator<PerkUI>_TypeInfo) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_035343f4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<PerkUI>_TypeInfo,0);
LAB_035343f4:
        pIVar10 = (Il2CppClass *)(*(code *)*puVar3)(plVar4,puVar3[1]);
        pIVar5[1].klass = pIVar10;
        thunk_FUN_01c20e04();
        pDVar2 = *ppDVar1;
        callback = (DG_Tweening_TweenCallback_o *)
                   thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__AppendInterval
                  ((__this->fields).OOIFAHNCKAO,(__this->fields)._HintAnimationDuration,
                   (MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0353447c:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_035344b0;
    }
  }
LAB_03534494:
  puVar3 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_035344b0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}

