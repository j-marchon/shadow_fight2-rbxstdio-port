// TypeDefIndex 675
// Namespace: 
// [CompilerGenerated]
// private sealed class SimpleScroll.NLGHFAKLCEI : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public float duration; // 0x20
//   public Ease ease; // 0x24
//   public SimpleScroll <>4__this; // 0x28
//   public Vector2 offset; // 0x30
//   private float <time>5__2; // 0x38
//   private WaitForSeconds <delay>5__3; // 0x40
//   private float <factor1>5__4; // 0x48

// ===== public void .ctor(int <>1__state)  [RVA 0x3029D18]
// Nekki.SF2.GUI.SimpleScroll.NLGHFAKLCEI$$.ctor @ RVA 0x3029D18

void Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI___ctor
               (Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x302F4EC]
// Nekki.SF2.GUI.SimpleScroll.NLGHFAKLCEI$$System.IDisposable.Dispose @ RVA 0x302F4EC

void Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI__System_IDisposable_Dispose
               (Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x302F4F0]
// Nekki.SF2.GUI.SimpleScroll.NLGHFAKLCEI$$MoveNext @ RVA 0x302F4F0

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI__MoveNext
               (Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  UnityEngine_WaitForSeconds_o **ppUVar3;
  UnityEngine_RectTransform_o *__this_02;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04565ceb & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04565ceb = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    fVar4 = (__this->fields)._time_5__2;
    (__this->fields).__1__state = -1;
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar6 = (__this->fields).duration;
    fVar4 = fVar4 + fVar5;
    (__this->fields)._time_5__2 = fVar4;
    if (fVar6 < fVar4) {
      (__this->fields)._time_5__2 = fVar6;
      fVar4 = fVar6;
    }
    fVar4 = NACOPMMCDPO__BCPFPDPICCE(fVar4 / fVar6,(__this->fields).ease,(MethodInfo *)0x0);
    if ((__this_01 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
       (__this_02 = (__this_01->fields).super.m_Content,
       __this_02 == (UnityEngine_RectTransform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar4 = fVar4 - (__this->fields)._factor1_5__4;
    UVar7 = UnityEngine_RectTransform__get_anchoredPosition(__this_02,(MethodInfo *)0x0);
    value.fields.x = UVar7.fields.x + fVar4 * (__this->fields).offset.fields.x;
    value.fields.y = UVar7.fields.y + fVar4 * (__this->fields).offset.fields.y;
    UnityEngine_RectTransform__set_anchoredPosition(__this_02,value,(MethodInfo *)0x0);
    *(undefined2 *)&(__this_01->fields).NMIHOKCDLMP = 2;
    fVar4 = (__this->fields)._time_5__2;
    fVar5 = (__this->fields).duration;
    if (fVar5 <= fVar4) {
      Nekki_SF2_GUI_SimpleScroll__GFLOBMPEFEI(__this_01,method_00);
      return false;
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields)._time_5__2 = 0.0;
    (__this->fields).__1__state = -1;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo,method);
    UnityEngine_WaitForSeconds___ctor(__this_00,0.0,(MethodInfo *)0x0);
    ppUVar3 = &(__this->fields)._delay_5__3;
    *ppUVar3 = __this_00;
    thunk_FUN_01c20e04(ppUVar3,__this_00);
    fVar4 = (__this->fields)._time_5__2;
    fVar5 = (__this->fields).duration;
  }
  fVar4 = NACOPMMCDPO__BCPFPDPICCE(fVar4 / fVar5,(__this->fields).ease,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields).__2__current;
  *ppIVar2 = (Il2CppObject *)(__this->fields)._delay_5__3;
  (__this->fields)._factor1_5__4 = fVar4;
  thunk_FUN_01c20e04(ppIVar2);
  (__this->fields).__1__state = 1;
  return true;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x302F668]
// Nekki.SF2.GUI.SimpleScroll.NLGHFAKLCEI$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x302F668

Il2CppObject *
Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x302F670]
// Nekki.SF2.GUI.SimpleScroll.NLGHFAKLCEI$$System.Collections.IEnumerator.Reset @ RVA 0x302F670

void Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x302F6A8]
// Nekki.SF2.GUI.SimpleScroll.NLGHFAKLCEI$$System.Collections.IEnumerator.get_Current @ RVA 0x302F6A8

Il2CppObject *
Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_SimpleScroll_NLGHFAKLCEI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

