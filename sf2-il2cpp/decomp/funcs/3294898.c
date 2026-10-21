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

