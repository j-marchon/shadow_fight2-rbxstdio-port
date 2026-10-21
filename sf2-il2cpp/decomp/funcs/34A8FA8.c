// Nekki.SF2.GUI.Profile.UserPerksPanel$$set_CurrentSubItem @ RVA 0x34A8FA8

void Nekki_SF2_GUI_Profile_UserPerksPanel__set_CurrentSubItem
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
               Nekki_SF2_GUI_Profile_SubItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  Nekki_SF2_GUI_Profile_SubItem_o *x;
  Nekki_SF2_GUI_Profile_SubItem_o **ppNVar4;
  
  if ((DAT_04568511 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04568511 = 1;
  }
  ppNVar4 = &(__this->fields).PFKHDCBBDOG;
  *ppNVar4 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppNVar4,CJNHFNHJHPE);
  x = *ppNVar4;
  if (x != (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
    bVar2 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if (bVar2 <= (x->klass->_2).naturalAligment) {
      if ((x->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
        x = (Nekki_SF2_GUI_Profile_SubItem_o *)0x0;
      }
      goto LAB_035a9048;
    }
  }
  x = (Nekki_SF2_GUI_Profile_SubItem_o *)0x0;
LAB_035a9048:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = *(int *)&x[1].fields.super.super.super.m_EnableCalled;
    if (iVar1 != 1) {
      (__this->fields).IGLNJPCAJOD = iVar1;
    }
  }
  return;
}

