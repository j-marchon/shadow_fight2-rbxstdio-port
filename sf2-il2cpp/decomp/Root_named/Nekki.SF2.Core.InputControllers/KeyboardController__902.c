// TypeDefIndex 902
// Namespace: Nekki.SF2.Core.InputControllers
// public class KeyboardController : MonoBehaviour
// Fields:
//   private Action<KeyCode> AEKEGMAOOHO; // 0x20
//   private Action<KeyCode> AHGJIANNLBP; // 0x28
//   public const int KeyCodeCount = 330;
//   private static KeyboardController CNMHHKAMGPI; // 0x0

// ===== public bool GetKeyUp(KeyCode DEEHPBCLFHC)  [RVA 0x3096EBC]
// Nekki.SF2.Core.InputControllers.KeyboardController$$GetKeyUp @ RVA 0x3096EBC

bool Nekki_SF2_Core_InputControllers_KeyboardController__GetKeyUp
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,int32_t DEEHPBCLFHC,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyUp(DEEHPBCLFHC,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void add_OnKeyDown(Action<KeyCode> CJNHFNHJHPE)  [RVA 0x3096EC8]
// Nekki.SF2.Core.InputControllers.KeyboardController$$add_OnKeyDown @ RVA 0x3096EC8

void Nekki_SF2_Core_InputControllers_KeyboardController__add_OnKeyDown
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,
               System_Action_KeyCode__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_KeyCode__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_KeyCode__o *pSVar5;
  System_Action_KeyCode__o **ppSVar6;
  System_Action_KeyCode__o *a;
  
  if ((DAT_045660e4 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    DAT_045660e4 = 1;
  }
  ppSVar6 = &(__this->fields).AEKEGMAOOHO;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<KeyCode>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<KeyCode>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_KeyCode__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void add_OnKeyUp(Action<KeyCode> CJNHFNHJHPE)  [RVA 0x3096F78]
// Nekki.SF2.Core.InputControllers.KeyboardController$$add_OnKeyUp @ RVA 0x3096F78

void Nekki_SF2_Core_InputControllers_KeyboardController__add_OnKeyUp
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,
               System_Action_KeyCode__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_KeyCode__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_KeyCode__o *pSVar5;
  System_Action_KeyCode__o **ppSVar6;
  System_Action_KeyCode__o *a;
  
  if ((DAT_045660e5 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    DAT_045660e5 = 1;
  }
  ppSVar6 = &(__this->fields).AHGJIANNLBP;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<KeyCode>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<KeyCode>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_KeyCode__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public bool GetKeyDown(KeyCode DEEHPBCLFHC)  [RVA 0x3097028]
// Nekki.SF2.Core.InputControllers.KeyboardController$$GetKeyDown @ RVA 0x3097028

bool Nekki_SF2_Core_InputControllers_KeyboardController__GetKeyDown
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,int32_t DEEHPBCLFHC,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(DEEHPBCLFHC,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public static KeyboardController get_Current()  [RVA 0x3097034]
// Nekki.SF2.Core.InputControllers.KeyboardController$$get_Current @ RVA 0x3097034

Nekki_SF2_Core_InputControllers_KeyboardController_o *
Nekki_SF2_Core_InputControllers_KeyboardController__get_Current(MethodInfo *method)

{
  if ((DAT_045660e6 & 1) == 0) {
    method = (MethodInfo *)
             FUN_01bab630(&Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo);
    DAT_045660e6 = 1;
  }
  Nekki_SF2_Core_InputControllers_KeyboardController__Init(method);
  return Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo->static_fields->CNMHHKAMGPI;
}


// ===== public void remove_OnKeyUp(Action<KeyCode> CJNHFNHJHPE)  [RVA 0x30971A8]
// Nekki.SF2.Core.InputControllers.KeyboardController$$remove_OnKeyUp @ RVA 0x30971A8

void Nekki_SF2_Core_InputControllers_KeyboardController__remove_OnKeyUp
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,
               System_Action_KeyCode__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_KeyCode__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_KeyCode__o *pSVar5;
  System_Action_KeyCode__o **ppSVar6;
  System_Action_KeyCode__o *source;
  
  if ((DAT_045660e7 & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    DAT_045660e7 = 1;
  }
  ppSVar6 = &(__this->fields).AHGJIANNLBP;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<KeyCode>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<KeyCode>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_KeyCode__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public bool GetKey(KeyCode DEEHPBCLFHC)  [RVA 0x3097258]
// Nekki.SF2.Core.InputControllers.KeyboardController$$GetKey @ RVA 0x3097258

bool Nekki_SF2_Core_InputControllers_KeyboardController__GetKey
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,int32_t DEEHPBCLFHC,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKey(DEEHPBCLFHC,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public static bool get_IsInited()  [RVA 0x3097264]
// Nekki.SF2.Core.InputControllers.KeyboardController$$get_IsInited @ RVA 0x3097264

bool Nekki_SF2_Core_InputControllers_KeyboardController__get_IsInited(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *x;
  
  if ((DAT_045660e8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045660e8 = 1;
  }
  x = Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public static void Init()  [RVA 0x3097080]
// Nekki.SF2.Core.InputControllers.KeyboardController$$Init @ RVA 0x3097080

void Nekki_SF2_Core_InputControllers_KeyboardController__Init(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *pNVar2;
  
  if ((DAT_045660e9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<KeyboardController>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15500/*"[KeyboardController]"*/);
    DAT_045660e9 = 1;
  }
  pNVar2 = Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor
              ((UnityEngine_GameObject_o *)target,StringLiteral_15500/*"[KeyboardController]"*/,(MethodInfo *)0x0);
    if (target != (UnityEngine_Object_o *)0x0) {
      pNVar2 = (Nekki_SF2_Core_InputControllers_KeyboardController_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_AddComponent<KeyboardController>__);
      Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo->static_fields->CNMHHKAMGPI =
           pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo->static_fields,
                         pNVar2);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void Update()  [RVA 0x30972DC]
// Nekki.SF2.Core.InputControllers.KeyboardController$$Update @ RVA 0x30972DC

void Nekki_SF2_Core_InputControllers_KeyboardController__Update
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int key;
  System_Action_KeyCode__o *pSVar2;
  
  if (((__this->fields).AEKEGMAOOHO != (System_Action_KeyCode__o *)0x0) ||
     ((__this->fields).AHGJIANNLBP != (System_Action_KeyCode__o *)0x0)) {
    key = 0;
    do {
      bVar1 = UnityEngine_Input__GetKeyDown(key,(MethodInfo *)0x0);
      if ((bVar1) &&
         (pSVar2 = (__this->fields).AEKEGMAOOHO, pSVar2 != (System_Action_KeyCode__o *)0x0)) {
        if (pSVar2 == (System_Action_KeyCode__o *)0x0) goto LAB_031973a0;
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,key,(pSVar2->fields).super.super.method)
        ;
      }
      bVar1 = UnityEngine_Input__GetKeyUp(key,(MethodInfo *)0x0);
      if ((bVar1) &&
         (pSVar2 = (__this->fields).AHGJIANNLBP, pSVar2 != (System_Action_KeyCode__o *)0x0)) {
        if (pSVar2 == (System_Action_KeyCode__o *)0x0) {
LAB_031973a0:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,key,(pSVar2->fields).super.super.method)
        ;
      }
      key = key + 1;
    } while (key != 0x14a);
  }
  return;
}


// ===== public void .ctor()  [RVA 0x30973A4]
// Nekki.SF2.Core.InputControllers.KeyboardController$$.ctor @ RVA 0x30973A4

void Nekki_SF2_Core_InputControllers_KeyboardController___ctor
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void remove_OnKeyDown(Action<KeyCode> CJNHFNHJHPE)  [RVA 0x30973AC]
// Nekki.SF2.Core.InputControllers.KeyboardController$$remove_OnKeyDown @ RVA 0x30973AC

void Nekki_SF2_Core_InputControllers_KeyboardController__remove_OnKeyDown
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,
               System_Action_KeyCode__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_KeyCode__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_KeyCode__o *pSVar5;
  System_Action_KeyCode__o **ppSVar6;
  System_Action_KeyCode__o *source;
  
  if ((DAT_045660ea & 1) == 0) {
    FUN_01bab630(&System_Action<KeyCode>_TypeInfo);
    DAT_045660ea = 1;
  }
  ppSVar6 = &(__this->fields).AEKEGMAOOHO;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<KeyCode>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<KeyCode>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_KeyCode__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void AJHLLFEPMEH()  [RVA 0x30972E0]
// Nekki.SF2.Core.InputControllers.KeyboardController$$AJHLLFEPMEH @ RVA 0x30972E0

void Nekki_SF2_Core_InputControllers_KeyboardController__AJHLLFEPMEH
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int key;
  System_Action_KeyCode__o *pSVar2;
  
  if (((__this->fields).AEKEGMAOOHO != (System_Action_KeyCode__o *)0x0) ||
     ((__this->fields).AHGJIANNLBP != (System_Action_KeyCode__o *)0x0)) {
    key = 0;
    do {
      bVar1 = UnityEngine_Input__GetKeyDown(key,(MethodInfo *)0x0);
      if ((bVar1) &&
         (pSVar2 = (__this->fields).AEKEGMAOOHO, pSVar2 != (System_Action_KeyCode__o *)0x0)) {
        if (pSVar2 == (System_Action_KeyCode__o *)0x0) goto LAB_031973a0;
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,key,(pSVar2->fields).super.super.method)
        ;
      }
      bVar1 = UnityEngine_Input__GetKeyUp(key,(MethodInfo *)0x0);
      if ((bVar1) &&
         (pSVar2 = (__this->fields).AHGJIANNLBP, pSVar2 != (System_Action_KeyCode__o *)0x0)) {
        if (pSVar2 == (System_Action_KeyCode__o *)0x0) {
LAB_031973a0:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,key,(pSVar2->fields).super.super.method)
        ;
      }
      key = key + 1;
    } while (key != 0x14a);
  }
  return;
}

