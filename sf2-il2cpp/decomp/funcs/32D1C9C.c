// Nekki.SF2.GUI.Profile.PerksController.NGLKEAEAKEO$$MoveNext @ RVA 0x32D1C9C

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_Profile_PerksController_NGLKEAEAKEO__MoveNext
               (Nekki_SF2_GUI_Profile_PerksController_NGLKEAEAKEO_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  long *plVar4;
  JLGNBOILFLN_o *pJVar5;
  Il2CppObject **ppIVar6;
  Nekki_SF2_GUI_Profile_PerksController_o *pNVar7;
  Nekki_SF2_GUI_TableViewCell_o *x;
  
  if ((DAT_0456755d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_0456755d = 1;
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return false;
  }
  pNVar7 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((pNVar7 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) &&
     (pNVar3 = (pNVar7->fields).super._TableView, pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0)) {
    bVar2 = Nekki_SF2_GUI_TableView__get_IsMoving(pNVar3,(MethodInfo *)0x0);
    if (bVar2) {
      ppIVar6 = &(__this->fields).__2__current;
      *ppIVar6 = (Il2CppObject *)0x0;
      thunk_FUN_01c20e04(ppIVar6,0);
      (__this->fields).__1__state = 1;
      return true;
    }
    pNVar3 = (pNVar7->fields).super._TableView;
    if (pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      x = (pNVar3->fields)._LDAHBFIIBJJ_k__BackingField;
      if (x != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
        if (((x->klass->_2).naturalAligment < bVar1) ||
           ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(x);
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
      if ((x != (Nekki_SF2_GUI_TableViewCell_o *)0x0) &&
         (plVar4 = x[1].monitor, plVar4 != (long *)0x0)) {
        pJVar5 = (__this->fields).p_perk;
        if ((JLGNBOILFLN_o *)plVar4[0x3c] != pJVar5) {
          plVar4 = (long *)x[1].fields.super.super.super.super.m_CachedPtr;
          if (plVar4 == (long *)0x0) goto LAB_033d1de0;
          if ((JLGNBOILFLN_o *)plVar4[0x3c] != pJVar5) {
            return false;
          }
        }
        (**(code **)(*plVar4 + 0x4e8))(plVar4,*(undefined8 *)(*plVar4 + 0x4f0));
        return false;
      }
    }
  }
LAB_033d1de0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

