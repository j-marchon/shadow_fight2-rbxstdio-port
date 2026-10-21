// TypeDefIndex 2715
// Namespace: Nekki.SF2.GUI.Shop.Forge
// public class ForgePanel : MonoBehaviour, CPFMNHBNOEN, MLIIECFHJAM
// Fields:
//   private TableView _TableView; // 0x20
//   private GameObject _CellPrefab; // 0x28
//   private float _InactiveTableViewCellOpacity; // 0x30
//   private float _ActiveTableViewCellOpacity; // 0x34
//   private float _OpenX; // 0x38
//   private float DAJBPIAOPCC; // 0x3C
//   private float _MoveDuration; // 0x40
//   private float _ScrollDuration; // 0x44
//   private Vector2 _HintOffset; // 0x48
//   private GameObject _renderRoot; // 0x50
//   private ForgePanel.ANMGCDLFCAF _OnStateChange; // 0x58
//   private ForgePanel.HFEIKHEIFDE _OnRecipeSelected; // 0x60
//   private float LKOBHGOBICA; // 0x68
//   private HOOAAGABMBL PCBECBEFJOI; // 0x70
//   private List<GGLKHCAIGDI> OKIANCELJJF; // 0x78
//   private RecipeUI <LDAHBFIIBJJ>k__BackingField; // 0x80
//   private int GKDMJJCGFKD; // 0x88
//   private GGLKHCAIGDI DMAFCPPFLEN; // 0x90
//   private bool MALOHNFLOGO; // 0x98
//   private ForgePanel.AHMDMAAJAJN NBAADNACNDJ; // 0x9C
//   private Tween IDMFMIPALLP; // 0xA0
//   private bool LJCKJIAEIGD; // 0xA8

// ===== private float MNHNMCEFCNI()  [RVA 0x33DA93C]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$MNHNMCEFCNI @ RVA 0x33DA93C

