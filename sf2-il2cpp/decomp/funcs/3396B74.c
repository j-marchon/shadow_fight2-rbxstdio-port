// Nekki.SF2.GUI.Profile.ProfileScene.JMFBANHHIPM$$MoveNext @ RVA 0x3396B74

bool Nekki_SF2_GUI_Profile_ProfileScene_JMFBANHHIPM__MoveNext
               (Nekki_SF2_GUI_Profile_ProfileScene_JMFBANHHIPM_o *__this,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  Nekki_SF2_GUI_Profile_PerksController_o *pNVar4;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  UnityEngine_WaitForEndOfFrame_o *__this_01;
  UnityEngine_WaitForEndOfFrame_o **ppUVar5;
  Nekki_SF2_GUI_TableView_o *pNVar6;
  Nekki_SF2_GUI_TableViewCell_o *x;
  UnityEngine_Object_o *x_00;
  long *plVar7;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar8;
  Nekki_SF2_GUI_Profile_ProfileScene_o *pNVar9;
  
  if ((DAT_04567c5c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
                    /* try { // try from 03496ba8 to 03596bb3 has its CatchHandler @ 03496ee4 */
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_04567c5c = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03496bc4 to 03596bd3 has its CatchHandler @ 03496ef8 */
  iVar1 = (__this->fields).__1__state;
  pNVar9 = (__this->fields).__4__this;
  if (iVar1 == 2) {
                    /* try { // try from 03496c3c to 03596c4b has its CatchHandler @ 03496ec8 */
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return false;
      }
                    /* try { // try from 03496be4 to 03596bef has its CatchHandler @ 03496ec0 */
      (__this->fields).__1__state = -1;
      if ((pNVar9 != (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) &&
         (pNVar4 = (pNVar9->fields)._PerksController,
         pNVar4 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0)) {
        Nekki_SF2_GUI_Profile_ItemsController__ScrollToFirstCell
                  ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar4,0.5,(MethodInfo *)0x0);
                    /* try { // try from 03496c00 to 03596c0f has its CatchHandler @ 03496ea4 */
        __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                    thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
        UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.5,(MethodInfo *)0x0);
        ppIVar8 = &(__this->fields).__2__current;
                    /* try { // try from 03496c20 to 03596c2b has its CatchHandler @ 03496edc */
        *ppIVar8 = (Il2CppObject *)__this_00;
        thunk_FUN_01c20e04(ppIVar8,__this_00);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto LAB_03496dbc;
    }
    (__this->fields).__1__state = -1;
                    /* try { // try from 03496c5c to 03596c67 has its CatchHandler @ 03496ed4 */
    __this_01 = (UnityEngine_WaitForEndOfFrame_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo,method);
    UnityEngine_WaitForEndOfFrame___ctor(__this_01,(MethodInfo *)0x0);
    ppUVar5 = &(__this->fields)._delay_5__2;
    *ppUVar5 = __this_01;
                    /* try { // try from 03496c78 to 03596c87 has its CatchHandler @ 03496eb8 */
    thunk_FUN_01c20e04(ppUVar5,__this_01);
  }
  if (((pNVar9 != (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) &&
      (pNVar4 = (pNVar9->fields)._PerksController,
      pNVar4 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0)) &&
     (pNVar6 = (pNVar4->fields).super._TableView, pNVar6 != (Nekki_SF2_GUI_TableView_o *)0x0)) {
    bVar3 = Nekki_SF2_GUI_TableView__get_IsMoving(pNVar6,(MethodInfo *)0x0);
                    /* try { // try from 03496c98 to 03596ca3 has its CatchHandler @ 03496e88 */
    if (bVar3) {
      ppIVar8 = &(__this->fields).__2__current;
      *ppIVar8 = (Il2CppObject *)(__this->fields)._delay_5__2;
      thunk_FUN_01c20e04(ppIVar8);
      (__this->fields).__1__state = 2;
      return true;
                    /* try { // try from 03496cb4 to 03596cc3 has its CatchHandler @ 03496ecc */
    }
    pNVar4 = (pNVar9->fields)._PerksController;
    if ((pNVar4 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) &&
       (pNVar6 = (pNVar4->fields).super._TableView, pNVar6 != (Nekki_SF2_GUI_TableView_o *)0x0)) {
                    /* try { // try from 03496cd4 to 03596cdf has its CatchHandler @ 03496ebc */
      x = Nekki_SF2_GUI_TableView__CellForRow(pNVar6,0,(MethodInfo *)0x0);
      if (x != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
                    /* try { // try from 03496cf0 to 03596cff has its CatchHandler @ 03496eec */
        bVar2 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03496d10 to 03596d1b has its CatchHandler @ 03496efc */
        if (((x->klass->_2).naturalAligment < bVar2) ||
           ((x->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(x);
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03496d2c to 03596d3b has its CatchHandler @ 03496e84 */
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (x == (Nekki_SF2_GUI_TableViewCell_o *)0x0) goto LAB_03496dbc;
                    /* try { // try from 03496d4c to 03596d57 has its CatchHandler @ 03496eb4 */
        x_00 = (UnityEngine_Object_o *)(*x->klass[1]._1.image)(x,x->klass[1]._1.gc_desc);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03496d68 to 03596d77 has its CatchHandler @ 03496ef0 */
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
                    /* try { // try from 03496d88 to 03596d93 has its CatchHandler @ 03496ee0 */
          plVar7 = (long *)(*x->klass[1]._1.image)(x,x->klass[1]._1.gc_desc);
          if (plVar7 == (long *)0x0) goto LAB_03496dbc;
                    /* try { // try from 03496da4 to 03596db3 has its CatchHandler @ 03496eb0 */
          (**(code **)(*plVar7 + 0x4e8))(plVar7,*(undefined8 *)(*plVar7 + 0x4f0));
        }
      }
                    /* try { // try from 03496db4 to 03596e53 has its CatchHandler @ 03496448 */
      return false;
    }
  }
LAB_03496dbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

