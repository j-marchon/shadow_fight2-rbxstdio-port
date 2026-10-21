// Nekki.SF2.GUI.Dialogs.StoryDialog$$CJEEDJHKDBE @ RVA 0x32C0D7C

/* WARNING: Removing unreachable block (ram,0x033c12c4) */

void Nekki_SF2_GUI_Dialogs_StoryDialog__CJEEDJHKDBE
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,NBLEEDEAPHB_o *FDLJCNLNCOC,
               MethodInfo *method)

{
  Nekki_SF2_GUI_TimerLabel_o **ppNVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  UnityEngine_GameObject_o *pUVar9;
  System_Collections_Generic_List_LBMOOFGGPEB__o *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  System_Collections_IEnumerator_o *pSVar12;
  VirtualInvokeData *pVVar13;
  UnityEngine_Component_o *__this_00;
  System_String_o *pSVar14;
  System_String_o *b;
  long *plVar15;
  undefined8 *puVar16;
  UnityEngine_Transform_o *parent;
  LBMOOFGGPEB_o *pLVar17;
  LBMOOFGGPEB_array *pLVar18;
  System_Collections_IEnumerator_c *pSVar19;
  long lVar20;
  ulong uVar21;
  int32_t *piVar22;
  int *piVar23;
  Nekki_SF2_GUI_TimerLabel_o *pNVar24;
  int local_64;
  
  if ((DAT_045674ca & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    DAT_045674ca = 1;
  }
  local_64 = 0;
  if (FDLJCNLNCOC == (NBLEEDEAPHB_o *)0x0) goto LAB_033c12bc;
  (*(__this->klass->vtable)._38_IMGPKHODFAN.methodPtr)
            ((FDLJCNLNCOC->fields).ONNNBMCAJMN.fields.r,(FDLJCNLNCOC->fields).ONNNBMCAJMN.fields.g,
             (FDLJCNLNCOC->fields).ONNNBMCAJMN.fields.b,(FDLJCNLNCOC->fields).ONNNBMCAJMN.fields.a,
             __this,(__this->klass->vtable)._38_IMGPKHODFAN.method);
  (*(__this->klass->vtable)._45_GBHBDMMKPLO.methodPtr)
            (__this,(FDLJCNLNCOC->fields).ABCHAOKFLGL,(__this->klass->vtable)._45_GBHBDMMKPLO.method
            );
  pNVar24 = (__this->fields)._timerLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppNVar1 = &(__this->fields)._timerLabel;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((*ppNVar1 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c12bc;
    UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
  }
  pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
  if (pLVar17 == (LBMOOFGGPEB_o *)0x0) {
    *ppNVar1 = (Nekki_SF2_GUI_TimerLabel_o *)0x0;
    thunk_FUN_01c20e04(ppNVar1);
    iVar8 = -1;
  }
  else {
    pSVar10 = (__this->fields).super.DIKHJEINHID;
    if (pSVar10 == (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) goto LAB_033c12bc;
    iVar8 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pLVar17,
                       Method_System_Collections_Generic_List<LBMOOFGGPEB>_IndexOf__);
    lVar20 = Method_System_Collections_Generic_List<LBMOOFGGPEB>_Add__;
    if (iVar8 == -1) {
      pSVar10 = (__this->fields).super.DIKHJEINHID;
      if (pSVar10 == (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) goto LAB_033c12bc;
      pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
      pLVar18 = (pSVar10->fields)._items;
      (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
      if (pLVar18 == (LBMOOFGGPEB_array *)0x0) goto LAB_033c12bc;
      uVar5 = (pSVar10->fields)._size;
      if (uVar5 < (uint)pLVar18->max_length) {
        (pSVar10->fields)._size = uVar5 + 1;
        pLVar18->m_Items[(int)uVar5] = pLVar17;
        thunk_FUN_01c20e04(pLVar18->m_Items + (int)uVar5);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pLVar17,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      pNVar24 = (Nekki_SF2_GUI_TimerLabel_o *)
                (*(__this->klass->vtable)._37_DBNAPIBFLEB.methodPtr)
                          (__this,FDLJCNLNCOC,(__this->klass->vtable)._37_DBNAPIBFLEB.method);
      (__this->fields)._timerLabel = pNVar24;
      thunk_FUN_01c20e04(ppNVar1,pNVar24);
      pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
      if (pLVar17 == (LBMOOFGGPEB_o *)0x0) goto LAB_033c12bc;
      LBMOOFGGPEB__JBGIAEJIKCA(pLVar17,*ppNVar1,(MethodInfo *)0x0);
      pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
      if (pLVar17 == (LBMOOFGGPEB_o *)0x0) goto LAB_033c12bc;
      LBMOOFGGPEB__LLCONNGHGKD(pLVar17,(MethodInfo *)0x0);
      pSVar10 = (__this->fields).super.DIKHJEINHID;
      if (pSVar10 == (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) goto LAB_033c12bc;
      iVar8 = (pSVar10->fields)._size;
      (__this->fields).JBKOKFGICDL = true;
      iVar8 = iVar8 + -1;
    }
    pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
    if (pLVar17 == (LBMOOFGGPEB_o *)0x0) goto LAB_033c12bc;
    *ppNVar1 = (pLVar17->fields).NFCJGLPMIHH;
    thunk_FUN_01c20e04(ppNVar1);
  }
  pUVar9 = (__this->fields).super._content;
  if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar11 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
     pUVar11 != (UnityEngine_Transform_o *)0x0)) {
    pSVar12 = UnityEngine_Transform__GetEnumerator(pUVar11,(MethodInfo *)0x0);
    if (pSVar12 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar19 = pSVar12->klass;
      uVar3._0_1_ = (pSVar19->_2).rank;
      uVar3._1_1_ = (pSVar19->_2).minimumAlignment;
      uVar21 = (ulong)uVar3;
      if (uVar21 != 0) {
        piVar22 = &((pSVar19->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar13 = pSVar19->vtable + *piVar22;
            goto LAB_033c1048;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      pVVar13 = (VirtualInvokeData *)FUN_01b81914(pSVar12,System_Collections_IEnumerator_TypeInfo,0)
      ;
LAB_033c1048:
      bVar7 = (*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if ((bVar7 & 1) == 0) {
        bVar7 = 0;
        break;
      }
      pSVar19 = pSVar12->klass;
      uVar4._0_1_ = (pSVar19->_2).rank;
      uVar4._1_1_ = (pSVar19->_2).minimumAlignment;
      uVar21 = (ulong)uVar4;
      if (uVar21 != 0) {
        piVar22 = &((pSVar19->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar13 = pSVar19->vtable + (*piVar22 + 1);
            goto LAB_033c10ac;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      pVVar13 = (VirtualInvokeData *)FUN_01b81914(pSVar12,System_Collections_IEnumerator_TypeInfo,1)
      ;
LAB_033c10ac:
      __this_00 = (UnityEngine_Component_o *)(*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if (__this_00 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      pUVar9 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar14 = UnityEngine_GameObject__get_tag(pUVar9,(MethodInfo *)0x0);
      local_64 = iVar8 + 0x4d2;
      b = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
      bVar6 = System_String__op_Equality(pSVar14,b,(MethodInfo *)0x0);
    } while (!bVar6);
    plVar15 = (long *)thunk_FUN_01bda71c(pSVar12,System_IDisposable_TypeInfo);
    if (plVar15 != (long *)0x0) {
      lVar20 = *plVar15;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar23 + -2) == System_IDisposable_TypeInfo) {
            puVar16 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_033c1194;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar16 = (undefined8 *)FUN_01b81914(plVar15,System_IDisposable_TypeInfo,0);
LAB_033c1194:
      (*(code *)*puVar16)(plVar15,puVar16[1]);
    }
    pNVar24 = *ppNVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar24,(MethodInfo *)0x0);
    if (((bVar7 | bVar6 ^ 0xffU) & 1) != 0) {
LAB_033c1270:
      if ((FDLJCNLNCOC->fields).EHKKBKHGDHE != false) {
        (*(__this->klass->vtable)._49_EGEMNGPLOKE.methodPtr)
                  (__this,FDLJCNLNCOC,(__this->klass->vtable)._49_EGEMNGPLOKE.method);
      }
      return;
    }
    if (*ppNVar1 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                ((Nekki_SF2_GUI_LabelAlias_o *)*ppNVar1,0x67,(MethodInfo *)0x0);
      pLVar17 = (FDLJCNLNCOC->fields).KOLIPNBCKOB;
      if ((pLVar17 != (LBMOOFGGPEB_o *)0x0) &&
         (pNVar24 = *ppNVar1, pNVar24 != (Nekki_SF2_GUI_TimerLabel_o *)0x0)) {
        (*(pNVar24->klass->vtable)._23_set_color.methodPtr)
                  ((pLVar17->fields).BANIDGFENDE.fields.r,(pLVar17->fields).BANIDGFENDE.fields.g,
                   (pLVar17->fields).BANIDGFENDE.fields.b,(pLVar17->fields).BANIDGFENDE.fields.a,
                   pNVar24,(pNVar24->klass->vtable)._23_set_color.method);
        pNVar24 = *ppNVar1;
        local_64 = iVar8 + 0x4d2;
        pSVar14 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
        if (pNVar24 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
          UnityEngine_Component__set_tag
                    ((UnityEngine_Component_o *)pNVar24,pSVar14,(MethodInfo *)0x0);
          if (*ppNVar1 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
            pUVar11 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0);
            pUVar9 = (__this->fields).super._content;
            if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
               (parent = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
               pUVar11 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar11,parent,false,(MethodInfo *)0x0);
              goto LAB_033c1270;
            }
          }
        }
      }
    }
  }
LAB_033c12bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

