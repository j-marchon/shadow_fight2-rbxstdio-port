// TypeDefIndex 2689
// Namespace: 
// [AddComponentMenu("UI/Nekki/NonDrawingGraphic")]
// public class NonDrawingGraphic : MaskableGraphic
// Fields:

// ===== public override void SetMaterialDirty()  [RVA 0x33CB128]
// NonDrawingGraphic$$SetMaterialDirty @ RVA 0x33CB128

void NonDrawingGraphic__SetMaterialDirty(NonDrawingGraphic_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void SetVerticesDirty()  [RVA 0x33CB12C]
// NonDrawingGraphic$$SetVerticesDirty @ RVA 0x33CB12C

void NonDrawingGraphic__SetVerticesDirty(NonDrawingGraphic_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void OnPopulateMesh(VertexHelper OFEMGPECKOG)  [RVA 0x33CB130]
// NonDrawingGraphic$$OnPopulateMesh @ RVA 0x33CB130

void NonDrawingGraphic__OnPopulateMesh
               (NonDrawingGraphic_o *__this,UnityEngine_UI_VertexHelper_o *OFEMGPECKOG,
               MethodInfo *method)

{
  if (OFEMGPECKOG != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(OFEMGPECKOG,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Awake()  [RVA 0x33CB148]
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


// ===== public void .ctor()  [RVA 0x33CB224]
// NonDrawingGraphic$$.ctor @ RVA 0x33CB224

void NonDrawingGraphic___ctor(NonDrawingGraphic_o *__this,MethodInfo *method)

{
  UnityEngine_UI_MaskableGraphic___ctor
            ((UnityEngine_UI_MaskableGraphic_o *)__this,(MethodInfo *)0x0);
  return;
}