float Nekki_SF2_GUI_Shop_Forge_ForgePanel__MNHNMCEFCNI
                (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  
  if ((DAT_04567e65 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    DAT_04567e65 = 1;
  }
  fVar1 = (__this->fields).LKOBHGOBICA;
  if (fVar1 == -1.0) {
    __this_00 = (__this->fields)._CellPrefab;
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_00,Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                              ), __this_01 == (UnityEngine_RectTransform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    fVar1 = UVar2.fields.y;
    (__this->fields).LKOBHGOBICA = fVar1;
  }
  return fVar1;
}


// ===== public float SizeForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x33DA9B4]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$SizeForRowInTableView @ RVA 0x33DA9B4

float Nekki_SF2_GUI_Shop_Forge_ForgePanel__SizeForRowInTableView
                (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,
                Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  
  if ((DAT_04567e65 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__,GECPJPBIBPN,
                 HAJDGFPLGNK);
    DAT_04567e65 = 1;
  }
  fVar1 = (__this->fields).LKOBHGOBICA;
  if (fVar1 == -1.0) {
    __this_00 = (__this->fields)._CellPrefab;
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_00,Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                              ), __this_01 == (UnityEngine_RectTransform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    fVar1 = UVar2.fields.y;
    (__this->fields).LKOBHGOBICA = fVar1;
  }
  return fVar1;
}


// ===== private int NMPMNEEHKEL(AMJMGFCCAKN NDLOGJOGFCA)  [RVA 0x33DA9B8]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$NMPMNEEHKEL @ RVA 0x33DA9B8

int32_t Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL
                  (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,AMJMGFCCAKN_o *NDLOGJOGFCA,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  if (NDLOGJOGFCA != (AMJMGFCCAKN_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL
                      (__this,(NDLOGJOGFCA->fields).PHAGOJCOMPN,method);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void TableViewDidHighlightCellForRow(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x33DAA54]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$TableViewDidHighlightCellForRow @ RVA 0x33DAA54

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__TableViewDidHighlightCellForRow
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN
               ,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  return;
}


// ===== public void Init()  [RVA 0x33DAA58]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$Init @ RVA 0x33DAA58

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__Init
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Events_UnityAction_o *call_00;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar2;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_01;
  UnityEngine_Events_UnityEvent_o *__this_02;
  UnityEngine_Vector3_o UVar3;
  
  if ((DAT_04567e66 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_ForgePanel_ILPJLGPGNMC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_ForgePanel_MPMDFILDNCJ__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
    DAT_04567e66 = 1;
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
          pNVar1 = (__this->fields)._TableView;
          if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
            pNVar2 = (pNVar1->fields).IDIMFLMKDMD;
            (pNVar1->fields)._MinScrollVelocity = 100.0;
            if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
              __this_02 = (pNVar2->fields).onDragBegin;
              call_00 = (UnityEngine_Events_UnityAction_o *)
                        thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_02,call_00,(MethodInfo *)0x0);
                __this_00 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                  UVar3 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
                  (__this->fields).DAJBPIAOPCC = UVar3.fields.x;
                  Util__IHPDCBOFHPA((__this->fields)._renderRoot,false,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RefreshPrice()  [RVA 0x33DABC8]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$RefreshPrice @ RVA 0x33DABC8

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__RefreshPrice
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this_00;
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  KELJDKIIHMM_o *pKVar4;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_c *pNVar5;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if ((DAT_04567e67 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_get_Current__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
                );
    DAT_04567e67 = 1;
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  pNVar3 = (__this->fields)._TableView;
  if ((((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
       (pKVar4 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField, pKVar4 == (KELJDKIIHMM_o *)0x0)) ||
      (__this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (pKVar4->fields)._IKBFEDMFOMJ_k__BackingField,
      __this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) ||
     (__this_02 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                            (__this_01,
                             Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__
                            ),
     __this_02 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
            (&local_38,__this_02,
             Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
            );
  while( true ) {
    bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                      );
    if (!bVar2) {
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                (&local_38,
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
                );
      return;
    }
    if ((Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)local_38.fields._currentValue ==
        (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0) break;
    pNVar5 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_c *)(local_38.fields._currentValue)->klass;
    bVar1 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo->_2).naturalAligment;
    if (((pNVar5->_2).naturalAligment < bVar1) ||
       ((pNVar5->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo)) break;
    __this_00 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)local_38.fields._currentValue;
    if ((pNVar5->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo) {
      __this_00 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0;
    }
    Nekki_SF2_GUI_Shop_Forge_RecipeUI__RefreshPrice(__this_00,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HOOAAGABMBL get_ItemInfo()  [RVA 0x33DAD8C]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$get_ItemInfo @ RVA 0x33DAD8C

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_ItemInfo
          (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  return (__this->fields).PCBECBEFJOI;
}


// ===== public TableView get_TableView()  [RVA 0x33DAD94]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$get_TableView @ RVA 0x33DAD94

Nekki_SF2_GUI_TableView_o *
Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_TableView
          (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._TableView;
}


// ===== public void set_CurrentRecipe(GGLKHCAIGDI CJNHFNHJHPE)  [RVA 0x33DAD9C]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$set_CurrentRecipe @ RVA 0x33DAD9C

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__set_CurrentRecipe
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,GGLKHCAIGDI_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  int32_t JDEFJPHCNMM;
  Nekki_SF2_GUI_TableView_o *__this_00;
  GGLKHCAIGDI_o **ppGVar2;
  
  if ((DAT_04567e6e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__);
    DAT_04567e6e = 1;
  }
  if (((__this->fields).NBAADNACNDJ == 0) &&
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).OKIANCELJJF,
                         Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__), !bVar1)) {
    ppGVar2 = &(__this->fields).DMAFCPPFLEN;
    *ppGVar2 = (GGLKHCAIGDI_o *)0x0;
    thunk_FUN_01c20e04(ppGVar2,0);
    JDEFJPHCNMM = Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL(__this,CJNHFNHJHPE,method);
    __this_00 = (__this->fields)._TableView;
    if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,0.0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppGVar2 = &(__this->fields).DMAFCPPFLEN;
  *ppGVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppGVar2,CJNHFNHJHPE);
  return;
}


// ===== public void Open()  [RVA 0x33DAE4C]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$Open @ RVA 0x33DAE4C

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__Open
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *pDVar1;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  DG_Tweening_Tween_o **ppDVar3;
  
  if ((DAT_04567e68 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_ForgePanel_DCHFNNCGPKO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_ForgePanel_ENMNHIMEELL__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnStart<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_04567e68 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_Forge_ForgePanel__ILAJJAGPCHI(__this,method);
  if ((__this->fields).LJCKJIAEIGD != false) {
    Nekki_SF2_GUI_Shop_Forge_ForgePanel__LPNCEHPFOAF(__this,method_00);
  }
  target = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  t = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                (target,(__this->fields)._OpenX,(__this->fields)._MoveDuration,false,
                 (MethodInfo *)0x0);
  pDVar1 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  t_00 = DG_Tweening_TweenSettingsExtensions__OnStart<object>
                   ((Il2CppObject *)t,pDVar1,
                    Method_DG_Tweening_TweenSettingsExtensions_OnStart<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                   );
  pDVar1 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  pDVar2 = (DG_Tweening_Tween_o *)
           DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                     (t_00,pDVar1,
                      Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                     );
  ppDVar3 = &(__this->fields).IDMFMIPALLP;
  *ppDVar3 = pDVar2;
  thunk_FUN_01c20e04(ppDVar3);
  return;
}


// ===== public void TableViewDidSelectCellForRow(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x33DB214]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$TableViewDidSelectCellForRow @ RVA 0x33DB214

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__TableViewDidSelectCellForRow
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN
               ,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ScrollToCell
              (__this_00,HAJDGFPLGNK,(__this->fields)._ScrollDuration,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RecipeUI get_SelectedCell()  [RVA 0x33DB23C]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$get_SelectedCell @ RVA 0x33DB23C

Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *
Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_SelectedCell
          (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._LDAHBFIIBJJ_k__BackingField;
}


// ===== public ForgePanel.ANMGCDLFCAF get_OnStateChange()  [RVA 0x33DB244]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$get_OnStateChange @ RVA 0x33DB244

Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *
Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_OnStateChange
          (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnStateChange;
}


// ===== public void Close()  [RVA 0x33DB24C]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$Close @ RVA 0x33DB24C

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__Close
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *pDVar1;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *extraout_x1;
  DG_Tweening_Tween_o **ppDVar3;
  
  if ((DAT_04567e69 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_ForgePanel_KPEGHFBDKDG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_ForgePanel_PEMOCAODJBA__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnStart<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_04567e69 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_Forge_ForgePanel__ILAJJAGPCHI(__this,method);
  target = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  t = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                (target,(__this->fields).DAJBPIAOPCC,(__this->fields)._MoveDuration,false,
                 (MethodInfo *)0x0);
  pDVar1 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  t_00 = DG_Tweening_TweenSettingsExtensions__OnStart<object>
                   ((Il2CppObject *)t,pDVar1,
                    Method_DG_Tweening_TweenSettingsExtensions_OnStart<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                   );
  pDVar1 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  pDVar2 = (DG_Tweening_Tween_o *)
           DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                     (t_00,pDVar1,
                      Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                     );
  ppDVar3 = &(__this->fields).IDMFMIPALLP;
  *ppDVar3 = pDVar2;
  thunk_FUN_01c20e04(ppDVar3);
  return;
}


// ===== public void TableViewDoubleClickCellForRow(TableView HDFMPLDOEJG, int JDEFJPHCNMM)  [RVA 0x33DB384]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$TableViewDoubleClickCellForRow @ RVA 0x33DB384

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__TableViewDoubleClickCellForRow
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG
               ,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  return;
}


// ===== private void ENMNHIMEELL()  [RVA 0x33DB388]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$ENMNHIMEELL @ RVA 0x33DB388

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__ENMNHIMEELL
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t JDEFJPHCNMM;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_01;
  GGLKHCAIGDI_o *NDLOGJOGFCA;
  MethodInfo *in_x2;
  GGLKHCAIGDI_o **ppGVar2;
  
  if ((DAT_04567e6a & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    DAT_04567e6a = 1;
  }
  (__this->fields).NBAADNACNDJ = 0;
  if (((__this->fields).MALOHNFLOGO == false) &&
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).OKIANCELJJF,
                         Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__), !bVar1)) {
    ppGVar2 = &(__this->fields).DMAFCPPFLEN;
    NDLOGJOGFCA = *ppGVar2;
    JDEFJPHCNMM = 0;
    if (NDLOGJOGFCA != (GGLKHCAIGDI_o *)0x0) {
      JDEFJPHCNMM = Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL(__this,NDLOGJOGFCA,in_x2);
    }
    __this_00 = (__this->fields)._TableView;
    if (__this_00 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_034db454;
    Nekki_SF2_GUI_TableView__ScrollToCell
              (__this_00,JDEFJPHCNMM,(__this->fields)._ScrollDuration,(MethodInfo *)0x0);
    (__this->fields).DMAFCPPFLEN = (GGLKHCAIGDI_o *)0x0;
    thunk_FUN_01c20e04(ppGVar2,0);
  }
  __this_01 = (__this->fields)._OnStateChange;
  if (__this_01 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(__this->fields).NBAADNACNDJ,
               Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    Util__IHPDCBOFHPA((__this->fields)._renderRoot,true,(MethodInfo *)0x0);
    return;
  }
LAB_034db454:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KPEGHFBDKDG()  [RVA 0x33DB458]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$KPEGHFBDKDG @ RVA 0x33DB458

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__KPEGHFBDKDG
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e6b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    DAT_04567e6b = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._OnStateChange;
  (__this->fields).NBAADNACNDJ = 3;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,3,
               Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    Util__IHPDCBOFHPA((__this->fields)._renderRoot,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public ForgePanel.HFEIKHEIFDE get_OnRecipeSelected()  [RVA 0x33DB4C4]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$get_OnRecipeSelected @ RVA 0x33DB4C4

Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *
Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_OnRecipeSelected
          (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnRecipeSelected;
}


// ===== public void .ctor()  [RVA 0x33DB4CC]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$.ctor @ RVA 0x33DB4CC

void Nekki_SF2_GUI_Shop_Forge_ForgePanel___ctor
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_00;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o **ppNVar1;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *__this_01;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o **ppNVar2;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_02;
  System_Collections_Generic_List_GGLKHCAIGDI__o **ppSVar3;
  MethodInfo *extraout_x1;
  undefined1 auVar4 [16];
  
  if ((DAT_04567e6c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
    DAT_04567e6c = 1;
    method = extraout_x1;
  }
  (__this->fields)._OpenX = -2036.0;
  (__this->fields)._InactiveTableViewCellOpacity = 0.5;
  (__this->fields)._ActiveTableViewCellOpacity = 1.0;
  (__this->fields)._MoveDuration = 1.0;
  (__this->fields)._ScrollDuration = 0.5;
  (__this->fields)._HintOffset.fields = (UnityEngine_Vector2_Fields)0x0;
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_TypeInfo,method);
  __this_00 = auVar4._0_8_;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF___ctor(__this_00,auVar4._8_8_);
  ppNVar1 = &(__this->fields)._OnStateChange;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_TypeInfo);
  __this_01 = auVar4._0_8_;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE___ctor(__this_01,auVar4._8_8_);
  ppNVar2 = &(__this->fields)._OnRecipeSelected;
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  (__this->fields).LKOBHGOBICA = -1.0;
  __this_02 = (System_Collections_Generic_List_GGLKHCAIGDI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
  ppSVar3 = &(__this->fields).OKIANCELJJF;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  (__this->fields).NBAADNACNDJ = 2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void set_ItemInfo(HOOAAGABMBL CJNHFNHJHPE)  [RVA 0x33DB68C]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$set_ItemInfo @ RVA 0x33DB68C

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__set_ItemInfo
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  HOOAAGABMBL_o **ppHVar1;
  
  ppHVar1 = &(__this->fields).PCBECBEFJOI;
  *ppHVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppHVar1);
  if (((__this->fields).DMAFCPPFLEN == (GGLKHCAIGDI_o *)0x0) &&
     (((__this->fields).NBAADNACNDJ & 0xfffffffeU) == 2)) {
    (__this->fields).LJCKJIAEIGD = true;
    return;
  }
  Nekki_SF2_GUI_Shop_Forge_ForgePanel__LPNCEHPFOAF(__this,method_00);
  return;
}


// ===== private void PEMOCAODJBA()  [RVA 0x33DB70C]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$PEMOCAODJBA @ RVA 0x33DB70C

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__PEMOCAODJBA
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e6d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    DAT_04567e6d = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_Forge_ForgePanel__ILAJJAGPCHI(__this,method);
  __this_00 = (__this->fields)._OnStateChange;
  (__this->fields).NBAADNACNDJ = 2;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,2,
               Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    Util__IHPDCBOFHPA((__this->fields)._renderRoot,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NeedToRefresh()  [RVA 0x33DB6E4]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$NeedToRefresh @ RVA 0x33DB6E4

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__NeedToRefresh
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  if (((__this->fields).DMAFCPPFLEN == (GGLKHCAIGDI_o *)0x0) &&
     (((__this->fields).NBAADNACNDJ & 0xfffffffeU) == 2)) {
    (__this->fields).LJCKJIAEIGD = true;
    return;
  }
  Nekki_SF2_GUI_Shop_Forge_ForgePanel__LPNCEHPFOAF(__this,method);
  return;
}


// ===== public void ScrollToRecipe(GGLKHCAIGDI NDLOGJOGFCA)  [RVA 0x33DADA0]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$ScrollToRecipe @ RVA 0x33DADA0

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__ScrollToRecipe
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,
               MethodInfo *method)

{
  bool bVar1;
  int32_t JDEFJPHCNMM;
  Nekki_SF2_GUI_TableView_o *__this_00;
  GGLKHCAIGDI_o **ppGVar2;
  
  if ((DAT_04567e6e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__);
    DAT_04567e6e = 1;
  }
  if (((__this->fields).NBAADNACNDJ == 0) &&
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).OKIANCELJJF,
                         Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__), !bVar1)) {
    ppGVar2 = &(__this->fields).DMAFCPPFLEN;
    *ppGVar2 = (GGLKHCAIGDI_o *)0x0;
    thunk_FUN_01c20e04(ppGVar2,0);
    JDEFJPHCNMM = Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL(__this,NDLOGJOGFCA,method);
    __this_00 = (__this->fields)._TableView;
    if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,0.0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppGVar2 = &(__this->fields).DMAFCPPFLEN;
  *ppGVar2 = NDLOGJOGFCA;
  thunk_FUN_01c20e04(ppGVar2,NDLOGJOGFCA);
  return;
}


// ===== private void OnDestroy()  [RVA 0x33DB780]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$OnDestroy @ RVA 0x33DB780

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__OnDestroy
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).IDMFMIPALLP;
  if (*ppDVar1 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar1,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== public GGLKHCAIGDI get_CurrentRecipe()  [RVA 0x33DB784]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$get_CurrentRecipe @ RVA 0x33DB784

GGLKHCAIGDI_o *
Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
          (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  GGLKHCAIGDI_o *pGVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *pNVar3;
  
  if ((DAT_04567e6f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567e6f = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 034db7cc to 035db973 has its CatchHandler @ 034db7cc
                       catch() { ... } // from try @ 034db7cc with catch @ 034db7cc
                       catch() { ... } // from try @ 034dba54 with catch @ 034db7cc
                       catch() { ... } // from try @ 034dba7c with catch @ 034db7cc
                       catch() { ... } // from try @ 034dbb80 with catch @ 034db7cc
                       catch() { ... } // from try @ 034dbbc0 with catch @ 034db7cc
                       catch() { ... } // from try @ 034dbc04 with catch @ 034db7cc */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar2 = (GGLKHCAIGDI_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar2 = (pNVar3->fields).PHAGOJCOMPN;
  }
  return pGVar2;
}


// ===== private void ILAJJAGPCHI()  [RVA 0x33DAF98]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$ILAJJAGPCHI @ RVA 0x33DAF98

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__ILAJJAGPCHI
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).IDMFMIPALLP;
  if (*ppDVar1 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar1,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== private void ILPJLGPGNMC(TableViewCell AHICPBEJIKJ)  [RVA 0x33DB804]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$ILPJLGPGNMC @ RVA 0x33DB804

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__ILPJLGPGNMC
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,
               Nekki_SF2_GUI_TableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *__this_00;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o **ppNVar3;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *pNVar4;
  
  if ((DAT_04567e70 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<GGLKHCAIGDI>_Invoke__);
    DAT_04567e70 = 1;
  }
  ppNVar3 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
  pNVar4 = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar4 = *ppNVar3;
    if (pNVar4 == (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0) goto LAB_034db968;
    (*(pNVar4->klass->vtable)._12_set_Opacity.methodPtr)
              ((__this->fields)._InactiveTableViewCellOpacity,pNVar4,
               (pNVar4->klass->vtable)._12_set_Opacity.method);
  }
  if (AHICPBEJIKJ == (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
LAB_034db8c0:
    AHICPBEJIKJ = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo->_2).naturalAligment;
    if ((AHICPBEJIKJ->klass->_2).naturalAligment < bVar1) goto LAB_034db8c0;
    if ((AHICPBEJIKJ->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo) {
      AHICPBEJIKJ = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
    }
  }
  *ppNVar3 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)AHICPBEJIKJ;
  thunk_FUN_01c20e04(ppNVar3);
  pNVar4 = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pNVar4 = *ppNVar3;
  if (pNVar4 != (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0) {
    (*(pNVar4->klass->vtable)._12_set_Opacity.methodPtr)
              ((__this->fields)._ActiveTableViewCellOpacity,pNVar4,
               (pNVar4->klass->vtable)._12_set_Opacity.method);
    pNVar4 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((pNVar4 != (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0) &&
       (__this_00 = (__this->fields)._OnRecipeSelected,
       __this_00 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *)0x0)) {
      UnityEngine_Events_UnityEvent<object>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
                 (Il2CppObject *)(pNVar4->fields).PHAGOJCOMPN,
                 Method_UnityEngine_Events_UnityEvent<GGLKHCAIGDI>_Invoke__);
      return;
    }
  }
LAB_034db968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int NumberOfRowsInTableView(TableView GECPJPBIBPN)  [RVA 0x33DB96C]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$NumberOfRowsInTableView @ RVA 0x33DB96C

int32_t Nekki_SF2_GUI_Shop_Forge_ForgePanel__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_GGLKHCAIGDI__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
                    /* try { // try from 034db974 to 035db97b has its CatchHandler @ 034dbbac */
  if ((DAT_04567e71 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_get_Count__);
                    /* try { // try from 034db994 to 035db99b has its CatchHandler @ 034dbb98 */
    DAT_04567e71 = 1;
  }
  pSVar1 = (__this->fields).OKIANCELJJF;
  if (pSVar1 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034db9b0 to 035db9b7 has its CatchHandler @ 034dba68 */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private void ELHKJOJNCGC(RecipeUI CJNHFNHJHPE)  [RVA 0x33DB9B4]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$ELHKJOJNCGC @ RVA 0x33DB9B4

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__ELHKJOJNCGC
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,
               Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LDAHBFIIBJJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public TableViewCell CellForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x33DB9BC]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$CellForRowInTableView @ RVA 0x33DB9BC

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Shop_Forge_ForgePanel__CellForRowInTableView
          (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_00;
  GGLKHCAIGDI_o *NDLOGJOGFCA;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *ANMFBABEMFD;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this_02;
  Roster_o *pAVar1;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_c *pNVar2;
  
                    /* try { // try from 034db9cc to 035db9d7 has its CatchHandler @ 034dba64 */
  if ((DAT_04567e72 & 1) == 0) {
                    /* try { // try from 034db9ec to 035db9ef has its CatchHandler @ 034dba58 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 034db9f0 to 035db9ff has its CatchHandler @ 034dba5c */
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<RecipeUI>__);
    FUN_01bab630(&StringLiteral_6549/*"ForgePanel::CellForRowInTableView: recipe or userItem is null"*/);
                    /* try { // try from 034dba20 to 035dba27 has its CatchHandler @ 034dbba4 */
    DAT_04567e72 = 1;
  }
  __this_00 = (__this->fields).OKIANCELJJF;
  if (__this_00 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* try { // try from 034dba40 to 035dba4b has its CatchHandler @ 034dbb90 */
    NDLOGJOGFCA = (GGLKHCAIGDI_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,HAJDGFPLGNK,
                             Method_System_Collections_Generic_List<GGLKHCAIGDI>_get_Item__);
                    /* try { // try from 034dba50 to 035dba53 has its CatchHandler @ 034dba60 */
                    /* try { // try from 034dba54 to 035dba77 has its CatchHandler @ 034db7cc */
                    /* catch() { ... } // from try @ 034db9ec with catch @ 034dba58 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034db9f0 with catch @ 034dba5c */
                    /* catch() { ... } // from try @ 034dba50 with catch @ 034dba60 */
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
                    /* catch() { ... } // from try @ 034db9cc with catch @ 034dba64 */
                    /* catch() { ... } // from try @ 034db9b0 with catch @ 034dba68 */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 034dba78 to 035dba7b has its CatchHandler @ 034dbb84 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 034dba7c to 035dbb53 has its CatchHandler @ 034db7cc */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar1 != (Roster_o *)0x0) &&
       (__this_01 = (pAVar1->fields).OIDPLCLELEN, __this_01 != (GGHCLMEFIGO_o *)0x0)) {
      ANMFBABEMFD = GGHCLMEFIGO__JNFIBDBHNOA
                              (__this_01,(__this->fields).PCBECBEFJOI,(MethodInfo *)0x0);
      if ((NDLOGJOGFCA == (GGLKHCAIGDI_o *)0x0) || (ANMFBABEMFD == (IGFGDDANEPE_o *)0x0)) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_6549/*"ForgePanel::CellForRowInTableView: recipe or userItem is null"*/,(MethodInfo *)0x0);
        __this_02 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0;
      }
      else {
        if ((GECPJPBIBPN == (Nekki_SF2_GUI_TableView_o *)0x0) ||
           (__this_02 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)
                        Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                                  (GECPJPBIBPN,HAJDGFPLGNK,
                                   Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<RecipeUI>__),
           __this_02 == (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0)) goto LAB_034dbb60;
        pNVar2 = __this_02->klass;
        (__this_02->fields).MKEPHECGCNP.fields = (__this->fields)._HintOffset.fields;
        (*(pNVar2->vtable)._12_set_Opacity.methodPtr)
                  ((ulong)(uint)(__this->fields)._InactiveTableViewCellOpacity,__this_02,
                   (pNVar2->vtable)._12_set_Opacity.method);
        Nekki_SF2_GUI_Shop_Forge_RecipeUI__Refresh
                  (__this_02,NDLOGJOGFCA,ANMFBABEMFD,(MethodInfo *)0x0);
      }
                    /* try { // try from 034dbb54 to 035dbb6f has its CatchHandler @ 034dbc18 */
      return (Nekki_SF2_GUI_TableViewCell_o *)__this_02;
    }
  }
LAB_034dbb60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ForgePanel.AHMDMAAJAJN get_PanelState()  [RVA 0x33DBB64]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$get_PanelState @ RVA 0x33DBB64

int32_t Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_PanelState
                  (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  return (__this->fields).NBAADNACNDJ;
}


// ===== private void LPNCEHPFOAF()  [RVA 0x33DAFD0]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$LPNCEHPFOAF @ RVA 0x33DAFD0

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__LPNCEHPFOAF
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *__this_02;
  DEKKGJNMFEB_o *__this_03;
  System_Collections_Generic_List_GGLKHCAIGDI__o *pSVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Roster_o *pAVar5;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar6;
  AMJMGFCCAKN_o *__this_04;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o **ppNVar7;
  System_Collections_Generic_List_GGLKHCAIGDI__o **ppSVar8;
  GGLKHCAIGDI_o **ppGVar9;
  
  if ((DAT_04567e73 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_Clear__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<GGLKHCAIGDI>_Invoke__);
    DAT_04567e73 = 1;
    method = extraout_x1;
  }
  (__this->fields).LJCKJIAEIGD = false;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar5 != (Roster_o *)0x0) &&
     (__this_00 = (pAVar5->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(__this->fields).PCBECBEFJOI,(MethodInfo *)0x0);
    if ((__this_01 == (IGFGDDANEPE_o *)0x0) ||
       (iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_01,(MethodInfo *)0x0), iVar2 < 1)) {
      pSVar3 = (__this->fields).OKIANCELJJF;
      if (pSVar3 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
        iVar2 = (pSVar3->fields)._size;
        (pSVar3->fields)._size = 0;
        (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        ppNVar7 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
        *ppNVar7 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0;
        thunk_FUN_01c20e04(ppNVar7,0);
        pNVar4 = (__this->fields)._TableView;
        (__this->fields).MALOHNFLOGO = false;
        if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
          Nekki_SF2_GUI_TableView__ReloadData(pNVar4,(MethodInfo *)0x0);
          __this_02 = (__this->fields)._OnRecipeSelected;
          if (__this_02 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *)0x0) {
            UnityEngine_Events_UnityEvent<object>__Invoke
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,(Il2CppObject *)0x0,
                       Method_UnityEngine_Events_UnityEvent<GGLKHCAIGDI>_Invoke__);
            return;
          }
        }
      }
    }
    else {
      __this_04 = (__this_01->fields).HJLEJIJKJKD;
      if (__this_04 == (AMJMGFCCAKN_o *)0x0) {
        bVar1 = false;
      }
      else {
        bVar1 = AMJMGFCCAKN__FLMFEBPHFIP(__this_04,(MethodInfo *)0x0);
      }
      (__this->fields).MALOHNFLOGO = bVar1;
      if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_03 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_03 != (DEKKGJNMFEB_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pSVar3 = DEKKGJNMFEB__NFKLPHNDMNO(__this_03,__this_01,(MethodInfo *)0x0);
        ppSVar8 = &(__this->fields).OKIANCELJJF;
        *ppSVar8 = pSVar3;
        thunk_FUN_01c20e04(ppSVar8);
        pNVar4 = (__this->fields)._TableView;
        if ((pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
           (pNVar6 = (pNVar4->fields).IDIMFLMKDMD, pNVar6 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)
           ) {
          (pNVar6->fields).super.field_0x111 = (__this->fields).MALOHNFLOGO ^ 1;
          Nekki_SF2_GUI_TableView__ReloadData(pNVar4,(MethodInfo *)0x0);
          if ((__this->fields).MALOHNFLOGO == false) {
            return;
          }
          ppGVar9 = &(__this->fields).DMAFCPPFLEN;
          *ppGVar9 = (GGLKHCAIGDI_o *)0x0;
          thunk_FUN_01c20e04(ppGVar9,0);
          pNVar4 = (__this->fields)._TableView;
          if (__this_04 == (AMJMGFCCAKN_o *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL
                              (__this,(__this_04->fields).PHAGOJCOMPN,method_00);
          }
          if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
            Nekki_SF2_GUI_TableView__ScrollToCell(pNVar4,iVar2,0.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MPMDFILDNCJ()  [RVA 0x33DBB6C]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$MPMDFILDNCJ @ RVA 0x33DBB6C

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__MPMDFILDNCJ
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  CLMJPODNPKB_o *pCVar3;
  VirtualInvokeData *pVVar4;
  CLMJPODNPKB_c *pCVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* try { // try from 034dbb70 to 035dbb77 has its CatchHandler @ 034dbba8 */
                    /* try { // try from 034dbb78 to 035dbb7b has its CatchHandler @ 034dbba0 */
  if ((DAT_04567e74 & 1) == 0) {
                    /* try { // try from 034dbb7c to 035dbb7f has its CatchHandler @ 034dbb9c */
                    /* try { // try from 034dbb80 to 035dbbbb has its CatchHandler @ 034db7cc */
                    /* catch() { ... } // from try @ 034dba78 with catch @ 034dbb84 */
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    DAT_04567e74 = 1;
  }
                    /* catch() { ... } // from try @ 034dba40 with catch @ 034dbb90 */
  bVar2 = Nekki_SF2_GUI_Common_HintCanvas__IsInstanceExists((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034db994 with catch @ 034dbb98 */
  if (!bVar2) {
    return;
  }
                    /* catch() { ... } // from try @ 034dbb7c with catch @ 034dbb9c */
                    /* catch() { ... } // from try @ 034dbb78 with catch @ 034dbba0 */
  pCVar3 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034dba20 with catch @ 034dbba4 */
  if (pCVar3 == (CLMJPODNPKB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034dbc1c to 035dbd3f has its CatchHandler @ 034dbc1c
                       catch() { ... } // from try @ 034dbc1c with catch @ 034dbc1c
                       catch() { ... } // from try @ 034dbe00 with catch @ 034dbc1c
                       catch() { ... } // from try @ 034dbeb8 with catch @ 034dbc1c
                       catch() { ... } // from try @ 034dbec0 with catch @ 034dbc1c
                       catch() { ... } // from try @ 034dbf74 with catch @ 034dbc1c */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 034dbb70 with catch @ 034dbba8 */
                    /* catch() { ... } // from try @ 034db974 with catch @ 034dbbac */
  pCVar5 = pCVar3->klass;
  uVar1._0_1_ = (pCVar5->_2).rank;
  uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
                    /* try { // try from 034dbbbc to 035dbbbf has its CatchHandler @ 034dbbec */
                    /* try { // try from 034dbbc0 to 035dbbfb has its CatchHandler @ 034db7cc */
  if (uVar6 != 0) {
    piVar7 = &((pCVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
                    /* try { // try from 034dbbfc to 035dbc03 has its CatchHandler @ 034dbc18 */
                    /* try { // try from 034dbc04 to 035dbc0f has its CatchHandler @ 034db7cc */
        pVVar4 = pCVar5->vtable + (*piVar7 + 2);
        goto LAB_034dbc0c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 034dbbbc with catch @ 034dbbec */
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pCVar3,CLMJPODNPKB_TypeInfo,2);
LAB_034dbc0c:
                    /* try { // try from 034dbc10 to 035dbc17 has its CatchHandler @ 034dbc18 */
                    /* WARNING: Could not recover jumptable at 0x034dbc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 034dbb54 with catch @ 034dbc18
                       catch() { ... } // from try @ 034dbbfc with catch @ 034dbc18
                       catch() { ... } // from try @ 034dbc10 with catch @ 034dbc18 */
  (*pVVar4->methodPtr)(pCVar3,pVVar4->method);
  return;
}


// ===== private int NMPMNEEHKEL(GGLKHCAIGDI NDLOGJOGFCA)  [RVA 0x33DA9D0]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$NMPMNEEHKEL @ RVA 0x33DA9D0

int32_t Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL
                  (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,
                  MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_GGLKHCAIGDI__o *pSVar2;
  
  if ((DAT_04567e75 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_get_Count__);
    DAT_04567e75 = 1;
  }
  pSVar2 = (__this->fields).OKIANCELJJF;
  if (pSVar2 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
    iVar1 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)pSVar2,
                       (Il2CppObject *)NDLOGJOGFCA,
                       Method_System_Collections_Generic_List<GGLKHCAIGDI>_IndexOf__);
    if (-1 < iVar1) {
      pSVar2 = (__this->fields).OKIANCELJJF;
      if (pSVar2 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) goto LAB_034daa50;
      if (iVar1 < (pSVar2->fields)._size) {
        return iVar1;
      }
    }
    return 0;
  }
LAB_034daa50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DCHFNNCGPKO()  [RVA 0x33DBC20]
// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$DCHFNNCGPKO @ RVA 0x33DBC20

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__DCHFNNCGPKO
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_01;
  GGLKHCAIGDI_o *NDLOGJOGFCA;
  MethodInfo *in_x2;
  System_Collections_Generic_List_GGLKHCAIGDI__o *pSVar4;
  int32_t JDEFJPHCNMM;
  
  if ((DAT_04567e76 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_PAODHPJCAPN<GGLKHCAIGDI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    DAT_04567e76 = 1;
  }
  (__this->fields).NBAADNACNDJ = 1;
  if (((__this->fields).MALOHNFLOGO == false) &&
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).OKIANCELJJF,
                         Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__), !bVar1)) {
    iVar2 = DJNBJHPDKDP__PAODHPJCAPN<object>
                      ((System_Collections_Generic_List_T__o *)(__this->fields).OKIANCELJJF,
                       Method_DJNBJHPDKDP_PAODHPJCAPN<GGLKHCAIGDI>__);
    NDLOGJOGFCA = (__this->fields).DMAFCPPFLEN;
    JDEFJPHCNMM = iVar2;
    if (NDLOGJOGFCA != (GGLKHCAIGDI_o *)0x0) {
      pSVar4 = (__this->fields).OKIANCELJJF;
      if (pSVar4 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) goto LAB_034dbd28;
      if (1 < (pSVar4->fields)._size) {
        iVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL(__this,NDLOGJOGFCA,in_x2);
        JDEFJPHCNMM = 0;
        if (iVar3 != iVar2) {
          JDEFJPHCNMM = iVar2;
        }
      }
    }
    __this_00 = (__this->fields)._TableView;
    if (__this_00 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_034dbd28;
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,0.0,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._OnStateChange;
  if (__this_01 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(__this->fields).NBAADNACNDJ,
               Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    Util__IHPDCBOFHPA((__this->fields)._renderRoot,true,(MethodInfo *)0x0);
    return;
  }
LAB_034dbd28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

