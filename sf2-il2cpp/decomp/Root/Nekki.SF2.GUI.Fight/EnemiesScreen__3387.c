// TypeDefIndex 3387
// Namespace: Nekki.SF2.GUI.Fight
// public class EnemiesScreen : MonoBehaviour
// Fields:
//   private Vector2 currentEnemyScale; // 0x20
//   private Vector2 bossScale; // 0x28
//   private Vector2 bossSize; // 0x30
//   private float enemyAlpha; // 0x38
//   private float timeEnemyPauseStart; // 0x3C
//   private float timeEnemyMove; // 0x40
//   private float timeEnemyPause; // 0x44
//   private float timeEnemyShade; // 0x48
//   private float timeEnemyPauseFinish; // 0x4C
//   private GameObject displayModelPrefab; // 0x50
//   private RectTransform enemiesPanel; // 0x58
//   private HorizontalLayoutGroup layoutGroup; // 0x60
//   private LabelAlias _LoaderHint; // 0x68
//   private float ACFFOAPPNBD; // 0x70
//   private List<DisplayModel> HNEBEKIBNNG; // 0x78
//   private bool <BOGAKJOFOEK>k__BackingField; // 0x80

// ===== private void OnDestroy()  [RVA 0x354262C]
// Nekki.SF2.GUI.Fight.EnemiesScreen$$OnDestroy @ RVA 0x354262C

void Nekki_SF2_GUI_Fight_EnemiesScreen__OnDestroy
               (Nekki_SF2_GUI_Fight_EnemiesScreen_o *__this,MethodInfo *method)

{
  (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
  return;
}


// ===== public void .ctor()  [RVA 0x3542638]
// Nekki.SF2.GUI.Fight.EnemiesScreen$$.ctor @ RVA 0x3542638

void Nekki_SF2_GUI_Fight_EnemiesScreen___ctor
               (Nekki_SF2_GUI_Fight_EnemiesScreen_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DisplayModel__o *__this_00;
  System_Collections_Generic_List_DisplayModel__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b06 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DisplayModel>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DisplayModel>_TypeInfo);
    DAT_04568b06 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_DisplayModel__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DisplayModel>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<DisplayModel>__ctor__);
  ppSVar1 = &(__this->fields).HNEBEKIBNNG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(List<PJKHAJKEHEL> DFGLEOANOFI, int DPJIDNBJIBG, bool CGMFGFBHMHK, string CNGMCOBNAGO = "")  [RVA 0x35426C0]
// Nekki.SF2.GUI.Fight.EnemiesScreen$$Init @ RVA 0x35426C0

