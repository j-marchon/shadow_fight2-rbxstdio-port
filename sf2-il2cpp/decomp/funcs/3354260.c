// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$MLIDFAMHJKI @ RVA 0x3354260

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__MLIDFAMHJKI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool_conflict bVar5;
  bool bVar6;
  MethodInfo *extraout_x1;
  BHEDGAKGKPO_StaticFields *pBVar7;
  UnityEngine_UI_Image_o *pUVar8;
  
  if ((DAT_04567a31 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567a31 = 1;
    method = extraout_x1;
  }
  pUVar8 = (__this->fields)._background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar8 = (__this->fields)._background;
    bVar5 = (__this->fields).DGNFDMNJKJM;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
      bVar6 = bVar5 != false;
      lVar1 = 0xe4;
      if (bVar6) {
        lVar1 = 0xd4;
      }
      lVar2 = 0xe0;
      if (bVar6) {
        lVar2 = 0xd0;
      }
      lVar3 = 0xdc;
      if (bVar6) {
        lVar3 = 0xcc;
      }
      pBVar7 = BHEDGAKGKPO_TypeInfo->static_fields;
      lVar4 = 0xd8;
      if (bVar6) {
        lVar4 = 200;
      }
                    /* WARNING: Could not recover jumptable at 0x03454350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                (*(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar4),
                 *(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar3),
                 *(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar2),
                 *(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar1),pUVar8,
                 (pUVar8->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

