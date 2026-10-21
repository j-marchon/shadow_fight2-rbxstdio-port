// Nekki.SF2.GUI.Profile.PerksController$$get_LastPosition @ RVA 0x32D0E50

int32_t Nekki_SF2_GUI_Profile_PerksController__get_LastPosition
                  (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567558 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04567558 = 1;
  }
  iVar3 = (__this->fields).IGLNJPCAJOD;
  if (iVar3 != 0) {
    return iVar3;
  }
  x = (UnityEngine_Object_o *)
      (*(__this->klass->vtable)._25_get_CurrentSubItem.methodPtr)
                (__this,(__this->klass->vtable)._25_get_CurrentSubItem.method);
  if (x != (UnityEngine_Object_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (x->klass->_2).naturalAligment) {
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
        x = (UnityEngine_Object_o *)0x0;
      }
      goto LAB_033d0ee4;
    }
  }
  x = (UnityEngine_Object_o *)0x0;
LAB_033d0ee4:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    iVar3 = 2;
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = 2;
    if (*(int *)&x[0x15].monitor != 1) {
      iVar3 = *(int *)&x[0x15].monitor;
    }
  }
  (__this->fields).IGLNJPCAJOD = iVar3;
  return iVar3;
}