void Nekki_SF2_GUI_Fight_EnemiesScreen__Init
               (Nekki_SF2_GUI_Fight_EnemiesScreen_o *__this,
               System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,int32_t DPJIDNBJIBG,
               bool CGMFGFBHMHK,System_String_o *CNGMCOBNAGO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *pUVar5;
  Nekki_SF2_GUI_Fight_DisplayModel_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_List_DisplayModel__o *pSVar7;
  UnityEngine_Component_o *pUVar8;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar9;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar10;
  undefined8 *puVar11;
  Nekki_SF2_GUI_Fight_DisplayModel_array *pNVar12;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar13;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar14;
  Nekki_SF2_GUI_LabelAlias_o *pNVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Rect_o UVar19;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  if ((DAT_04568b07 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DisplayModel>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DisplayModel>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DisplayModel>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<DisplayModel>__);
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DisplayModel>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DisplayModel>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DisplayModel>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DisplayModel>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_5758/*"EnemiesScreen.Init layoutGroup is null"*/);
    FUN_01bab630(&StringLiteral_5756/*"EnemiesScreen.Init displayModelPrefab is null"*/);
    FUN_01bab630(&StringLiteral_15858/*"^{0}^"*/);
    FUN_01bab630(&StringLiteral_5757/*"EnemiesScreen.Init enemiesPanel is null"*/);
    DAT_04568b07 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  local_a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._current = (Il2CppObject *)0x0;
  x = (UnityEngine_Object_o *)(__this->fields).displayModelPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pIVar4 = StringLiteral_5756/*"EnemiesScreen.Init displayModelPrefab is null"*/;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pIVar4 = StringLiteral_5756/*"EnemiesScreen.Init displayModelPrefab is null"*/;
    }
  }
  else {
    pUVar13 = (__this->fields).enemiesPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar3) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      puVar11 = &StringLiteral_5757/*"EnemiesScreen.Init enemiesPanel is null"*/;
    }
    else {
      pUVar14 = (__this->fields).layoutGroup;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar3) {
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(CNGMCOBNAGO,(MethodInfo *)0x0);
        if (!bVar3) {
          pNVar15 = (__this->fields)._LoaderHint;
          CJNHFNHJHPE = System_String__Format
                                  (StringLiteral_15858/*"^{0}^"*/,(Il2CppObject *)CNGMCOBNAGO,(MethodInfo *)0x0
                                  );
          if (pNVar15 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03642e78;
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar15,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar15 = (__this->fields)._LoaderHint;
          if ((pNVar15 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
             (pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar15,(MethodInfo *)0x0),
             pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03642e78;
          UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
        }
        if (DFGLEOANOFI != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_c0,(System_Collections_Generic_List_object__o *)DFGLEOANOFI,
                     Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
          fVar17 = 0.0;
          iVar16 = 1;
          fVar18 = 0.0;
          local_90.fields._index = local_c0.fields._index;
          local_90.fields._version = local_c0.fields._version;
          local_90.fields._list = local_c0.fields._list;
          local_90.fields._current = local_c0.fields._current;
          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_90,
                                    Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__
                                   ), pIVar4 = local_90.fields._current, bVar3) {
            pUVar5 = (__this->fields).displayModelPrefab;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pUVar5 = (UnityEngine_GameObject_o *)
                     UnityEngine_Object__Instantiate<object>
                               ((Il2CppObject *)pUVar5,
                                Method_UnityEngine_Object_Instantiate<GameObject>__);
            if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_00 = (Nekki_SF2_GUI_Fight_DisplayModel_o *)
                        UnityEngine_GameObject__GetComponent<object>
                                  (pUVar5,Method_UnityEngine_GameObject_GetComponent<DisplayModel>__
                                  );
            if (__this_00 == (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar6 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            UnityEngine_Transform__SetParent
                      (pUVar6,(UnityEngine_Transform_o *)(__this->fields).enemiesPanel,false,
                       (MethodInfo *)0x0);
            if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            Nekki_SF2_GUI_Fight_DisplayModel__SetAvatar
                      (__this_00,pIVar4[0x19].monitor,(MethodInfo *)0x0);
            if (iVar16 + -1 < DPJIDNBJIBG) {
              Nekki_SF2_GUI_Fight_DisplayModel__Completed(__this_00,(MethodInfo *)0x0);
            }
            lVar2 = Method_System_Collections_Generic_List<DisplayModel>_Add__;
            pSVar7 = (__this->fields).HNEBEKIBNNG;
            if (pSVar7 == (System_Collections_Generic_List_DisplayModel__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar12 = (pSVar7->fields)._items;
            (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
            if (pNVar12 == (Nekki_SF2_GUI_Fight_DisplayModel_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar7->fields)._size;
            if (uVar1 < (uint)pNVar12->max_length) {
              (pSVar7->fields)._size = uVar1 + 1;
              pNVar12->m_Items[(int)uVar1] = __this_00;
              thunk_FUN_01c20e04(pNVar12->m_Items + (int)uVar1,__this_00);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar7,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pUVar13 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar13 == (UnityEngine_RectTransform_o *)0x0) {
              pUVar13 = (UnityEngine_RectTransform_o *)0x0;
            }
            else if (pUVar13->klass != UnityEngine_RectTransform_TypeInfo) {
              pUVar13 = (UnityEngine_RectTransform_o *)0x0;
            }
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar3) {
              if (pUVar13 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              UVar19 = UnityEngine_RectTransform__get_rect(pUVar13,(MethodInfo *)0x0);
              fVar17 = fVar17 + UVar19.fields.m_Width;
              UVar19 = UnityEngine_RectTransform__get_rect(pUVar13,(MethodInfo *)0x0);
              if (fVar18 < UVar19.fields.m_Height) {
                UVar19 = UnityEngine_RectTransform__get_rect(pUVar13,(MethodInfo *)0x0);
                fVar18 = UVar19.fields.m_Height;
              }
            }
            if ((iVar16 == (DFGLEOANOFI->fields)._size) && (CGMFGFBHMHK)) {
              Nekki_SF2_GUI_Fight_DisplayModel__ScaleAvatar
                        (__this_00,(UnityEngine_Vector2_o)(__this->fields).bossScale.fields,
                         (MethodInfo *)0x0);
              Nekki_SF2_GUI_Fight_DisplayModel__SetSizeDelta
                        (__this_00,(UnityEngine_Vector2_o)(__this->fields).bossSize.fields,
                         (MethodInfo *)0x0);
            }
            iVar16 = iVar16 + 1;
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
          pSVar7 = (__this->fields).HNEBEKIBNNG;
          if (pSVar7 != (System_Collections_Generic_List_DisplayModel__o *)0x0) {
            iVar16 = (pSVar7->fields)._size;
            if (1 < iVar16) {
              pUVar14 = (__this->fields).layoutGroup;
              if (pUVar14 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto LAB_03642e78;
              fVar17 = fVar17 + *(float *)&(pUVar14->fields).super.m_ChildScaleWidth *
                                (float)(iVar16 + -1);
            }
            pUVar13 = (__this->fields).enemiesPanel;
            if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
              value.fields.y = fVar18;
              value.fields.x = fVar17;
              UnityEngine_RectTransform__set_sizeDelta(pUVar13,value,(MethodInfo *)0x0);
              pUVar13 = (__this->fields).enemiesPanel;
              if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar13,(MethodInfo *)0x0)
              ;
              pSVar7 = (__this->fields).HNEBEKIBNNG;
              if (pSVar7 != (System_Collections_Generic_List_DisplayModel__o *)0x0) {
                fVar18 = 0.0;
                fVar17 = 0.0;
                if (DPJIDNBJIBG < (pSVar7->fields)._size) {
                  pUVar8 = (UnityEngine_Component_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar7,
                                      DPJIDNBJIBG,
                                      Method_System_Collections_Generic_List<DisplayModel>_get_Item__
                                     );
                  if ((pUVar8 == (UnityEngine_Component_o *)0x0) ||
                     (pUVar6 = UnityEngine_Component__get_transform(pUVar8,(MethodInfo *)0x0),
                     pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_03642e78;
                  UVar20 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                  pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03642e78;
                  UVar21 = UnityEngine_Transform__TransformPoint
                                     (pUVar6,(UnityEngine_Vector3_o)ZEXT412(0),(MethodInfo *)0x0);
                  pUVar13 = (__this->fields).enemiesPanel;
                  if (pUVar13 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03642e78;
                  UVar22 = UnityEngine_Transform__get_position
                                     ((UnityEngine_Transform_o *)pUVar13,(MethodInfo *)0x0);
                  fVar18 = (UVar21.fields.x - UVar20.fields.x) + UVar22.fields.x;
                  fVar17 = (UVar21.fields.y - UVar20.fields.y) + UVar22.fields.y;
                }
                if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                DG_Tweening_TweenSettingsExtensions__AppendInterval
                          (s,(__this->fields).timeEnemyPauseStart,(MethodInfo *)0x0);
                UVar20.fields.y = fVar17;
                UVar20.fields.x = fVar18;
                UVar20.fields.z = 0.0;
                pDVar9 = DG_Tweening_ShortcutExtensions__DOMove
                                   ((UnityEngine_Transform_o *)(__this->fields).enemiesPanel,UVar20,
                                    (__this->fields).timeEnemyMove,false,(MethodInfo *)0x0);
                DG_Tweening_TweenSettingsExtensions__Append
                          (s,(DG_Tweening_Tween_o *)pDVar9,(MethodInfo *)0x0);
                DG_Tweening_TweenSettingsExtensions__AppendInterval
                          (s,(__this->fields).timeEnemyPause,(MethodInfo *)0x0);
                pSVar7 = (__this->fields).HNEBEKIBNNG;
                if ((pSVar7 != (System_Collections_Generic_List_DisplayModel__o *)0x0) &&
                   (pUVar8 = (UnityEngine_Component_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar7,
                                        DPJIDNBJIBG,
                                        Method_System_Collections_Generic_List<DisplayModel>_get_Item__
                                       ), pUVar8 != (UnityEngine_Component_o *)0x0)) {
                  pUVar6 = UnityEngine_Component__get_transform(pUVar8,(MethodInfo *)0x0);
                  UVar21.fields.z = 0.0;
                  UVar21.fields._0_8_ = (__this->fields).currentEnemyScale.fields;
                  pDVar9 = DG_Tweening_ShortcutExtensions__DOScale
                                     (pUVar6,UVar21,(__this->fields).timeEnemyShade,
                                      (MethodInfo *)0x0);
                  DG_Tweening_TweenSettingsExtensions__Append
                            (s,(DG_Tweening_Tween_o *)pDVar9,(MethodInfo *)0x0);
                  pSVar7 = (__this->fields).HNEBEKIBNNG;
                  if (pSVar7 != (System_Collections_Generic_List_DisplayModel__o *)0x0) {
                    System_Collections_Generic_List<object>__GetEnumerator
                              (&local_a8,(System_Collections_Generic_List_object__o *)pSVar7,
                               Method_System_Collections_Generic_List<DisplayModel>_GetEnumerator__)
                    ;
                    do {
                      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                        (&local_a8,
                                         Method_System_Collections_Generic_List_Enumerator<DisplayModel>_MoveNext__
                                        );
                      pIVar4 = local_a8.fields._current;
                      if (!bVar3) {
                        System_Collections_Generic_List_Enumerator<object>__Dispose
                                  (&local_a8,
                                   Method_System_Collections_Generic_List_Enumerator<DisplayModel>_Dispose__
                                  );
                        DG_Tweening_TweenSettingsExtensions__AppendInterval
                                  (s,(__this->fields).timeEnemyPauseFinish,(MethodInfo *)0x0);
                        (__this->fields).ACFFOAPPNBD =
                             (__this->fields).timeEnemyPauseStart + (__this->fields).timeEnemyMove +
                             (__this->fields).timeEnemyPause + (__this->fields).timeEnemyShade +
                             (__this->fields).timeEnemyPauseFinish;
                        return;
                      }
                      if (DPJIDNBJIBG != 0) {
                        if (local_a8.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        pDVar10 = DG_Tweening_DOTweenModuleUI__DOFade
                                            ((UnityEngine_UI_Image_o *)
                                             local_a8.fields._current[2].klass,
                                             (__this->fields).enemyAlpha,
                                             (__this->fields).timeEnemyShade,(MethodInfo *)0x0);
                        DG_Tweening_TweenSettingsExtensions__Join
                                  (s,(DG_Tweening_Tween_o *)pDVar10,(MethodInfo *)0x0);
                        pDVar10 = DG_Tweening_DOTweenModuleUI__DOFade
                                            (pIVar4[2].monitor,(__this->fields).enemyAlpha,
                                             (__this->fields).timeEnemyShade,(MethodInfo *)0x0);
                        DG_Tweening_TweenSettingsExtensions__Join
                                  (s,(DG_Tweening_Tween_o *)pDVar10,(MethodInfo *)0x0);
                      }
                      DPJIDNBJIBG = DPJIDNBJIBG + -1;
                    } while( true );
                  }
                }
              }
            }
          }
        }
LAB_03642e78:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      puVar11 = &StringLiteral_5758/*"EnemiesScreen.Init layoutGroup is null"*/;
    }
    pIVar4 = (Il2CppObject *)*puVar11;
  }
  UnityEngine_Debug__LogError(pIVar4,(MethodInfo *)0x0);
  return;
}


// ===== public float get_AnimationTime()  [RVA 0x3542FC4]
// Nekki.SF2.GUI.Fight.EnemiesScreen$$get_AnimationTime @ RVA 0x3542FC4

float Nekki_SF2_GUI_Fight_EnemiesScreen__get_AnimationTime
                (Nekki_SF2_GUI_Fight_EnemiesScreen_o *__this,MethodInfo *method)

{
  return (__this->fields).ACFFOAPPNBD;
}


// ===== public bool get_IsDestroyed()  [RVA 0x3542FCC]
// Nekki.SF2.GUI.Fight.EnemiesScreen$$get_IsDestroyed @ RVA 0x3542FCC

bool Nekki_SF2_GUI_Fight_EnemiesScreen__get_IsDestroyed
               (Nekki_SF2_GUI_Fight_EnemiesScreen_o *__this,MethodInfo *method)

{
  return (__this->fields)._BOGAKJOFOEK_k__BackingField;
}


// ===== private void GCGMACNOCJA(bool CJNHFNHJHPE)  [RVA 0x3542FD4]
// Nekki.SF2.GUI.Fight.EnemiesScreen$$GCGMACNOCJA @ RVA 0x3542FD4

void Nekki_SF2_GUI_Fight_EnemiesScreen__GCGMACNOCJA
               (Nekki_SF2_GUI_Fight_EnemiesScreen_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BOGAKJOFOEK_k__BackingField = CJNHFNHJHPE;
  return;
}

