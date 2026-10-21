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

