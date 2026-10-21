// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$BMGBHKLPKDE @ RVA 0x321AF14

/* WARNING: Removing unreachable block (ram,0x0331b138) */
/* WARNING: Removing unreachable block (ram,0x0331b190) */

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__BMGBHKLPKDE
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,
               System_Collections_Generic_IEnumerable_HEFOANCOHDC__o *GJBLBEALOBO,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  HEFOANCOHDC_o *EIKFGOCCOIE;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_HEFOANCOHDC__c *pSVar5;
  long lVar6;
  System_Collections_Generic_List_PerkUI__o *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  
  method_00 = (MethodInfo *)GJBLBEALOBO;
  if ((DAT_04566f00 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_get_Count__);
    DAT_04566f00 = 1;
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO(__this,method_00);
  if (GJBLBEALOBO == (System_Collections_Generic_IEnumerable_HEFOANCOHDC__o *)0x0) {
    return;
  }
  pSVar5 = GJBLBEALOBO->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<HEFOANCOHDC>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar9;
        goto LAB_0331afd8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(GJBLBEALOBO);
LAB_0331afd8:
  plVar3 = (long *)(*pVVar2->methodPtr)(GJBLBEALOBO,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0331b048;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0331b048:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) break;
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_HEFOANCOHDC__c **)(piVar10 + -2) ==
            System_Collections_Generic_IEnumerator<HEFOANCOHDC>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0331b0a4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0331b0a4:
    EIKFGOCCOIE = (HEFOANCOHDC_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__CJJBDJHKDEO(__this,EIKFGOCCOIE,method);
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0331b120;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0331b120:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  __this_00 = (__this->fields)._perkIconHolder;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pSVar7 = (__this->fields).AHJLOHFIEGJ;
    if ((pSVar7 != (System_Collections_Generic_List_PerkUI__o *)0x0) &&
       (__this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,0 < (pSVar7->fields)._size,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

