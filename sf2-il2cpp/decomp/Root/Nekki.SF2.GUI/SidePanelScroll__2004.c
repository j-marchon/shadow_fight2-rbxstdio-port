// TypeDefIndex 2004
// Namespace: Nekki.SF2.GUI
// public class SidePanelScroll : ScrollRect
// Fields:
//   private Action BACMKCAPKEL; // 0x130
//   public bool IgnoreDragging; // 0x138
//   private bool <LDBEGKGOHKI>k__BackingField; // 0x139
//   private PointerEventData JNFBDGALDJJ; // 0x140
//   public SidePanelScroll.ScrollDragEvent onScrollDragEnd; // 0x148
//   public SidePanelScroll.ScrollDragEvent onScrollDragBegin; // 0x150

// ===== private void LFGFIEJACMO(bool CJNHFNHJHPE)  [RVA 0x32947D0]
// Nekki.SF2.GUI.SidePanelScroll$$LFGFIEJACMO @ RVA 0x32947D0

void Nekki_SF2_GUI_SidePanelScroll__LFGFIEJACMO
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  *(bool *)((long)&(__this->fields).JNFBDGALDJJ + 1) = CJNHFNHJHPE;
  return;
}


// ===== public override void OnBeginDrag(PointerEventData IMMNELPBGIF)  [RVA 0x32947DC]
// Nekki.SF2.GUI.SidePanelScroll$$OnBeginDrag @ RVA 0x32947DC

void Nekki_SF2_GUI_SidePanelScroll__OnBeginDrag
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *IMMNELPBGIF,MethodInfo *method)

