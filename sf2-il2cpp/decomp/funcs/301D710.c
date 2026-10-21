// Nekki.SF2.GUI.Profile.ItemsController$$SelectBottomSubItem @ RVA 0x301D710

bool Nekki_SF2_GUI_Profile_ItemsController__SelectBottomSubItem
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_ProfileCell_o *AHICPBEJIKJ;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Object_o *y;
  long *plVar3;
  MethodInfo *method_00;
  
  if ((DAT_04565c22 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<ProfileCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c22 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = AKJJAPEHKCG__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (!bVar1) {
    AHICPBEJIKJ = (Nekki_SF2_GUI_Profile_ProfileCell_o *)
                  Nekki_SF2_GUI_Profile_ItemsController__DLHMNFBGOGN<object>
                            (__this,
                             Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<ProfileCell>__
                            );
    while( true ) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) break;
      if (AHICPBEJIKJ == (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) goto LAB_0311d898;
      pUVar2 = (UnityEngine_Object_o *)
               (*AHICPBEJIKJ->klass[1]._1.image)(AHICPBEJIKJ,AHICPBEJIKJ->klass[1]._1.gc_desc);
      y = (UnityEngine_Object_o *)
          (*(__this->klass->vtable)._25_get_CurrentSubItem.methodPtr)
                    (__this,(__this->klass->vtable)._25_get_CurrentSubItem.method);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      method_00 = (MethodInfo *)0x0;
      bVar1 = UnityEngine_Object__op_Inequality(pUVar2,y,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (UnityEngine_Object_o *)
                 (*AHICPBEJIKJ->klass[1]._1.image)(AHICPBEJIKJ,AHICPBEJIKJ->klass[1]._1.gc_desc);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        method_00 = (MethodInfo *)0x0;
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          plVar3 = (long *)(*AHICPBEJIKJ->klass[1]._1.image)
                                     (AHICPBEJIKJ,AHICPBEJIKJ->klass[1]._1.gc_desc);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x4e8))(plVar3,*(undefined8 *)(*plVar3 + 0x4f0));
            return true;
          }
LAB_0311d898:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      AHICPBEJIKJ = Nekki_SF2_GUI_Profile_ItemsController__GetNextCell(__this,AHICPBEJIKJ,method_00)
      ;
    }
  }
  return false;
}

