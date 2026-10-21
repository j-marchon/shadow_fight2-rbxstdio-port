// Nekki.SF2.GUI.Profile.AchievementsController$$EHPMHOHOPGA @ RVA 0x31253BC

void Nekki_SF2_GUI_Profile_AchievementsController__EHPMHOHOPGA
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
               Nekki_SF2_GUI_TableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o *__this_00;
  Nekki_SF2_GUI_TableViewCell_c *pNVar4;
  
  if ((DAT_04566656 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ProfileCell>_Invoke__);
    DAT_04566656 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  Nekki_SF2_GUI_Profile_ItemsController__EHPMHOHOPGA
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,AHICPBEJIKJ,(MethodInfo *)0x0);
  if (AHICPBEJIKJ != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
    pNVar4 = AHICPBEJIKJ->klass;
    bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
    if (((pNVar4->_2).naturalAligment < bVar1) ||
       ((pNVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHICPBEJIKJ);
    }
    plVar3 = (long *)(*pNVar4[1]._1.image)(AHICPBEJIKJ,pNVar4[1]._1.gc_desc);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x4e8))(plVar3,*(undefined8 *)(*plVar3 + 0x4f0));
      __this_00 = (__this->fields)._OnCellSelected;
      if (__this_00 != (Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)AHICPBEJIKJ,
                   Method_UnityEngine_Events_UnityEvent<ProfileCell>_Invoke__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

