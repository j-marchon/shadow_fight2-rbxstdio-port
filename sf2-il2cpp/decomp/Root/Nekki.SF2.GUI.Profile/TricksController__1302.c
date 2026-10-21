// TypeDefIndex 1302
// Namespace: Nekki.SF2.GUI.Profile
// public class TricksController : ItemsController
// Fields:
//   private TricksController.PCJAFLKMKPF _OnCellSelected; // 0x40
//   private List<KCLPNDAPADO> GLNEIGKMPDC; // 0x48
//   private float PFDLJJBHELJ; // 0x50

// ===== protected override void EHPMHOHOPGA(TableViewCell AHICPBEJIKJ)  [RVA 0x3154D58]
// Nekki.SF2.GUI.Profile.TricksController$$EHPMHOHOPGA @ RVA 0x3154D58

void Nekki_SF2_GUI_Profile_TricksController__EHPMHOHOPGA
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,
               Nekki_SF2_GUI_TableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o *__this_00;
  Nekki_SF2_GUI_TableViewCell_c *pNVar4;
  
  if ((DAT_0456682d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ProfileCell>_Invoke__);
    DAT_0456682d = 1;
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
      if (__this_00 != (Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o *)0x0) {
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


// ===== public override bool ScrollToItem(string JEPIGCLHAMI, float GGMALJLKHHB = 0)  [RVA 0x3154E80]
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


// ===== public override void Init()  [RVA 0x3155094]
// Nekki.SF2.GUI.Profile.TricksController$$Init @ RVA 0x3155094

void Nekki_SF2_GUI_Profile_TricksController__Init
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ItemsController__Init
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Profile_ItemsController__MBMAFJIBBAB
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MarkItemsAsViewed()  [RVA 0x31550B4]
// Nekki.SF2.GUI.Profile.TricksController$$MarkItemsAsViewed @ RVA 0x31550B4

void Nekki_SF2_GUI_Profile_TricksController__MarkItemsAsViewed
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  ACHLOMELAJE_o *pAVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456682f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456682f = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this_00 = MGNPHCAAEIO__DCOFAPICGBA(10,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<KCLPNDAPADO>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
                    /* try { // try from 032551a0 to 033551c7 has its CatchHandler @ 03256734 */
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_MoveNext__);
      pIVar1 = local_60.fields._current;
      if (!bVar2) break;
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(char *)((long)&local_60.fields._current[3].klass + 4) != '\0') {
        *(undefined1 *)((long)&local_60.fields._current[3].klass + 4) = 0;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 032551fc to 03355227 has its CatchHandler @ 03256730 */
        if (pAVar3 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ACHLOMELAJE__JGGBOFPNLOK(pAVar3,pIVar1[1].monitor,true,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_Dispose__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03255264 to 0335526b has its CatchHandler @ 03256724 */
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 03255270 to 03355277 has its CatchHandler @ 03256728 */
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar3,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public TricksController.PCJAFLKMKPF get_OnCellSelected()  [RVA 0x3155320]
// Nekki.SF2.GUI.Profile.TricksController$$get_OnCellSelected @ RVA 0x3155320

Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o *
Nekki_SF2_GUI_Profile_TricksController__get_OnCellSelected
          (Nekki_SF2_GUI_Profile_TricksController_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnCellSelected;
}


// ===== protected override void BACIFGCANEA()  [RVA 0x3155328]
// Nekki.SF2.GUI.Profile.TricksController$$BACIFGCANEA @ RVA 0x3155328

void Nekki_SF2_GUI_Profile_TricksController__BACIFGCANEA
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KCLPNDAPADO__o *pSVar1;
  System_Comparison_KCLPNDAPADO__o **ppSVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_KCLPNDAPADO__o **ppSVar3;
  System_Comparison_KCLPNDAPADO__o *comparison;
  
  if ((DAT_04566830 & 1) == 0) {
    FUN_01bab630(&System_Comparison<KCLPNDAPADO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_Sort__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 03255370 to 0335537b has its CatchHandler @ 03256700 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_TricksController_<>c_NJPCGJIEJBP__);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_TricksController_<>c_TypeInfo);
                    /* try { // try from 0325538c to 03355393 has its CatchHandler @ 03256630 */
    DAT_04566830 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032553a4 to 033553ab has its CatchHandler @ 0325661c */
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
                    /* try { // try from 032553ac to 033553c7 has its CatchHandler @ 032566f0 */
  pSVar1 = MGNPHCAAEIO__DCOFAPICGBA(9,(MethodInfo *)0x0);
  ppSVar3 = &(__this->fields).GLNEIGKMPDC;
  *ppSVar3 = pSVar1;
  thunk_FUN_01c20e04(ppSVar3,pSVar1);
  pSVar1 = *ppSVar3;
  if ((Nekki_SF2_GUI_Profile_TricksController_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032553d4 to 033553db has its CatchHandler @ 03256624 */
    thunk_FUN_01ba7564();
  }
  comparison = Nekki_SF2_GUI_Profile_TricksController_<>c_TypeInfo->static_fields->__9__10_0;
  if (comparison == (System_Comparison_KCLPNDAPADO__o *)0x0) {
                    /* try { // try from 032553e8 to 033553eb has its CatchHandler @ 03256618 */
    if ((Nekki_SF2_GUI_Profile_TricksController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = (System_Comparison_KCLPNDAPADO__o *)
                 thunk_FUN_01bda818(System_Comparison<KCLPNDAPADO>_TypeInfo);
                    /* try { // try from 03255424 to 0335544b has its CatchHandler @ 03256150 */
    System_Comparison<object>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Profile_TricksController_<>c_TypeInfo->static_fields->__9__10_0;
    *ppSVar2 = comparison;
    thunk_FUN_01c20e04(ppSVar2,comparison);
  }
  if (pSVar1 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<KCLPNDAPADO>_Sort__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int ILAGLJIOOKB(string FPAECAOFJEL)  [RVA 0x3154FE0]
// Nekki.SF2.GUI.Profile.TricksController$$ILAGLJIOOKB @ RVA 0x3154FE0

int32_t Nekki_SF2_GUI_Profile_TricksController__ILAGLJIOOKB
                  (Nekki_SF2_GUI_Profile_TricksController_o *__this,System_String_o *FPAECAOFJEL,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
                    /* try { // try from 03254ff4 to 0335519f has its CatchHandler @ 03254ff4
                       catch() { ... } // from try @ 03254ff4 with catch @ 03254ff4
                       catch() { ... } // from try @ 032560d8 with catch @ 03254ff4
                       catch() { ... } // from try @ 032561dc with catch @ 03254ff4
                       catch() { ... } // from try @ 03256218 with catch @ 03254ff4
                       catch() { ... } // from try @ 03256254 with catch @ 03254ff4
                       catch() { ... } // from try @ 03256284 with catch @ 03254ff4
                       catch() { ... } // from try @ 032565a8 with catch @ 03254ff4
                       catch() { ... } // from try @ 032565dc with catch @ 03254ff4
                       catch() { ... } // from try @ 032567e4 with catch @ 03254ff4 */
  if ((DAT_04566831 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    DAT_04566831 = 1;
  }
  __this_00 = (__this->fields).GLNEIGKMPDC;
  if (__this_00 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return -1;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar2 = System_String__op_Equality(pIVar3[1].monitor,FPAECAOFJEL,(MethodInfo *)0x0);
      if (bVar2) {
        return index;
      }
      if (iVar1 + -1 == index) {
        return -1;
      }
      __this_00 = (__this->fields).GLNEIGKMPDC;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override float SizeForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x315546C]
// Nekki.SF2.GUI.Profile.TricksController$$SizeForRowInTableView @ RVA 0x315546C

float Nekki_SF2_GUI_Profile_TricksController__SizeForRowInTableView
                (Nekki_SF2_GUI_Profile_TricksController_o *__this,
                Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Rect_o UVar2;
  
                    /* try { // try from 03255480 to 033554ab has its CatchHandler @ 0325614c */
  if ((DAT_04566832 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo,GECPJPBIBPN,HAJDGFPLGNK);
    DAT_04566832 = 1;
  }
  fVar1 = (__this->fields).PFDLJJBHELJ;
  if (fVar1 <= 0.0) {
    __this_00 = (__this->fields).super._CellPrefab;
    if (((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
        (__this_01 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
        __this_01 == (UnityEngine_RectTransform_o *)0x0)) ||
       (__this_01->klass != UnityEngine_RectTransform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032554ec to 033554f3 has its CatchHandler @ 032560f0 */
      FUN_01bab8c8();
    }
    UVar2 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    fVar1 = UVar2.fields.m_Height;
    (__this->fields).PFDLJJBHELJ = fVar1;
  }
  return fVar1;
}


// ===== public override TableViewCell CellForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x31554F0]
// Nekki.SF2.GUI.Profile.TricksController$$CellForRowInTableView @ RVA 0x31554F0

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_TricksController__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_TricksController_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Profile_TrickCell_o *__this_01;
  KCLPNDAPADO_o *EKBENIDNAEE;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_02;
  
                    /* try { // try from 032554fc to 03355503 has its CatchHandler @ 032560f8 */
                    /* try { // try from 03255504 to 0335550f has its CatchHandler @ 032560f4 */
  if ((DAT_04566833 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
                    /* try { // try from 03255520 to 03355527 has its CatchHandler @ 03256108 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<TrickCell>__);
    DAT_04566833 = 1;
  }
  __this_00 = (__this->fields).super._TableView;
                    /* try { // try from 03255530 to 03355537 has its CatchHandler @ 032560ec */
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* try { // try from 03255538 to 03355543 has its CatchHandler @ 03256100 */
    __this_01 = (Nekki_SF2_GUI_Profile_TrickCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (__this_00,HAJDGFPLGNK,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<TrickCell>__);
    __this_02 = (__this->fields).GLNEIGKMPDC;
                    /* try { // try from 03255554 to 0335555b has its CatchHandler @ 03256104 */
                    /* try { // try from 03255564 to 0335556b has its CatchHandler @ 032560fc */
                    /* try { // try from 0325556c to 0335558f has its CatchHandler @ 032561b4 */
    if ((__this_02 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) &&
       (EKBENIDNAEE = (KCLPNDAPADO_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,HAJDGFPLGNK,
                                 Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__),
       __this_01 != (Nekki_SF2_GUI_Profile_TrickCell_o *)0x0)) {
      Nekki_SF2_GUI_Profile_TrickCell__Init
                (__this_01,EKBENIDNAEE,(JEIEEMKCNOJ_o *)__this,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_TableViewCell_o *)__this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ScrollToFirstOpenItem(float GGMALJLKHHB = 0)  [RVA 0x3155598]
// Nekki.SF2.GUI.Profile.TricksController$$ScrollToFirstOpenItem @ RVA 0x3155598

bool Nekki_SF2_GUI_Profile_TricksController__ScrollToFirstOpenItem
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,float GGMALJLKHHB,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *b;
  Nekki_SF2_GUI_TableView_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_KCLPNDAPADO__o *pSVar3;
  ACHLOMELAJE_o *pAVar4;
  int index;
  System_Collections_Generic_List_string__o *__this_01;
  int index_00;
  System_String_o *a;
  
                    /* try { // try from 032555c0 to 033555cb has its CatchHandler @ 032566e4 */
  if ((DAT_04566834 & 1) == 0) {
                    /* try { // try from 032555d0 to 033555f7 has its CatchHandler @ 032566ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03255608 to 03355613 has its CatchHandler @ 032566f8 */
    DAT_04566834 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 03255628 to 03355633 has its CatchHandler @ 032566e8 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03255648 to 03355653 has its CatchHandler @ 032566fc */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (pSVar3 = (__this->fields).GLNEIGKMPDC,
     pSVar3 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0)) {
                    /* try { // try from 03255668 to 03355673 has its CatchHandler @ 032566dc */
    __this_01 = (pAVar4->fields).MPBEGAIIEAC;
                    /* try { // try from 03255678 to 0335569f has its CatchHandler @ 032566d4 */
    index = 0;
    do {
      if ((pSVar3->fields)._size <= index) {
                    /* try { // try from 03255748 to 0335574f has its CatchHandler @ 03256648 */
        return false;
      }
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) break;
      if (0 < (__this_01->fields)._size) {
        index_00 = 0;
        do {
          pSVar3 = (__this->fields).GLNEIGKMPDC;
          if ((pSVar3 == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) ||
             (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                  Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__),
             pIVar2 == (Il2CppObject *)0x0)) goto LAB_03255750;
                    /* try { // try from 032556b8 to 0335572f has its CatchHandler @ 03256704 */
          a = pIVar2[1].monitor;
          b = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)__this_01,index_00,
                         Method_System_Collections_Generic_List<string>_get_Item__);
          bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
          if (bVar1) {
            if (index < 0) {
              return false;
            }
            pSVar3 = (__this->fields).GLNEIGKMPDC;
            if (pSVar3 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
              if ((pSVar3->fields)._size <= index) {
                return false;
              }
              __this_00 = (__this->fields).super._TableView;
              if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,index,GGMALJLKHHB,(MethodInfo *)0x0)
                ;
                return true;
              }
            }
            goto LAB_03255750;
          }
          index_00 = index_00 + 1;
        } while (index_00 < (__this_01->fields)._size);
      }
      pSVar3 = (__this->fields).GLNEIGKMPDC;
      index = index + 1;
    } while (pSVar3 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0);
  }
LAB_03255750:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3155754]
// Nekki.SF2.GUI.Profile.TricksController$$.ctor @ RVA 0x3155754

void Nekki_SF2_GUI_Profile_TricksController___ctor
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o *__this_00;
  Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o **ppNVar1;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_01;
  System_Collections_Generic_List_KCLPNDAPADO__o **ppSVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
                    /* try { // try from 03255760 to 03355767 has its CatchHandler @ 03256644 */
                    /* try { // try from 03255768 to 03355783 has its CatchHandler @ 03256708 */
  if ((DAT_04566835 & 1) == 0) {
                    /* try { // try from 03255790 to 03355797 has its CatchHandler @ 03256650 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KCLPNDAPADO>_TypeInfo);
                    /* try { // try from 032557a4 to 033557a7 has its CatchHandler @ 03256660 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_TypeInfo);
    DAT_04566835 = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_TypeInfo,method);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields)._OnCellSelected;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_KCLPNDAPADO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KCLPNDAPADO>_TypeInfo);
                    /* try { // try from 032557e0 to 03355807 has its CatchHandler @ 032561e8 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<KCLPNDAPADO>__ctor__);
  ppSVar2 = &(__this->fields).GLNEIGKMPDC;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_Profile_ItemsController___ctor
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string OHAHNMOBOOP()  [RVA 0x3155858]
// Nekki.SF2.GUI.Profile.TricksController$$OHAHNMOBOOP @ RVA 0x3155858

System_String_o *
Nekki_SF2_GUI_Profile_TricksController__OHAHNMOBOOP
          (Nekki_SF2_GUI_Profile_TricksController_o *__this,MethodInfo *method)

{
  if ((DAT_04566836 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11608/*"SKILLS_SLIDER"*/);
    DAT_04566836 = 1;
  }
  return StringLiteral_11608/*"SKILLS_SLIDER"*/;
}


// ===== public override int NumberOfRowsInTableView(TableView GECPJPBIBPN)  [RVA 0x3155898]
// Nekki.SF2.GUI.Profile.TricksController$$NumberOfRowsInTableView @ RVA 0x3155898

int32_t Nekki_SF2_GUI_Profile_TricksController__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_TricksController_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_KCLPNDAPADO__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
                    /* try { // try from 032558a8 to 033558af has its CatchHandler @ 03256120 */
  if ((DAT_04566837 & 1) == 0) {
                    /* try { // try from 032558b8 to 033558bf has its CatchHandler @ 03256128 */
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
                    /* try { // try from 032558c0 to 033558cb has its CatchHandler @ 03256124 */
    DAT_04566837 = 1;
  }
  pSVar1 = (__this->fields).GLNEIGKMPDC;
  if (pSVar1 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032558dc to 033558e3 has its CatchHandler @ 03256138 */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

