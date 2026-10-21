// TypeDefIndex 2328
// Namespace: 
// [CompilerGenerated]
// private sealed class HABIFHOHHOF.IFJOCBLPEFD
// Fields:
//   public CloseButton button; // 0x10

// ===== internal void OGIICMEPDKL(Action<object> h)  [RVA 0x331F8A8]
// HABIFHOHHOF.IFJOCBLPEFD$$OGIICMEPDKL @ RVA 0x331F8A8

void HABIFHOHHOF_IFJOCBLPEFD__OGIICMEPDKL
               (HABIFHOHHOF_IFJOCBLPEFD_o *__this,System_Action_object__o *h,MethodInfo *method)

{
  CloseButton_o *__this_00;
  
  __this_00 = (__this->fields).button;
  if (__this_00 != (CloseButton_o *)0x0) {
    CloseButton__remove_ClickAction(__this_00,h,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x331F8A0]
// HABIFHOHHOF.IFJOCBLPEFD$$.ctor @ RVA 0x331F8A0

void HABIFHOHHOF_IFJOCBLPEFD___ctor(HABIFHOHHOF_IFJOCBLPEFD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void PEBEFILGAGG(Action<object> h)  [RVA 0x331F8C4]
// HABIFHOHHOF.IFJOCBLPEFD$$PEBEFILGAGG @ RVA 0x331F8C4

void HABIFHOHHOF_IFJOCBLPEFD__PEBEFILGAGG
               (HABIFHOHHOF_IFJOCBLPEFD_o *__this,System_Action_object__o *h,MethodInfo *method)

{
  CloseButton_o *__this_00;
  
  __this_00 = (__this->fields).button;
  if (__this_00 != (CloseButton_o *)0x0) {
    CloseButton__add_ClickAction(__this_00,h,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

