// TypeDefIndex 144
// Namespace: Nekki.SF2.GUI.Profile
// public abstract class ItemsController : MonoBehaviour, JEIEEMKCNOJ, CPFMNHBNOEN, MLIIECFHJAM
// Fields:
//   protected TableView _TableView; // 0x20
//   protected GameObject _CellPrefab; // 0x28
//   protected int AINAHFKFDKG; // 0x30
//   private bool KCBIPKCIGMO; // 0x34
//   protected SubItem PFKHDCBBDOG; // 0x38

// ===== public TableView get_TableView()  [RVA 0x301D124]
// Nekki.SF2.GUI.Profile.ItemsController$$get_TableView @ RVA 0x301D124

Nekki_SF2_GUI_TableView_o *
Nekki_SF2_GUI_Profile_ItemsController__get_TableView
          (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  return (__this->fields)._TableView;
}


// ===== public void ScrollToLastCell(float GGMALJLKHHB = 0)  [RVA 0x301D12C]
// Nekki.SF2.GUI.Profile.ItemsController$$ScrollToLastCell @ RVA 0x301D12C

void Nekki_SF2_GUI_Profile_ItemsController__ScrollToLastCell
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,float GGMALJLKHHB,MethodInfo *method
               )

{
  int32_t iVar1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,iVar1 + -1,GGMALJLKHHB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void TableViewDoubleClickCellForRow(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x301D16C]
// Nekki.SF2.GUI.Profile.ItemsController$$TableViewDoubleClickCellForRow @ RVA 0x301D16C

void Nekki_SF2_GUI_Profile_ItemsController__TableViewDoubleClickCellForRow
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
               Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  return;
}


// ===== public bool get_IsTopSubItemSelected()  [RVA 0x301D170]
// Nekki.SF2.GUI.Profile.ItemsController$$get_IsTopSubItemSelected @ RVA 0x301D170

bool Nekki_SF2_GUI_Profile_ItemsController__get_IsTopSubItemSelected
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  Nekki_SF2_GUI_TableViewCell_o *pNVar3;
  
  if ((DAT_04565c1f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c1f = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._TableView;
  if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    pNVar3 = (pNVar2->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._TableView;
      if ((pNVar2 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (pNVar3 = (pNVar2->fields)._LDAHBFIIBJJ_k__BackingField,
         pNVar3 == (Nekki_SF2_GUI_TableViewCell_o *)0x0)) goto LAB_0311d20c;
      if ((pNVar3->fields).FIMCNHGPCNA == 0) {
        return true;
      }
    }
    return (__this->fields).AINAHFKFDKG == 0;
  }
LAB_0311d20c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_IsSelected(bool CJNHFNHJHPE)  [RVA 0x301D210]
// Nekki.SF2.GUI.Profile.ItemsController$$set_IsSelected @ RVA 0x301D210

void Nekki_SF2_GUI_Profile_ItemsController__set_IsSelected
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KCBIPKCIGMO = CJNHFNHJHPE;
  return;
}


// ===== public virtual TableViewCell CellForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x301D21C]
// Nekki.SF2.GUI.Profile.ItemsController$$CellForRowInTableView @ RVA 0x301D21C

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_ItemsController__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_ItemsController_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  return (Nekki_SF2_GUI_TableViewCell_o *)0x0;
}


// ===== public bool get_IsSelectionCooldown()  [RVA 0x301D224]
// Nekki.SF2.GUI.Profile.ItemsController$$get_IsSelectionCooldown @ RVA 0x301D224

