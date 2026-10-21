// Nekki.SF2.GUI.ItemsScroll$$GFLOBMPEFEI @ RVA 0x30D1470

void Nekki_SF2_GUI_ItemsScroll__GFLOBMPEFEI(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  (*(__this->klass->vtable)._44_StopMovement.methodPtr)
            (__this,(__this->klass->vtable)._44_StopMovement.method);
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).onScrollEnd;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

