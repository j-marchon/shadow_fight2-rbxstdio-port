// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$EHAJCBIIBKB @ RVA 0x324CF54

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__EHAJCBIIBKB
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t JJMCKHDALCF,
               MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  long *plVar9;
  undefined8 *puVar10;
  DBNEEHGBCJD_o *FIKNJAFOLIM;
  PBAKFOBIHEG_o *pPVar11;
  MethodInfo *method_00;
  Il2CppClass *pIVar12;
  long lVar13;
  PBAKFOBIHEG_c *pPVar14;
  ulong uVar15;
  int *piVar16;
  int32_t *piVar17;
  System_Collections_IEnumerator_o *pSVar18;
  
  if ((DAT_04567107 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567107 = 1;
  }
  EDFDANKEBGF__JGKCFCJLDKJ((MethodInfo *)0x0);
  if (JJMCKHDALCF < 0) {
    return;
  }
  pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar7 != (Il2CppObject *)0x0) {
    pIVar12 = pIVar7->klass;
    uVar2._0_1_ = (pIVar12->_2).rank;
    uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar2;
    if (uVar15 != 0) {
      piVar17 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar8 = pIVar12->vtable + (*piVar17 + 10);
          goto LAB_0334d034;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,10);
LAB_0334d034:
    plVar9 = (long *)(*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    if (plVar9 != (long *)0x0) {
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_DBNEEHGBCJD__c **)(piVar16 + -2) ==
              System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0334d09c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01b81914(plVar9,
                             System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo,0)
      ;
LAB_0334d09c:
      iVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (iVar6 <= JJMCKHDALCF) {
        return;
      }
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar12 = pIVar7->klass;
        uVar3._0_1_ = (pIVar12->_2).rank;
        uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
        uVar15 = (ulong)uVar3;
        if (uVar15 != 0) {
          piVar17 = &((pIVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar8 = pIVar12->vtable + (*piVar17 + 10);
              goto LAB_0334d110;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,10);
LAB_0334d110:
        plVar9 = (long *)(*pVVar8->methodPtr)(pIVar7,pVVar8->method);
        if (plVar9 != (long *)0x0) {
          lVar13 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IReadOnlyList_DBNEEHGBCJD__c **)(piVar16 + -2) ==
                  System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0334d178;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01b81914(plVar9,
                                 System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo,0);
LAB_0334d178:
          method_00 = (MethodInfo *)puVar10[1];
          FIKNJAFOLIM = (DBNEEHGBCJD_o *)(*(code *)*puVar10)(plVar9,JJMCKHDALCF);
          if (FIKNJAFOLIM == (DBNEEHGBCJD_o *)0x0) {
            return;
          }
          ppSVar1 = &(__this->fields).FBFKCBHMMAC;
          if ((__this->fields).FBFKCBHMMAC != (System_Collections_IEnumerator_o *)0x0) {
            pPVar11 = CoroutineManager__get_Current((MethodInfo *)0x0);
            if (pPVar11 == (PBAKFOBIHEG_o *)0x0) goto LAB_0334d2cc;
            pPVar14 = pPVar11->klass;
            pSVar18 = *ppSVar1;
            uVar4._0_1_ = (pPVar14->_2).rank;
            uVar4._1_1_ = (pPVar14->_2).minimumAlignment;
            uVar15 = (ulong)uVar4;
            if (uVar15 != 0) {
              piVar17 = &((pPVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar8 = pPVar14->vtable + (*piVar17 + 1);
                  goto LAB_0334d218;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pPVar11,PBAKFOBIHEG_TypeInfo,1);
LAB_0334d218:
            method_00 = pVVar8->method;
            (*pVVar8->methodPtr)(pPVar11,pSVar18);
          }
          pPVar11 = CoroutineManager__get_Current((MethodInfo *)0x0);
          pSVar18 = Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__KNHOFLGDIKD
                              (__this,FIKNJAFOLIM,method_00);
          if (pPVar11 != (PBAKFOBIHEG_o *)0x0) {
            pPVar14 = pPVar11->klass;
            uVar5._0_1_ = (pPVar14->_2).rank;
            uVar5._1_1_ = (pPVar14->_2).minimumAlignment;
            uVar15 = (ulong)uVar5;
            if (uVar15 != 0) {
              piVar17 = &((pPVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar8 = pPVar14->vtable + *piVar17;
                  goto LAB_0334d29c;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pPVar11,PBAKFOBIHEG_TypeInfo,0);
LAB_0334d29c:
            pSVar18 = (System_Collections_IEnumerator_o *)
                      (*pVVar8->methodPtr)(pPVar11,pSVar18,1,pVVar8->method);
            *ppSVar1 = pSVar18;
            thunk_FUN_01c20e04(ppSVar1,pSVar18);
            return;
          }
        }
      }
    }
  }
LAB_0334d2cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