{
  long lVar1;
  
  if ((DAT_04567354 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<PointerEventData>_Invoke__);
    DAT_04567354 = 1;
  }
  if (*(char *)&(__this->fields).JNFBDGALDJJ == '\0') {
    *(undefined1 *)((long)&(__this->fields).JNFBDGALDJJ + 1) = 1;
    (__this->fields).onScrollDragEnd =
         (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)IMMNELPBGIF;
    thunk_FUN_01c20e04(&(__this->fields).onScrollDragEnd,IMMNELPBGIF);
    UnityEngine_UI_ScrollRect__OnBeginDrag
              ((UnityEngine_UI_ScrollRect_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
    if (__this[1].klass != (Nekki_SF2_GUI_SidePanelScroll_c *)0x0) {
      UnityEngine_Events_UnityEvent<object>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this[1].klass,(Il2CppObject *)IMMNELPBGIF,
                 Method_UnityEngine_Events_UnityEvent<PointerEventData>_Invoke__);
      return;
    }
  }
  else {
    (__this->fields).onScrollDragEnd = (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)0x0;
    thunk_FUN_01c20e04(&(__this->fields).onScrollDragEnd,0);
    lVar1 = *(long *)&(__this->fields).IgnoreDragging;
    *(undefined1 *)((long)&(__this->fields).JNFBDGALDJJ + 1) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03394844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnDrag(PointerEventData IMMNELPBGIF)  [RVA 0x3294898]
// Nekki.SF2.GUI.SidePanelScroll$$OnDrag @ RVA 0x3294898

void Nekki_SF2_GUI_SidePanelScroll__OnDrag
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *IMMNELPBGIF,MethodInfo *method)

{
  Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o **ppNVar1;
  Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *pNVar2;
  
  if (*(char *)&(__this->fields).JNFBDGALDJJ == '\0') {
    *(undefined1 *)((long)&(__this->fields).JNFBDGALDJJ + 1) = 1;
    (__this->fields).onScrollDragEnd =
         (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)IMMNELPBGIF;
    thunk_FUN_01c20e04(&(__this->fields).onScrollDragEnd,IMMNELPBGIF);
    UnityEngine_UI_ScrollRect__OnDrag
              ((UnityEngine_UI_ScrollRect_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
    return;
  }
  if (*(char *)((long)&(__this->fields).JNFBDGALDJJ + 1) != '\0') {
    pNVar2 = (__this->fields).onScrollDragEnd;
    ppNVar1 = &(__this->fields).onScrollDragEnd;
    if (pNVar2 == (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)0x0) {
      *ppNVar1 = (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)IMMNELPBGIF;
      thunk_FUN_01c20e04(ppNVar1,IMMNELPBGIF);
      pNVar2 = *ppNVar1;
    }
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pNVar2 != (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)0x0) {
      *(UnityEngine_Vector2_Fields *)((long)&pNVar2[5].fields.super.super.m_PersistentCalls + 4) =
           (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
      pNVar2 = *ppNVar1;
      if (pNVar2 != (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)0x0) {
        pNVar2[6].fields.super.super.field_0x15 = 0;
        (*(__this->klass->vtable)._45_OnEndDrag.methodPtr)
                  (__this,pNVar2,(__this->klass->vtable)._45_OnEndDrag.method);
        *(undefined1 *)((long)&(__this->fields).JNFBDGALDJJ + 1) = 0;
        goto LAB_03394940;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_03394940:
  (__this->fields).onScrollDragEnd = (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).onScrollDragEnd,0);
  return;
}


// ===== public bool get_IsDragging()  [RVA 0x3294994]
// Nekki.SF2.GUI.SidePanelScroll$$get_IsDragging @ RVA 0x3294994

bool Nekki_SF2_GUI_SidePanelScroll__get_IsDragging
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,MethodInfo *method)

{
  return (bool)*(undefined1 *)((long)&(__this->fields).JNFBDGALDJJ + 1);
}


// ===== public void .ctor()  [RVA 0x329499C]
// Nekki.SF2.GUI.SidePanelScroll$$.ctor @ RVA 0x329499C

void Nekki_SF2_GUI_SidePanelScroll___ctor
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *__this_00;
  Nekki_SF2_GUI_SidePanelScroll_c *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04567355 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SidePanelScroll_<>c_BIEBHEAAMKL__);
    FUN_01bab630(&Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo);
    DAT_04567355 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo->static_fields->__9__15_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo->static_fields->__9__15_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_SidePanelScroll_o *)0x0) {
    *(System_Action_o **)&(__this->fields).IgnoreDragging = pSVar2;
    thunk_FUN_01c20e04(&(__this->fields).IgnoreDragging,pSVar2);
    auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_TypeInfo);
    __this_00 = auVar3._0_8_;
    Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent___ctor(__this_00,auVar3._8_8_);
    (__this->fields).onScrollDragBegin = __this_00;
    thunk_FUN_01c20e04(&(__this->fields).onScrollDragBegin,__this_00);
    auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_TypeInfo);
    __this_01 = auVar3._0_8_;
    Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent___ctor
              ((Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)__this_01,auVar3._8_8_);
    __this[1].klass = __this_01;
    thunk_FUN_01c20e04(__this + 1,__this_01);
    UnityEngine_UI_ScrollRect___ctor((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnIgnored_OnBeginDrag(Action CJNHFNHJHPE)  [RVA 0x3294B30]
// Nekki.SF2.GUI.SidePanelScroll$$add_OnIgnored_OnBeginDrag @ RVA 0x3294B30

void Nekki_SF2_GUI_SidePanelScroll__add_OnIgnored_OnBeginDrag
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *a;
  
  if ((DAT_04567356 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567356 = 1;
  }
  a = *(System_Delegate_o **)&(__this->fields).IgnoreDragging;
  while ((pSVar2 = System_Delegate__Combine(a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar2 = (System_Delegate_o *)FUN_01c07368(&(__this->fields).IgnoreDragging,pSVar2,a);
    bVar1 = a == pSVar2;
    a = pSVar2;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnIgnored_OnBeginDrag(Action CJNHFNHJHPE)  [RVA 0x3294BD0]
// Nekki.SF2.GUI.SidePanelScroll$$remove_OnIgnored_OnBeginDrag @ RVA 0x3294BD0

void Nekki_SF2_GUI_SidePanelScroll__remove_OnIgnored_OnBeginDrag
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *source;
  
  if ((DAT_04567357 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567357 = 1;
  }
  source = *(System_Delegate_o **)&(__this->fields).IgnoreDragging;
  while ((pSVar2 = System_Delegate__Remove
                             (source,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar2 = (System_Delegate_o *)FUN_01c07368(&(__this->fields).IgnoreDragging,pSVar2,source);
    bVar1 = source == pSVar2;
    source = pSVar2;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public override void OnEndDrag(PointerEventData IMMNELPBGIF)  [RVA 0x3294C70]
// Nekki.SF2.GUI.SidePanelScroll$$OnEndDrag @ RVA 0x3294C70

void Nekki_SF2_GUI_SidePanelScroll__OnEndDrag
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *IMMNELPBGIF,MethodInfo *method)

{
  Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *__this_00;
  
  if ((DAT_04567358 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<PointerEventData>_Invoke__);
    DAT_04567358 = 1;
  }
  *(undefined1 *)((long)&(__this->fields).JNFBDGALDJJ + 1) = 0;
  (__this->fields).onScrollDragEnd = (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).onScrollDragEnd,0);
  UnityEngine_UI_ScrollRect__OnEndDrag
            ((UnityEngine_UI_ScrollRect_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  __this_00 = (__this->fields).onScrollDragBegin;
  if (__this_00 != (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)IMMNELPBGIF,
               Method_UnityEngine_Events_UnityEvent<PointerEventData>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

