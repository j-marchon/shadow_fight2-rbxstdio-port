// NonDrawingGraphic$$Awake @ RVA 0x33CB148

void NonDrawingGraphic__Awake(NonDrawingGraphic_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567e27 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CanvasRenderer>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567e27 = 1;
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>
                  (pUVar2,Method_UnityEngine_GameObject_GetComponent<CanvasRenderer>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__AddComponent<object>
                (pUVar2,Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

