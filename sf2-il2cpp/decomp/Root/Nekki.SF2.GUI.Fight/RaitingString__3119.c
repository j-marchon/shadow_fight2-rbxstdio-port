// TypeDefIndex 3119
// Namespace: Nekki.SF2.GUI.Fight
// public class RaitingString : MonoBehaviour
// Fields:
//   private LabelAlias _ratingName; // 0x20
//   private LabelAlias _ratingValue; // 0x28
//   private ResolutionImage _iconRating; // 0x30

// ===== private void Awake()  [RVA 0x34CEAC8]
// Nekki.SF2.GUI.Fight.RaitingString$$Awake @ RVA 0x34CEAC8

void Nekki_SF2_GUI_Fight_RaitingString__Awake
               (Nekki_SF2_GUI_Fight_RaitingString_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  
  pNVar1 = (__this->fields)._iconRating;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035ceae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._91_RefreshSprite.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._91_RefreshSprite.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string get_Text()  [RVA 0x34CEAEC]
// Nekki.SF2.GUI.Fight.RaitingString$$get_Text @ RVA 0x34CEAEC

System_String_o *
Nekki_SF2_GUI_Fight_RaitingString__get_Text
          (Nekki_SF2_GUI_Fight_RaitingString_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_0456869b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456869b = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._ratingName;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._ratingName;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035ceb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pNVar3->klass->vtable)._74_get_text.methodPtr)
                         (pNVar3,(pNVar3->klass->vtable)._74_get_text.method);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (System_String_o *)0x0;
}


// ===== public void set_Text(string CJNHFNHJHPE)  [RVA 0x34CEB7C]
// Nekki.SF2.GUI.Fight.RaitingString$$set_Text @ RVA 0x34CEB7C

void Nekki_SF2_GUI_Fight_RaitingString__set_Text
               (Nekki_SF2_GUI_Fight_RaitingString_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_0456869c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456869c = 1;
  }
  pNVar2 = (__this->fields)._ratingName;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._ratingName;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035cec04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,CJNHFNHJHPE,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public string get_Value()  [RVA 0x34CEC1C]
// Nekki.SF2.GUI.Fight.RaitingString$$get_Value @ RVA 0x34CEC1C

System_String_o *
Nekki_SF2_GUI_Fight_RaitingString__get_Value
          (Nekki_SF2_GUI_Fight_RaitingString_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_0456869d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456869d = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._ratingValue;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._ratingValue;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035cec94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pNVar3->klass->vtable)._74_get_text.methodPtr)
                         (pNVar3,(pNVar3->klass->vtable)._74_get_text.method);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (System_String_o *)0x0;
}


// ===== public void set_Value(string CJNHFNHJHPE)  [RVA 0x34CECAC]
// Nekki.SF2.GUI.Fight.RaitingString$$set_Value @ RVA 0x34CECAC

void Nekki_SF2_GUI_Fight_RaitingString__set_Value
               (Nekki_SF2_GUI_Fight_RaitingString_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_0456869e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456869e = 1;
  }
  pNVar2 = (__this->fields)._ratingValue;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._ratingValue;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035ced34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,CJNHFNHJHPE,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void .ctor()  [RVA 0x34CED4C]
// Nekki.SF2.GUI.Fight.RaitingString$$.ctor @ RVA 0x34CED4C

void Nekki_SF2_GUI_Fight_RaitingString___ctor
               (Nekki_SF2_GUI_Fight_RaitingString_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

