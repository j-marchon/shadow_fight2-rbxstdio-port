// TypeDefIndex 2381
// Namespace: 
// [CompilerGenerated]
// private sealed class PlayerSelector.GIMICIBKPCA : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public float time; // 0x20
//   public Transform trans; // 0x28
//   public int index; // 0x30
//   public float finalPosition; // 0x34
//   private float <startPosition>5__2; // 0x38
//   private float <t>5__3; // 0x3C

// ===== public void .ctor(int <>1__state)  [RVA 0x332F7F4]
// Nekki.SF2.GUI.Pvp.PlayerSelector.GIMICIBKPCA$$.ctor @ RVA 0x332F7F4

void Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA___ctor
               (Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x33308E4]
// Nekki.SF2.GUI.Pvp.PlayerSelector.GIMICIBKPCA$$System.IDisposable.Dispose @ RVA 0x33308E4

void Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x33308E8]
// Nekki.SF2.GUI.Pvp.PlayerSelector.GIMICIBKPCA$$MoveNext @ RVA 0x33308E8

/* WARNING: Removing unreachable block (ram,0x03430a44) */

bool Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA__MoveNext
               (Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *pUVar2;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *pSVar3;
  undefined *puVar4;
  undefined8 uVar5;
  Il2CppObject **ppIVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o value;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    fVar10 = (__this->fields)._t_5__3;
    (__this->fields).__1__state = -1;
    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar10 = fVar10 + fVar7;
    (__this->fields)._t_5__3 = fVar10;
LAB_034309dc:
    if ((__this->fields).time < fVar10) goto LAB_034309e8;
    pUVar2 = (__this->fields).trans;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_03430b1c;
    UVar11 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    fVar10 = UVar11.fields.y;
    fVar9 = (__this->fields)._startPosition_5__2;
    iVar1 = (__this->fields).index;
    fVar7 = (__this->fields)._t_5__3 / (__this->fields).time;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    fVar9 = fVar9 + ((__this->fields).finalPosition - fVar9) * fVar7;
    fVar7 = fVar9;
    fVar8 = UVar11.fields.z;
    if (((iVar1 == 0) || (fVar7 = UVar11.fields.x, fVar8 = fVar9, iVar1 == 2)) ||
       (fVar10 = fVar9, fVar8 = UVar11.fields.z, iVar1 == 1)) {
      pUVar2 = (__this->fields).trans;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        value.fields.y = fVar10;
        value.fields.x = fVar7;
        value.fields.z = fVar8;
        UnityEngine_Transform__set_localPosition(pUVar2,value,(MethodInfo *)0x0);
        ppIVar6 = &(__this->fields).__2__current;
        *ppIVar6 = (Il2CppObject *)0x0;
        thunk_FUN_01c20e04(ppIVar6,0);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto LAB_03430b1c;
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    fVar10 = (__this->fields).time;
    if (DAT_045602fa == '\0') {
      FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
      DAT_045602fa = '\x01';
    }
    fVar7 = ABS(fVar10);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar8 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
    fVar9 = fVar7 * 1e-06;
    if (fVar7 * 1e-06 <= fVar8) {
      fVar9 = fVar8;
    }
    if (fVar9 <= ABS(0.0 - fVar10)) {
      pUVar2 = (__this->fields).trans;
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_03430b1c;
      UVar11 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
      iVar1 = (__this->fields).index;
      fVar10 = UVar11.fields.x;
      if (((iVar1 != 0) && (fVar10 = UVar11.fields.z, iVar1 != 2)) &&
         (fVar10 = UVar11.fields.y, iVar1 != 1)) {
        thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
        __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
        pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7707/*"Invalid Vector3 index!"*/);
        System_IndexOutOfRangeException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
        puVar4 = &Method_UnityEngine_Vector3_get_Item__;
        goto LAB_03430b58;
      }
      (__this->fields)._startPosition_5__2 = fVar10;
      (__this->fields)._t_5__3 = 0.0;
      fVar10 = 0.0;
      goto LAB_034309dc;
    }
LAB_034309e8:
    pUVar2 = (__this->fields).trans;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
LAB_03430b1c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar11 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    fVar7 = UVar11.fields.y;
    iVar1 = (__this->fields).index;
    fVar8 = (__this->fields).finalPosition;
    fVar10 = fVar8;
    fVar9 = UVar11.fields.z;
    if (((iVar1 == 0) || (fVar10 = UVar11.fields.x, fVar9 = fVar8, iVar1 == 2)) ||
       (fVar7 = fVar8, fVar9 = UVar11.fields.z, iVar1 == 1)) {
      pUVar2 = (__this->fields).trans;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UVar11.fields.y = fVar7;
        UVar11.fields.x = fVar10;
        UVar11.fields.z = fVar9;
        UnityEngine_Transform__set_localPosition(pUVar2,UVar11,(MethodInfo *)0x0);
        return false;
      }
      goto LAB_03430b1c;
    }
  }
  thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
  __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
  pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7707/*"Invalid Vector3 index!"*/);
  System_IndexOutOfRangeException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
  puVar4 = &Method_UnityEngine_Vector3_set_Item__;
LAB_03430b58:
  uVar5 = thunk_FUN_01bb9178(puVar4);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar5);
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3330B68]
// Nekki.SF2.GUI.Pvp.PlayerSelector.GIMICIBKPCA$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3330B68

Il2CppObject *
Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3330B70]
// Nekki.SF2.GUI.Pvp.PlayerSelector.GIMICIBKPCA$$System.Collections.IEnumerator.Reset @ RVA 0x3330B70

void Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3330BA8]
// Nekki.SF2.GUI.Pvp.PlayerSelector.GIMICIBKPCA$$System.Collections.IEnumerator.get_Current @ RVA 0x3330BA8

Il2CppObject *
Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Pvp_PlayerSelector_GIMICIBKPCA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