bool Nekki_SF2_GUI_Profile_ItemsController__get_IsSelectionCooldown
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  float fVar2;
  float fVar3;
  
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    fVar2 = Nekki_SF2_GUI_TableView__get_DistanceToTarget(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._TableView;
    if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      fVar3 = Nekki_SF2_GUI_TableView__CurrentRowSize(pNVar1,(MethodInfo *)0x0);
      return fVar3 * 0.45 < fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual SubItem get_CurrentSubItem()  [RVA 0x301D278]
// Nekki.SF2.GUI.Profile.ItemsController$$get_CurrentSubItem @ RVA 0x301D278

Nekki_SF2_GUI_Profile_SubItem_o *
Nekki_SF2_GUI_Profile_ItemsController__get_CurrentSubItem
          (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_TableViewCell_c *pNVar4;
  Nekki_SF2_GUI_Profile_SubItem_o **ppNVar5;
  Nekki_SF2_GUI_Profile_SubItem_o *pNVar6;
  Nekki_SF2_GUI_TableViewCell_o *pNVar7;
  
  if ((DAT_04565c20 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_04565c20 = 1;
    method = extraout_x1;
  }
  ppNVar5 = &(__this->fields).PFKHDCBBDOG;
  pNVar6 = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar3 = (__this->fields)._TableView;
    if (pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) {
LAB_0311d38c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar7 = (pNVar3->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      pNVar3 = (__this->fields)._TableView;
      if ((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (pNVar7 = (pNVar3->fields)._LDAHBFIIBJJ_k__BackingField,
         pNVar7 == (Nekki_SF2_GUI_TableViewCell_o *)0x0)) goto LAB_0311d38c;
      pNVar4 = pNVar7->klass;
      bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
      if (((pNVar4->_2).naturalAligment < bVar1) ||
         ((pNVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      pNVar6 = (Nekki_SF2_GUI_Profile_SubItem_o *)(*pNVar4[1]._1.image)(pNVar7,pNVar4[1]._1.gc_desc)
      ;
      *ppNVar5 = pNVar6;
      thunk_FUN_01c20e04(ppNVar5,pNVar6);
    }
  }
  return *ppNVar5;
}


// ===== public virtual void TableViewDidHighlightCellForRow(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x301D394]
// Nekki.SF2.GUI.Profile.ItemsController$$TableViewDidHighlightCellForRow @ RVA 0x301D394

void Nekki_SF2_GUI_Profile_ItemsController__TableViewDidHighlightCellForRow
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
               Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  return;
}


// ===== public virtual bool get_IsRightSubItemSelected()  [RVA 0x301D398]
// Nekki.SF2.GUI.Profile.ItemsController$$get_IsRightSubItemSelected @ RVA 0x301D398

bool Nekki_SF2_GUI_Profile_ItemsController__get_IsRightSubItemSelected
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public virtual bool SelectTopSubItem()  [RVA 0x301D3A0]
// Nekki.SF2.GUI.Profile.ItemsController$$SelectTopSubItem @ RVA 0x301D3A0

bool Nekki_SF2_GUI_Profile_ItemsController__SelectTopSubItem
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_ProfileCell_o *AHICPBEJIKJ;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Object_o *y;
  long *plVar3;
  MethodInfo *method_00;
  
  if ((DAT_04565c21 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<ProfileCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c21 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
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
      if (AHICPBEJIKJ == (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) goto LAB_0311d528;
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
LAB_0311d528:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      AHICPBEJIKJ = Nekki_SF2_GUI_Profile_ItemsController__GetPrevCell(__this,AHICPBEJIKJ,method_00)
      ;
    }
  }
  return false;
}


// ===== public virtual void set_CurrentSubItem(SubItem CJNHFNHJHPE)  [RVA 0x301D61C]
// Nekki.SF2.GUI.Profile.ItemsController$$set_CurrentSubItem @ RVA 0x301D61C

void Nekki_SF2_GUI_Profile_ItemsController__set_CurrentSubItem
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
               Nekki_SF2_GUI_Profile_SubItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PFKHDCBBDOG = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected virtual void EHPMHOHOPGA(TableViewCell AHICPBEJIKJ)  [RVA 0x301D624]
// Nekki.SF2.GUI.Profile.ItemsController$$EHPMHOHOPGA @ RVA 0x301D624

void Nekki_SF2_GUI_Profile_ItemsController__EHPMHOHOPGA
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
               Nekki_SF2_GUI_TableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  if (AHICPBEJIKJ != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
    (__this->fields).AINAHFKFDKG = (AHICPBEJIKJ->fields).FIMCNHGPCNA;
    Nekki_SF2_GUI_Profile_ItemsController__OCJPPKAPACH(__this,(MethodInfo *)AHICPBEJIKJ);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateSelection()  [RVA 0x301D6E0]
// Nekki.SF2.GUI.Profile.ItemsController$$UpdateSelection @ RVA 0x301D6E0

void Nekki_SF2_GUI_Profile_ItemsController__UpdateSelection
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0311d700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._31_EHPMHOHOPGA.methodPtr)
              (__this,(pNVar1->fields)._LDAHBFIIBJJ_k__BackingField,
               (__this->klass->vtable)._31_EHPMHOHOPGA.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual int NumberOfRowsInTableView(TableView GECPJPBIBPN)  [RVA 0x301D708]
// Nekki.SF2.GUI.Profile.ItemsController$$NumberOfRowsInTableView @ RVA 0x301D708

int32_t Nekki_SF2_GUI_Profile_ItemsController__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  return 0;
}


// ===== public virtual bool SelectBottomSubItem()  [RVA 0x301D710]
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
  bVar1 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
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


// ===== public bool ScrollToNextCell(float GGMALJLKHHB = 0)  [RVA 0x301D9A4]
// Nekki.SF2.GUI.Profile.ItemsController$$ScrollToNextCell @ RVA 0x301D9A4

bool Nekki_SF2_GUI_Profile_ItemsController__ScrollToNextCell
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,float GGMALJLKHHB,MethodInfo *method
               )

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  Nekki_SF2_GUI_TableViewCell_o *x;
  
  if ((DAT_04565c23 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c23 = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields)._TableView;
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    x = (pNVar4->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
LAB_0311da50:
      return (bool)(~bVar2 & 1);
    }
    pNVar4 = (__this->fields)._TableView;
    if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      iVar1 = (__this->fields).AINAHFKFDKG;
      iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._TableView;
      if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        iVar1 = iVar1 + 1;
        if (iVar3 + -1 <= iVar1) {
          iVar1 = iVar3 + -1;
        }
        Nekki_SF2_GUI_TableView__ScrollToCell(pNVar4,iVar1,GGMALJLKHHB,(MethodInfo *)0x0);
        goto LAB_0311da50;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual bool get_IsLeftSubItemSelected()  [RVA 0x301DA6C]
// Nekki.SF2.GUI.Profile.ItemsController$$get_IsLeftSubItemSelected @ RVA 0x301DA6C

bool Nekki_SF2_GUI_Profile_ItemsController__get_IsLeftSubItemSelected
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public virtual bool SelectLeftSubItem()  [RVA 0x301DA74]
// Nekki.SF2.GUI.Profile.ItemsController$$SelectLeftSubItem @ RVA 0x301DA74

bool Nekki_SF2_GUI_Profile_ItemsController__SelectLeftSubItem
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public virtual void Init()  [RVA 0x301DA7C]
// Nekki.SF2.GUI.Profile.ItemsController$$Init @ RVA 0x301DA7C

void Nekki_SF2_GUI_Profile_ItemsController__Init
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_01;
  
  if ((DAT_04565c24 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
    DAT_04565c24 = 1;
  }
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    (pNVar1->fields).KFCHMBGIPJK = (__this->fields)._CellPrefab;
    thunk_FUN_01c20e04();
    pNVar1 = (__this->fields)._TableView;
    if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__Init
                (pNVar1,(CPFMNHBNOEN_o *)__this,(MLIIECFHJAM_o *)__this,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._TableView;
      if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        __this_01 = (pNVar1->fields).onSelectCell;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_01 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call,
                     Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
          Nekki_SF2_GUI_Profile_ItemsController__UpdateTable(__this,method_00);
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void .ctor()  [RVA 0x301DB90]
// Nekki.SF2.GUI.Profile.ItemsController$$.ctor @ RVA 0x301DB90

void Nekki_SF2_GUI_Profile_ItemsController___ctor
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void UpdateCellsState()  [RVA 0x301DB98]
// Nekki.SF2.GUI.Profile.ItemsController$$UpdateCellsState @ RVA 0x301DB98

void Nekki_SF2_GUI_Profile_ItemsController__UpdateCellsState
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  undefined8 uVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  KELJDKIIHMM_o *pKVar5;
  Il2CppClass *pIVar6;
  undefined1 auVar7 [16];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_78;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_04565c25 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_TableViewCell>_get_Value__);
    auVar7 = FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_04565c25 = 1;
  }
  uVar3 = auVar7._0_8_;
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  pNVar4 = (__this->fields)._TableView;
  if (((pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
      (pKVar5 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField, pKVar5 != (KELJDKIIHMM_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  (pKVar5->fields)._IKBFEDMFOMJ_k__BackingField, uVar3 = 0,
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
              (&local_78,__this_00,
               Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
    local_50.fields._version = local_78.fields._version;
    local_50.fields._index = local_78.fields._index;
    local_50.fields._dictionary = local_78.fields._dictionary;
    local_50.fields._current.fields.value = local_78.fields._current.fields.value;
    local_50.fields._current.fields.key = local_78.fields._current.fields.key;
    local_50.fields._getEnumeratorRetType = local_78.fields._getEnumeratorRetType;
    local_50.fields._36_4_ = local_78.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                        );
      if (!bVar2) {
        System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
                  );
        return;
      }
      if (local_50.fields._current.fields.value == (Il2CppObject *)0x0) break;
      pIVar6 = (local_50.fields._current.fields.value)->klass;
      bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
      if (((pIVar6->_2).naturalAligment < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      (*pIVar6->vtable[0x10].methodPtr)
                (local_50.fields._current.fields.value,pIVar6->vtable[0x10].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar3,auVar7._8_8_);
}


// ===== protected void OCJPPKAPACH()  [RVA 0x301D640]
// Nekki.SF2.GUI.Profile.ItemsController$$OCJPPKAPACH @ RVA 0x301D640

void Nekki_SF2_GUI_Profile_ItemsController__OCJPPKAPACH
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  int32_t DPJIDNBJIBG;
  System_String_o *KGLJICLJHEL;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  GameUtils_ACENADIGHII_o *__this_01;
  
  if ((DAT_04565c26 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04565c26 = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  __this_01 = GameUtils_TypeInfo->static_fields->HBBGCIHPDFG;
  KGLJICLJHEL = (System_String_o *)
                (*(__this->klass->vtable)._35_unknown.methodPtr)
                          (__this,(__this->klass->vtable)._35_unknown.method);
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    DPJIDNBJIBG = Nekki_SF2_GUI_TableView__GetCurrentCellRow(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (GameUtils_ACENADIGHII_o *)0x0) {
      GameUtils_ACENADIGHII__GOBKBHNCANP(__this_01,KGLJICLJHEL,DPJIDNBJIBG,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ProfileCell GetNextCell(ProfileCell AHICPBEJIKJ)  [RVA 0x301D89C]
// Nekki.SF2.GUI.Profile.ItemsController$$GetNextCell @ RVA 0x301D89C

Nekki_SF2_GUI_Profile_ProfileCell_o *
Nekki_SF2_GUI_Profile_ItemsController__GetNextCell
          (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
          Nekki_SF2_GUI_Profile_ProfileCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  int DPJIDNBJIBG;
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_Profile_ProfileCell_o *pNVar4;
  Nekki_SF2_GUI_TableView_o *pNVar5;
  KELJDKIIHMM_o *__this_00;
  
  if ((DAT_04565c27 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_04565c27 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pNVar4 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0;
  if (!bVar2) {
    if ((AHICPBEJIKJ == (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) ||
       (pNVar5 = (__this->fields)._TableView, pNVar5 == (Nekki_SF2_GUI_TableView_o *)0x0)) {
LAB_0311d99c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    DPJIDNBJIBG = (AHICPBEJIKJ->fields).super.FIMCNHGPCNA + 1;
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar5,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0;
    if (DPJIDNBJIBG < iVar3) {
      pNVar5 = (__this->fields)._TableView;
      if ((pNVar5 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar5->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_0311d99c;
      pNVar4 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)
               KELJDKIIHMM__KHGEMIEPBJB(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
        if (((pNVar4->klass->_2).naturalAligment < bVar1) ||
           ((pNVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
  return pNVar4;
}


// ===== public void UpdateTable()  [RVA 0x301DB60]
// Nekki.SF2.GUI.Profile.ItemsController$$UpdateTable @ RVA 0x301DB60

void Nekki_SF2_GUI_Profile_ItemsController__UpdateTable
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  (*(__this->klass->vtable)._26_unknown.methodPtr)
            (__this,(__this->klass->vtable)._26_unknown.method);
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ReloadData(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToFirstCell(float GGMALJLKHHB = 0)  [RVA 0x301DD54]
// Nekki.SF2.GUI.Profile.ItemsController$$ScrollToFirstCell @ RVA 0x301DD54

void Nekki_SF2_GUI_Profile_ItemsController__ScrollToFirstCell
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,float GGMALJLKHHB,MethodInfo *method
               )

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,0,GGMALJLKHHB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsSelected()  [RVA 0x301DD74]
// Nekki.SF2.GUI.Profile.ItemsController$$get_IsSelected @ RVA 0x301DD74

bool Nekki_SF2_GUI_Profile_ItemsController__get_IsSelected
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  return (__this->fields).KCBIPKCIGMO;
}


// ===== public virtual bool SelectRightSubItem()  [RVA 0x301DD7C]
// Nekki.SF2.GUI.Profile.ItemsController$$SelectRightSubItem @ RVA 0x301DD7C

bool Nekki_SF2_GUI_Profile_ItemsController__SelectRightSubItem
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public virtual void MarkItemsAsViewed()  [RVA 0x301DD84]
// Nekki.SF2.GUI.Profile.ItemsController$$MarkItemsAsViewed @ RVA 0x301DD84

void Nekki_SF2_GUI_Profile_ItemsController__MarkItemsAsViewed
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual void TableViewDidSelectCellForRow(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x301DD88]
// Nekki.SF2.GUI.Profile.ItemsController$$TableViewDidSelectCellForRow @ RVA 0x301DD88

void Nekki_SF2_GUI_Profile_ItemsController__TableViewDidSelectCellForRow
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
               Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,HAJDGFPLGNK,0.3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ProfileCell GetPrevCell(ProfileCell AHICPBEJIKJ)  [RVA 0x301D52C]
// Nekki.SF2.GUI.Profile.ItemsController$$GetPrevCell @ RVA 0x301D52C

Nekki_SF2_GUI_Profile_ProfileCell_o *
Nekki_SF2_GUI_Profile_ItemsController__GetPrevCell
          (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
          Nekki_SF2_GUI_Profile_ProfileCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  int DPJIDNBJIBG;
  bool bVar2;
  Nekki_SF2_GUI_Profile_ProfileCell_o *pNVar3;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  
  if ((DAT_04565c28 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_04565c28 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pNVar3 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0;
  if (!bVar2) {
    if (AHICPBEJIKJ == (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) {
LAB_0311d618:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    DPJIDNBJIBG = (AHICPBEJIKJ->fields).super.FIMCNHGPCNA + -1;
    if (DPJIDNBJIBG < 0) {
      pNVar3 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0;
    }
    else {
      pNVar4 = (__this->fields)._TableView;
      if ((pNVar4 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_0311d618;
      pNVar3 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)
               KELJDKIIHMM__KHGEMIEPBJB(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
        if (((pNVar3->klass->_2).naturalAligment < bVar1) ||
           ((pNVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
  return pNVar3;
}


// ===== public virtual void Free()  [RVA 0x301DDB0]
// Nekki.SF2.GUI.Profile.ItemsController$$Free @ RVA 0x301DDB0

void Nekki_SF2_GUI_Profile_ItemsController__Free
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar1;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_00;
  
  if ((DAT_04565c29 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_RemoveListener__);
    DAT_04565c29 = 1;
    method = extraout_x1;
  }
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_00 = (pNVar1->fields).onSelectCell;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo,method);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                 Method_UnityEngine_Events_UnityEvent<TableViewCell>_RemoveListener__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ScrollToPrevCell(float GGMALJLKHHB = 0)  [RVA 0x301DE44]
// Nekki.SF2.GUI.Profile.ItemsController$$ScrollToPrevCell @ RVA 0x301DE44

bool Nekki_SF2_GUI_Profile_ItemsController__ScrollToPrevCell
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,float GGMALJLKHHB,MethodInfo *method
               )

{
  uint uVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_TableViewCell_o *x;
  
  if ((DAT_04565c2a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c2a = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._TableView;
  if (pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    x = (pNVar3->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pNVar3 = (__this->fields)._TableView;
      if (pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_0311deec;
      uVar1 = (__this->fields).AINAHFKFDKG - 1;
      Nekki_SF2_GUI_TableView__ScrollToCell
                (pNVar3,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),GGMALJLKHHB,(MethodInfo *)0x0);
    }
    return (bool)(~bVar2 & 1);
  }
LAB_0311deec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsBottomSubItemSelected()  [RVA 0x301DEF0]
// Nekki.SF2.GUI.Profile.ItemsController$$get_IsBottomSubItemSelected @ RVA 0x301DEF0

bool Nekki_SF2_GUI_Profile_ItemsController__get_IsBottomSubItemSelected
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  Nekki_SF2_GUI_TableViewCell_o *pNVar5;
  
  if ((DAT_04565c2b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c2b = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields)._TableView;
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    pNVar5 = (pNVar4->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      pNVar4 = (__this->fields)._TableView;
      if ((pNVar4 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (pNVar5 = (pNVar4->fields)._LDAHBFIIBJJ_k__BackingField,
         pNVar5 == (Nekki_SF2_GUI_TableViewCell_o *)0x0)) goto LAB_0311dfb0;
      iVar1 = (pNVar5->fields).FIMCNHGPCNA;
      iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
      if (iVar1 == iVar3 + -1) {
        return true;
      }
    }
    pNVar4 = (__this->fields)._TableView;
    if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      iVar1 = (__this->fields).AINAHFKFDKG;
      iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
      return iVar1 == iVar3 + -1;
    }
  }
LAB_0311dfb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual float SizeForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x301DFB4]
// Nekki.SF2.GUI.Profile.ItemsController$$SizeForRowInTableView @ RVA 0x301DFB4

float Nekki_SF2_GUI_Profile_ItemsController__SizeForRowInTableView
                (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
                Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  return 0.0;
}


// ===== protected void MBMAFJIBBAB()  [RVA 0x301DFBC]
// Nekki.SF2.GUI.Profile.ItemsController$$MBMAFJIBBAB @ RVA 0x301DFBC

void Nekki_SF2_GUI_Profile_ItemsController__MBMAFJIBBAB
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  int32_t JDEFJPHCNMM;
  int32_t iVar1;
  System_String_o *KGLJICLJHEL;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  MethodInfo *extraout_x1;
  GameUtils_ACENADIGHII_o *__this_00;
  
  if ((DAT_04565c2c & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04565c2c = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  __this_00 = GameUtils_TypeInfo->static_fields->HBBGCIHPDFG;
  KGLJICLJHEL = (System_String_o *)
                (*(__this->klass->vtable)._35_unknown.methodPtr)
                          (__this,(__this->klass->vtable)._35_unknown.method);
  if (__this_00 != (GameUtils_ACENADIGHII_o *)0x0) {
    JDEFJPHCNMM = GameUtils_ACENADIGHII__MHONHGBIHDO(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    if (JDEFJPHCNMM < 0) {
      return;
    }
    pNVar2 = (__this->fields)._TableView;
    if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar2,(MethodInfo *)0x0);
      if (iVar1 <= JDEFJPHCNMM) {
        return;
      }
      pNVar2 = (__this->fields)._TableView;
      if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        Nekki_SF2_GUI_TableView__ScrollToCell(pNVar2,JDEFJPHCNMM,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

