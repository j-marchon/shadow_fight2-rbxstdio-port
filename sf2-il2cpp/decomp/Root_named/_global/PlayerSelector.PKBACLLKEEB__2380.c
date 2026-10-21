// TypeDefIndex 2380
// Namespace: 
// [CompilerGenerated]
// private sealed class PlayerSelector.PKBACLLKEEB : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public Transform trans; // 0x20
//   public int index; // 0x28
//   public float localStartPosition; // 0x2C
//   public float localFinalPosition; // 0x30
//   public Graphic graphic; // 0x38
//   public Func<float, float> getAlpha; // 0x40
//   public float lTime; // 0x48
//   private float <t>5__2; // 0x4C

// ===== public void .ctor(int <>1__state)  [RVA 0x332FD64]
// Nekki.SF2.GUI.Pvp.PlayerSelector.PKBACLLKEEB$$.ctor @ RVA 0x332FD64

void Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB___ctor
               (Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3330620]
// Nekki.SF2.GUI.Pvp.PlayerSelector.PKBACLLKEEB$$System.IDisposable.Dispose @ RVA 0x3330620

void Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3330624]
// Nekki.SF2.GUI.Pvp.PlayerSelector.PKBACLLKEEB$$MoveNext @ RVA 0x3330624

/* WARNING: Removing unreachable block (ram,0x034306e0) */

bool Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB__MoveNext
               (Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar4;
  UnityEngine_UI_Graphic_o *pUVar5;
  Il2CppObject **ppIVar6;
  System_Func_float__float__o *pSVar7;
  int32_t iVar8;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 in_d1;
  undefined4 uVar13;
  undefined8 in_d2;
  undefined4 uVar16;
  ulong uVar15;
  ulong uVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o value;
  ulong uVar9;
  ulong uVar12;
  ulong uVar14;
  
  uVar13 = (undefined4)((ulong)in_d1 >> 0x20);
  uVar16 = (undefined4)((ulong)in_d2 >> 0x20);
  iVar1 = (__this->fields).__1__state;
  bVar2 = false;
  if (iVar1 == 2) {
    iVar8 = -1;
  }
  else {
    if (iVar1 == 1) {
      fVar19 = (__this->fields)._t_5__2;
      (__this->fields).__1__state = -1;
      fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      uVar13 = 0;
      fVar19 = fVar19 + fVar18 / (__this->fields).lTime;
      (__this->fields)._t_5__2 = fVar19;
    }
    else {
      if (iVar1 != 0) {
        return false;
      }
      (__this->fields)._t_5__2 = 0.0;
      (__this->fields).__1__state = -1;
      fVar19 = 0.0;
    }
    pUVar3 = (__this->fields).trans;
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_03430898;
    UVar20 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
    uVar14 = CONCAT44(uVar16,UVar20.fields.z);
    uVar12 = CONCAT44(uVar13,UVar20.fields.y);
    uVar9 = (ulong)(uint)UVar20.fields.x;
    iVar1 = (__this->fields).index;
    if (fVar19 <= 1.0) {
      fVar18 = (__this->fields)._t_5__2;
      fVar19 = (__this->fields).localStartPosition;
      if (fVar18 < 0.0) {
        fVar18 = 0.0;
      }
      uVar17 = (ulong)(uint)(fVar19 + ((__this->fields).localFinalPosition - fVar19) * fVar18);
      uVar11 = uVar17;
      uVar15 = uVar14;
      if (((iVar1 != 0) && (uVar11 = uVar9, uVar15 = uVar17, iVar1 != 2)) &&
         (uVar12 = uVar17, uVar15 = uVar14, iVar1 != 1)) goto LAB_03430710;
      pUVar3 = (__this->fields).trans;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_03430898;
      UVar20.fields.x = (undefined4)uVar11;
      UVar20.fields.y = (undefined4)uVar12;
      UVar20.fields.z = (float)uVar15;
      UnityEngine_Transform__set_localPosition(pUVar3,UVar20,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).graphic;
      if (pUVar5 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_03430898;
      uVar4 = (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                        (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
      pSVar7 = (__this->fields).getAlpha;
      if (pSVar7 == (System_Func_float__float__o *)0x0) goto LAB_03430898;
      uVar10 = (*(code *)(pSVar7->fields).super.super.invoke_impl)
                         ((__this->fields)._t_5__2,(pSVar7->fields).super.super.method_code,
                          (pSVar7->fields).super.super.method);
      pUVar5 = (__this->fields).graphic;
      if (pUVar5 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_03430898;
      (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                (uVar4,uVar12,uVar15,uVar10,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
      iVar8 = 1;
    }
    else {
      uVar17 = (ulong)(uint)(__this->fields).localFinalPosition;
      uVar11 = uVar17;
      uVar15 = uVar14;
      if (((iVar1 != 0) && (uVar11 = uVar9, uVar15 = uVar17, iVar1 != 2)) &&
         (uVar12 = uVar17, uVar15 = uVar14, iVar1 != 1)) {
LAB_03430710:
        thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
        __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
        message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7707/*"Invalid Vector3 index!"*/);
        System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
        uVar4 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector3_set_Item__);
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(__this_00,uVar4);
      }
      pUVar3 = (__this->fields).trans;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
LAB_03430898:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      value.fields.x = (undefined4)uVar11;
      value.fields.y = (undefined4)uVar12;
      value.fields.z = (float)uVar15;
      UnityEngine_Transform__set_localPosition(pUVar3,value,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).graphic;
      if (pUVar5 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_03430898;
      uVar4 = (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                        (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
      pSVar7 = (__this->fields).getAlpha;
      if (pSVar7 == (System_Func_float__float__o *)0x0) goto LAB_03430898;
      uVar10 = (*(code *)(pSVar7->fields).super.super.invoke_impl)
                         (0x3f800000,(pSVar7->fields).super.super.method_code,
                          (pSVar7->fields).super.super.method);
      pUVar5 = (__this->fields).graphic;
      if (pUVar5 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_03430898;
      (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                (uVar4,uVar12,uVar15,uVar10,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
      iVar8 = 2;
    }
    ppIVar6 = &(__this->fields).__2__current;
    *ppIVar6 = (Il2CppObject *)0x0;
    thunk_FUN_01c20e04(ppIVar6,0);
    bVar2 = true;
  }
  (__this->fields).__1__state = iVar8;
  return bVar2;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x333089C]
// Nekki.SF2.GUI.Pvp.PlayerSelector.PKBACLLKEEB$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x333089C

Il2CppObject *
Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x33308A4]
// Nekki.SF2.GUI.Pvp.PlayerSelector.PKBACLLKEEB$$System.Collections.IEnumerator.Reset @ RVA 0x33308A4

void Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x33308DC]
// Nekki.SF2.GUI.Pvp.PlayerSelector.PKBACLLKEEB$$System.Collections.IEnumerator.get_Current @ RVA 0x33308DC

Il2CppObject *
Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

