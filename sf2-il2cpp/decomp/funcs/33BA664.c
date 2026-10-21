// Nekki.SF2.GUI.Profile.PerkSubItem$$OnPointerDown @ RVA 0x33BA664

void Nekki_SF2_GUI_Profile_PerkSubItem__OnPointerDown
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  ulong uVar1;
  
  uVar1 = (*(__this->klass->vtable)._65_GetLock.methodPtr)
                    (__this,(__this->klass->vtable)._65_GetLock.method);
  if ((uVar1 & 1) != 0) {
    return;
  }
  SFButton__OnPointerDown((SFButton_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  return;
}

