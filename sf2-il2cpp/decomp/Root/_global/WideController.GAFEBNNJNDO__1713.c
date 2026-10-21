// TypeDefIndex 1713
// Namespace: 
// [CompilerGenerated]
// private sealed class WideController.GAFEBNNJNDO : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public WideController <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x31D5F28]
// WideController.GAFEBNNJNDO$$.ctor @ RVA 0x31D5F28

void WideController_GAFEBNNJNDO___ctor
               (WideController_GAFEBNNJNDO_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x31D62A8]
// WideController.GAFEBNNJNDO$$System.IDisposable.Dispose @ RVA 0x31D62A8

void WideController_GAFEBNNJNDO__System_IDisposable_Dispose
               (WideController_GAFEBNNJNDO_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x31D62AC]
// WideController.GAFEBNNJNDO$$MoveNext @ RVA 0x31D62AC

bool WideController_GAFEBNNJNDO__MoveNext(WideController_GAFEBNNJNDO_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *OGPGLGPMEPD;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  uint uVar3;
  ulong uVar4;
  ACHLOMELAJE_o *pAVar5;
  WideController_o *pWVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  Il2CppObject **ppIVar8;
  UnityEngine_UI_Text_o *EHNFGMGKCHO;
  UnityEngine_UI_Text_array *pUVar9;
  uint uVar10;
  ulong uVar11;
  
  if ((DAT_04566ce7 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566ce7 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pWVar6 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
LAB_032d6374:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (ACHLOMELAJE_o *)0x0) {
LAB_032d6508:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((pAVar5->fields).super.GEONGCPLLFJ,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((pWVar6 == (WideController_o *)0x0) ||
           (pUVar9 = (pWVar6->fields)._userIds, pUVar9 == (UnityEngine_UI_Text_array *)0x0))
        goto LAB_032d6508;
        uVar3 = (uint)pUVar9->max_length;
        if (0 < (int)uVar3) {
          uVar10 = 0;
          do {
            if (uVar3 <= uVar10) {
LAB_032d6504:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            EHNFGMGKCHO = pUVar9->m_Items[(int)uVar10];
            if (EHNFGMGKCHO == (UnityEngine_UI_Text_o *)0x0) goto LAB_032d6508;
            bVar2 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                              ((UnityEngine_EventSystems_UIBehaviour_o *)EHNFGMGKCHO,
                               (MethodInfo *)0x0);
            if (!bVar2) {
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_032d6508;
              WideController__OBJNGNDMDCL(EHNFGMGKCHO,(pAVar5->fields).super.GEONGCPLLFJ,in_x2);
            }
            uVar3 = (uint)pUVar9->max_length;
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar3);
        }
        ppSVar7 = &(pWVar6->fields).OMBLNNEAHLD;
        *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
        thunk_FUN_01c20e04(ppSVar7,0);
        goto LAB_032d64ec;
      }
    }
    ppIVar8 = &(__this->fields).__2__current;
    *ppIVar8 = (Il2CppObject *)0x0;
    thunk_FUN_01c20e04(ppIVar8,0);
    bVar2 = true;
    (__this->fields).__1__state = 1;
  }
  else {
    if (iVar1 == 0) {
      (__this->fields).__1__state = -1;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      }
      OGPGLGPMEPD = NLPJLHOEAOE__FKAIKHDPIMK((MethodInfo *)0x0);
      if ((pWVar6 == (WideController_o *)0x0) ||
         (pUVar9 = (pWVar6->fields)._userIds, pUVar9 == (UnityEngine_UI_Text_array *)0x0))
      goto LAB_032d6508;
      if (0 < (int)pUVar9->max_length) {
        uVar11 = 0;
        uVar4 = pUVar9->max_length & 0xffffffff;
        do {
          if (uVar4 <= uVar11) goto LAB_032d6504;
          WideController__OBJNGNDMDCL(pUVar9->m_Items[uVar11],OGPGLGPMEPD,in_x2);
          uVar3 = (uint)pUVar9->max_length;
          uVar4 = (ulong)uVar3;
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)(int)uVar3);
      }
      goto LAB_032d6374;
    }
LAB_032d64ec:
    bVar2 = false;
  }
  return bVar2;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x31D650C]
// WideController.GAFEBNNJNDO$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x31D650C

Il2CppObject *
WideController_GAFEBNNJNDO__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (WideController_GAFEBNNJNDO_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x31D6514]
// WideController.GAFEBNNJNDO$$System.Collections.IEnumerator.Reset @ RVA 0x31D6514

void WideController_GAFEBNNJNDO__System_Collections_IEnumerator_Reset
               (WideController_GAFEBNNJNDO_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_WideController_GAFEBNNJNDO_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x31D654C]
// WideController.GAFEBNNJNDO$$System.Collections.IEnumerator.get_Current @ RVA 0x31D654C

Il2CppObject *
WideController_GAFEBNNJNDO__System_Collections_IEnumerator_get_Current
          (WideController_GAFEBNNJNDO_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

