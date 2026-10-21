// TypeDefIndex 2549
// Namespace: Nekki.SF2.GUI.Dialogs
// public class LocalDailyDialog : BaseDialog
// Fields:
//   private GameObject _localDailyTaskCellPrefab; // 0xC8
//   private List<GameObject> _cellsPos; // 0xD0
//   private const int GCBCJBADCJI = 3;
//   private readonly List<LocalDailyTaskCell> CGNMDFAAHDA; // 0xD8

// ===== protected override void GKPJMHOFIOO()  [RVA 0x3398D94]
// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$GKPJMHOFIOO @ RVA 0x3398D94

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__GKPJMHOFIOO
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_LocalDailyDialog__UpdateCells(__this,method_00);
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x339904C]
// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$Init @ RVA 0x339904C

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog__Init
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  KEIAEKNFNNA_o *__this_00;
  
  if ((DAT_04567c65 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyDialog_UpdateCells__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567c65 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1/*""*/,StringLiteral_9679/*"OK"*/,
             StringLiteral_3640/*"CANCEL"*/,1,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    KEIAEKNFNNA__EMBJNCBLPNN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateCells()  [RVA 0x3398DB0]
// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$UpdateCells @ RVA 0x3398DB0

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog__UpdateCells
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  KEIAEKNFNNA_o *__this_00;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *source;
  Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *pNVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_LocalDailyTaskCell__o *pSVar5;
  System_Collections_Generic_List_GameObject__o *__this_02;
  Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_array *pNVar6;
  UnityEngine_GameObject_o *pUVar7;
  
  if ((DAT_04567c66 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<OPHDIHJPHDE>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<LocalDailyTaskCell>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LocalDailyTaskCell>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LocalDailyTaskCell>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LocalDailyTaskCell>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_8584/*"LocalDailyDialog::createQuestCells: failed, empty quests"*/);
    DAT_04567c66 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    source = KEIAEKNFNNA__CFGOMKKHOML(__this_00,(MethodInfo *)0x0);
    bVar3 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       Method_System_Linq_Enumerable_Any<OPHDIHJPHDE>__);
    if (!bVar3) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_8584/*"LocalDailyDialog::createQuestCells: failed, empty quests"*/,(MethodInfo *)0x0);
      return;
    }
    pSVar5 = (__this->fields).CGNMDFAAHDA;
    if (pSVar5 != (System_Collections_Generic_List_LocalDailyTaskCell__o *)0x0) {
      if ((pSVar5->fields)._size < 1) {
        pUVar7 = (__this->fields)._localDailyTaskCellPrefab;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pUVar7 = (UnityEngine_GameObject_o *)
                 UnityEngine_Object__Instantiate<object>
                           ((Il2CppObject *)pUVar7,
                            Method_UnityEngine_Object_Instantiate<GameObject>__);
        if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
           (pNVar4 = (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               (pUVar7,
                                Method_UnityEngine_GameObject_GetComponent<LocalDailyTaskCell>__),
           pNVar4 == (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *)0x0)) goto LAB_03499048;
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._cellsPos;
        if ((__this_02 == (System_Collections_Generic_List_GameObject__o *)0x0) ||
           ((pUVar7 = (UnityEngine_GameObject_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,1,
                                 Method_System_Collections_Generic_List<GameObject>_get_Item__),
            pUVar7 == (UnityEngine_GameObject_o *)0x0 ||
            (parent = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
            __this_01 == (UnityEngine_Transform_o *)0x0)))) goto LAB_03499048;
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<LocalDailyTaskCell>_Add__;
        pSVar5 = (__this->fields).CGNMDFAAHDA;
        if (pSVar5 == (System_Collections_Generic_List_LocalDailyTaskCell__o *)0x0)
        goto LAB_03499048;
        pNVar6 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pNVar6 == (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_array *)0x0) goto LAB_03499048;
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pNVar6->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pNVar6->m_Items[(int)uVar1] = pNVar4;
          thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,pNVar4);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pNVar4,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      pSVar5 = (__this->fields).CGNMDFAAHDA;
      if ((pSVar5 != (System_Collections_Generic_List_LocalDailyTaskCell__o *)0x0) &&
         (pNVar4 = (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,0,
                              Method_System_Collections_Generic_List<LocalDailyTaskCell>_get_Item__)
         , pNVar4 != (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *)0x0)) {
        Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__UpdateTaskCell(pNVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03499048:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x3399198]
// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$OnDestroy @ RVA 0x3399198

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  KEIAEKNFNNA_o *__this_00;
  
  if ((DAT_04567c67 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyDialog_UpdateCells__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c67 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    KEIAEKNFNNA__KGPAPPFJIDO(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x3399290]
// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$IGDDKJJMDLP @ RVA 0x3399290

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x3399294]
// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$.ctor @ RVA 0x3399294

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog___ctor
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_LocalDailyTaskCell__o *__this_00;
  System_Collections_Generic_List_LocalDailyTaskCell__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c68 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LocalDailyTaskCell>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LocalDailyTaskCell>_TypeInfo);
    DAT_04567c68 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_LocalDailyTaskCell__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LocalDailyTaskCell>_TypeInfo,method
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LocalDailyTaskCell>__ctor__);
  ppSVar1 = &(__this->fields).CGNMDFAAHDA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x339931C]
// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$EJHAPHAHMHG @ RVA 0x339931C

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_String_o *extraout_x1;
  
  if ((DAT_04567c69 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2424/*"<quad name=MiscSprites.ad_quests_icon offsety=8 color=#E0C090 /> ^DailyTitle^"*/);
    DAT_04567c69 = 1;
    EHNFGMGKCHO = extraout_x1;
  }
  __this_00 = (__this->fields).super._header;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,StringLiteral_2424/*"<quad name=MiscSprites.ad_quests_icon offsety=8 color=#E0C090 /> ^DailyTitle^"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,EHNFGMGKCHO);
}

