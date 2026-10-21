// TypeDefIndex 2536
// Namespace: 
// [CompilerGenerated]
// private sealed class ENOCEOMBHCH.IJNOHKIDLMN : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public GCAKLDNBADP parameters; // 0x20
//   public InputDevice device; // 0x30
//   public AnimationCurve vibrationCurve; // 0x38
//   private float <t>5__2; // 0x40

// ===== public void .ctor(int <>1__state)  [RVA 0x3392F9C]
// ENOCEOMBHCH.IJNOHKIDLMN$$.ctor @ RVA 0x3392F9C

void ENOCEOMBHCH_IJNOHKIDLMN___ctor
               (ENOCEOMBHCH_IJNOHKIDLMN_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x33930AC]
// ENOCEOMBHCH.IJNOHKIDLMN$$System.IDisposable.Dispose @ RVA 0x33930AC

void ENOCEOMBHCH_IJNOHKIDLMN__System_IDisposable_Dispose
               (ENOCEOMBHCH_IJNOHKIDLMN_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x33930B0]
// ENOCEOMBHCH.IJNOHKIDLMN$$MoveNext @ RVA 0x33930B0

/* WARNING: Type propagation algorithm not settling */

bool ENOCEOMBHCH_IJNOHKIDLMN__MoveNext(ENOCEOMBHCH_IJNOHKIDLMN_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_AnimationCurve_o *__this_00;
  InControl_InputDevice_o *pIVar2;
  Il2CppObject **ppIVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    fVar4 = (__this->fields)._t_5__2;
    (__this->fields).__1__state = -1;
    fVar5 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    fVar6 = (__this->fields).parameters.fields.LFJGFLNMBMC;
    fVar4 = fVar4 + fVar5;
    (__this->fields)._t_5__2 = fVar4;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    fVar6 = (__this->fields).parameters.fields.LFJGFLNMBMC;
    (__this->fields).__1__state = -1;
    if (fVar6 <= 0.0) {
      return false;
    }
    pIVar2 = (__this->fields).device;
    if (pIVar2 == (InControl_InputDevice_o *)0x0) goto LAB_03493190;
    (pIVar2->fields)._VibrationFrequency_k__BackingField =
         (__this->fields).parameters.fields.FJMNKKECPPO;
    (__this->fields)._t_5__2 = 0.0;
    fVar4 = 0.0;
  }
  if (fVar4 <= fVar6) {
    __this_00 = (__this->fields).vibrationCurve;
    if (__this_00 != (UnityEngine_AnimationCurve_o *)0x0) {
      fVar5 = UnityEngine_AnimationCurve__Evaluate(__this_00,fVar4 / fVar6,(MethodInfo *)0x0);
      pIVar2 = (__this->fields).device;
      if (pIVar2 != (InControl_InputDevice_o *)0x0) {
        InControl_InputDevice__Vibrate
                  (pIVar2,fVar5 * (__this->fields).parameters.fields.GPCGAHADKAC,(MethodInfo *)0x0);
        ppIVar3 = &(__this->fields).__2__current;
        *ppIVar3 = (Il2CppObject *)0x0;
        thunk_FUN_01c20e04(ppIVar3,0);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
  }
  else {
    pIVar2 = (__this->fields).device;
    if (pIVar2 != (InControl_InputDevice_o *)0x0) {
      InControl_InputDevice__Vibrate(pIVar2,0.0,(MethodInfo *)0x0);
      return false;
    }
  }
LAB_03493190:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3393194]
// ENOCEOMBHCH.IJNOHKIDLMN$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3393194

Il2CppObject *
ENOCEOMBHCH_IJNOHKIDLMN__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ENOCEOMBHCH_IJNOHKIDLMN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x339319C]
// ENOCEOMBHCH.IJNOHKIDLMN$$System.Collections.IEnumerator.Reset @ RVA 0x339319C

void ENOCEOMBHCH_IJNOHKIDLMN__System_Collections_IEnumerator_Reset
               (ENOCEOMBHCH_IJNOHKIDLMN_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_ENOCEOMBHCH_IJNOHKIDLMN_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x33931D4]
// ENOCEOMBHCH.IJNOHKIDLMN$$System.Collections.IEnumerator.get_Current @ RVA 0x33931D4

Il2CppObject *
ENOCEOMBHCH_IJNOHKIDLMN__System_Collections_IEnumerator_get_Current
          (ENOCEOMBHCH_IJNOHKIDLMN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

