// Nekki.SF2.GUI.Profile.TricksController$$ScrollToItem @ RVA 0x3154E80

bool Nekki_SF2_GUI_Profile_TricksController__ScrollToItem
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,System_String_o *JEPIGCLHAMI,
               float GGMALJLKHHB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t JDEFJPHCNMM;
  int32_t iVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_TableViewCell_o *x;
  long *plVar5;
  
  if ((DAT_0456682e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_0456682e = 1;
  }
  JDEFJPHCNMM = Nekki_SF2_GUI_Profile_TricksController__ILAGLJIOOKB(__this,JEPIGCLHAMI,method);
  if (JDEFJPHCNMM < 0) {
    return false;
  }
  pNVar4 = (__this->fields).super._TableView;
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
    if (iVar3 <= JDEFJPHCNMM) {
      return false;
    }
    pNVar4 = (__this->fields).super._TableView;
    if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(pNVar4,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).super._TableView;
      if ((pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (__this_00 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 != (KELJDKIIHMM_o *)0x0)) {
        x = KELJDKIIHMM__KHGEMIEPBJB(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
        if (x != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
          if (((x->klass->_2).naturalAligment < bVar1) ||
             ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(x);
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((x == (Nekki_SF2_GUI_TableViewCell_o *)0x0) ||
             (plVar5 = (long *)(*x->klass[1]._1.image)(x,x->klass[1]._1.gc_desc),
             plVar5 == (long *)0x0)) goto LAB_03254fd4;
          (**(code **)(*plVar5 + 0x4e8))(plVar5,*(undefined8 *)(*plVar5 + 0x4f0));
        }
        return true;
      }
    }
  }
LAB_03254fd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

