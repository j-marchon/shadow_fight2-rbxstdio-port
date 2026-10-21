// TypeDefIndex 3140
// Namespace: 
// public abstract class TabView : UIBehaviour
// Fields:
//   public Action<object> OnCloseClickAction; // 0x20

// ===== public virtual void Show()  [RVA 0x34D4A1C]
// TabView$$Show @ RVA 0x34D4A1C

void TabView__Show(TabView_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void Hide()  [RVA 0x34D4A40]
// TabView$$Hide @ RVA 0x34D4A40

void TabView__Hide(TabView_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void .ctor()  [RVA 0x34D4A64]
// TabView$$.ctor @ RVA 0x34D4A64

void TabView___ctor(TabView_o *__this,MethodInfo *method)

{
  System_Action_object__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_object__o *pSVar2;
  
  if ((DAT_045686ce & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_TabView_<>c_HDAOPCEMBJO__);
    FUN_01bab630(&TabView_<>c_TypeInfo);
    DAT_045686ce = 1;
    method = extraout_x1;
  }
  if ((TabView_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(TabView_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = TabView_<>c_TypeInfo->static_fields->__9__8_0;
  if (pSVar2 == (System_Action_object__o *)0x0) {
    if ((TabView_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(TabView_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &TabView_<>c_TypeInfo->static_fields->__9__8_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (TabView_o *)0x0) {
    ppSVar1 = &(__this->fields).OnCloseClickAction;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    UnityEngine_EventSystems_UIBehaviour___ctor
              ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x34D4B5C]
// TabView$$Init @ RVA 0x34D4B5C

void TabView__Init(TabView_o *__this,MethodInfo *method)

{
  return;
}


// ===== public bool get_InFocus()  [RVA 0x34D4B60]
// TabView$$get_InFocus @ RVA 0x34D4B60

bool TabView__get_InFocus(TabView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void KGHLJNMCILN(object IMMNELPBGIF)  [RVA 0x34D4B80]
// TabView$$KGHLJNMCILN @ RVA 0x34D4B80

void TabView__KGHLJNMCILN(TabView_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  System_Action_object__o *pSVar1;
  
  pSVar1 = (__this->fields).OnCloseClickAction;
  if (pSVar1 != (System_Action_object__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035d4b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,IMMNELPBGIF,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

